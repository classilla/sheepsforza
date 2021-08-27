#if defined(__x86_64__)
#ifdef __APPLE__
	#include "ppc-dyngen-ops-x86_64_macos.hpp"
#else
	#include "ppc-dyngen-ops-x86_64.hpp"
#endif
#elif defined(__i386__)
	#include "ppc-dyngen-ops-x86_32.hpp"
#elif defined(__powerpc64__) && defined(__LITTLE_ENDIAN__) && defined(__linux__)
	#include "ppc-dyngen-ops-ppc64le_linux.hpp"
#else
	#error Unknown platform
#endif
