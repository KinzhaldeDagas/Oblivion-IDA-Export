0x651780: mov     eax, [edi+144h]
0x651786: test    eax, eax
0x651788: jz      short MiddleHighProc_LinkMagicData?___LinkCastingTarget
0x65178A: push    eax
0x65178B: call    MagicItem_LookupByFormID
0x651790: add     esp, 4
0x651793: mov     [edi+144h], eax
