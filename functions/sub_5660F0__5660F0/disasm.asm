0x5660F0: push    esi
0x5660F1: mov     esi, ecx
0x5660F3: mov     ecx, [esi+24h]
0x5660F6: test    ecx, ecx
0x5660F8: jz      short loc_5660FF
0x5660FA: call    sub_569AB0
0x5660FF: mov     ecx, [esi+28h]
0x566102: test    ecx, ecx
0x566104: pop     esi
0x566105: jz      short locret_56610C
0x566107: jmp     loc_56A080
0x56610C: retn
0x56A080: push    esi
0x56A081: mov     esi, ecx
0x56A083: cmp     byte ptr [esi], 1
0x56A086: ja      short loc_56A097
0x56A088: mov     eax, [esi+4]
0x56A08B: push    eax; a1
0x56A08C: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x56A091: add     esp, 4
0x56A094: mov     [esi+4], eax
0x56A097: pop     esi
0x56A098: retn
