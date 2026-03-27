0xA1BEE0: push    offset SettingGrassWindMagnitudeMin
0xA1BEE5: mov     ecx, offset dword_B07CFC
0xA1BEEA: call    BSSimpleList_Remove
0xA1BEEF: mov     eax, off_B09B2C; "fGrassWindMagnitudeMin:Grass"
0xA1BEF4: test    eax, eax
0xA1BEF6: jz      short locret_A1BF04
0xA1BEF8: cmp     byte ptr [eax], 53h ; 'S'
0xA1BEFB: jnz     short locret_A1BF04
0xA1BEFD: push    eax
0xA1BEFE: call    FormHeapFree
0xA1BF03: pop     ecx
0xA1BF04: retn
