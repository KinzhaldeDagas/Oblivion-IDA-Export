0x6F6DC0: push    ecx
0x6F6DC1: push    esi
0x6F6DC2: push    edi
0x6F6DC3: mov     edi, ecx
0x6F6DC5: push    0; int
0x6F6DC7: lea     ecx, [esp+10h+var_4]; this
0x6F6DCB: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F6DD0: mov     eax, [edi+4]
0x6F6DD3: test    eax, eax
0x6F6DD5: jbe     short loc_6F6DE2
0x6F6DD7: cmp     eax, 0FFFFFFFFh
0x6F6DDA: jnb     short loc_6F6DE2
0x6F6DDC: add     eax, 0FFFFFFFFh
0x6F6DDF: mov     [edi+4], eax
0x6F6DE2: mov     esi, [edi+4]
0x6F6DE5: neg     esi
0x6F6DE7: sbb     esi, esi
0x6F6DE9: not     esi
0x6F6DEB: lea     ecx, [esp+0Ch+var_4]; this
0x6F6DEF: and     esi, edi
0x6F6DF1: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F6DF6: pop     edi
0x6F6DF7: mov     eax, esi
0x6F6DF9: pop     esi
0x6F6DFA: pop     ecx
0x6F6DFB: retn
