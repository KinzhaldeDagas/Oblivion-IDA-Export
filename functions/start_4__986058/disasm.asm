0x986058: push    edx
0x986059: fstcw   [esp+4+var_4]
0x98605D: jz      short start_4___inf_or_nan_2
0x98605F: cmp     [esp+4+var_4], 27Fh
0x986065: jz      short start_4___CW_is_set_to_default_3
0x986067: fldcw   word ptr ds:0AA5098h
