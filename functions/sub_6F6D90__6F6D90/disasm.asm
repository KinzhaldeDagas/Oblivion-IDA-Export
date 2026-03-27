0x6F6D90: push    ecx
0x6F6D91: push    esi
0x6F6D92: mov     esi, ecx
0x6F6D94: push    0; int
0x6F6D96: lea     ecx, [esp+0Ch+var_4]; this
0x6F6D9A: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F6D9F: mov     eax, [esi+4]
0x6F6DA2: cmp     eax, 0FFFFFFFFh
0x6F6DA5: jnb     short loc_6F6DAD
0x6F6DA7: add     eax, 1
0x6F6DAA: mov     [esi+4], eax
0x6F6DAD: lea     ecx, [esp+8+var_4]; this
0x6F6DB1: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F6DB6: pop     esi
0x6F6DB7: pop     ecx
0x6F6DB8: retn
