0x683490: push    esi
0x683491: mov     esi, ecx
0x683493: mov     ecx, offset stru_B3C000
0x683498: call    sub_49F470
0x68349D: cmp     dword ptr [esi+40h], 0
0x6834A1: jz      short loc_6834ED
0x6834A3: push    0
0x6834A5: mov     ecx, esi
0x6834A7: call    sub_42FC20
0x6834AC: test    eax, eax
0x6834AE: jz      short loc_6834C9
0x6834B0: push    1; char
0x6834B2: push    1; dwMilliseconds
0x6834B4: call    sub_498EE0
0x6834B9: add     esp, 8
0x6834BC: push    0
0x6834BE: mov     ecx, esi
0x6834C0: call    sub_42FC20
0x6834C5: test    eax, eax
0x6834C7: jnz     short loc_6834B0
0x6834C9: mov     eax, [esi]
0x6834CB: mov     edx, [eax+8]
0x6834CE: push    edi
0x6834CF: mov     edi, [esi+40h]
0x6834D2: mov     ecx, esi
0x6834D4: mov     dword ptr [esi+40h], 0
0x6834DB: call    edx
0x6834DD: push    edi
0x6834DE: mov     ecx, esi
0x6834E0: mov     dword ptr [esi+8], 0
0x6834E7: call    sub_682950
0x6834EC: pop     edi
0x6834ED: mov     ecx, offset stru_B3C000
0x6834F2: pop     esi
0x6834F3: jmp     j_NiLeaveCriticalSection_0
