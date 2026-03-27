0x6F6E10: push    ecx
0x6F6E11: push    edi
0x6F6E12: mov     edi, [ecx]
0x6F6E14: test    edi, edi
0x6F6E16: jz      short loc_6F6E59
0x6F6E18: push    0; int
0x6F6E1A: lea     ecx, [esp+0Ch+var_4]; this
0x6F6E1E: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F6E23: mov     eax, [edi+4]
0x6F6E26: test    eax, eax
0x6F6E28: jbe     short loc_6F6E35
0x6F6E2A: cmp     eax, 0FFFFFFFFh
0x6F6E2D: jnb     short loc_6F6E35
0x6F6E2F: add     eax, 0FFFFFFFFh
0x6F6E32: mov     [edi+4], eax
0x6F6E35: push    esi
0x6F6E36: mov     esi, [edi+4]
0x6F6E39: neg     esi
0x6F6E3B: sbb     esi, esi
0x6F6E3D: not     esi
0x6F6E3F: lea     ecx, [esp+0Ch+var_4]; this
0x6F6E43: and     esi, edi
0x6F6E45: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F6E4A: test    esi, esi
0x6F6E4C: jz      short loc_6F6E58
0x6F6E4E: mov     eax, [esi]
0x6F6E50: mov     edx, [eax]
0x6F6E52: push    1
0x6F6E54: mov     ecx, esi
0x6F6E56: call    edx
0x6F6E58: pop     esi
0x6F6E59: pop     edi
0x6F6E5A: pop     ecx
0x6F6E5B: retn
