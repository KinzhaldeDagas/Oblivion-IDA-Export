0x693410: push    esi
0x693411: mov     esi, ecx
0x693413: call    ValueModifierEffect_Remove
0x693418: mov     ecx, [esi+20h]
0x69341B: mov     eax, [ecx]
0x69341D: mov     edx, [eax+4]
0x693420: call    edx
0x693422: mov     ecx, ds:0B333C4h
0x693428: cmp     eax, ecx
0x69342A: pop     esi
0x69342B: jnz     short locret_693443
0x69342D: mov     eax, [ecx]
0x69342F: mov     edx, [eax+284h]
0x693435: push    3Ah ; ':'
0x693437: call    edx
0x693439: test    eax, eax
0x69343B: setnle  al
0x69343E: mov     ds:0B3C0ABh, al
0x693443: retn
