0x76E4B0: sub     esp, 14h
0x76E4B3: push    ebx
0x76E4B4: push    ebp
0x76E4B5: push    esi
0x76E4B6: mov     esi, [esp+20h+arg_0]
0x76E4BA: movzx   edx, word ptr [esi+4]
0x76E4BE: mov     ebp, [esi+10h]
0x76E4C1: mov     ecx, [esi+0Ch]
0x76E4C4: mov     ebx, [esi+24h]
0x76E4C7: push    edi
0x76E4C8: mov     di, [esi]
0x76E4CB: sub     di, dx
0x76E4CE: add     di, 1
0x76E4D2: xor     eax, eax
0x76E4D4: cmp     ebp, eax
0x76E4D6: movzx   edi, di
0x76E4D9: mov     [esp+24h+var_14], eax
0x76E4DD: mov     [esp+24h+var_C], ecx
0x76E4E1: mov     [esp+24h+var_10], edi
0x76E4E5: jnz     short loc_76E521
0x76E4E7: xor     edi, edi
0x76E4E9: cmp     [esi+8], ax
0x76E4ED: jbe     loc_76E603
0x76E4F3: mov     eax, [esi+1Ch]
0x76E4F6: push    eax
0x76E4F7: push    0
0x76E4F9: push    ebx
0x76E4FA: call    __memset
0x76E4FF: mov     eax, [esi+1Ch]
0x76E502: add     ebx, [esi+20h]
0x76E505: add     [esp+30h+var_14], eax
0x76E509: add     edi, 1
0x76E50C: add     esp, 0Ch
0x76E50F: cmp     di, [esi+8]
0x76E513: jb      short loc_76E4F6
0x76E515: mov     eax, [esp+24h+var_14]
0x76E519: pop     edi
0x76E51A: pop     esi
0x76E51B: pop     ebp
0x76E51C: pop     ebx
0x76E51D: add     esp, 14h
0x76E520: retn
0x76E521: cmp     ecx, eax
0x76E523: jz      loc_76E5B0
0x76E529: xor     eax, eax
0x76E52B: cmp     [esi+8], ax
0x76E52F: mov     [esp+24h+arg_0], eax
0x76E533: jbe     loc_76E603
0x76E539: movzx   edx, dx
0x76E53C: mov     [esp+24h+var_8], edx
0x76E540: jmp     short loc_76E54A
0x76E542: mov     ecx, [esp+24h+var_C]
0x76E546: mov     eax, [esp+24h+var_4]
0x76E54A: movzx   edx, ax
0x76E54D: movzx   ecx, word ptr [ecx+edx*2]
0x76E551: imul    ecx, [esp+24h+var_8]
0x76E556: mov     edx, [esi+14h]
0x76E559: push    edx; Size
0x76E55A: lea     ecx, [ebp+ecx*4+0]
0x76E55E: push    ecx; Src
0x76E55F: add     eax, 1
0x76E562: push    ebx; Dst
0x76E563: mov     [esp+30h+var_4], eax
0x76E567: call    _memcpy
0x76E56C: mov     eax, [esi+18h]
0x76E56F: add     esp, 0Ch
0x76E572: test    di, di
0x76E575: lea     ebx, [ebx+eax*4]
0x76E578: jbe     short loc_76E58C
0x76E57A: movzx   edx, di
0x76E57D: mov     edi, ebx
0x76E57F: mov     ecx, edx
0x76E581: xor     eax, eax
0x76E583: rep stosd
0x76E585: mov     edi, [esp+24h+var_10]
0x76E589: lea     ebx, [ebx+edx*4]
0x76E58C: mov     eax, [esp+24h+arg_0]
0x76E590: mov     ecx, [esi+1Ch]
0x76E593: add     [esp+24h+var_14], ecx
0x76E597: add     eax, 1
0x76E59A: cmp     ax, [esi+8]
0x76E59E: mov     [esp+24h+arg_0], eax
0x76E5A2: jb      short loc_76E542
0x76E5A4: mov     eax, [esp+24h+var_14]
0x76E5A8: pop     edi
0x76E5A9: pop     esi
0x76E5AA: pop     ebp
0x76E5AB: pop     ebx
0x76E5AC: add     esp, 14h
0x76E5AF: retn
0x76E5B0: cmp     [esi+8], ax
0x76E5B4: mov     [esp+24h+arg_0], eax
0x76E5B8: jbe     short loc_76E603
0x76E5BA: lea     ebx, [ebx+0]
0x76E5C0: mov     edx, [esi+14h]
0x76E5C3: push    edx; Size
0x76E5C4: push    ebp; Src
0x76E5C5: push    ebx; Dst
0x76E5C6: call    _memcpy
0x76E5CB: mov     edx, [esi+14h]
0x76E5CE: add     esp, 0Ch
0x76E5D1: add     edx, ebx
0x76E5D3: test    di, di
0x76E5D6: jbe     short loc_76E5E5
0x76E5D8: movzx   ecx, di
0x76E5DB: xor     eax, eax
0x76E5DD: mov     edi, edx
0x76E5DF: rep stosd
0x76E5E1: mov     edi, [esp+24h+var_10]
0x76E5E5: mov     eax, [esi+1Ch]
0x76E5E8: add     [esp+24h+var_14], eax
0x76E5EC: mov     eax, [esp+24h+arg_0]
0x76E5F0: add     ebp, [esi+18h]
0x76E5F3: add     ebx, [esi+20h]
0x76E5F6: add     eax, 1
0x76E5F9: cmp     ax, [esi+8]
0x76E5FD: mov     [esp+24h+arg_0], eax
0x76E601: jb      short loc_76E5C0
0x76E603: mov     eax, [esp+24h+var_14]
0x76E607: pop     edi
0x76E608: pop     esi
0x76E609: pop     ebp
0x76E60A: pop     ebx
0x76E60B: add     esp, 14h
0x76E60E: retn
