0x4F7F50: fldz
0x4F7F52: mov     ecx, [esp+arg_C]
0x4F7F56: fstp    qword ptr [ecx]
0x4F7F58: mov     eax, ds:0B333A0h
0x4F7F5D: test    eax, eax
0x4F7F5F: jz      short loc_4F7F94
0x4F7F61: mov     eax, [eax+5Ch]
0x4F7F64: test    eax, eax
0x4F7F66: jz      short loc_4F7F94
0x4F7F68: fld     dword ptr [eax+0C0h]
0x4F7F6E: fst     qword ptr [ecx]
0x4F7F70: cmp     byte ptr ds:0B361ACh, 0
0x4F7F77: jz      short loc_4F7F8F
0x4F7F79: sub     esp, 8
0x4F7F7C: fstp    [esp+8+var_8]
0x4F7F7F: push    offset aGetwindspeed0_2f; "GetWindSpeed >> %0.2f"
0x4F7F84: call    Interface_ConsolePrint
0x4F7F89: add     esp, 0Ch
0x4F7F8C: mov     al, 1
0x4F7F8E: retn
0x4F7F8F: fstp    st
0x4F7F91: mov     al, 1
0x4F7F93: retn
0x4F7F94: xor     al, al
0x4F7F96: retn
