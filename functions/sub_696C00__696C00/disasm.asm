0x696C00: push    0FFFFFFFFh
0x696C02: push    offset SEH_696C00
0x696C07: mov     eax, large fs:0
0x696C0D: push    eax
0x696C0E: push    ecx
0x696C0F: push    ebx
0x696C10: push    esi
0x696C11: push    edi
0x696C12: mov     eax, ds:0B30AACh
0x696C17: xor     eax, esp
0x696C19: push    eax
0x696C1A: lea     eax, [esp+20h+var_C]
0x696C1E: mov     large fs:0, eax
0x696C24: mov     edi, ecx
0x696C26: mov     [esp+20h+var_10], edi
0x696C2A: mov     esi, [edi+18h]
0x696C2D: test    esi, esi
0x696C2F: mov     ebx, ds:0A2807Ch
0x696C35: mov     [esp+20h+var_4], 2
0x696C3D: jz      short loc_696C57
0x696C3F: lea     eax, [esi+4]
0x696C42: push    eax; lpAddend
0x696C43: call    ebx ; InterlockedDecrement
0x696C45: test    eax, eax
0x696C47: jnz     short loc_696C57
0x696C49: test    esi, esi
0x696C4B: jz      short loc_696C57
0x696C4D: mov     edx, [esi]
0x696C4F: mov     eax, [edx]
0x696C51: push    1
0x696C53: mov     ecx, esi
0x696C55: call    eax
0x696C57: mov     esi, [edi+14h]
0x696C5A: test    esi, esi
0x696C5C: mov     byte ptr [esp+20h+var_4], 1
0x696C61: jz      short loc_696C7B
0x696C63: lea     ecx, [esi+4]
0x696C66: push    ecx; lpAddend
0x696C67: call    ebx ; InterlockedDecrement
0x696C69: test    eax, eax
0x696C6B: jnz     short loc_696C7B
0x696C6D: test    esi, esi
0x696C6F: jz      short loc_696C7B
0x696C71: mov     edx, [esi]
0x696C73: mov     eax, [edx]
0x696C75: push    1
0x696C77: mov     ecx, esi
0x696C79: call    eax
0x696C7B: mov     esi, [edi+4]
0x696C7E: test    esi, esi
0x696C80: mov     byte ptr [esp+20h+var_4], 0
0x696C85: jz      short loc_696C9F
0x696C87: lea     ecx, [esi+4]
0x696C8A: push    ecx; lpAddend
0x696C8B: call    ebx ; InterlockedDecrement
0x696C8D: test    eax, eax
0x696C8F: jnz     short loc_696C9F
0x696C91: test    esi, esi
0x696C93: jz      short loc_696C9F
0x696C95: mov     edx, [esi]
0x696C97: mov     eax, [edx]
0x696C99: push    1
0x696C9B: mov     ecx, esi
0x696C9D: call    eax
0x696C9F: mov     esi, [edi]
0x696CA1: test    esi, esi
0x696CA3: mov     [esp+20h+var_4], 0FFFFFFFFh
0x696CAB: jz      short loc_696CC5
0x696CAD: lea     ecx, [esi+4]
0x696CB0: push    ecx; lpAddend
0x696CB1: call    ebx ; InterlockedDecrement
0x696CB3: test    eax, eax
0x696CB5: jnz     short loc_696CC5
0x696CB7: test    esi, esi
0x696CB9: jz      short loc_696CC5
0x696CBB: mov     edx, [esi]
0x696CBD: mov     eax, [edx]
0x696CBF: push    1
0x696CC1: mov     ecx, esi
0x696CC3: call    eax
0x696CC5: mov     ecx, dword ptr [esp+20h+var_C]
0x696CC9: mov     large fs:0, ecx
0x696CD0: pop     ecx
0x696CD1: pop     edi
0x696CD2: pop     esi
0x696CD3: pop     ebx
0x696CD4: add     esp, 10h
0x696CD7: retn
