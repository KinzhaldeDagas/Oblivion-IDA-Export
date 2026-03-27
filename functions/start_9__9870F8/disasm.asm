0x9870F8: push    edx
0x9870F9: fstcw   [esp+4+var_4]
0x9870FD: jz      short start_9___inf_or_nan_7
0x9870FF: cmp     [esp+4+var_4], 27Fh
0x987105: jz      short start_9___CW_is_set_to_default_8
0x987107: fldcw   word ptr ds:0AA5098h
