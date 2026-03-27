0x65FF10: cmp     byte ptr ds:0B3BB06h, 0
0x65FF17: jz      short loc_65FF1E
0x65FF19: xor     al, al
0x65FF1B: retn    0Ch
0x65FF1E: mov     eax, [esp+arg_8]
0x65FF22: fld     [esp+arg_4]
0x65FF26: mov     edx, [esp+arg_0]
0x65FF2A: push    eax; float
0x65FF2B: push    ecx
0x65FF2C: fstp    [esp+8+var_8]; float
0x65FF2F: push    edx; int
0x65FF30: call    Actor_DamageEquippedItem?
0x65FF35: retn    0Ch
