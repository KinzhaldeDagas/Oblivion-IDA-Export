0x552730: sub     esp, 8
0x552733: push    ebx
0x552734: mov     ebx, [esp+0Ch+arg_0]
0x552738: push    ebp
0x552739: push    esi
0x55273A: mov     esi, ecx
0x55273C: mov     eax, [esi]
0x55273E: mov     ecx, [esi+4]
0x552741: push    eax
0x552742: push    ecx
0x552743: xor     ebp, ebp
0x552745: mov     ecx, ebx
0x552747: mov     [esp+1Ch+var_8], ebp
0x55274B: call    sub_552240
0x552750: cmp     [esi], ebp
0x552752: jbe     short loc_5527C3
0x552754: push    edi
0x552755: xor     edi, edi
0x552757: cmp     [esi+4], edi
0x55275A: jbe     short loc_5527BB
0x55275C: lea     esp, [esp+0]
0x552760: mov     eax, [esi+0Ch]
0x552763: test    eax, eax
0x552765: jz      short loc_552771
0x552767: mov     edx, [esi+10h]
0x55276A: sub     edx, eax
0x55276C: sar     edx, 2
0x55276F: jnz     short loc_552776
0x552771: call    __invalid_parameter_noinfo
0x552776: mov     eax, [esi+4]
0x552779: mov     ecx, [esi+0Ch]
0x55277C: imul    eax, ebp
0x55277F: lea     edx, [ecx+eax*4]
0x552782: mov     eax, [ebx+0Ch]
0x552785: test    eax, eax
0x552787: mov     [esp+18h+var_8], edx
0x55278B: jz      short loc_552797
0x55278D: mov     ecx, [ebx+10h]
0x552790: sub     ecx, eax
0x552792: sar     ecx, 2
0x552795: jnz     short loc_55279C
0x552797: call    __invalid_parameter_noinfo
0x55279C: mov     edx, [ebx+4]
0x55279F: mov     eax, [ebx+0Ch]
0x5527A2: imul    edx, edi
0x5527A5: mov     ecx, [esp+18h+var_8]
0x5527A9: lea     eax, [eax+edx*4]
0x5527AC: add     edi, 1
0x5527AF: fld     dword ptr [ecx+edi*4-4]
0x5527B3: fstp    dword ptr [eax+ebp*4]
0x5527B6: cmp     edi, [esi+4]
0x5527B9: jb      short loc_552760
0x5527BB: add     ebp, 1
0x5527BE: cmp     ebp, [esi]
0x5527C0: jb      short loc_552755
0x5527C2: pop     edi
0x5527C3: pop     esi
0x5527C4: pop     ebp
0x5527C5: mov     eax, ebx
0x5527C7: pop     ebx
0x5527C8: add     esp, 8
0x5527CB: retn    4
