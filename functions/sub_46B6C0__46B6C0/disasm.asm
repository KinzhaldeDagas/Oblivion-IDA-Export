0x46B6C0: push    esi
0x46B6C1: mov     esi, [esp+4+arg_0]
0x46B6C5: test    esi, esi
0x46B6C7: push    edi
0x46B6C8: mov     edi, ecx
0x46B6CA: jz      short loc_46B6DD
0x46B6CC: mov     ecx, esi
0x46B6CE: call    sub_44FB90
0x46B6D3: test    eax, eax
0x46B6D5: jz      short loc_46B6D9
0x46B6D7: mov     esi, eax
0x46B6D9: test    esi, esi
0x46B6DB: jnz     short loc_46B74E
0x46B6DD: lea     edx, [edi+10h]
0x46B6E0: mov     eax, edx
0x46B6E2: xor     ecx, ecx
0x46B6E4: test    eax, eax
0x46B6E6: jz      short loc_46B724
0x46B6E8: cmp     dword ptr [eax], 0
0x46B6EB: jz      short loc_46B6EF
0x46B6ED: mov     ecx, eax
0x46B6EF: mov     eax, [eax+4]
0x46B6F2: test    eax, eax
0x46B6F4: jnz     short loc_46B6E8
0x46B6F6: test    ecx, ecx
0x46B6F8: jz      short loc_46B724
0x46B6FA: mov     eax, [ecx+4]
0x46B6FD: test    eax, eax
0x46B6FF: jz      short loc_46B719
0x46B701: mov     edx, [eax+4]
0x46B704: mov     [ecx+4], edx
0x46B707: mov     edx, [eax]
0x46B709: push    eax
0x46B70A: mov     [ecx], edx
0x46B70C: call    FormHeapFree
0x46B711: add     esp, 4
0x46B714: pop     edi
0x46B715: pop     esi
0x46B716: retn    4
0x46B719: pop     edi
0x46B71A: mov     dword ptr [ecx], 0
0x46B720: pop     esi
0x46B721: retn    4
0x46B724: mov     eax, [edx+4]
0x46B727: test    eax, eax
0x46B729: jz      short loc_46B743
0x46B72B: mov     ecx, [eax+4]
0x46B72E: mov     [edx+4], ecx
0x46B731: mov     ecx, [eax]
0x46B733: push    eax
0x46B734: mov     [edx], ecx
0x46B736: call    FormHeapFree
0x46B73B: add     esp, 4
0x46B73E: pop     edi
0x46B73F: pop     esi
0x46B740: retn    4
0x46B743: pop     edi
0x46B744: mov     dword ptr [edx], 0
0x46B74A: pop     esi
0x46B74B: retn    4
0x46B74E: mov     ecx, esi
0x46B750: call    TESFile_GetIsMaster
0x46B755: add     edi, 10h
0x46B758: test    al, al
0x46B75A: jz      short loc_46B770
0x46B75C: mov     ecx, edi
0x46B75E: call    BSSimpleList_Clear
0x46B763: push    esi
0x46B764: mov     ecx, edi
0x46B766: call    BSSimpleList_PushFront
0x46B76B: pop     edi
0x46B76C: pop     esi
0x46B76D: retn    4
0x46B770: mov     eax, edi
0x46B772: xor     ecx, ecx
0x46B774: test    eax, eax
0x46B776: jz      short loc_46B763
0x46B778: mov     edx, [eax]
0x46B77A: test    edx, edx
0x46B77C: jz      short loc_46B784
0x46B77E: cmp     edx, esi
0x46B780: mov     ecx, eax
0x46B782: jz      short loc_46B76B
0x46B784: mov     eax, [eax+4]
0x46B787: test    eax, eax
0x46B789: jnz     short loc_46B778
0x46B78B: test    ecx, ecx
0x46B78D: jz      short loc_46B763
0x46B78F: push    esi
0x46B790: call    BSSimpleList_PushBack
0x46B795: pop     edi
0x46B796: pop     esi
0x46B797: retn    4
