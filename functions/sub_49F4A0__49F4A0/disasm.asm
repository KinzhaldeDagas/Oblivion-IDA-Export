0x49F4A0: mov     eax, [ecx+44h]
0x49F4A3: add     eax, 0FFFFFFFFh
0x49F4A6: cmp     eax, 2
0x49F4A9: ja      short loc_49F4C8
0x49F4AB: fld     dword ptr [ecx+48h]
0x49F4AE: push    1; char
0x49F4B0: fadd    [esp+4+arg_0]
0x49F4B4: push    ecx
0x49F4B5: fstp    [esp+8+arg_0]
0x49F4B9: fld     [esp+8+arg_0]
0x49F4BD: fstp    [esp+8+var_8]; float
0x49F4C0: call    sub_6C5FC0
0x49F4C5: retn    4
0x49F4C8: fldz
0x49F4CA: retn    4
