0x6C5860: push    0FFFFFFFFh
0x6C5862: push    offset SEH_6C5860
0x6C5867: mov     eax, large fs:0
0x6C586D: push    eax
0x6C586E: sub     esp, 8
0x6C5871: push    ebx
0x6C5872: push    ebp
0x6C5873: push    esi
0x6C5874: push    edi
0x6C5875: mov     eax, ds:0B30AACh
0x6C587A: xor     eax, esp
0x6C587C: push    eax
0x6C587D: lea     eax, [esp+28h+var_C]
0x6C5881: mov     large fs:0, eax
0x6C5887: mov     ebx, ecx
0x6C5889: mov     eax, [esp+28h+arg_4]
0x6C588D: test    eax, eax
0x6C588F: jz      short loc_6C589A
0x6C5891: mov     eax, [eax+0Ch]
0x6C5894: mov     [esp+28h+var_14], eax
0x6C5898: jmp     short loc_6C58A5
0x6C589A: mov     ecx, [esp+28h+arg_0]
0x6C589E: mov     edx, [ecx+0Ch]
0x6C58A1: mov     [esp+28h+var_14], edx
0x6C58A5: mov     eax, [ebx+78h]
0x6C58A8: xor     esi, esi
0x6C58AA: test    eax, eax
0x6C58AC: jbe     short loc_6C5906
0x6C58AE: lea     ebp, [ebx+70h]
0x6C58B1: mov     eax, [ebp+0]
0x6C58B4: mov     eax, [eax+esi*4]
0x6C58B7: cmp     dword ptr [eax+44h], 0
0x6C58BB: jnz     short loc_6C58FE
0x6C58BD: mov     ecx, [esp+28h+var_14]
0x6C58C1: cmp     [eax+0Ch], ecx
0x6C58C4: jnb     short loc_6C593D
0x6C58C6: push    eax
0x6C58C7: lea     edx, [esp+2Ch+var_10]
0x6C58CB: push    edx
0x6C58CC: mov     ecx, ebx
0x6C58CE: call    sub_6C4A10
0x6C58D3: mov     edi, [esp+28h+var_10]
0x6C58D7: test    edi, edi
0x6C58D9: jz      short loc_6C58F3
0x6C58DB: lea     eax, [edi+4]
0x6C58DE: push    eax; lpAddend
0x6C58DF: call    dword ptr ds:0A2807Ch
0x6C58E5: test    eax, eax
0x6C58E7: jnz     short loc_6C58F3
0x6C58E9: mov     edx, [edi]
0x6C58EB: mov     eax, [edx]
0x6C58ED: push    1
0x6C58EF: mov     ecx, edi
0x6C58F1: call    eax
0x6C58F3: push    esi
0x6C58F4: mov     ecx, ebp
0x6C58F6: call    sub_6C4810
0x6C58FB: sub     esi, 1
0x6C58FE: add     esi, 1
0x6C5901: cmp     esi, [ebx+78h]
0x6C5904: jb      short loc_6C58B1
0x6C5906: push    68h ; 'h'; Size
0x6C5908: call    FormHeapAlloc
0x6C590D: add     esp, 4
0x6C5910: mov     [esp+28h+var_10], eax
0x6C5914: test    eax, eax
0x6C5916: mov     [esp+28h+var_4], 0
0x6C591E: jz      loc_6C59AB
0x6C5924: mov     ecx, [esp+28h+var_14]
0x6C5928: push    0; int
0x6C592A: push    0Ch; int
0x6C592C: push    ecx; int
0x6C592D: push    offset a__tempblendseq; "__TempBlendSequence__"
0x6C5932: mov     ecx, eax
0x6C5934: call    sub_6C7FB0
0x6C5939: mov     esi, eax
0x6C593B: jmp     short loc_6C59AD
0x6C593D: push    eax
0x6C593E: lea     ecx, [esp+2Ch+var_10]
0x6C5942: push    ecx
0x6C5943: mov     ecx, ebx
0x6C5945: mov     esi, eax
0x6C5947: call    sub_6C4A10
0x6C594C: mov     edi, [esp+28h+var_10]
0x6C5950: test    edi, edi
0x6C5952: jz      short loc_6C596C
0x6C5954: lea     edx, [edi+4]
0x6C5957: push    edx; lpAddend
0x6C5958: call    dword ptr ds:0A2807Ch
0x6C595E: test    eax, eax
0x6C5960: jnz     short loc_6C596C
0x6C5962: mov     eax, [edi]
0x6C5964: mov     edx, [eax]
0x6C5966: push    1
0x6C5968: mov     ecx, edi
0x6C596A: call    edx
0x6C596C: mov     eax, [esp+28h+arg_4]
0x6C5970: mov     ecx, [esp+28h+var_14]
0x6C5974: push    eax
0x6C5975: push    ecx
0x6C5976: mov     ecx, [esp+30h+arg_0]
0x6C597A: push    esi
0x6C597B: call    sub_6C9F10
0x6C5980: mov     ecx, esi
0x6C5982: call    sub_6C78B0
0x6C5987: push    0
0x6C5989: push    0
0x6C598B: push    esi
0x6C598C: mov     ecx, ebx
0x6C598E: call    sub_6C5760
0x6C5993: mov     eax, esi
0x6C5995: mov     ecx, dword ptr [esp+28h+var_C]
0x6C5999: mov     large fs:0, ecx
0x6C59A0: pop     ecx
0x6C59A1: pop     edi
0x6C59A2: pop     esi
0x6C59A3: pop     ebp
0x6C59A4: pop     ebx
0x6C59A5: add     esp, 14h
0x6C59A8: retn    8
0x6C59AB: xor     esi, esi
0x6C59AD: test    esi, esi
0x6C59AF: mov     [esp+28h+var_10], esi
0x6C59B3: jz      short loc_6C59BF
0x6C59B5: lea     edx, [esi+4]
0x6C59B8: push    edx; lpAddend
0x6C59B9: call    dword ptr ds:0A28078h
0x6C59BF: lea     eax, [esp+28h+var_10]
0x6C59C3: push    eax
0x6C59C4: lea     ecx, [ebx+70h]
0x6C59C7: mov     [esp+2Ch+var_4], 1
0x6C59CF: call    sub_6C4790
0x6C59D4: test    esi, esi
0x6C59D6: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6C59DE: jz      short loc_6C596C
0x6C59E0: lea     ecx, [esi+4]
0x6C59E3: push    ecx; lpAddend
0x6C59E4: call    dword ptr ds:0A2807Ch
0x6C59EA: test    eax, eax
0x6C59EC: jnz     loc_6C596C
0x6C59F2: mov     edx, [esi]
0x6C59F4: mov     eax, [edx]
0x6C59F6: push    1
0x6C59F8: mov     ecx, esi
0x6C59FA: call    eax
0x6C59FC: jmp     loc_6C596C
