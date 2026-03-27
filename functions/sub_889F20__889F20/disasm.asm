0x889F20: sub     esp, 8
0x889F23: push    esi
0x889F24: mov     esi, ecx
0x889F26: mov     eax, [esi+2Ch]
0x889F29: test    eax, eax
0x889F2B: jbe     loc_88A078
0x889F31: cmp     eax, 0BB8h
0x889F36: jb      short loc_889F3F
0x889F38: mov     dword ptr [esi+2Ch], 0BB8h
0x889F3F: mov     eax, [esi+2Ch]
0x889F42: mov     ecx, ds:0B2E2FCh
0x889F48: cmp     eax, ecx
0x889F4A: push    ebx
0x889F4B: jnb     short loc_889F55
0x889F4D: mov     ebx, eax
0x889F4F: mov     [esp+10h+var_8], ebx
0x889F53: jmp     short loc_889F5B
0x889F55: mov     [esp+10h+var_8], ecx
0x889F59: mov     ebx, ecx
0x889F5B: sub     eax, ebx
0x889F5D: push    ebp
0x889F5E: mov     ebp, eax
0x889F60: mov     eax, [esi]
0x889F62: mov     edx, [eax+58h]
0x889F65: mov     ecx, esi
0x889F67: call    edx
0x889F69: mov     ecx, eax
0x889F6B: test    ecx, ecx
0x889F6D: mov     [esp+14h+var_4], ecx
0x889F71: jz      loc_88A076
0x889F77: cmp     [esp+14h+arg_0], 0
0x889F7C: push    edi
0x889F7D: lea     edi, ds:0[ebp*4]
0x889F84: jz      short loc_88A000
0x889F86: mov     eax, [esi+28h]
0x889F89: push    0
0x889F8B: push    ebx
0x889F8C: add     eax, edi
0x889F8E: push    eax
0x889F8F: call    sub_89C310
0x889F94: mov     ecx, [esi+28h]
0x889F97: mov     ecx, [ecx+edi]
0x889F9A: call    sub_8A6410
0x889F9F: mov     edx, [esi]
0x889FA1: mov     eax, [edx+58h]
0x889FA4: mov     ecx, esi
0x889FA6: call    eax
0x889FA8: mov     ecx, [esi+10h]
0x889FAB: test    ecx, ecx
0x889FAD: jz      short loc_889FE2
0x889FAF: cmp     dword ptr [eax+0B4h], 9
0x889FB6: jnz     short loc_889FE2
0x889FB8: fld     dword ptr ds:0A34BA0h
0x889FBE: sub     esp, 8
0x889FC1: fst     [esp+20h+var_1C]
0x889FC5: fstp    [esp+20h+var_20]
0x889FC8: call    sub_8BAB10
0x889FCD: mov     ecx, [esi+10h]
0x889FD0: call    sub_8BAB60
0x889FD5: mov     ecx, [esi+28h]
0x889FD8: mov     ecx, [ecx+edi]
0x889FDB: call    sub_8A6440
0x889FE0: jmp     short loc_88A00E
0x889FE2: fld     dword ptr ds:0A34BA0h
0x889FE8: push    ecx
0x889FE9: mov     ecx, eax
0x889FEB: fstp    [esp+1Ch+var_1C]
0x889FEE: call    sub_898B70
0x889FF3: mov     ecx, [esi+28h]
0x889FF6: mov     ecx, [ecx+edi]
0x889FF9: call    sub_8A6440
0x889FFE: jmp     short loc_88A00E
0x88A000: mov     edx, [esi+28h]
0x88A003: push    1
0x88A005: push    ebx
0x88A006: add     edx, edi
0x88A008: push    edx
0x88A009: call    sub_89C310
0x88A00E: cmp     ebp, [esi+2Ch]
0x88A011: mov     ebx, ebp
0x88A013: jnb     short loc_88A056
0x88A015: mov     eax, [esi+28h]
0x88A018: lea     ecx, [eax+ebx*4]
0x88A01B: mov     eax, [ecx]
0x88A01D: test    eax, eax
0x88A01F: jz      short loc_88A026
0x88A021: mov     eax, [eax+0Ch]
0x88A024: jmp     short loc_88A028
0x88A026: xor     eax, eax
0x88A028: test    eax, eax
0x88A02A: jz      short loc_88A032
0x88A02C: and     dword ptr [eax+18h], 0FFFFFFEFh
0x88A030: jmp     short loc_88A043
0x88A032: mov     ecx, [ecx]
0x88A034: push    ecx
0x88A035: mov     ecx, [esp+1Ch+var_4]
0x88A039: lea     edx, [esp+1Ch+arg_0]
0x88A03D: push    edx
0x88A03E: call    sub_8996C0
0x88A043: mov     eax, [esi+28h]
0x88A046: mov     ecx, [eax+ebx*4]
0x88A049: call    sub_8BC730
0x88A04E: add     ebx, 1
0x88A051: cmp     ebx, [esi+2Ch]
0x88A054: jb      short loc_88A015
0x88A056: mov     ecx, [esp+18h+var_8]
0x88A05A: mov     eax, [esi+28h]
0x88A05D: lea     edx, ds:0[ecx*4]
0x88A064: push    edx
0x88A065: add     eax, edi
0x88A067: push    0
0x88A069: push    eax
0x88A06A: call    __memset
0x88A06F: add     esp, 0Ch
0x88A072: mov     [esi+2Ch], ebp
0x88A075: pop     edi
0x88A076: pop     ebp
0x88A077: pop     ebx
0x88A078: pop     esi
0x88A079: add     esp, 8
0x88A07C: retn    4
