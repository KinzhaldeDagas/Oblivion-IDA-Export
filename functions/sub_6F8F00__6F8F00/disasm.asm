0x6F8F00: push    0FFFFFFFFh
0x6F8F02: push    offset SEH_6F8F00
0x6F8F07: mov     eax, large fs:0
0x6F8F0D: push    eax
0x6F8F0E: sub     esp, 8
0x6F8F11: push    ebx
0x6F8F12: push    esi
0x6F8F13: push    edi
0x6F8F14: mov     eax, ds:0B30AACh
0x6F8F19: xor     eax, esp
0x6F8F1B: push    eax
0x6F8F1C: lea     eax, [esp+24h+var_C]
0x6F8F20: mov     large fs:0, eax
0x6F8F26: lea     eax, [esp+24h+var_14]
0x6F8F2A: push    eax
0x6F8F2B: call    sub_6F6E60
0x6F8F30: push    eax
0x6F8F31: mov     [esp+28h+var_4], 0
0x6F8F39: call    sub_6F8C00
0x6F8F3E: mov     edi, [esp+28h+var_14]
0x6F8F42: add     esp, 4
0x6F8F45: test    edi, edi
0x6F8F47: mov     ebx, eax
0x6F8F49: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6F8F51: jz      short loc_6F8F92
0x6F8F53: push    0; int
0x6F8F55: lea     ecx, [esp+28h+var_10]; this
0x6F8F59: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F8F5E: mov     eax, [edi+4]
0x6F8F61: test    eax, eax
0x6F8F63: jbe     short loc_6F8F70
0x6F8F65: cmp     eax, 0FFFFFFFFh
0x6F8F68: jnb     short loc_6F8F70
0x6F8F6A: add     eax, 0FFFFFFFFh
0x6F8F6D: mov     [edi+4], eax
0x6F8F70: mov     esi, [edi+4]
0x6F8F73: neg     esi
0x6F8F75: sbb     esi, esi
0x6F8F77: not     esi
0x6F8F79: lea     ecx, [esp+24h+var_10]; this
0x6F8F7D: and     esi, edi
0x6F8F7F: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F8F84: test    esi, esi
0x6F8F86: jz      short loc_6F8F92
0x6F8F88: mov     edx, [esi]
0x6F8F8A: mov     eax, [edx]
0x6F8F8C: push    1
0x6F8F8E: mov     ecx, esi
0x6F8F90: call    eax
0x6F8F92: mov     edx, [ebx]
0x6F8F94: mov     eax, [esp+24h+arg_0]
0x6F8F98: mov     edx, [edx+18h]
0x6F8F9B: push    eax
0x6F8F9C: mov     ecx, ebx
0x6F8F9E: call    edx
0x6F8FA0: mov     ecx, dword ptr [esp+24h+var_C]
0x6F8FA4: mov     large fs:0, ecx
0x6F8FAB: pop     ecx
0x6F8FAC: pop     edi
0x6F8FAD: pop     esi
0x6F8FAE: pop     ebx
0x6F8FAF: add     esp, 14h
0x6F8FB2: retn    4
