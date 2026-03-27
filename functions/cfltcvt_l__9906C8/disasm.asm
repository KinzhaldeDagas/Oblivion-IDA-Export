0x9906C8: push    ebp
0x9906C9: mov     ebp, esp
0x9906CB: mov     eax, [ebp+arg_C]
0x9906CE: cmp     eax, 65h ; 'e'
0x9906D1: jz      short loc_990732
0x9906D3: cmp     eax, 45h ; 'E'
0x9906D6: jz      short loc_990732
0x9906D8: cmp     eax, 66h ; 'f'
0x9906DB: jnz     short loc_9906F6
0x9906DD: push    [ebp+arg_18]; struct localeinfo_struct *
0x9906E0: push    [ebp+arg_10]; int
0x9906E3: push    [ebp+arg_8]; int
0x9906E6: push    [ebp+arg_4]; int
0x9906E9: push    [ebp+arg_0]; int
0x9906EC: call    __cftof_l
0x9906F1: add     esp, 14h
0x9906F4: pop     ebp
0x9906F5: retn
0x9906F6: cmp     eax, 61h ; 'a'
0x9906F9: jz      short loc_990719
0x9906FB: cmp     eax, 41h ; 'A'
0x9906FE: jz      short loc_990719
0x990700: push    [ebp+arg_18]; struct localeinfo_struct *
0x990703: push    [ebp+arg_14]; int
0x990706: push    [ebp+arg_10]; int
0x990709: push    [ebp+arg_8]; int
0x99070C: push    [ebp+arg_4]; int
0x99070F: push    [ebp+arg_0]; int
0x990712: call    __cftog_l
0x990717: jmp     short loc_990749
0x990719: push    [ebp+arg_18]; struct localeinfo_struct *
0x99071C: push    [ebp+arg_14]; int
0x99071F: push    [ebp+arg_10]; int
0x990722: push    [ebp+arg_8]; int
0x990725: push    [ebp+arg_4]; int
0x990728: push    [ebp+arg_0]; int
0x99072B: call    __cftoa_l
0x990730: jmp     short loc_990749
0x990732: push    [ebp+arg_18]; struct localeinfo_struct *
0x990735: push    [ebp+arg_14]; int
0x990738: push    [ebp+arg_10]; int
0x99073B: push    [ebp+arg_8]; int
0x99073E: push    [ebp+arg_4]; int
0x990741: push    [ebp+arg_0]; int
0x990744: call    __cftoe_l
0x990749: add     esp, 18h
0x99074C: pop     ebp
0x99074D: retn
