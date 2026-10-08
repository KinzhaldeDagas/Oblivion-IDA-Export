0x651799: mov     eax, [edi+178h]
0x65179F: test    eax, eax
0x6517A1: jz      short MiddleHighProc_LinkMagicData?___LinkMagicEffectList; Verified LowProcess load-link path calls ActiveEffect_Base_LinkAEList on its embedded active-effect EffectNode chain before resolving other saved references. Fallout uses its separate staged ActiveEffect load callbacks rather than this Oblivion link slot.
0x6517A3: push    eax
0x6517A4: call    MagicTarget_LookupByFormID
0x6517A9: add     esp, 4
0x6517AC: mov     [edi+178h], eax
