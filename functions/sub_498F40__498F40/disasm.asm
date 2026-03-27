0x498F40: fld     dword ptr ds:0A3765Ch
0x498F46: push    esi
0x498F47: push    ecx
0x498F48: mov     esi, ecx
0x498F4A: fstp    [esp+8+var_8]; float
0x498F4D: mov     ecx, ds:0B333C4h
0x498F53: call    sub_65E5E0
0x498F58: test    eax, eax
0x498F5A: jz      short loc_498F68
0x498F5C: mov     ecx, eax
0x498F5E: call    TESObjectCELL_GetWaterHeight
0x498F63: fstp    dword ptr [esi+44h]
0x498F66: pop     esi
0x498F67: retn
0x498F68: fldz
0x498F6A: fstp    dword ptr [esi+44h]
0x498F6D: pop     esi
0x498F6E: retn
