#ifndef _UAPI_LINUX_BYTEORDER_LITTLE_ENDIAN_H
#define _UAPI_LINUX_BYTEORDER_LITTLE_ENDIAN_H

#ifndef __LITTLE_ENDIAN
#define __LITTLE_ENDIAN 1234
#endif
#ifndef __LITTLE_ENDIAN_BITFIELD
#define __LITTLE_ENDIAN_BITFIELD
#endif

#include <linux/types.h>
#include <linux/swab.h>

#define __constant_htonl(x) ((__force __be32)___constant_swab32((x)))
#define __constant_ntohl(x) ___constant_swab32((__force __be32)(x))
#define __constant_htons(x) ((__force __be16)___constant_swab16((x)))
#define __constant_ntohs(x) ___constant_swab16((__force __be16)(x))
#define __constant_cpu_to_le64(x) ((__force __le64)(__u64)(x))
#define __constant_le64_to_cpu(x) ((__force __u64)(__le64)(x))
#define __constant_cpu_to_le32(x) ((__force __le32)(__u32)(x))
#define __constant_le32_to_cpu(x) ((__force __u32)(__le32)(x))
#define __constant_cpu_to_le16(x) ((__force __le16)(__u16)(x))
#define __constant_le16_to_cpu(x) ((__force __u16)(__le16)(x))
#define __constant_cpu_to_be64(x) ((__force __be64)___constant_swab64((x)))
#define __constant_be64_to_cpu(x) ___constant_swab64((__force __u64)(__be64)(x))
#define __constant_cpu_to_be32(x) ((__force __be32)___constant_swab32((x)))
#define __constant_be32_to_cpu(x) ___constant_swab32((__force __u32)(__be32)(x))
#define __constant_cpu_to_be16(x) ((__force __be16)___constant_swab16((x)))
#define __constant_be16_to_cpu(x) ___constant_swab16((__force __u16)(__be16)(x))
#define __cpu_to_le64(x) ((__force __le64)(__u64)(x))
#define __le64_to_cpu(x) ((__force __u64)(__le64)(x))
#define __cpu_to_le32(x) ((__force __le32)(__u32)(x))
#define __le32_to_cpu(x) ((__force __u32)(__le32)(x))
#define __cpu_to_le16(x) ((__force __le16)(__u16)(x))
#define __le16_to_cpu(x) ((__force __u16)(__le16)(x))
#define __cpu_to_be64(x) ((__force __be64)__swab64((x)))
#define __be64_to_cpu(x) __swab64((__force __u64)(__be64)(x))
#define __cpu_to_be32(x) ((__force __be32)__swab32((x)))
#define __be32_to_cpu(x) __swab32((__force __u32)(__be32)(x))
#define __cpu_to_be16(x) ((__force __be16)__swab16((x)))
#define __be16_to_cpu(x) __swab16((__force __u16)(__be16)(x))

static inline __le64 __cpu_to_le64p(const __u64 *p)
{
	return (__force __le64)*p;
}
static inline __u64 __le64_to_cpup(const __le64 *p)
{
	return (__force __u64)*p;
}
static inline __le32 __cpu_to_le32p(const __u32 *p)
{
	return (__force __le32)*p;
}
static inline __u32 __le32_to_cpup(const __le32 *p)
{
	return (__force __u32)*p;
}
static inline __le16 __cpu_to_le16p(const __u16 *p)
{
	return (__force __le16)*p;
}
static inline __u16 __le16_to_cpup(const __le16 *p)
{
	return (__force __u16)*p;
}
static inline __be64 __cpu_to_be64p(const __u64 *p)
{
	return (__force __be64)__swab64p(p);
}
static inline __u64 __be64_to_cpup(const __be64 *p)
{
	return __swab64p((__u64 *)p);
}
static inline __be32 __cpu_to_be32p(const __u32 *p)
{
	return (__force __be32)__swab32p(p);
}
/*! 2016.08.06 study -ing */
static inline __u32 __be32_to_cpup(const __be32 *p)
{
	/*! 32bit를 바이트 단위로 big->little 변환 */
	return __swab32p((__u32 *)p);
}
static inline __be16 __cpu_to_be16p(const __u16 *p)
{
	return (__force __be16)__swab16p(p);
}
static inline __u16 __be16_to_cpup(const __be16 *p)
{
	return __swab16p((__u16 *)p);
}
#define __cpu_to_le64s(x) do { (void)(x); } while (0)
#define __le64_to_cpus(x) do { (void)(x); } while (0)
#define __cpu_to_le32s(x) do { (void)(x); } while (0)
#define __le32_to_cpus(x) do { (void)(x); } while (0)
#define __cpu_to_le16s(x) do { (void)(x); } while (0)
#define __le16_to_cpus(x) do { (void)(x); } while (0)
#define __cpu_to_be64s(x) __swab64s((x))
#define __be64_to_cpus(x) __swab64s((x))
#define __cpu_to_be32s(x) __swab32s((x))
#define __be32_to_cpus(x) __swab32s((x))
#define __cpu_to_be16s(x) __swab16s((x))
#define __be16_to_cpus(x) __swab16s((x))


#endif /* _UAPI_LINUX_BYTEORDER_LITTLE_ENDIAN_H */
