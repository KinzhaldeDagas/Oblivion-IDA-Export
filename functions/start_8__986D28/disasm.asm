0x986D28: push    edx
0x986D29: fstcw   [esp+4+var_4]
0x986D2D: jz      short start_8___inf_or_nan_6
0x986D2F: mov     eax, [esp+4+arg_4]
0x986D33: cmp     [esp+4+var_4], 27Fh
0x986D39: jz      short start_8___CW_is_set_to_default_7
0x986D3B: fldcw   word ptr ds:0AA5098h
