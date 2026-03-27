0x4B3680: push    ebx
0x4B3681: mov     ebx, [esp+4+arg_0]
0x4B3685: mov     edx, [ebx]
0x4B3687: test    edx, edx
0x4B3689: setz    al
0x4B368C: test    al, al
0x4B368E: push    esi
0x4B368F: mov     esi, ecx
0x4B3691: jz      short loc_4B369B
0x4B3693: pop     esi
0x4B3694: or      eax, 0FFFFFFFFh
0x4B3697: pop     ebx
0x4B3698: retn    4
0x4B369B: push    ebp
0x4B369C: push    edi
0x4B369D: movzx   edi, word ptr [esi+0Ah]
0x4B36A1: xor     eax, eax
0x4B36A3: test    di, di
0x4B36A6: jbe     short loc_4B36C8
0x4B36A8: mov     ebp, [esi+4]
0x4B36AB: jmp     short loc_4B36B0
0x4B36AD: align 10h
0x4B36B0: movzx   ecx, ax
0x4B36B3: cmp     dword ptr [ebp+ecx*4+0], 0
0x4B36B8: setz    cl
0x4B36BB: test    cl, cl
0x4B36BD: jnz     short loc_4B36F3
0x4B36BF: add     eax, 1
0x4B36C2: cmp     ax, [esi+0Ah]
0x4B36C6: jb      short loc_4B36B0
0x4B36C8: movzx   ecx, word ptr [esi+8]
0x4B36CC: movzx   edi, di
0x4B36CF: cmp     edi, ecx
0x4B36D1: jb      short loc_4B36E1
0x4B36D3: movzx   edx, word ptr [esi+0Eh]
0x4B36D7: add     edx, edi
0x4B36D9: push    edx
0x4B36DA: mov     ecx, esi
0x4B36DC: call    sub_523B10
0x4B36E1: push    ebx
0x4B36E2: push    edi
0x4B36E3: mov     ecx, esi
0x4B36E5: call    sub_4B34E0
0x4B36EA: mov     eax, edi
0x4B36EC: pop     edi
0x4B36ED: pop     ebp
0x4B36EE: pop     esi
0x4B36EF: pop     ebx
0x4B36F0: retn    4
0x4B36F3: movzx   ebx, ax
0x4B36F6: mov     edi, [ebp+ebx*4+0]
0x4B36FA: cmp     edi, edx
0x4B36FC: jz      short loc_4B3736
0x4B36FE: test    edi, edi
0x4B3700: jz      short loc_4B371E
0x4B3702: lea     edx, [edi+4]
0x4B3705: push    edx; lpAddend
0x4B3706: call    dword ptr ds:0A2807Ch
0x4B370C: test    eax, eax
0x4B370E: jnz     short loc_4B371E
0x4B3710: test    edi, edi
0x4B3712: jz      short loc_4B371E
0x4B3714: mov     eax, [edi]
0x4B3716: mov     edx, [eax]
0x4B3718: push    1
0x4B371A: mov     ecx, edi
0x4B371C: call    edx
0x4B371E: mov     eax, [esp+10h+arg_0]
0x4B3722: mov     eax, [eax]
0x4B3724: test    eax, eax
0x4B3726: mov     [ebp+ebx*4+0], eax
0x4B372A: jz      short loc_4B3736
0x4B372C: add     eax, 4
0x4B372F: push    eax; lpAddend
0x4B3730: call    dword ptr ds:0A28078h
0x4B3736: add     word ptr [esi+0Ch], 1
0x4B373B: pop     edi
0x4B373C: pop     ebp
0x4B373D: pop     esi
0x4B373E: mov     eax, ebx
0x4B3740: pop     ebx
0x4B3741: retn    4
