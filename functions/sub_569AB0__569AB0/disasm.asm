0x569AB0: push    esi
0x569AB1: mov     esi, ecx
0x569AB3: cmp     byte ptr [esi], 4
0x569AB6: ja      short loc_569AC7
0x569AB8: mov     eax, [esi+8]
0x569ABB: push    eax; a1
0x569ABC: call    TESForm_LookupByFormID
0x569AC1: add     esp, 4
0x569AC4: mov     [esi+8], eax
0x569AC7: pop     esi
0x569AC8: retn
