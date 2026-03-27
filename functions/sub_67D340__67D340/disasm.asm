0x67D340: push    esi
0x67D341: mov     esi, ecx
0x67D343: call    sub_5660F0
0x67D348: mov     eax, [esi+44h]
0x67D34B: test    eax, eax
0x67D34D: jz      short loc_67D35B
0x67D34F: push    eax; a1
0x67D350: call    TESForm_LookupByFormID
0x67D355: add     esp, 4
0x67D358: mov     [esi+44h], eax
0x67D35B: mov     eax, [esi+48h]
0x67D35E: test    eax, eax
0x67D360: jz      short loc_67D36E
0x67D362: push    eax; a1
0x67D363: call    TESForm_LookupByFormID
0x67D368: add     esp, 4
0x67D36B: mov     [esi+48h], eax
0x67D36E: pop     esi
0x67D36F: retn
