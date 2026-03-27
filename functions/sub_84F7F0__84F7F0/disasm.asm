0x84F7F0: push    0FFFFFFFFh
0x84F7F2: push    offset SEH_850270
0x84F7F7: mov     eax, large fs:0
0x84F7FD: push    eax
0x84F7FE: sub     esp, 8
0x84F801: push    ebx
0x84F802: push    ebp
0x84F803: push    esi
0x84F804: push    edi
0x84F805: mov     eax, ds:0B30AACh
0x84F80A: xor     eax, esp
0x84F80C: push    eax
0x84F80D: lea     eax, [esp+28h+var_C]
0x84F811: mov     large fs:0, eax
0x84F817: mov     [esp+28h+var_10], ecx
0x84F81B: mov     ebx, ds:0B459C8h
0x84F821: mov     eax, [ebx+24h]
0x84F824: mov     esi, [esp+28h+arg_C]
0x84F828: mov     edi, [eax]
0x84F82A: mov     edx, [esi]
0x84F82C: mov     eax, [edx+88h]
0x84F832: push    0
0x84F834: mov     ecx, esi
0x84F836: mov     [esp+2Ch+var_14], edi
0x84F83A: call    eax
0x84F83C: mov     edi, [edi+4]
0x84F83F: mov     ebp, eax
0x84F841: cmp     edi, ebp
0x84F843: jz      short loc_84F87C
0x84F845: test    edi, edi
0x84F847: jz      short loc_84F865
0x84F849: lea     ecx, [edi+4]
0x84F84C: push    ecx; lpAddend
0x84F84D: call    dword ptr ds:0A2807Ch
0x84F853: test    eax, eax
0x84F855: jnz     short loc_84F865
0x84F857: test    edi, edi
0x84F859: jz      short loc_84F865
0x84F85B: mov     edx, [edi]
0x84F85D: mov     eax, [edx]
0x84F85F: push    1
0x84F861: mov     ecx, edi
0x84F863: call    eax
0x84F865: test    ebp, ebp
0x84F867: mov     edi, [esp+28h+var_14]
0x84F86B: mov     [edi+4], ebp
0x84F86E: jz      short loc_84F880
0x84F870: add     ebp, 4
0x84F873: push    ebp; lpAddend
0x84F874: call    dword ptr ds:0A28078h
0x84F87A: jmp     short loc_84F880
0x84F87C: mov     edi, [esp+28h+var_14]
0x84F880: test    edi, edi
0x84F882: jz      short loc_84F89E
0x84F884: cmp     byte ptr ds:0B42CDDh, 0
0x84F88B: jz      short loc_84F89E
0x84F88D: mov     edx, [esi]
0x84F88F: mov     eax, [edx+78h]
0x84F892: mov     ecx, esi
0x84F894: call    eax
0x84F896: push    eax
0x84F897: mov     ecx, edi
0x84F899: call    sub_7715E0
0x84F89E: mov     ecx, [ebx+24h]
0x84F8A1: mov     edi, [ecx+4]
0x84F8A4: mov     edx, [esi]
0x84F8A6: mov     eax, [edx+88h]
0x84F8AC: push    1
0x84F8AE: mov     ecx, esi
0x84F8B0: mov     [esp+2Ch+var_14], edi
0x84F8B4: call    eax
0x84F8B6: mov     edi, [edi+4]
0x84F8B9: mov     ebp, eax
0x84F8BB: cmp     edi, ebp
0x84F8BD: jz      short loc_84F8F6
0x84F8BF: test    edi, edi
0x84F8C1: jz      short loc_84F8DF
0x84F8C3: lea     ecx, [edi+4]
0x84F8C6: push    ecx; lpAddend
0x84F8C7: call    dword ptr ds:0A2807Ch
0x84F8CD: test    eax, eax
0x84F8CF: jnz     short loc_84F8DF
0x84F8D1: test    edi, edi
0x84F8D3: jz      short loc_84F8DF
0x84F8D5: mov     edx, [edi]
0x84F8D7: mov     eax, [edx]
0x84F8D9: push    1
0x84F8DB: mov     ecx, edi
0x84F8DD: call    eax
0x84F8DF: test    ebp, ebp
0x84F8E1: mov     edi, [esp+28h+var_14]
0x84F8E5: mov     [edi+4], ebp
0x84F8E8: jz      short loc_84F8FA
0x84F8EA: add     ebp, 4
0x84F8ED: push    ebp; lpAddend
0x84F8EE: call    dword ptr ds:0A28078h
0x84F8F4: jmp     short loc_84F8FA
0x84F8F6: mov     edi, [esp+28h+var_14]
0x84F8FA: test    edi, edi
0x84F8FC: jz      short loc_84F918
0x84F8FE: cmp     byte ptr ds:0B42CDDh, 0
0x84F905: jz      short loc_84F918
0x84F907: mov     edx, [esi]
0x84F909: mov     eax, [edx+78h]
0x84F90C: mov     ecx, esi
0x84F90E: call    eax
0x84F910: push    eax
0x84F911: mov     ecx, edi
0x84F913: call    sub_7715E0
0x84F918: mov     ecx, [ebx+24h]
0x84F91B: mov     edi, [ecx+8]
0x84F91E: mov     edx, [esi]
0x84F920: mov     eax, [edx+8Ch]
0x84F926: push    1
0x84F928: mov     ecx, esi
0x84F92A: mov     [esp+2Ch+var_14], edi
0x84F92E: call    eax
0x84F930: test    eax, eax
0x84F932: jz      short loc_84F946
0x84F934: mov     edx, [esi]
0x84F936: mov     eax, [edx+8Ch]
0x84F93C: push    1
0x84F93E: mov     ecx, esi
0x84F940: call    eax
0x84F942: mov     ebp, eax
0x84F944: jmp     short loc_84F95B
0x84F946: test    dword ptr [esi+1Ch], 80h
0x84F94D: mov     ebp, ds:0B430F0h
0x84F953: ja      short loc_84F95B
0x84F955: mov     ebp, ds:0B430DCh
0x84F95B: mov     edi, [edi+4]
0x84F95E: cmp     edi, ebp
0x84F960: jz      short loc_84F999
0x84F962: test    edi, edi
0x84F964: jz      short loc_84F982
0x84F966: lea     ecx, [edi+4]
0x84F969: push    ecx; lpAddend
0x84F96A: call    dword ptr ds:0A2807Ch
0x84F970: test    eax, eax
0x84F972: jnz     short loc_84F982
0x84F974: test    edi, edi
0x84F976: jz      short loc_84F982
0x84F978: mov     edx, [edi]
0x84F97A: mov     eax, [edx]
0x84F97C: push    1
0x84F97E: mov     ecx, edi
0x84F980: call    eax
0x84F982: test    ebp, ebp
0x84F984: mov     edi, [esp+28h+var_14]
0x84F988: mov     [edi+4], ebp
0x84F98B: jz      short loc_84F99D
0x84F98D: add     ebp, 4
0x84F990: push    ebp; lpAddend
0x84F991: call    dword ptr ds:0A28078h
0x84F997: jmp     short loc_84F99D
0x84F999: mov     edi, [esp+28h+var_14]
0x84F99D: test    edi, edi
0x84F99F: jz      short loc_84F9BB
0x84F9A1: cmp     byte ptr ds:0B42CDDh, 0
0x84F9A8: jz      short loc_84F9BB
0x84F9AA: mov     edx, [esi]
0x84F9AC: mov     eax, [edx+78h]
0x84F9AF: mov     ecx, esi
0x84F9B1: call    eax
0x84F9B3: push    eax
0x84F9B4: mov     ecx, edi
0x84F9B6: call    sub_7715E0
0x84F9BB: mov     edi, 1
0x84F9C0: add     [ebx+60h], edi
0x84F9C3: mov     [esp+28h+arg_C], ebx
0x84F9C7: mov     esi, [esp+28h+var_10]
0x84F9CB: mov     edx, [esi+38h]
0x84F9CE: lea     ecx, [esp+28h+arg_C]
0x84F9D2: push    ecx
0x84F9D3: push    edx
0x84F9D4: lea     ecx, [esi+40h]
0x84F9D7: mov     [esp+30h+var_4], 0
0x84F9DF: call    sub_76CE40
0x84F9E4: or      eax, 0FFFFFFFFh
0x84F9E7: add     [ebx+60h], eax
0x84F9EA: mov     [esp+28h+var_4], eax
0x84F9EE: jnz     short loc_84F9F7
0x84F9F0: mov     ecx, ebx
0x84F9F2: call    sub_7604D0
0x84F9F7: add     [esi+38h], edi
0x84F9FA: mov     ecx, dword ptr [esp+28h+var_C]
0x84F9FE: mov     large fs:0, ecx
0x84FA05: pop     ecx
0x84FA06: pop     edi
0x84FA07: pop     esi
0x84FA08: pop     ebp
0x84FA09: pop     ebx
0x84FA0A: add     esp, 14h
0x84FA0D: retn    10h
