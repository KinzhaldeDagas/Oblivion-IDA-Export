0x6F8AF0: push    ecx
0x6F8AF1: push    ebp
0x6F8AF2: push    esi
0x6F8AF3: xor     ebp, ebp
0x6F8AF5: mov     esi, ecx
0x6F8AF7: push    edi
0x6F8AF8: push    ebp
0x6F8AF9: push    ebp
0x6F8AFA: mov     [esi+24h], ebp
0x6F8AFD: mov     [esi+0Ch], ebp
0x6F8B00: mov     dword ptr [esi+10h], 201h
0x6F8B07: mov     dword ptr [esi+14h], 6
0x6F8B0E: mov     [esi+18h], ebp
0x6F8B11: mov     [esi+1Ch], ebp
0x6F8B14: mov     [esi+20h], ebp
0x6F8B17: call    sub_6F89A0
0x6F8B1C: push    4; Size
0x6F8B1E: call    FormHeapAlloc
0x6F8B23: mov     edi, eax
0x6F8B25: add     esp, 4
0x6F8B28: cmp     edi, ebp
0x6F8B2A: jz      short loc_6F8B65
0x6F8B2C: push    ebx
0x6F8B2D: call    ?_Init@locale@std@@CAPAV_Locimp@12@XZ; std::locale::_Init(void)
0x6F8B32: mov     [edi], eax
0x6F8B34: call    sub_98083E
0x6F8B39: push    ebp; int
0x6F8B3A: lea     ecx, [esp+18h+var_4]; this
0x6F8B3E: mov     ebx, eax
0x6F8B40: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F8B45: mov     eax, [ebx+4]
0x6F8B48: cmp     eax, 0FFFFFFFFh
0x6F8B4B: jnb     short loc_6F8B53
0x6F8B4D: add     eax, 1
0x6F8B50: mov     [ebx+4], eax
0x6F8B53: lea     ecx, [esp+14h+var_4]; this
0x6F8B57: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F8B5C: pop     ebx
0x6F8B5D: mov     [esi+24h], edi
0x6F8B60: pop     edi
0x6F8B61: pop     esi
0x6F8B62: pop     ebp
0x6F8B63: pop     ecx
0x6F8B64: retn
0x6F8B65: pop     edi
0x6F8B66: mov     [esi+24h], ebp
0x6F8B69: pop     esi
0x6F8B6A: pop     ebp
0x6F8B6B: pop     ecx
0x6F8B6C: retn
