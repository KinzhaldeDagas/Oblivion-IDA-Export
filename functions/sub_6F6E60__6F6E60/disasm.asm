0x6F6E60: push    ecx
0x6F6E61: mov     eax, [ecx+24h]
0x6F6E64: push    esi
0x6F6E65: mov     esi, [eax]
0x6F6E67: push    edi
0x6F6E68: mov     edi, [esp+0Ch+arg_0]
0x6F6E6C: push    0; int
0x6F6E6E: lea     ecx, [esp+10h+arg_0]; this
0x6F6E72: mov     [esp+10h+var_4], 0
0x6F6E7A: mov     [edi], esi
0x6F6E7C: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F6E81: mov     eax, [esi+4]
0x6F6E84: cmp     eax, 0FFFFFFFFh
0x6F6E87: jnb     short loc_6F6E8F
0x6F6E89: add     eax, 1
0x6F6E8C: mov     [esi+4], eax
0x6F6E8F: lea     ecx, [esp+0Ch+arg_0]; this
0x6F6E93: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F6E98: mov     eax, edi
0x6F6E9A: pop     edi
0x6F6E9B: pop     esi
0x6F6E9C: pop     ecx
0x6F6E9D: retn    4
