0x6A1DF0: mov     eax, [ecx]
0x6A1DF2: mov     edx, [eax+8]
0x6A1DF5: call    edx
0x6A1DF7: mov     ecx, eax
0x6A1DF9: xor     al, al
0x6A1DFB: test    ecx, ecx
0x6A1DFD: jz      short MagicTarget_HasMagicItem___Done
0x6A1DFF: push    esi
0x6A1E00: mov     esi, [esp+4+arg_0]
