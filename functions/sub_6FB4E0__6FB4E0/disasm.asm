0x6FB4E0: sub     esp, 14h
0x6FB4E3: push    ebx
0x6FB4E4: push    ebp
0x6FB4E5: mov     ebp, [esp+1Ch+Size]
0x6FB4E9: push    esi
0x6FB4EA: push    ebp; Size
0x6FB4EB: mov     esi, ecx
0x6FB4ED: call    sub_721610
0x6FB4F2: mov     eax, [ebp+21Ch]
0x6FB4F8: push    1
0x6FB4FA: lea     ecx, [esp+24h+var_14]
0x6FB4FE: push    ecx
0x6FB4FF: push    4
0x6FB501: lea     edx, [esp+2Ch+Size]
0x6FB505: push    edx
0x6FB506: push    eax
0x6FB507: mov     eax, [eax+4]
0x6FB50A: mov     [esp+34h+var_14], 4
0x6FB512: call    eax
0x6FB514: mov     eax, [esp+34h+Size]
0x6FB518: xor     ebx, ebx
0x6FB51A: add     esp, 14h
0x6FB51D: cmp     eax, ebx
0x6FB51F: jz      short loc_6FB57B
0x6FB521: add     esi, 0Ch
0x6FB524: push    eax
0x6FB525: mov     ecx, esi
0x6FB527: call    sub_6FB0D0
0x6FB52C: cmp     [esp+20h+Size], ebx
0x6FB530: mov     [esp+20h+var_4], bx
0x6FB535: mov     [esp+20h+var_2], 0FFh
0x6FB53A: jbe     short loc_6FB57B
0x6FB53C: push    edi
0x6FB53D: lea     ecx, [ecx+0]
0x6FB540: push    ebp
0x6FB541: lea     ecx, [esp+28h+var_10]
0x6FB545: call    sub_6FB3B0
0x6FB54A: movzx   edi, word ptr [esi+0Ah]
0x6FB54E: movzx   ecx, word ptr [esi+8]
0x6FB552: cmp     edi, ecx
0x6FB554: jb      short loc_6FB564
0x6FB556: movzx   edx, word ptr [esi+0Eh]
0x6FB55A: add     edx, edi
0x6FB55C: push    edx
0x6FB55D: mov     ecx, esi
0x6FB55F: call    sub_6FB0D0
0x6FB564: lea     eax, [esp+24h+var_10]
0x6FB568: push    eax
0x6FB569: push    edi
0x6FB56A: mov     ecx, esi
0x6FB56C: call    sub_6FAFA0
0x6FB571: add     ebx, 1
0x6FB574: cmp     ebx, [esp+24h+Size]
0x6FB578: jb      short loc_6FB540
0x6FB57A: pop     edi
0x6FB57B: pop     esi
0x6FB57C: pop     ebp
0x6FB57D: pop     ebx
0x6FB57E: add     esp, 14h
0x6FB581: retn    4
