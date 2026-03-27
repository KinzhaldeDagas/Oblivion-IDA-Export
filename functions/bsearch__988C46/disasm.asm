0x988C46: push    ebp
0x988C47: mov     ebp, esp
0x988C49: mov     eax, [ebp+NumOfElements]
0x988C4C: mov     ecx, [ebp+Base]
0x988C4F: push    esi
0x988C50: lea     esi, [eax-1]
0x988C53: imul    esi, [ebp+SizeOfElements]
0x988C57: push    edi
0x988C58: xor     edi, edi
0x988C5A: add     esi, ecx
0x988C5C: cmp     ecx, edi
0x988C5E: mov     [ebp+Base], ecx
0x988C61: jnz     short loc_988C83
0x988C63: cmp     eax, edi
0x988C65: jz      short loc_988C83
0x988C67: call    __errno
0x988C6C: push    edi
0x988C6D: push    edi
0x988C6E: push    edi
0x988C6F: push    edi
0x988C70: push    edi
0x988C71: mov     dword ptr [eax], 16h
0x988C77: call    __invalid_parameter
0x988C7C: add     esp, 14h
0x988C7F: xor     eax, eax
0x988C81: jmp     short loc_988C95
0x988C83: cmp     [ebp+SizeOfElements], edi
0x988C86: jbe     short loc_988C67
0x988C88: cmp     [ebp+PtFuncCompare], edi
0x988C8B: jz      short loc_988C67
0x988C8D: cmp     ecx, esi
0x988C8F: push    ebx
0x988C90: jbe     short loc_988C9B
0x988C92: xor     eax, eax
0x988C94: pop     ebx
0x988C95: pop     edi
0x988C96: pop     esi
0x988C97: pop     ebp
0x988C98: retn
0x988C99: xor     edi, edi
0x988C9B: mov     ebx, eax
0x988C9D: shr     ebx, 1
0x988C9F: jz      short loc_988CEC
0x988CA1: mov     [ebp+NumOfElements], eax
0x988CA4: and     [ebp+NumOfElements], 1
0x988CA8: mov     eax, ebx
0x988CAA: jnz     short loc_988CAF
0x988CAC: lea     eax, [ebx-1]
0x988CAF: imul    eax, [ebp+SizeOfElements]
0x988CB3: add     eax, [ebp+Base]
0x988CB6: mov     edi, eax
0x988CB8: push    edi; void *
0x988CB9: push    [ebp+Key]; void *
0x988CBC: call    [ebp+PtFuncCompare]
0x988CBF: test    eax, eax
0x988CC1: pop     ecx
0x988CC2: pop     ecx
0x988CC3: jz      short loc_988CE8
0x988CC5: jge     short loc_988CD7
0x988CC7: sub     edi, [ebp+SizeOfElements]
0x988CCA: cmp     [ebp+NumOfElements], 0
0x988CCE: mov     esi, edi
0x988CD0: jnz     short loc_988CDF
0x988CD2: lea     eax, [ebx-1]
0x988CD5: jmp     short loc_988CE1
0x988CD7: mov     eax, [ebp+SizeOfElements]
0x988CDA: add     edi, eax
0x988CDC: mov     [ebp+Base], edi
0x988CDF: mov     eax, ebx
0x988CE1: cmp     [ebp+Base], esi
0x988CE4: jbe     short loc_988C99
0x988CE6: jmp     short loc_988C92
0x988CE8: mov     eax, edi
0x988CEA: jmp     short loc_988C94
0x988CEC: cmp     eax, edi
0x988CEE: jz      short loc_988C92
0x988CF0: push    [ebp+Base]; void *
0x988CF3: push    [ebp+Key]; void *
0x988CF6: call    [ebp+PtFuncCompare]
0x988CF9: neg     eax
0x988CFB: sbb     eax, eax
0x988CFD: pop     ecx
0x988CFE: not     eax
0x988D00: and     eax, [ebp+Base]
0x988D03: pop     ecx
0x988D04: jmp     short loc_988C94
