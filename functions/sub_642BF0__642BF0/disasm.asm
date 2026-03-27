0x642BF0: push    ebx
0x642BF1: push    ebp
0x642BF2: mov     ebp, [esp+8+arg_8]
0x642BF6: push    esi
0x642BF7: push    edi
0x642BF8: mov     esi, ecx
0x642BFA: lea     ebx, [ebx+0]
0x642C00: mov     edi, [esp+10h+arg_4]
0x642C04: mov     eax, [edi]
0x642C06: mov     ecx, [esp+10h+Comperand]
0x642C0A: push    eax; int
0x642C0B: push    ecx; Comperand
0x642C0C: mov     ecx, esi
0x642C0E: call    sub_43C070
0x642C13: test    al, al
0x642C15: jz      loc_642CA2
0x642C1B: mov     edx, [esi+18h]
0x642C1E: test    edx, 0FFFFFFFEh
0x642C24: jz      loc_642D67
0x642C2A: mov     eax, [esi+18h]
0x642C2D: and     eax, 0FFFFFFFEh
0x642C30: mov     eax, [eax+8]
0x642C33: test    al, 1
0x642C35: jnz     short loc_642C00
0x642C37: mov     ecx, [esi]
0x642C39: mov     edx, [ecx]
0x642C3B: mov     eax, [edi]
0x642C3D: mov     edx, [edx+20h]
0x642C40: push    eax
0x642C41: call    edx
0x642C43: mov     eax, [esi+18h]
0x642C46: mov     ecx, [esi]
0x642C48: mov     edx, [ecx]
0x642C4A: mov     edx, [edx+24h]
0x642C4D: and     eax, 0FFFFFFFEh
0x642C50: mov     eax, [eax]
0x642C52: push    eax
0x642C53: call    edx
0x642C55: mov     [edi], eax
0x642C57: mov     edi, [esi+18h]
0x642C5A: mov     ebx, [ebp+0]
0x642C5D: and     edi, 0FFFFFFFEh
0x642C60: add     edi, 4
0x642C63: cmp     ebx, [edi]
0x642C65: jz      short loc_642C9A
0x642C67: test    ebx, ebx
0x642C69: jz      short loc_642C87
0x642C6B: lea     eax, [ebx+8]
0x642C6E: push    eax; lpAddend
0x642C6F: call    dword ptr ds:0A2807Ch
0x642C75: test    eax, eax
0x642C77: jnz     short loc_642C87
0x642C79: test    ebx, ebx
0x642C7B: jz      short loc_642C87
0x642C7D: mov     edx, [ebx]
0x642C7F: mov     eax, [edx]
0x642C81: push    1
0x642C83: mov     ecx, ebx
0x642C85: call    eax
0x642C87: mov     edi, [edi]
0x642C89: test    edi, edi
0x642C8B: mov     [ebp+0], edi
0x642C8E: jz      short loc_642C9A
0x642C90: add     edi, 8
0x642C93: push    edi; lpAddend
0x642C94: call    dword ptr ds:0A28078h
0x642C9A: mov     ecx, [esi+18h]
0x642C9D: jmp     loc_642D28
0x642CA2: mov     eax, [esi+14h]
0x642CA5: test    eax, 0FFFFFFFEh
0x642CAA: jz      loc_642D67
0x642CB0: mov     eax, [esi+14h]
0x642CB3: and     eax, 0FFFFFFFEh
0x642CB6: mov     ecx, [eax+8]
0x642CB9: test    cl, 1
0x642CBC: jnz     loc_642C00
0x642CC2: mov     ecx, [esi]
0x642CC4: mov     edx, [ecx]
0x642CC6: mov     eax, [edi]
0x642CC8: mov     edx, [edx+20h]
0x642CCB: push    eax
0x642CCC: call    edx
0x642CCE: mov     eax, [esi+14h]
0x642CD1: mov     ecx, [esi]
0x642CD3: mov     edx, [ecx]
0x642CD5: mov     edx, [edx+24h]
0x642CD8: and     eax, 0FFFFFFFEh
0x642CDB: mov     eax, [eax]
0x642CDD: push    eax
0x642CDE: call    edx
0x642CE0: mov     [edi], eax
0x642CE2: mov     edi, [esi+14h]
0x642CE5: mov     ebx, [ebp+0]
0x642CE8: and     edi, 0FFFFFFFEh
0x642CEB: add     edi, 4
0x642CEE: cmp     ebx, [edi]
0x642CF0: jz      short loc_642D25
0x642CF2: test    ebx, ebx
0x642CF4: jz      short loc_642D12
0x642CF6: lea     eax, [ebx+8]
0x642CF9: push    eax; lpAddend
0x642CFA: call    dword ptr ds:0A2807Ch
0x642D00: test    eax, eax
0x642D02: jnz     short loc_642D12
0x642D04: test    ebx, ebx
0x642D06: jz      short loc_642D12
0x642D08: mov     edx, [ebx]
0x642D0A: mov     eax, [edx]
0x642D0C: push    1
0x642D0E: mov     ecx, ebx
0x642D10: call    eax
0x642D12: mov     edi, [edi]
0x642D14: test    edi, edi
0x642D16: mov     [ebp+0], edi
0x642D19: jz      short loc_642D25
0x642D1B: add     edi, 8
0x642D1E: push    edi; lpAddend
0x642D1F: call    dword ptr ds:0A28078h
0x642D25: mov     ecx, [esi+14h]
0x642D28: and     ecx, 0FFFFFFFEh
0x642D2B: mov     ecx, [ecx+8]
0x642D2E: mov     al, 1
0x642D30: test    al, cl
0x642D32: jz      short loc_642D69
0x642D34: mov     edi, [ebp+0]
0x642D37: test    edi, edi
0x642D39: jz      loc_642C00
0x642D3F: lea     edx, [edi+8]
0x642D42: push    edx; lpAddend
0x642D43: call    dword ptr ds:0A2807Ch
0x642D49: test    eax, eax
0x642D4B: jnz     short loc_642D5B
0x642D4D: test    edi, edi
0x642D4F: jz      short loc_642D5B
0x642D51: mov     eax, [edi]
0x642D53: mov     edx, [eax]
0x642D55: push    1
0x642D57: mov     ecx, edi
0x642D59: call    edx
0x642D5B: mov     dword ptr [ebp+0], 0
0x642D62: jmp     loc_642C00
0x642D67: xor     al, al
0x642D69: mov     ecx, [esi+4]
0x642D6C: mov     dword ptr [ecx], 0
0x642D72: mov     edx, [esi+8]
0x642D75: pop     edi
0x642D76: mov     dword ptr [edx], 0
0x642D7C: mov     ecx, [esi+0Ch]
0x642D7F: pop     esi
0x642D80: pop     ebp
0x642D81: mov     dword ptr [ecx], 0
0x642D87: pop     ebx
0x642D88: retn    0Ch
