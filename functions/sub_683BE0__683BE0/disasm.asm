0x683BE0: cmp     byte ptr ds:0B3C08Ah, 0; Verified TogglePathLineState flips BYTE2(qword_B3BB2C[0x157]) and returns the new value. Its only direct caller is ScriptCommand_TogglePathLine; exact semantics of the packed manager field remain Unknown.
0x683BE7: setz    al
0x683BEA: mov     ds:0B3C08Ah, al
0x683BEF: retn
