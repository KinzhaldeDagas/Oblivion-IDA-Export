0x6F6FA0: push    ecx
0x6F6FA1: push    ebx
0x6F6FA2: push    ebp
0x6F6FA3: mov     ebp, ecx
0x6F6FA5: mov     ebx, [ebp+38h]
0x6F6FA8: test    ebx, ebx
0x6F6FAA: mov     dword ptr [ebp+0], offset ??_7?$basic_streambuf@DU?$char_traits@D@std@@@std@@6B@; const std::streambuf::`vftable'
0x6F6FB1: jz      short loc_6F7005
0x6F6FB3: push    edi
0x6F6FB4: mov     edi, [ebx]
0x6F6FB6: test    edi, edi
0x6F6FB8: jz      short loc_6F6FFB
0x6F6FBA: push    0; int
0x6F6FBC: lea     ecx, [esp+14h+var_4]; this
0x6F6FC0: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F6FC5: mov     eax, [edi+4]
0x6F6FC8: test    eax, eax
0x6F6FCA: jbe     short loc_6F6FD7
0x6F6FCC: cmp     eax, 0FFFFFFFFh
0x6F6FCF: jnb     short loc_6F6FD7
0x6F6FD1: add     eax, 0FFFFFFFFh
0x6F6FD4: mov     [edi+4], eax
0x6F6FD7: push    esi
0x6F6FD8: mov     esi, [edi+4]
0x6F6FDB: neg     esi
0x6F6FDD: sbb     esi, esi
0x6F6FDF: not     esi
0x6F6FE1: lea     ecx, [esp+14h+var_4]; this
0x6F6FE5: and     esi, edi
0x6F6FE7: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F6FEC: test    esi, esi
0x6F6FEE: jz      short loc_6F6FFA
0x6F6FF0: mov     eax, [esi]
0x6F6FF2: mov     edx, [eax]
0x6F6FF4: push    1
0x6F6FF6: mov     ecx, esi
0x6F6FF8: call    edx
0x6F6FFA: pop     esi
0x6F6FFB: push    ebx
0x6F6FFC: call    FormHeapFree
0x6F7001: add     esp, 4
0x6F7004: pop     edi
0x6F7005: lea     ecx, [ebp+4]
0x6F7008: pop     ebp
0x6F7009: pop     ebx
0x6F700A: add     esp, 4
0x6F700D: jmp     ??1?$basic_streambuf@DU?$char_traits@D@std@@@std@@UAE@XZ___??1_Mutex@std@@QAE@XZ
