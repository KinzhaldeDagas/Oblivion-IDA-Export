0x8F4050: push    esi
0x8F4051: mov     esi, ecx
0x8F4053: call    ??1MobileObject@@UAE@XZ; MobileObject::~MobileObject(void)
0x8F4058: test    byte ptr [esp+4+arg_0], 1
0x8F405D: jz      short loc_8F4072
0x8F405F: movzx   edx, word ptr [esi+4]
0x8F4063: mov     ecx, ds:0BA7D98h
0x8F4069: mov     eax, [ecx]
0x8F406B: push    8
0x8F406D: push    edx
0x8F406E: push    esi
0x8F406F: call    dword ptr [eax+14h]
0x8F4072: mov     eax, esi
0x8F4074: pop     esi
0x8F4075: retn    4
