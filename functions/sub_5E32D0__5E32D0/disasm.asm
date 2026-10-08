0x5E32D0: mov     eax, [ecx]; Direct base-form predicate: GetBaseForm()->type == kFormType_NPC (0x23). Unlike Actor_IsNPC, this compact helper assumes the receiver/base form are valid.
0x5E32D2: mov     edx, [eax+170h]
0x5E32D8: call    edx
0x5E32DA: cmp     byte ptr [eax+4], 23h ; '#'
0x5E32DE: setz    al
0x5E32E1: retn
