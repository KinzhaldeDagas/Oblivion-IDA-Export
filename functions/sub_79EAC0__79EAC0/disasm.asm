0x79EAC0: push    ecx; Vector-context checked uninitialized_fill_n wrapper for compact SFrondGuide. Exception-safe construction is delegated to 0x79E190; returns destination+count.
0x79EAC1: mov     edx, [esp+4+value]
0x79EAC5: push    esi
0x79EAC6: mov     esi, [esp+8+count]
0x79EACA: push    edi
0x79EACB: mov     edi, [esp+0Ch+destination]
0x79EACF: mov     byte ptr [esp+0Ch+var_4], 0
0x79EAD4: mov     eax, [esp+0Ch+var_4]
0x79EAD8: push    eax
0x79EAD9: mov     eax, [esp+10h+value]
0x79EADD: push    edx
0x79EADE: push    ecx
0x79EADF: push    eax; value
0x79EAE0: push    esi; count
0x79EAE1: push    edi; destination
0x79EAE2: call    OB_SFrondGuide_UninitializedFillN_010201A0; Exception-safe uninitialized_fill_n for compact SFrondGuide records. Placement-copy-constructs count values; unwind cleanup destroys the constructed prefix before rethrowing.
0x79EAE7: lea     eax, [esi+esi*2]
0x79EAEA: add     esp, 18h
0x79EAED: shl     eax, 4
0x79EAF0: add     eax, edi
0x79EAF2: pop     edi
0x79EAF3: pop     esi
0x79EAF4: pop     ecx
0x79EAF5: retn    0Ch
