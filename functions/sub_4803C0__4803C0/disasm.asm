0x4803C0: sub     esp, 0Ch
0x4803C3: push    esi
0x4803C4: mov     esi, [esp+10h+arg_0]
0x4803C8: push    edi
0x4803C9: xor     edi, edi
0x4803CB: cmp     esi, edi
0x4803CD: jz      loc_480514
0x4803D3: mov     eax, [esi]
0x4803D5: mov     edx, [eax+8]
0x4803D8: push    ebx
0x4803D9: mov     ecx, esi
0x4803DB: mov     [esp+18h+var_C], edi
0x4803DF: call    edx
0x4803E1: mov     ebx, eax
0x4803E3: cmp     ebx, edi
0x4803E5: jz      loc_48047E
0x4803EB: push    ebp
0x4803EC: movzx   ebp, word ptr [ebx+0B6h]
0x4803F3: test    ebp, ebp
0x4803F5: jbe     loc_48047D
0x4803FB: jmp     short loc_480400
0x4803FD: align 10h
0x480400: movzx   eax, word ptr [ebx+0B6h]
0x480407: cmp     eax, edi
0x480409: ja      short loc_48040F
0x48040B: xor     eax, eax
0x48040D: jmp     short loc_480418
0x48040F: mov     ecx, [ebx+0B0h]
0x480415: mov     eax, [ecx+edi*4]
0x480418: push    eax
0x480419: call    sub_4803C0
0x48041E: mov     esi, eax
0x480420: add     esp, 4
0x480423: test    esi, esi
0x480425: jz      short loc_480472
0x480427: mov     eax, [esp+1Ch+var_C]
0x48042B: test    eax, eax
0x48042D: jz      short loc_48046E
0x48042F: mov     eax, [eax+8]
0x480432: test    eax, eax
0x480434: jz      short loc_480440
0x480436: mov     ecx, [eax+50h]
0x480439: call    sub_89DA90
0x48043E: jmp     short loc_480442
0x480440: fldz
0x480442: mov     eax, [esi+8]
0x480445: fstp    [esp+1Ch+var_8]
0x480449: test    eax, eax
0x48044B: jz      short loc_480457
0x48044D: mov     ecx, [eax+50h]
0x480450: call    sub_89DA90
0x480455: jmp     short loc_480459
0x480457: fldz
0x480459: fstp    [esp+1Ch+var_4]
0x48045D: fld     [esp+1Ch+var_8]
0x480461: fld     [esp+1Ch+var_4]
0x480465: fcompp
0x480467: fnstsw  ax
0x480469: test    ah, 41h
0x48046C: jnz     short loc_480472
0x48046E: mov     [esp+1Ch+var_C], esi
0x480472: add     edi, 1
0x480475: cmp     edi, ebp
0x480477: jb      short loc_480400
0x480479: mov     esi, [esp+1Ch+arg_0]
0x48047D: pop     ebp
0x48047E: mov     esi, [esi+0A8h]
0x480484: test    esi, esi
0x480486: pop     ebx
0x480487: jz      short loc_4804B7
0x480489: mov     edx, [esi]
0x48048B: mov     eax, [edx+4]
0x48048E: mov     ecx, esi
0x480490: call    eax
0x480492: test    eax, eax
0x480494: jz      short loc_4804A4
0x480496: cmp     eax, offset dword_BA7D24
0x48049B: jz      short loc_4804B3
0x48049D: mov     eax, [eax+4]
0x4804A0: test    eax, eax
0x4804A2: jnz     short loc_480496
0x4804A4: xor     al, al
0x4804A6: neg     al
0x4804A8: sbb     eax, eax
0x4804AA: and     eax, esi
0x4804AC: jz      short loc_4804B7
0x4804AE: mov     esi, [eax+10h]
0x4804B1: jmp     short loc_4804B9
0x4804B3: mov     al, 1
0x4804B5: jmp     short loc_4804A6
0x4804B7: xor     esi, esi
0x4804B9: mov     edi, [esp+14h+var_C]
0x4804BD: test    edi, edi
0x4804BF: jz      short loc_48050C
0x4804C1: test    esi, esi
0x4804C3: jz      short loc_480504
0x4804C5: mov     eax, [esi+8]
0x4804C8: test    eax, eax
0x4804CA: jz      short loc_4804D6
0x4804CC: mov     ecx, [eax+50h]
0x4804CF: call    sub_89DA90
0x4804D4: jmp     short loc_4804D8
0x4804D6: fldz
0x4804D8: mov     eax, [edi+8]
0x4804DB: fstp    [esp+14h+arg_0]
0x4804DF: test    eax, eax
0x4804E1: jz      short loc_4804ED
0x4804E3: mov     ecx, [eax+50h]
0x4804E6: call    sub_89DA90
0x4804EB: jmp     short loc_4804EF
0x4804ED: fldz
0x4804EF: fstp    [esp+14h+var_4]
0x4804F3: fld     [esp+14h+arg_0]
0x4804F7: fld     [esp+14h+var_4]
0x4804FB: fcompp
0x4804FD: fnstsw  ax
0x4804FF: test    ah, 41h
0x480502: jnz     short loc_48050C
0x480504: mov     eax, edi
0x480506: pop     edi
0x480507: pop     esi
0x480508: add     esp, 0Ch
0x48050B: retn
0x48050C: pop     edi
0x48050D: mov     eax, esi
0x48050F: pop     esi
0x480510: add     esp, 0Ch
0x480513: retn
0x480514: pop     edi
0x480515: xor     eax, eax
0x480517: pop     esi
0x480518: add     esp, 0Ch
0x48051B: retn
