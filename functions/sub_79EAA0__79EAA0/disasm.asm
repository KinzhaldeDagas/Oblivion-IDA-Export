0x79EAA0: mov     eax, [esp+last]; Thin destroy-range trampoline for compact SFrondGuide records.
0x79EAA4: mov     edx, [esp+first]
0x79EAA8: push    eax
0x79EAA9: push    ecx
0x79EAAA: mov     ecx, [esp+8+last]
0x79EAAE: push    ecx; last
0x79EAAF: push    edx; first
0x79EAB0: call    OB_SFrondGuide_DestroyRange_010201A0; Destroys every compact SFrondGuide in [first,last), freeing each embedded SFrondVertex vector.
0x79EAB5: add     esp, 10h
0x79EAB8: retn    8
