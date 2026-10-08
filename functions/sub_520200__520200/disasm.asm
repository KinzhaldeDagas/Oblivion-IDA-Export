0x520200: movzx   eax, byte ptr [ecx+38h]; Returns TESIdleForm ANAM byte at +0x38 masked with 0x7F. This low-seven-bit value is passed as the queued idle slot/type; the high bit is handled separately by native idle selection.
0x520204: and     eax, 7Fh
0x520207: retn
