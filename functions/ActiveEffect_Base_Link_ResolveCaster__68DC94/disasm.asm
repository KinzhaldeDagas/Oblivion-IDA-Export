0x68DC94: mov     eax, [edi+24h]
0x68DC97: test    eax, eax
0x68DC99: jz      short ActiveEffect_Base_Link___ResolveTarget
0x68DC9B: push    eax
0x68DC9C: call    MagicCaster_GetFromRefID
0x68DCA1: add     esp, 4
0x68DCA4: mov     [edi+24h], eax
