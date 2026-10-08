0x79AB30: push    ecx; Checked uninitialized_fill_n wrapper for SFrondVertex. Constructs count copies and returns destination+count.
0x79AB31: mov     edx, [esp+4+value]
0x79AB35: push    esi
0x79AB36: mov     esi, [esp+8+count]
0x79AB3A: push    edi
0x79AB3B: mov     edi, [esp+0Ch+destination]
0x79AB3F: mov     byte ptr [esp+0Ch+debugCookie], 0
0x79AB44: mov     eax, [esp+0Ch+debugCookie]
0x79AB48: push    eax; debugCookie
0x79AB49: mov     eax, [esp+10h+value]
0x79AB4D: push    edx; debugValue
0x79AB4E: push    ecx; debugOwner
0x79AB4F: push    eax; value
0x79AB50: push    esi; count
0x79AB51: push    edi; destination
0x79AB52: call    OB_SFrondVertex_UninitializedFillN_010201A0; Low-level uninitialized_fill_n for trivial 0x38-byte SFrondVertex records. Oblivion call sites pass three effective operands plus three checked-iterator/debug operands that this body does not consume.
0x79AB57: add     esp, 18h
0x79AB5A: lea     ecx, ds:0[esi*8]
0x79AB61: sub     ecx, esi
0x79AB63: lea     eax, [edi+ecx*8]
0x79AB66: pop     edi
0x79AB67: pop     esi
0x79AB68: pop     ecx
0x79AB69: retn    0Ch
