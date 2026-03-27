0x68DCA7: mov     esi, [edi+20h]
0x68DCAA: test    esi, esi
0x68DCAC: jz      short ActiveEffect_Base_Link___ResolveBoundObj
0x68DCAE: push    esi
0x68DCAF: call    MagicTarget_LookupByFormID
0x68DCB4: add     esp, 4
0x68DCB7: mov     [edi+20h], eax
