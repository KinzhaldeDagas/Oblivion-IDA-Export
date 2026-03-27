0x41E670: push    49h ; 'I'; a2
0x41E672: call    BaseExtraList_GetExtraData
0x41E677: test    eax, eax
0x41E679: jz      short loc_41E67F
0x41E67B: mov     eax, [eax+0Ch]
0x41E67E: retn
0x41E67F: xor     eax, eax
0x41E681: retn
