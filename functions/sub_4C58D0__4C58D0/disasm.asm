0x4C58D0: push    ecx
0x4C58D1: push    edi
0x4C58D2: mov     edi, ecx
0x4C58D4: cmp     dword ptr [edi+24h], 0
0x4C58D8: jz      loc_4C5A90
0x4C58DE: push    ebx
0x4C58DF: push    ebp
0x4C58E0: push    esi
0x4C58E1: push    3
0x4C58E3: call    nullsub_returnTrue_0arg
0x4C58E8: mov     eax, [edi+24h]
0x4C58EB: mov     ebp, ds:0A2807Ch
0x4C58F1: add     esp, 4
0x4C58F4: cmp     dword ptr [eax], 0
0x4C58F7: jz      loc_4C5A0B
0x4C58FD: mov     esi, [edi+20h]
0x4C5900: test    esi, esi
0x4C5902: jz      short loc_4C5941
0x4C5904: mov     ecx, esi; this
0x4C5906: call    TESObjectCELL_IsInterior
0x4C590B: test    al, al
0x4C590D: jz      short loc_4C5919
0x4C590F: lea     ecx, [esi+28h]
0x4C5912: call    sub_424180
0x4C5917: jmp     short loc_4C591E
0x4C5919: mov     eax, ds:0B35C24h
0x4C591E: test    eax, eax
0x4C5920: jz      short loc_4C5941
0x4C5922: mov     eax, [edi+24h]
0x4C5925: cmp     dword ptr [eax+94h], 0
0x4C592C: jz      short loc_4C5941
0x4C592E: mov     eax, [eax+94h]
0x4C5934: test    eax, eax
0x4C5936: jz      short loc_4C5941
0x4C5938: mov     edx, [eax]
0x4C593A: mov     ecx, eax
0x4C593C: mov     eax, [edx+60h]
0x4C593F: call    eax
0x4C5941: mov     ebx, [edi+24h]
0x4C5944: mov     esi, [ebx+94h]
0x4C594A: add     ebx, 94h ; '”'
0x4C5950: test    esi, esi
0x4C5952: jz      short loc_4C5972
0x4C5954: lea     ecx, [esi+4]
0x4C5957: push    ecx; lpAddend
0x4C5958: call    ebp ; InterlockedDecrement
0x4C595A: test    eax, eax
0x4C595C: jnz     short loc_4C596C
0x4C595E: test    esi, esi
0x4C5960: jz      short loc_4C596C
0x4C5962: mov     edx, [esi]
0x4C5964: mov     eax, [edx]
0x4C5966: push    1
0x4C5968: mov     ecx, esi
0x4C596A: call    eax
0x4C596C: mov     dword ptr [ebx], 0
0x4C5972: xor     esi, esi
0x4C5974: mov     ecx, [edi+24h]
0x4C5977: mov     edx, [ecx]
0x4C5979: cmp     dword ptr [esi+edx], 0
0x4C597D: jz      short loc_4C59E0
0x4C597F: mov     eax, ecx
0x4C5981: mov     ecx, [eax+4]
0x4C5984: mov     dword ptr [esi+ecx], 0
0x4C598B: mov     edx, [edi+24h]
0x4C598E: mov     eax, [edx+8]
0x4C5991: mov     dword ptr [esi+eax], 0
0x4C5998: mov     ecx, [edi+24h]
0x4C599B: mov     edx, [ecx+0Ch]
0x4C599E: mov     dword ptr [esi+edx], 0
0x4C59A5: mov     eax, [edi+24h]
0x4C59A8: mov     ecx, [eax]
0x4C59AA: mov     ecx, [esi+ecx]
0x4C59AD: mov     edx, [ecx]
0x4C59AF: mov     edx, [edx+8Ch]
0x4C59B5: push    0
0x4C59B7: lea     eax, [esp+18h+var_4]
0x4C59BB: push    eax
0x4C59BC: call    edx
0x4C59BE: mov     eax, [esp+14h+var_4]
0x4C59C2: test    eax, eax
0x4C59C4: jz      short loc_4C59E0
0x4C59C6: mov     ebx, eax
0x4C59C8: add     eax, 4
0x4C59CB: push    eax; lpAddend
0x4C59CC: call    ebp ; InterlockedDecrement
0x4C59CE: test    eax, eax
0x4C59D0: jnz     short loc_4C59E0
0x4C59D2: test    ebx, ebx
0x4C59D4: jz      short loc_4C59E0
0x4C59D6: mov     eax, [ebx]
0x4C59D8: mov     edx, [eax]
0x4C59DA: push    1
0x4C59DC: mov     ecx, ebx
0x4C59DE: call    edx
0x4C59E0: mov     eax, [edi+24h]
0x4C59E3: mov     ecx, [eax]
0x4C59E5: mov     dword ptr [esi+ecx], 0
0x4C59EC: add     esi, 4
0x4C59EF: cmp     esi, 10h
0x4C59F2: jl      short loc_4C5974
0x4C59F4: mov     edx, [edi+24h]
0x4C59F7: mov     eax, [edx]
0x4C59F9: push    eax
0x4C59FA: call    FormHeapFree
0x4C59FF: mov     ecx, [edi+24h]
0x4C5A02: add     esp, 4
0x4C5A05: mov     dword ptr [ecx], 0
0x4C5A0B: mov     edx, [edi+24h]
0x4C5A0E: mov     eax, [edx+14h]
0x4C5A11: test    eax, eax
0x4C5A13: jz      short loc_4C5A7C
0x4C5A15: mov     ecx, [eax+1Ch]
0x4C5A18: test    ecx, ecx
0x4C5A1A: jz      short loc_4C5A51
0x4C5A1C: mov     edx, [edx+14h]
0x4C5A1F: mov     eax, [ecx]
0x4C5A21: mov     eax, [eax+88h]
0x4C5A27: push    edx
0x4C5A28: lea     edx, [esp+18h+var_4]
0x4C5A2C: push    edx
0x4C5A2D: call    eax
0x4C5A2F: mov     eax, [esp+14h+var_4]
0x4C5A33: test    eax, eax
0x4C5A35: jz      short loc_4C5A51
0x4C5A37: mov     esi, eax
0x4C5A39: add     eax, 4
0x4C5A3C: push    eax; lpAddend
0x4C5A3D: call    ebp ; InterlockedDecrement
0x4C5A3F: test    eax, eax
0x4C5A41: jnz     short loc_4C5A51
0x4C5A43: test    esi, esi
0x4C5A45: jz      short loc_4C5A51
0x4C5A47: mov     edx, [esi]
0x4C5A49: mov     eax, [edx]
0x4C5A4B: push    1
0x4C5A4D: mov     ecx, esi
0x4C5A4F: call    eax
0x4C5A51: mov     ebx, [edi+24h]
0x4C5A54: mov     esi, [ebx+14h]
0x4C5A57: add     ebx, 14h
0x4C5A5A: test    esi, esi
0x4C5A5C: jz      short loc_4C5A7C
0x4C5A5E: lea     ecx, [esi+4]
0x4C5A61: push    ecx; lpAddend
0x4C5A62: call    ebp ; InterlockedDecrement
0x4C5A64: test    eax, eax
0x4C5A66: jnz     short loc_4C5A76
0x4C5A68: test    esi, esi
0x4C5A6A: jz      short loc_4C5A76
0x4C5A6C: mov     edx, [esi]
0x4C5A6E: mov     eax, [edx]
0x4C5A70: push    1
0x4C5A72: mov     ecx, esi
0x4C5A74: call    eax
0x4C5A76: mov     dword ptr [ebx], 0
0x4C5A7C: mov     ecx, edi
0x4C5A7E: call    sub_4BFE80
0x4C5A83: push    2
0x4C5A85: call    nullsub_returnTrue_0arg
0x4C5A8A: add     esp, 4
0x4C5A8D: pop     esi
0x4C5A8E: pop     ebp
0x4C5A8F: pop     ebx
0x4C5A90: pop     edi
0x4C5A91: pop     ecx
0x4C5A92: retn
