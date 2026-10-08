0x68EDC8: push    ebx
0x68EDC9: push    esi
0x68EDCA: push    4; byteCount
0x68EDCC: lea     edx, [esp+0Ch+Dst]
0x68EDD0: push    edx; destination
0x68EDD1: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x68EDD6: mov     ecx, ds:0B33B00h
