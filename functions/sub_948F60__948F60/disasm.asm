0x948F60: push    ebp
0x948F61: mov     ebp, ecx
0x948F63: mov     eax, [ebp+0Ch]
0x948F66: mov     ecx, [ebp+8]
0x948F69: and     eax, 3FFFFFFFh
0x948F6E: add     ecx, 46h ; 'F'
0x948F71: cmp     eax, ecx
0x948F73: jle     loc_94906A
0x948F79: push    ebx
0x948F7A: push    esi
0x948F7B: mov     esi, [esp+0Ch+arg_8]
0x948F7F: xor     ebx, ebx
0x948F81: cmp     esi, ebx
0x948F83: jz      loc_949068
0x948F89: push    edi
0x948F8A: push    ebx
0x948F8B: lea     edi, [ebp+10h]
0x948F8E: push    esi
0x948F8F: mov     ecx, edi
0x948F91: call    sub_8B1550
0x948F96: test    eax, eax
0x948F98: jnz     loc_949067
0x948F9E: push    1
0x948FA0: push    esi
0x948FA1: mov     ecx, edi
0x948FA3: call    sub_8B0E80
0x948FA8: mov     edx, [esp+10h+arg_4]
0x948FAC: mov     eax, [ebp+1Ch]
0x948FAF: xor     edi, edi
0x948FB1: mov     di, [esi+4]
0x948FB5: and     edi, 7FFFh
0x948FBB: test    edx, eax
0x948FBD: jnz     short loc_948FC1
0x948FBF: xor     edi, edi
0x948FC1: mov     eax, [esp+10h+arg_0]
0x948FC5: cmp     eax, ebx
0x948FC7: mov     [esp+10h+arg_4], ebx
0x948FCB: jz      short loc_948FEB
0x948FCD: push    eax
0x948FCE: call    sub_8B1860
0x948FD3: mov     ebx, eax
0x948FD5: add     esp, 4
0x948FD8: inc     ebx
0x948FD9: mov     eax, ebx
0x948FDB: and     eax, 80000001h
0x948FE0: jns     short loc_948FE7
0x948FE2: dec     eax
0x948FE3: or      eax, 0FFFFFFFEh
0x948FE6: inc     eax
0x948FE7: mov     [esp+10h+arg_4], eax
0x948FEB: mov     eax, [esp+10h+arg_4]
0x948FEF: add     eax, ebx
0x948FF1: push    eax
0x948FF2: lea     esi, [ebp+4]
0x948FF5: call    sub_948DF0
0x948FFA: mov     dl, byte ptr [esp+14h+arg_4]
0x948FFE: mov     esi, eax
0x949000: mov     cl, bl
0x949002: add     cl, dl
0x949004: add     esp, 4
0x949007: test    edi, edi
0x949009: mov     byte ptr [esi], 50h ; 'P'
0x94900C: mov     [esi+1], cl
0x94900F: mov     [esi+2], di
0x949013: jnz     short loc_949019
0x949015: xor     eax, eax
0x949017: jmp     short loc_949025
0x949019: mov     ecx, ds:0BA7D98h
0x94901F: mov     edx, [ecx]
0x949021: push    edi
0x949022: call    dword ptr [edx+28h]
0x949025: test    ebx, ebx
0x949027: mov     [esi+4], ax
0x94902B: jle     short loc_94904C
0x94902D: mov     eax, [esp+10h+arg_0]
0x949031: push    ebx
0x949032: push    eax
0x949033: lea     ecx, [esi+6]
0x949036: push    ecx
0x949037: call    sub_8B1890
0x94903C: mov     eax, [esp+1Ch+arg_4]
0x949040: add     esp, 0Ch
0x949043: test    eax, eax
0x949045: jz      short loc_94904C
0x949047: mov     byte ptr [esi+ebx+6], 0
0x94904C: mov     ecx, [esp+10h+arg_8]
0x949050: mov     edx, [ecx]
0x949052: lea     eax, [ebp-8]
0x949055: neg     eax
0x949057: sbb     eax, eax
0x949059: and     eax, ebp
0x94905B: push    eax
0x94905C: call    dword ptr [edx+4]
0x94905F: mov     eax, [ebp+0]
0x949062: mov     ecx, ebp
0x949064: call    dword ptr [eax+10h]
0x949067: pop     edi
0x949068: pop     esi
0x949069: pop     ebx
0x94906A: pop     ebp
0x94906B: retn    0Ch
