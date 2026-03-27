0x70A840: push    0FFFFFFFFh
0x70A842: push    offset SEH_7B2A00
0x70A847: mov     eax, large fs:0
0x70A84D: push    eax
0x70A84E: push    esi
0x70A84F: push    edi
0x70A850: mov     eax, ds:0B30AACh
0x70A855: xor     eax, esp
0x70A857: push    eax
0x70A858: lea     eax, [esp+18h+var_C]
0x70A85C: mov     large fs:0, eax
0x70A862: mov     esi, ecx
0x70A864: mov     eax, [esp+18h+arg_0]
0x70A868: push    1
0x70A86A: push    eax
0x70A86B: lea     ecx, [esp+20h+arg_0]
0x70A86F: push    ecx
0x70A870: mov     ecx, esi
0x70A872: call    sub_7077D0
0x70A877: xor     edi, edi
0x70A879: cmp     [esi+0B6h], di
0x70A880: mov     [esp+18h+var_4], 0
0x70A888: jbe     short loc_70A8B7
0x70A88A: lea     ebx, [ebx+0]
0x70A890: mov     edx, [esi+0B0h]
0x70A896: mov     ecx, [edx+edi*4]
0x70A899: test    ecx, ecx
0x70A89B: jz      short loc_70A8A9
0x70A89D: mov     eax, [ecx]
0x70A89F: mov     edx, [esp+18h+arg_0]
0x70A8A3: mov     eax, [eax+6Ch]
0x70A8A6: push    edx
0x70A8A7: call    eax
0x70A8A9: movzx   ecx, word ptr [esi+0B6h]
0x70A8B0: add     edi, 1
0x70A8B3: cmp     edi, ecx
0x70A8B5: jb      short loc_70A890
0x70A8B7: mov     esi, [esp+18h+arg_0]
0x70A8BB: test    esi, esi
0x70A8BD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x70A8C5: jz      short loc_70A8E3
0x70A8C7: lea     edx, [esi+4]
0x70A8CA: push    edx; lpAddend
0x70A8CB: call    dword ptr ds:0A2807Ch
0x70A8D1: test    eax, eax
0x70A8D3: jnz     short loc_70A8E3
0x70A8D5: test    esi, esi
0x70A8D7: jz      short loc_70A8E3
0x70A8D9: mov     eax, [esi]
0x70A8DB: mov     edx, [eax]
0x70A8DD: push    1
0x70A8DF: mov     ecx, esi
0x70A8E1: call    edx
0x70A8E3: mov     ecx, dword ptr [esp+18h+var_C]
0x70A8E7: mov     large fs:0, ecx
0x70A8EE: pop     ecx
0x70A8EF: pop     edi
0x70A8F0: pop     esi
0x70A8F1: add     esp, 0Ch
0x70A8F4: retn    4
