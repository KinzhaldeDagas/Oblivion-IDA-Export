0x692C00: push    ecx
0x692C01: push    esi
0x692C02: mov     esi, ecx
0x692C04: call    ValueModifierEffect_Remove
0x692C09: mov     ecx, [esi+20h]; this
0x692C0C: test    ecx, ecx
0x692C0E: jz      short loc_692C8C
0x692C10: call    MagicTarget_GetParentActor
0x692C15: mov     esi, eax
0x692C17: test    esi, esi
0x692C19: jz      short loc_692C8C
0x692C1B: mov     eax, [esi]
0x692C1D: mov     edx, [eax+154h]
0x692C23: mov     ecx, esi
0x692C25: call    edx
0x692C27: test    eax, eax
0x692C29: jz      short loc_692C8C
0x692C2B: mov     eax, [esi]
0x692C2D: mov     edx, [eax+288h]
0x692C33: push    46h ; 'F'
0x692C35: mov     ecx, esi
0x692C37: call    edx
0x692C39: fdiv    qword ptr ds:0A309F0h
0x692C3F: fld1
0x692C41: fsubrp  st(1), st
0x692C43: fstp    [esp+8+var_4]
0x692C47: fldz
0x692C49: fld     [esp+8+var_4]
0x692C4D: fcom    st(1)
0x692C4F: fnstsw  ax
0x692C51: test    ah, 5
0x692C54: jp      short loc_692C5E
0x692C56: fstp    st
0x692C58: fstp    [esp+8+var_4]
0x692C5C: jmp     short loc_692C6F
0x692C5E: fstp    st(1)
0x692C60: fld1
0x692C62: fcom    st(1)
0x692C64: fnstsw  ax
0x692C66: fstp    st(1)
0x692C68: test    ah, 5
0x692C6B: jnp     short loc_692C58
0x692C6D: fstp    st
0x692C6F: mov     eax, [esi]
0x692C71: fld     [esp+8+var_4]
0x692C75: mov     edx, [eax+154h]
0x692C7B: push    ecx
0x692C7C: mov     ecx, esi
0x692C7E: fstp    [esp+0Ch+var_C]; float
0x692C81: call    edx
0x692C83: push    eax; int
0x692C84: call    sub_7B8440
0x692C89: add     esp, 8
0x692C8C: pop     esi
0x692C8D: pop     ecx
0x692C8E: retn
