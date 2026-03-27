0x4F6B00: fldz
0x4F6B02: mov     ecx, [esp+arg_0]
0x4F6B06: test    ecx, ecx
0x4F6B08: push    esi
0x4F6B09: mov     esi, [esp+4+arg_C]
0x4F6B0D: fstp    qword ptr [esi]
0x4F6B0F: jz      short loc_4F6B25
0x4F6B11: mov     eax, [ecx]
0x4F6B13: mov     edx, [eax+170h]
0x4F6B19: call    edx
0x4F6B1B: cmp     byte ptr [eax+4], 24h ; '$'
0x4F6B1F: jnz     short loc_4F6B25
0x4F6B21: fld1
0x4F6B23: fstp    qword ptr [esi]
0x4F6B25: cmp     byte ptr ds:0B361ACh, 0
0x4F6B2C: jz      short loc_4F6B43
0x4F6B2E: fld     qword ptr [esi]
0x4F6B30: sub     esp, 8
0x4F6B33: fstp    [esp+0Ch+var_C]
0x4F6B36: push    offset aGetiscreature0; "GetIsCreature >> %0.2f"
0x4F6B3B: call    Interface_ConsolePrint
0x4F6B40: add     esp, 0Ch
0x4F6B43: mov     al, 1
0x4F6B45: pop     esi
0x4F6B46: retn
