0x8E7850: push    ecx
0x8E7851: push    ebx
0x8E7852: mov     ebx, [esp+8+arg_0]
0x8E7856: push    ebp
0x8E7857: mov     ebp, [esp+0Ch+arg_4]
0x8E785B: push    esi
0x8E785C: mov     esi, [ebx+10h]
0x8E785F: mov     al, [esi+ebx+91h]
0x8E7866: push    edi
0x8E7867: mov     edi, [ebp+10h]
0x8E786A: add     esi, ebx
0x8E786C: add     edi, ebp
0x8E786E: test    al, al
0x8E7870: jnz     short loc_8E7892
0x8E7872: mov     al, [edi+91h]
0x8E7878: test    al, al
0x8E787A: jnz     short loc_8E7892
0x8E787C: mov     eax, [esi+54h]
0x8E787F: cmp     eax, [edi+54h]
0x8E7882: jz      short loc_8E7892
0x8E7884: mov     ecx, [esi+8]
0x8E7887: push    edi
0x8E7888: push    esi
0x8E7889: push    ecx
0x8E788A: call    sub_8CD320
0x8E788F: add     esp, 0Ch
0x8E7892: mov     eax, [esi+54h]
0x8E7895: mov     ecx, [edi+54h]
0x8E7898: mov     edx, 0FFFFh
0x8E789D: cmp     [eax+20h], dx
0x8E78A1: jnz     short loc_8E78AD
0x8E78A3: cmp     [ecx+20h], dx
0x8E78A7: mov     [esp+14h+arg_0], ecx
0x8E78AB: jnz     short loc_8E78B1
0x8E78AD: mov     [esp+14h+arg_0], eax
0x8E78B1: mov     ecx, [esp+14h+arg_8]
0x8E78B5: lea     edx, [esp+14h+arg_4]
0x8E78B9: push    edx
0x8E78BA: lea     eax, [esp+18h+var_4]
0x8E78BE: push    eax
0x8E78BF: push    ecx
0x8E78C0: push    ebp
0x8E78C1: push    ebx
0x8E78C2: call    sub_8E6490
0x8E78C7: mov     eax, [esp+28h+arg_4]
0x8E78CB: add     esp, 14h
0x8E78CE: test    eax, eax
0x8E78D0: jz      short loc_8E78D8
0x8E78D2: mov     eax, ebx
0x8E78D4: mov     ebx, ebp
0x8E78D6: mov     ebp, eax
0x8E78D8: movsx   edx, byte ptr [esi+58h]
0x8E78DC: movsx   eax, byte ptr [edi+58h]
0x8E78E0: mov     esi, [esp+14h+arg_8]
0x8E78E4: lea     ecx, [eax+edx*8]
0x8E78E7: mov     edx, [esi]
0x8E78E9: mov     ecx, [edx+ecx*4+0Ch]
0x8E78ED: mov     eax, [ecx]
0x8E78EF: push    esi
0x8E78F0: push    ebp
0x8E78F1: push    ebx
0x8E78F2: call    dword ptr [eax+8]
0x8E78F5: mov     ecx, [esp+14h+var_4]
0x8E78F9: mov     edx, [esp+14h+arg_0]
0x8E78FD: push    eax
0x8E78FE: push    esi
0x8E78FF: push    ecx
0x8E7900: push    ebp
0x8E7901: add     edx, 44h ; 'D'
0x8E7904: push    ebx
0x8E7905: push    edx
0x8E7906: call    sub_8E6950
0x8E790B: add     esp, 18h
0x8E790E: pop     edi
0x8E790F: pop     esi
0x8E7910: pop     ebp
0x8E7911: pop     ebx
0x8E7912: pop     ecx
0x8E7913: retn
