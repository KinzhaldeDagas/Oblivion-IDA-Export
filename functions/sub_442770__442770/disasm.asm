0x442770: push    0FFFFFFFFh
0x442772: push    offset SEH_478070
0x442777: mov     eax, large fs:0
0x44277D: push    eax
0x44277E: push    ecx
0x44277F: push    ebx
0x442780: push    ebp
0x442781: push    esi
0x442782: push    edi
0x442783: mov     eax, ds:0B30AACh
0x442788: xor     eax, esp
0x44278A: push    eax
0x44278B: lea     eax, [esp+24h+var_C]
0x44278F: mov     large fs:0, eax
0x442795: mov     [esp+24h+var_10], ecx
0x442799: mov     ebp, [esp+24h+arg_0]
0x44279D: xor     ebx, ebx
0x44279F: test    ebp, ebp
0x4427A1: jnz     short loc_4427AA
0x4427A3: xor     eax, eax
0x4427A5: jmp     loc_44286B
0x4427AA: movzx   eax, word ptr [ebp+0B6h]
0x4427B1: xor     edi, edi
0x4427B3: test    eax, eax
0x4427B5: jbe     loc_442869
0x4427BB: cmp     eax, edi
0x4427BD: ja      short loc_4427C3
0x4427BF: xor     esi, esi
0x4427C1: jmp     short loc_4427CC
0x4427C3: mov     eax, [ebp+0B0h]
0x4427C9: mov     esi, [eax+edi*4]
0x4427CC: test    esi, esi
0x4427CE: mov     [esp+24h+arg_0], esi
0x4427D2: jz      short loc_4427DE
0x4427D4: lea     ecx, [esi+4]
0x4427D7: push    ecx; lpAddend
0x4427D8: call    dword ptr ds:0A28078h
0x4427DE: test    esi, esi
0x4427E0: mov     [esp+24h+var_4], 0
0x4427E8: jz      short loc_442833
0x4427EA: mov     edx, [esi]
0x4427EC: mov     eax, [edx+8]
0x4427EF: mov     ecx, esi
0x4427F1: call    eax
0x4427F3: test    eax, eax
0x4427F5: jz      short loc_44280A
0x4427F7: mov     ecx, [esp+24h+arg_4]
0x4427FB: push    ecx
0x4427FC: mov     ecx, [esp+28h+var_10]
0x442800: push    esi
0x442801: call    sub_442770
0x442806: add     ebx, eax
0x442808: jmp     short loc_442833
0x44280A: mov     edx, [esi]
0x44280C: mov     eax, [edx+10h]
0x44280F: mov     ecx, esi
0x442811: call    eax
0x442813: test    eax, eax
0x442815: jz      short loc_442833
0x442817: cmp     byte ptr [esp+24h+arg_4], 0
0x44281C: jnz     short loc_442824
0x44281E: test    byte ptr [esi+18h], 1
0x442822: jnz     short loc_442833
0x442824: mov     eax, [esi+0B4h]
0x44282A: movzx   eax, word ptr [eax+40h]
0x44282E: movzx   ecx, ax
0x442831: add     ebx, ecx
0x442833: test    esi, esi
0x442835: mov     [esp+24h+var_4], 0FFFFFFFFh
0x44283D: jz      short loc_442857
0x44283F: lea     edx, [esi+4]
0x442842: push    edx; lpAddend
0x442843: call    dword ptr ds:0A2807Ch
0x442849: test    eax, eax
0x44284B: jnz     short loc_442857
0x44284D: mov     eax, [esi]
0x44284F: mov     edx, [eax]
0x442851: push    1
0x442853: mov     ecx, esi
0x442855: call    edx
0x442857: movzx   eax, word ptr [ebp+0B6h]
0x44285E: add     edi, 1
0x442861: cmp     eax, edi
0x442863: ja      loc_4427C3
0x442869: mov     eax, ebx
0x44286B: mov     ecx, dword ptr [esp+24h+var_C]
0x44286F: mov     large fs:0, ecx
0x442876: pop     ecx
0x442877: pop     edi
0x442878: pop     esi
0x442879: pop     ebp
0x44287A: pop     ebx
0x44287B: add     esp, 10h
0x44287E: retn    8
