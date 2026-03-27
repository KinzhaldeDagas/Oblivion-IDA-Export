0x983B48: push    edx
0x983B49: fstcw   [esp+4+var_4]
0x983B4D: jz      short start_1___inf_or_nan_0
0x983B4F: cmp     [esp+4+var_4], 27Fh
0x983B55: jz      short start_1___CW_is_set_to_default_0
0x983B57: fldcw   word ptr ds:0AA5098h
