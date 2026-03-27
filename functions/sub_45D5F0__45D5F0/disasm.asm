0x45D5F0: push    0FFFFFFFFh
0x45D5F2: push    offset SEH_737330
0x45D5F7: mov     eax, large fs:0
0x45D5FD: push    eax
0x45D5FE: sub     esp, 64h
0x45D601: push    ebx
0x45D602: push    ebp
0x45D603: push    esi
0x45D604: push    edi
0x45D605: mov     eax, ds:0B30AACh
0x45D60A: xor     eax, esp
0x45D60C: push    eax; ArgList
0x45D60D: lea     eax, [esp+84h+var_C]
0x45D611: mov     large fs:0, eax
0x45D617: mov     esi, ecx
0x45D619: mov     edi, [esp+84h+arg_4]
0x45D620: push    1
0x45D622: push    edi
0x45D623: mov     ecx, offset FormHeap
0x45D628: call    j_MemoryHeap_Alloc
0x45D62D: test    eax, eax
0x45D62F: mov     [esi+14h], eax
0x45D632: jnz     short loc_45D641
0x45D634: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x45D639: call    sub_404EC0
0x45D63E: add     esp, 4
0x45D641: mov     eax, [esi+14h]
0x45D644: mov     ebx, [esp+84h+arg_0]
0x45D64B: mov     edx, [ebx+4]
0x45D64E: push    1
0x45D650: lea     ecx, [esp+88h+arg_4]
0x45D657: push    ecx
0x45D658: push    edi
0x45D659: push    eax
0x45D65A: push    ebx
0x45D65B: mov     [esp+98h+var_70], eax
0x45D65F: mov     [esp+98h+arg_4], 1
0x45D66A: call    edx
0x45D66C: mov     eax, ds:0B33B00h
0x45D671: mov     al, [eax+7Ch]
0x45D674: mov     ecx, [esp+98h+arg_8]
0x45D67B: add     esp, 14h
0x45D67E: cmp     al, 38h ; '8'
0x45D680: jb      short loc_45D693
0x45D682: mov     eax, [esi+14h]
0x45D685: mov     edx, [eax]
0x45D687: add     eax, 4
0x45D68A: test    ecx, ecx
0x45D68C: mov     [esi+14h], eax
0x45D68F: jz      short loc_45D693
0x45D691: mov     [ecx], edx
0x45D693: mov     edx, ds:0B33B00h
0x45D699: cmp     byte ptr [edx+7Ch], 38h ; '8'
0x45D69D: jnb     short loc_45D6A9
0x45D69F: test    ecx, ecx
0x45D6A1: jz      short loc_45D6A9
0x45D6A3: mov     dword ptr [ecx], 0
0x45D6A9: mov     eax, [esi+14h]
0x45D6AC: mov     cl, [eax]
0x45D6AE: mov     edx, [esp+84h+Dst]
0x45D6B5: add     eax, 1
0x45D6B8: test    edx, edx
0x45D6BA: mov     [esi+14h], eax
0x45D6BD: jz      short loc_45D6D2
0x45D6BF: movzx   edi, cl
0x45D6C2: push    edi; Size
0x45D6C3: push    eax; Src
0x45D6C4: push    edx; Dst
0x45D6C5: call    _memcpy
0x45D6CA: add     esp, 0Ch
0x45D6CD: add     [esi+14h], edi
0x45D6D0: jmp     short loc_45D6DA
0x45D6D2: movzx   ecx, cl
0x45D6D5: add     eax, ecx
0x45D6D7: mov     [esi+14h], eax
0x45D6DA: mov     eax, ds:0B33B00h
0x45D6DF: cmp     byte ptr [eax+7Ch], 34h ; '4'
0x45D6E3: mov     [esp+84h+arg_4], 0
0x45D6EE: jb      short loc_45D6FE
0x45D6F0: mov     eax, [esi+14h]
0x45D6F3: mov     cx, [eax]
0x45D6F6: add     eax, 2
0x45D6F9: mov     [esi+14h], eax
0x45D6FC: jmp     short loc_45D706
0x45D6FE: mov     cx, word ptr [esp+84h+arg_4]
0x45D706: mov     eax, [esp+84h+arg_10]
0x45D70D: test    eax, eax
0x45D70F: jz      short loc_45D714
0x45D711: mov     [eax], cx
0x45D714: mov     ecx, [esi+14h]
0x45D717: mov     al, [ecx]
0x45D719: mov     edx, [esp+84h+arg_14]
0x45D720: add     ecx, 1
0x45D723: test    edx, edx
0x45D725: mov     [esi+14h], ecx
0x45D728: jz      short loc_45D757
0x45D72A: test    al, al
0x45D72C: jz      short loc_45D741
0x45D72E: movzx   edi, al
0x45D731: push    edi; Size
0x45D732: push    ecx; Src
0x45D733: push    edx; Dst
0x45D734: call    _memcpy
0x45D739: add     esp, 0Ch
0x45D73C: add     [esi+14h], edi
0x45D73F: jmp     short loc_45D763
0x45D741: mov     ecx, ds:0B38728h
0x45D747: mov     al, [ecx]
0x45D749: mov     [edx], al
0x45D74B: add     ecx, 1
0x45D74E: add     edx, 1
0x45D751: test    al, al
0x45D753: jnz     short loc_45D747
0x45D755: jmp     short loc_45D763
0x45D757: test    al, al
0x45D759: jz      short loc_45D763
0x45D75B: movzx   eax, al
0x45D75E: add     ecx, eax
0x45D760: mov     [esi+14h], ecx
0x45D763: mov     eax, [esi+14h]
0x45D766: mov     ecx, [eax]
0x45D768: add     eax, 4
0x45D76B: mov     [esi+14h], eax
0x45D76E: mov     eax, [esp+84h+arg_18]
0x45D775: test    eax, eax
0x45D777: mov     [esp+84h+arg_4], ecx
0x45D77E: jz      short loc_45D789
0x45D780: fld     [esp+84h+arg_4]
0x45D787: fstp    dword ptr [eax]
0x45D789: mov     edx, ds:0B33B00h
0x45D78F: xor     ecx, ecx
0x45D791: cmp     byte ptr [edx+7Ch], 1Dh
0x45D795: jb      short loc_45D7A2
0x45D797: mov     eax, [esi+14h]
0x45D79A: mov     ecx, [eax]
0x45D79C: add     eax, 4
0x45D79F: mov     [esi+14h], eax
0x45D7A2: mov     eax, [esp+84h+arg_20]
0x45D7A9: test    eax, eax
0x45D7AB: jz      short loc_45D7AF
0x45D7AD: mov     [eax], ecx
0x45D7AF: mov     eax, ds:0B33B00h
0x45D7B4: xor     ecx, ecx
0x45D7B6: cmp     byte ptr [eax+7Ch], 38h ; '8'
0x45D7BA: mov     edx, ecx
0x45D7BC: mov     edi, ecx
0x45D7BE: mov     ebp, ecx
0x45D7C0: jb      short loc_45D7D6
0x45D7C2: mov     eax, [esi+14h]
0x45D7C5: mov     ecx, [eax]
0x45D7C7: mov     edx, [eax+4]
0x45D7CA: mov     edi, [eax+8]
0x45D7CD: mov     ebp, [eax+0Ch]
0x45D7D0: add     eax, 10h
0x45D7D3: mov     [esi+14h], eax
0x45D7D6: mov     eax, ds:0B33B00h
0x45D7DB: cmp     byte ptr [eax+7Ch], 38h ; '8'
0x45D7DF: jnb     short loc_45D7F8
0x45D7E1: lea     ecx, [esp+84h+LocalTime]
0x45D7E5: push    ecx; lpLocalTime
0x45D7E6: mov     ecx, ebx
0x45D7E8: call    sub_4301A0
0x45D7ED: mov     ecx, [eax]
0x45D7EF: mov     edx, [eax+4]
0x45D7F2: mov     edi, [eax+8]
0x45D7F5: mov     ebp, [eax+0Ch]
0x45D7F8: mov     eax, [esp+84h+arg_1C]
0x45D7FF: test    eax, eax
0x45D801: jz      short loc_45D80E
0x45D803: mov     [eax], ecx
0x45D805: mov     [eax+4], edx
0x45D808: mov     [eax+8], edi
0x45D80B: mov     [eax+0Ch], ebp
0x45D80E: mov     eax, [esi+14h]
0x45D811: mov     ecx, [eax]
0x45D813: add     eax, 4
0x45D816: xor     edi, edi
0x45D818: test    ecx, ecx
0x45D81A: mov     [esi+14h], eax
0x45D81D: jz      loc_45D8EE
0x45D823: mov     edx, [esp+84h+arg_24]
0x45D82A: test    edx, edx
0x45D82C: jz      loc_45D8E9
0x45D832: mov     ebx, [eax]
0x45D834: add     eax, 4
0x45D837: mov     [esi+14h], eax
0x45D83A: mov     edi, [eax]
0x45D83C: add     eax, 4
0x45D83F: mov     [esi+14h], eax
0x45D842: mov     [edx], edi
0x45D844: mov     edx, ds:0B33B00h
0x45D84A: cmp     byte ptr [edx+7Ch], 2Eh ; '.'
0x45D84E: jnb     short loc_45D854
0x45D850: add     dword ptr [esi+14h], 24h ; '$'
0x45D854: push    offset unk_B25E48
0x45D859: lea     ecx, [esp+88h+var_50]
0x45D85D: call    sub_70F010
0x45D862: push    70h ; 'p'; Size
0x45D864: call    FormHeapAlloc
0x45D869: add     esp, 4
0x45D86C: mov     [esp+84h+arg_4], eax
0x45D873: xor     ebp, ebp
0x45D875: cmp     eax, ebp
0x45D877: mov     [esp+84h+var_4], ebp
0x45D87E: jz      short loc_45D894
0x45D880: push    1
0x45D882: push    1
0x45D884: lea     ecx, [esp+8Ch+var_50]
0x45D888: push    ecx
0x45D889: push    ebx
0x45D88A: push    ebx
0x45D88B: mov     ecx, eax
0x45D88D: call    NiPixelData__NiPixelData
0x45D892: mov     ebp, eax
0x45D894: mov     eax, [ebp+5Ch]
0x45D897: imul    edi, ebx
0x45D89A: mov     ecx, [eax]
0x45D89C: mov     edx, [esi+14h]
0x45D89F: add     ecx, [ebp+50h]
0x45D8A2: lea     edi, [edi+edi*2]
0x45D8A5: push    edi; Size
0x45D8A6: push    edx; Src
0x45D8A7: push    ecx; Dst
0x45D8A8: mov     [esp+90h+var_4], 0FFFFFFFFh
0x45D8B3: call    _memcpy
0x45D8B8: add     [esi+14h], edi
0x45D8BB: lea     edx, [esp+90h+a2]
0x45D8BF: xor     eax, eax
0x45D8C1: push    edx; a2
0x45D8C2: push    ebp; a1
0x45D8C3: mov     [esp+98h+a2], 2
0x45D8CB: mov     [esp+98h+var_64], eax
0x45D8CF: mov     [esp+98h+var_68], eax
0x45D8D3: call    NiSourceTexture__LoadTexturePixelData
0x45D8D8: mov     edi, eax
0x45D8DA: add     esp, 14h
0x45D8DD: lea     eax, [edi+4]
0x45D8E0: push    eax; lpAddend
0x45D8E1: call    dword ptr ds:0A28078h
0x45D8E7: jmp     short loc_45D8EE
0x45D8E9: add     eax, ecx
0x45D8EB: mov     [esi+14h], eax
0x45D8EE: mov     ecx, [esp+84h+var_70]
0x45D8F2: push    ecx; void *
0x45D8F3: mov     ecx, offset FormHeap
0x45D8F8: call    MemoryHeap_Free_checked
0x45D8FD: mov     dword ptr [esi+14h], 0
0x45D904: mov     eax, edi
0x45D906: mov     ecx, [esp+84h+var_C]
0x45D90A: mov     large fs:0, ecx
0x45D911: pop     ecx
0x45D912: pop     edi
0x45D913: pop     esi
0x45D914: pop     ebp
0x45D915: pop     ebx
0x45D916: add     esp, 70h
0x45D919: retn    28h ; '('
