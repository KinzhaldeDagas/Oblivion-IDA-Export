0x7260B0: mov     eax, [esp+arg_0]
0x7260B4: push    ebx
0x7260B5: mov     ebx, [esp+4+Src]
0x7260B9: push    ebp
0x7260BA: mov     ebp, ecx
0x7260BC: movzx   ecx, word ptr [ebp+26h]
0x7260C0: cmp     eax, ecx
0x7260C2: push    esi
0x7260C3: jnb     short loc_7260D3
0x7260C5: mov     edx, [ebp+20h]
0x7260C8: mov     esi, [edx+eax*4]
0x7260CB: test    esi, esi
0x7260CD: mov     [esp+0Ch+Src], esi
0x7260D1: jnz     short loc_7260EF
0x7260D3: mov     eax, [ebp+0]
0x7260D6: mov     edx, [eax+50h]
0x7260D9: mov     ecx, ebp
0x7260DB: call    edx
0x7260DD: mov     esi, eax
0x7260DF: test    esi, esi
0x7260E1: mov     [esp+0Ch+Src], esi
0x7260E5: jnz     short loc_726106
0x7260E7: pop     esi
0x7260E8: pop     ebp
0x7260E9: xor     al, al
0x7260EB: pop     ebx
0x7260EC: retn    10h
0x7260EF: cmp     [esi+4], ebx
0x7260F2: jz      short loc_726106
0x7260F4: mov     eax, [esi]
0x7260F6: mov     edx, [eax+0Ch]
0x7260F9: push    0
0x7260FB: mov     ecx, esi
0x7260FD: call    edx
0x7260FF: mov     dword ptr [esi+8], 0
0x726106: cmp     dword ptr [esi+8], 0
0x72610A: push    edi
0x72610B: jnz     short loc_726155
0x72610D: cmp     [esp+10h+arg_C], 0
0x726112: jz      short loc_72614B
0x726114: cmp     word ptr [ebp+0Ch], 40h ; '@'
0x726119: push    ebx
0x72611A: setb    al
0x72611D: mov     [esi+0Dh], al
0x726120: mov     edx, [esi]
0x726122: mov     eax, [edx]
0x726124: mov     ecx, esi
0x726126: call    eax
0x726128: mov     edi, eax
0x72612A: mov     eax, [esp+0Ch+Src]
0x72612E: test    eax, eax
0x726130: jz      short loc_72613D
0x726132: push    ebx; Size
0x726133: push    eax; Src
0x726134: push    edi; Dst
0x726135: call    _memcpy
0x72613A: add     esp, 0Ch
0x72613D: mov     edx, [esi]
0x72613F: mov     eax, [edx+4]
0x726142: push    0
0x726144: push    edi
0x726145: mov     ecx, esi
0x726147: call    eax
0x726149: jmp     short loc_72614F
0x72614B: mov     edi, dword ptr [esp+10h+arg_4]
0x72614F: mov     [esi+4], ebx
0x726152: mov     [esi+8], edi
0x726155: movzx   ecx, word ptr [ebp+24h]
0x726159: mov     ebx, [esp+10h+arg_0]
0x72615D: cmp     ebx, ecx
0x72615F: lea     edi, [ebp+1Ch]
0x726162: jb      short loc_726172
0x726164: movzx   edx, word ptr [edi+0Eh]
0x726168: add     edx, ebx
0x72616A: push    edx
0x72616B: mov     ecx, edi
0x72616D: call    NiTArray_SetSize
0x726172: lea     eax, [esp+10h+Src]
0x726176: push    eax
0x726177: push    ebx
0x726178: mov     ecx, edi
0x72617A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72617F: mov     cl, [esp+10h+arg_C]
0x726183: pop     edi
0x726184: mov     [esi+0Ch], cl
0x726187: pop     esi
0x726188: pop     ebp
0x726189: mov     al, 1
0x72618B: pop     ebx
0x72618C: retn    10h
