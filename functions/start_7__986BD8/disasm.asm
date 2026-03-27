0x986BD8: push    edx
0x986BD9: fstcw   [esp+4+var_4]
0x986BDD: jz      short start_7___inf_or_nan_5
0x986BDF: mov     eax, [esp+4+arg_4]
0x986BE3: cmp     [esp+4+var_4], 27Fh
0x986BE9: jz      short start_7___CW_is_set_to_default_6
0x986BEB: fldcw   word ptr ds:0AA5098h
