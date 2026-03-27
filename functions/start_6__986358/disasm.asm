0x986358: push    edx
0x986359: fstcw   [esp+4+var_4]
0x98635D: jz      short start_6___inf_or_nan_4
0x98635F: cmp     [esp+4+var_4], 27Fh
0x986365: jz      short start_6___CW_is_set_to_default_5
0x986367: fldcw   word ptr ds:0AA5098h
