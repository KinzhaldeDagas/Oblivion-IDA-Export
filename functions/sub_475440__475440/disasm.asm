0x475440: push    ebx
0x475441: mov     bl, [esp+4+arg_4]
0x475445: push    ebp
0x475446: push    esi
0x475447: mov     esi, ecx
0x475449: mov     eax, [esi+0CCh]
0x47544F: test    eax, eax
0x475451: push    edi
0x475452: lea     edi, [esi+0CCh]
0x475458: jz      short loc_4754C8
0x47545A: mov     ecx, [eax+0Ch]
0x47545D: mov     edx, ecx
0x47545F: sub     edx, 5
0x475462: jz      short loc_475470
0x475464: sub     edx, 1
0x475467: jnz     short loc_475472
0x475469: mov     ecx, 3
0x47546E: jmp     short loc_475472
0x475470: xor     ecx, ecx
0x475472: test    bl, bl
0x475474: jnz     short loc_4754C0
0x475476: mov     eax, [eax+10h]
0x475479: test    eax, eax
0x47547B: jz      short loc_47548E
0x47547D: cmp     [esi+ecx*4+0A0h], eax
0x475484: jnz     short loc_47548E
0x475486: push    ecx
0x475487: mov     ecx, esi
0x475489: call    sub_4733A0
0x47548E: cmp     dword ptr [esi+0D4h], 0
0x475495: jnz     short loc_4754A7
0x475497: mov     eax, [edi]
0x475499: mov     [esi+0D4h], eax
0x47549F: mov     dword ptr [edi], 0
0x4754A5: jmp     short loc_4754C8
0x4754A7: cmp     dword ptr [esi+0D8h], 0
0x4754AE: jnz     short loc_4754C0
0x4754B0: mov     ecx, [edi]
0x4754B2: mov     [esi+0D8h], ecx
0x4754B8: mov     dword ptr [edi], 0
0x4754BE: jmp     short loc_4754C8
0x4754C0: push    edi
0x4754C1: mov     ecx, esi
0x4754C3: call    sub_472ED0
0x4754C8: cmp     [esp+10h+arg_0], 0
0x4754CD: jz      loc_47556A
0x4754D3: mov     edx, [esi+0D0h]
0x4754D9: test    edx, edx
0x4754DB: lea     ebp, [esi+0D0h]
0x4754E1: jz      loc_47556A
0x4754E7: mov     eax, [edx+0Ch]
0x4754EA: mov     ecx, eax
0x4754EC: sub     ecx, 5
0x4754EF: jz      short loc_4754FD
0x4754F1: sub     ecx, 1
0x4754F4: jnz     short loc_4754FF
0x4754F6: mov     eax, 3
0x4754FB: jmp     short loc_4754FF
0x4754FD: xor     eax, eax
0x4754FF: test    bl, bl
0x475501: jnz     short loc_47555B
0x475503: mov     edx, [edx+10h]
0x475506: test    edx, edx
0x475508: jz      short loc_47551B
0x47550A: cmp     [esi+eax*4+0A0h], edx
0x475511: jnz     short loc_47551B
0x475513: push    eax
0x475514: mov     ecx, esi
0x475516: call    sub_4733A0
0x47551B: cmp     dword ptr [esi+0D4h], 0
0x475522: jnz     short loc_47553B
0x475524: mov     edx, [ebp+0]
0x475527: pop     edi
0x475528: mov     [esi+0D4h], edx
0x47552E: pop     esi
0x47552F: mov     dword ptr [ebp+0], 0
0x475536: pop     ebp
0x475537: pop     ebx
0x475538: retn    8
0x47553B: cmp     dword ptr [esi+0D8h], 0
0x475542: jnz     short loc_47555B
0x475544: mov     eax, [ebp+0]
0x475547: pop     edi
0x475548: mov     [esi+0D8h], eax
0x47554E: pop     esi
0x47554F: mov     dword ptr [ebp+0], 0
0x475556: pop     ebp
0x475557: pop     ebx
0x475558: retn    8
0x47555B: push    ebp
0x47555C: mov     ecx, esi
0x47555E: call    sub_472ED0
0x475563: pop     edi
0x475564: pop     esi
0x475565: pop     ebp
0x475566: pop     ebx
0x475567: retn    8
0x47556A: mov     ecx, [esi+0D0h]
0x475570: mov     [edi], ecx
0x475572: pop     edi
0x475573: mov     dword ptr [esi+0D0h], 0
0x47557D: pop     esi
0x47557E: pop     ebp
0x47557F: pop     ebx
0x475580: retn    8
