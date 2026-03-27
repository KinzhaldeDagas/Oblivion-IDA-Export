0x41DFF0: push    esi
0x41DFF1: push    edi
0x41DFF2: mov     edi, ecx
0x41DFF4: push    offset aBaseextralis_1; lpCriticalSection
0x41DFF9: mov     ecx, offset BSExtraDataCS
0x41DFFE: call    NiEnterCriticalSection
0x41E003: push    edi
0x41E004: call    sub_41DE50
0x41E009: add     esp, 4
0x41E00C: cmp     [esp+8+arg_0], 0
0x41E011: jz      short loc_41E036
0x41E013: mov     esi, [edi+4]
0x41E016: test    esi, esi
0x41E018: jz      short loc_41E03D
0x41E01A: lea     ebx, [ebx+0]
0x41E020: mov     ecx, esi
0x41E022: mov     esi, [esi+8]
0x41E025: mov     [edi+4], esi
0x41E028: mov     eax, [ecx]
0x41E02A: mov     edx, [eax]
0x41E02C: push    1
0x41E02E: call    edx
0x41E030: test    esi, esi
0x41E032: jnz     short loc_41E020
0x41E034: jmp     short loc_41E03D
0x41E036: mov     dword ptr [edi+4], 0
0x41E03D: xor     eax, eax
0x41E03F: mov     [edi+8], eax
0x41E042: mov     [edi+0Ch], eax
0x41E045: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41E04A: mov     [edi+10h], eax
0x41E04D: call    NiLeaveCriticalSection_0
0x41E052: pop     edi
0x41E053: pop     esi
0x41E054: retn    4
