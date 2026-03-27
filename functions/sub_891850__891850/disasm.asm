0x891850: push    ebp
0x891851: mov     ebp, esp
0x891853: and     esp, 0FFFFFFF0h
0x891856: push    ecx
0x891857: cmp     dword ptr [ecx+214h], 1Eh
0x89185E: push    ebx
0x89185F: push    esi
0x891860: push    edi
0x891861: mov     [esp+10h+var_4], ecx
0x891865: jz      loc_891996
0x89186B: mov     ebx, [ebp+arg_0]
0x89186E: mov     ecx, [ebx+28h]
0x891871: test    ecx, ecx
0x891873: mov     edi, 1Fh
0x891878: jz      loc_891996
0x89187E: mov     edx, [ecx+0Ch]
0x891881: test    edx, edx
0x891883: mov     eax, ecx
0x891885: jz      short loc_891890
0x891887: mov     eax, edx
0x891889: mov     edx, [eax+0Ch]
0x89188C: test    edx, edx
0x89188E: jnz     short loc_891887
0x891890: mov     esi, [eax+1Ch]
0x891893: mov     eax, [esp+10h+var_4]
0x891897: and     esi, 3Fh
0x89189A: mov     [eax+218h], esi
0x8918A0: mov     edx, [ecx+0Ch]
0x8918A3: test    edx, edx
0x8918A5: mov     eax, ecx
0x8918A7: jz      short loc_8918B9
0x8918A9: lea     esp, [esp+0]
0x8918B0: mov     eax, edx
0x8918B2: mov     edx, [eax+0Ch]
0x8918B5: test    edx, edx
0x8918B7: jnz     short loc_8918B0
0x8918B9: cmp     byte ptr [eax+18h], 1
0x8918BD: jnz     short loc_8918D1
0x8918BF: mov     edx, [eax+10h]
0x8918C2: add     edx, eax
0x8918C4: jz      short loc_8918D1
0x8918C6: mov     edx, [edx+50h]
0x8918C9: add     edx, 0D0h ; 'Ð'
0x8918CF: jmp     short loc_8918D6
0x8918D1: mov     edx, offset stru_BA7A40
0x8918D6: movaps  xmm0, xmmword ptr [edx]
0x8918D9: mov     edx, [esp+10h+var_4]
0x8918DD: movaps  xmmword ptr [edx+220h], xmm0
0x8918E4: cmp     dword ptr [ebx+2Ch], 0FFFFFFFFh
0x8918E8: jnz     short loc_89190C
0x8918EA: mov     ecx, [ecx]
0x8918EC: test    ecx, ecx
0x8918EE: jz      short loc_8918F5
0x8918F0: mov     eax, [ecx+8]
0x8918F3: jmp     short loc_8918F7
0x8918F5: xor     eax, eax
0x8918F7: test    eax, eax
0x8918F9: jz      short loc_891952
0x8918FB: mov     eax, [eax+10h]
0x8918FE: cmp     eax, 1Eh
0x891901: jl      short loc_891908
0x891903: mov     eax, 1Eh
0x891908: mov     edi, eax
0x89190A: jmp     short loc_891952
0x89190C: cmp     esi, 11h
0x89190F: jz      short loc_891952
0x891911: push    ecx
0x891912: call    sub_8AFBE0
0x891917: mov     esi, eax
0x891919: add     esp, 4
0x89191C: test    esi, esi
0x89191E: jz      short loc_89194E
0x891920: mov     edx, [esi]
0x891922: mov     eax, [ebx+2Ch]
0x891925: mov     edx, [edx+9Ch]
0x89192B: push    eax
0x89192C: mov     ecx, esi
0x89192E: call    edx
0x891930: cmp     eax, 1Eh
0x891933: jge     short loc_891949
0x891935: mov     ecx, [ebx+2Ch]
0x891938: mov     eax, [esi]
0x89193A: mov     edx, [eax+9Ch]
0x891940: push    ecx
0x891941: mov     ecx, esi
0x891943: call    edx
0x891945: mov     edi, eax
0x891947: jmp     short loc_89194E
0x891949: mov     edi, 1Eh
0x89194E: mov     edx, [esp+10h+var_4]
0x891952: cmp     dword ptr [edx+214h], 1Fh
0x891959: jz      short loc_891960
0x89195B: cmp     edi, 1Eh
0x89195E: jnz     short loc_891996
0x891960: test    byte ptr [edx+1F6h], 1
0x891967: mov     [edx+214h], edi
0x89196D: jnz     short loc_891974
0x89196F: cmp     edi, 1Eh
0x891972: jnz     short loc_891996
0x891974: cmp     edi, 1Eh
0x891977: jnz     short loc_89198C
0x891979: or      dword ptr [edx+1F4h], 20000h
0x891983: pop     edi
0x891984: pop     esi
0x891985: pop     ebx
0x891986: mov     esp, ebp
0x891988: pop     ebp
0x891989: retn    4
0x89198C: and     dword ptr [edx+1F4h], 0FFFDFFFFh
0x891996: pop     edi
0x891997: pop     esi
0x891998: pop     ebx
0x891999: mov     esp, ebp
0x89199B: pop     ebp
0x89199C: retn    4
