0x6826D0: push    ebx
0x6826D1: mov     ebx, [esp+4+arg_0]
0x6826D5: test    ebx, ebx
0x6826D7: push    ebp
0x6826D8: mov     ebp, ecx
0x6826DA: jz      loc_682810
0x6826E0: push    esi
0x6826E1: push    edi
0x6826E2: mov     ecx, offset stru_B3C000
0x6826E7: call    sub_49F470
0x6826EC: lea     eax, [esp+10h+arg_0]
0x6826F0: push    eax
0x6826F1: lea     esi, [ebp+20h]
0x6826F4: push    ebx
0x6826F5: mov     ecx, esi
0x6826F7: mov     [esp+18h+arg_0], 0
0x6826FF: call    NiTMap_GetAt
0x682704: test    al, al
0x682706: jz      short loc_682756
0x682708: mov     edi, [esp+10h+arg_0]
0x68270C: test    edi, edi
0x68270E: jz      short loc_682756
0x682710: push    ebx
0x682711: mov     ecx, esi
0x682713: call    NiTMap_RemoveAt
0x682718: cmp     edi, [ebp+40h]
0x68271B: jnz     short loc_682726
0x68271D: mov     dword ptr [edi+20h], 1
0x682724: jmp     short loc_682756
0x682726: mov     ecx, [edi+4]
0x682729: test    ecx, ecx
0x68272B: jz      short loc_682736
0x68272D: mov     edx, [ecx]
0x68272F: mov     eax, [edx+10h]
0x682732: push    1
0x682734: call    eax
0x682736: mov     ecx, [edi+8]
0x682739: test    ecx, ecx
0x68273B: jz      short loc_682745
0x68273D: mov     edx, [ecx]
0x68273F: mov     eax, [edx]
0x682741: push    1
0x682743: call    eax
0x682745: push    edi
0x682746: call    FormHeapFree
0x68274B: add     esp, 4
0x68274E: mov     [esp+10h+arg_0], 0
0x682756: lea     ecx, [esp+10h+arg_0]
0x68275A: push    ecx
0x68275B: lea     edi, [ebp+10h]
0x68275E: push    ebx
0x68275F: mov     ecx, edi
0x682761: call    NiTMap_GetAt
0x682766: test    al, al
0x682768: jz      short loc_6827B8
0x68276A: mov     esi, [esp+10h+arg_0]
0x68276E: test    esi, esi
0x682770: jz      short loc_6827B8
0x682772: push    ebx
0x682773: mov     ecx, edi
0x682775: call    NiTMap_RemoveAt
0x68277A: cmp     esi, [ebp+40h]
0x68277D: jnz     short loc_682788
0x68277F: mov     dword ptr [esi+20h], 1
0x682786: jmp     short loc_6827B8
0x682788: mov     ecx, [esi+4]
0x68278B: test    ecx, ecx
0x68278D: jz      short loc_682798
0x68278F: mov     edx, [ecx]
0x682791: mov     eax, [edx+10h]
0x682794: push    1
0x682796: call    eax
0x682798: mov     ecx, [esi+8]
0x68279B: test    ecx, ecx
0x68279D: jz      short loc_6827A7
0x68279F: mov     edx, [ecx]
0x6827A1: mov     eax, [edx]
0x6827A3: push    1
0x6827A5: call    eax
0x6827A7: push    esi
0x6827A8: call    FormHeapFree
0x6827AD: add     esp, 4
0x6827B0: mov     [esp+10h+arg_0], 0
0x6827B8: lea     ecx, [esp+10h+arg_0]
0x6827BC: push    ecx
0x6827BD: lea     esi, [ebp+30h]
0x6827C0: push    ebx
0x6827C1: mov     ecx, esi
0x6827C3: call    NiTMap_GetAt
0x6827C8: test    al, al
0x6827CA: jz      short loc_682804
0x6827CC: mov     edi, [esp+10h+arg_0]
0x6827D0: test    edi, edi
0x6827D2: jz      short loc_682804
0x6827D4: push    ebx
0x6827D5: mov     ecx, esi
0x6827D7: call    NiTMap_RemoveAt
0x6827DC: mov     ecx, [edi+4]
0x6827DF: test    ecx, ecx
0x6827E1: jz      short loc_6827EC
0x6827E3: mov     edx, [ecx]
0x6827E5: mov     eax, [edx+10h]
0x6827E8: push    1
0x6827EA: call    eax
0x6827EC: mov     ecx, [edi+8]
0x6827EF: test    ecx, ecx
0x6827F1: jz      short loc_6827FB
0x6827F3: mov     edx, [ecx]
0x6827F5: mov     eax, [edx]
0x6827F7: push    1
0x6827F9: call    eax
0x6827FB: push    edi
0x6827FC: call    FormHeapFree
0x682801: add     esp, 4
0x682804: mov     ecx, offset stru_B3C000
0x682809: call    j_NiLeaveCriticalSection_0
0x68280E: pop     edi
0x68280F: pop     esi
0x682810: pop     ebp
0x682811: pop     ebx
0x682812: retn    4
