0x980A0A: push    8
0x980A0C: mov     eax, offset ?_Init@locale@std@@CAPAV_Locimp@12@XZ_____ehhandler$?_Init@locale@std@@CAPAV_Locimp@12@XZ
0x980A11: call    __EH_prolog3
0x980A16: mov     eax, ds:0BA9B58h
0x980A1B: test    eax, eax
0x980A1D: mov     esi, eax
0x980A1F: jnz     short loc_980A9C
0x980A21: push    eax; int
0x980A22: lea     ecx, [ebp+var_10]; this
0x980A25: call    ??0_Lockit@std@@QAE@H@Z
0x980A2A: mov     eax, ds:0BA9B58h
0x980A2F: and     [ebp+var_4], esi
0x980A32: test    eax, eax
0x980A34: mov     esi, eax
0x980A36: jnz     short loc_980A90
0x980A38: push    34h ; '4'; Size
0x980A3A: call    FormHeapAlloc
0x980A3F: pop     ecx
0x980A40: mov     ecx, eax; this
0x980A42: mov     [ebp+var_14], ecx
0x980A45: test    ecx, ecx
0x980A47: mov     byte ptr [ebp+var_4], 1
0x980A4B: jz      short loc_980A57
0x980A4D: push    esi
0x980A4E: call    ??0_Locimp@locale@std@@QAE@XZ
0x980A53: mov     esi, eax
0x980A55: jmp     short loc_980A59
0x980A57: xor     esi, esi
0x980A59: push    esi
0x980A5A: mov     byte ptr [ebp+var_4], 0
0x980A5E: call    sub_980844
0x980A63: lea     ecx, [esi+18h]
0x980A66: mov     dword ptr [esi+10h], 3Fh ; '?'
0x980A6D: mov     [esp+28h+Src], offset aC
0x980A74: call    sub_4146B0
0x980A79: mov     ecx, esi
0x980A7B: mov     ds:0BA9B5Ch, esi
0x980A81: call    sub_6F6D90
0x980A86: mov     eax, ds:0BA9B5Ch
0x980A8B: mov     ds:0BA9B74h, eax
0x980A90: or      [ebp+var_4], 0FFFFFFFFh
0x980A94: lea     ecx, [ebp+var_10]; this
0x980A97: call    ??1_Lockit@std@@QAE@XZ
0x980A9C: mov     eax, esi
0x980A9E: call    __EH_epilog3
0x980AA3: retn
