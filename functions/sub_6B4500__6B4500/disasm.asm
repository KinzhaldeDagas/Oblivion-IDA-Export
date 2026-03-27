0x6B4500: mov     eax, [esp+arg_0]
0x6B4504: push    esi
0x6B4505: push    edi
0x6B4506: push    10h
0x6B4508: push    2800h
0x6B450D: push    0
0x6B450F: push    eax
0x6B4510: mov     edi, ecx
0x6B4512: call    sub_431130
0x6B4517: mov     esi, eax
0x6B4519: add     esp, 10h
0x6B451C: test    esi, esi
0x6B451E: jz      short loc_6B4540
0x6B4520: cmp     byte ptr [esi+24h], 0
0x6B4524: mov     edx, [esi]
0x6B4526: mov     ecx, esi
0x6B4528: jz      short loc_6B453A
0x6B452A: mov     eax, [edx+1Ch]
0x6B452D: call    eax
0x6B452F: test    eax, eax
0x6B4531: mov     [edi+0Ch], eax
0x6B4534: jnz     short loc_6B4547
0x6B4536: mov     edx, [esi]
0x6B4538: mov     ecx, esi
0x6B453A: mov     eax, [edx]
0x6B453C: push    1
0x6B453E: call    eax
0x6B4540: pop     edi
0x6B4541: xor     al, al
0x6B4543: pop     esi
0x6B4544: retn    4
0x6B4547: push    eax; Size
0x6B4548: call    FormHeapAlloc
0x6B454D: mov     edx, [edi+0Ch]
0x6B4550: push    1
0x6B4552: lea     ecx, [esp+10h+arg_0]
0x6B4556: push    ecx
0x6B4557: push    edx
0x6B4558: push    eax
0x6B4559: mov     [edi+8], eax
0x6B455C: mov     eax, [esi+4]
0x6B455F: push    esi
0x6B4560: mov     [esp+20h+arg_0], 1
0x6B4568: call    eax
0x6B456A: mov     edx, [esi]
0x6B456C: mov     eax, [edx]
0x6B456E: add     esp, 18h
0x6B4571: push    1
0x6B4573: mov     ecx, esi
0x6B4575: call    eax
0x6B4577: mov     ecx, [edi+0Ch]
0x6B457A: xor     eax, eax
0x6B457C: sub     ecx, 1
0x6B457F: mov     dword ptr [edi], 0
0x6B4585: jz      short loc_6B45AC
0x6B4587: mov     ecx, [edi+8]
0x6B458A: mov     dl, 0FBh ; 'û'
0x6B458C: lea     esp, [esp+0]
0x6B4590: cmp     byte ptr [ecx+eax], 0FFh
0x6B4594: jnz     short loc_6B459F
0x6B4596: cmp     [ecx+eax+1], dl
0x6B459A: jnz     short loc_6B459F
0x6B459C: add     dword ptr [edi], 1
0x6B459F: mov     esi, [edi+0Ch]
0x6B45A2: add     eax, 1
0x6B45A5: sub     esi, 1
0x6B45A8: cmp     eax, esi
0x6B45AA: jb      short loc_6B4590
0x6B45AC: mov     dword ptr [edi+10h], 0
0x6B45B3: pop     edi
0x6B45B4: mov     al, 1
0x6B45B6: pop     esi
0x6B45B7: retn    4
