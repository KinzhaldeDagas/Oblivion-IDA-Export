0x651799: mov     eax, [edi+178h]
0x65179F: test    eax, eax
0x6517A1: jz      short MiddleHighProc_LinkMagicData?___LinkMagicEffectList
0x6517A3: push    eax
0x6517A4: call    MagicTarget_LookupByFormID
0x6517A9: add     esp, 4
0x6517AC: mov     [edi+178h], eax
