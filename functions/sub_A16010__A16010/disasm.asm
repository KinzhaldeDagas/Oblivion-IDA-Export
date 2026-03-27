0xA16010: fld1
0xA16012: push    offset Vector3_InitValue?; int
0xA16017: push    ecx
0xA16018: fstp    [esp+8+var_8]; float
0xA1601B: mov     ecx, offset dword_BA9A70
0xA16020: call    sub_96C420
0xA16025: push    offset sub_A27BB0; void (__cdecl *)()
0xA1602A: call    _atexit
0xA1602F: pop     ecx
0xA16030: retn
