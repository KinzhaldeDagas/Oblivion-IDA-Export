0x982C4D: push    edx
0x982C4E: fstcw   [esp+4+var_4]
0x982C52: mov     eax, [esp+4+arg_4]
0x982C56: jz      short start_0___inf_or_nan
0x982C58: cmp     [esp+4+var_4], 27Fh
0x982C5E: jz      short start_0___CW_is_set_to_default
0x982C60: call    unknown_libname_158
