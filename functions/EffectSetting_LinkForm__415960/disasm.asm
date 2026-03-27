0x415960: push    ecx
0x415961: push    esi
0x415962: mov     esi, ecx
0x415964: mov     eax, [esi+8]
0x415967: shr     eax, 3
0x41596A: test    al, 1
0x41596C: jnz     EffectSetting_LinkForm___Done
0x415972: mov     eax, [esi+58h]
0x415975: test    eax, 70000h
0x41597A: jz      short EffectSetting_LinkForm___ResolveLight
0x41597C: test    eax, 180000h
0x415981: jnz     short EffectSetting_LinkForm___ResolveLight
