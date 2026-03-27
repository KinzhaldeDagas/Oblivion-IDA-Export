0x6F7190: push    0FFFFFFFFh
0x6F7192: push    offset ??0?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAE@XZ_SEH
0x6F7197: mov     eax, large fs:0
0x6F719D: push    eax
0x6F719E: sub     esp, 8
0x6F71A1: push    ebx
0x6F71A2: push    esi
0x6F71A3: push    edi
0x6F71A4: mov     eax, ds:0B30AACh
0x6F71A9: xor     eax, esp
0x6F71AB: push    eax
0x6F71AC: lea     eax, [esp+24h+var_C]
0x6F71B0: mov     large fs:0, eax
0x6F71B6: mov     ebx, ecx
0x6F71B8: mov     [esp+24h+var_10], ebx
0x6F71BC: lea     ecx, [ebx+4]; this
0x6F71BF: mov     dword ptr [ebx], offset ??_7?$basic_streambuf@DU?$char_traits@D@std@@@std@@6B@; const std::streambuf::`vftable'
0x6F71C5: call    ??0_Mutex@std@@QAE@XZ; std::_Mutex::_Mutex(void)
0x6F71CA: push    4; Size
0x6F71CC: mov     [esp+28h+var_4], 0
0x6F71D4: call    FormHeapAlloc
0x6F71D9: mov     esi, eax
0x6F71DB: add     esp, 4
0x6F71DE: test    esi, esi
0x6F71E0: jz      short loc_6F7214
0x6F71E2: call    ?_Init@locale@std@@CAPAV_Locimp@12@XZ; std::locale::_Init(void)
0x6F71E7: mov     [esi], eax
0x6F71E9: call    sub_98083E
0x6F71EE: push    0; int
0x6F71F0: lea     ecx, [esp+28h+var_14]; this
0x6F71F4: mov     edi, eax
0x6F71F6: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F71FB: mov     eax, [edi+4]
0x6F71FE: cmp     eax, 0FFFFFFFFh
0x6F7201: jnb     short loc_6F7209
0x6F7203: add     eax, 1
0x6F7206: mov     [edi+4], eax
0x6F7209: lea     ecx, [esp+24h+var_14]; this
0x6F720D: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F7212: jmp     short loc_6F7216
0x6F7214: xor     esi, esi
0x6F7216: mov     ecx, ebx
0x6F7218: mov     [ebx+38h], esi
0x6F721B: call    sub_6F6F40
0x6F7220: mov     eax, ebx
0x6F7222: mov     ecx, [esp+24h+var_C]
0x6F7226: mov     large fs:0, ecx
0x6F722D: pop     ecx
0x6F722E: pop     edi
0x6F722F: pop     esi
0x6F7230: pop     ebx
0x6F7231: add     esp, 14h
0x6F7234: retn
