0x7968D0: push    ecx; OBLIVION AUTHORITY (2026-08-30): Stdcall uninitialized_fill_n adapter for vector<unsigned short> owners. Boundary repaired through its pointer-result epilogue and ret 0x0C at 0x796904.
0x7968D1: mov     edx, [esp+4+value]
0x7968D5: push    esi
0x7968D6: mov     esi, [esp+8+count]
0x7968DA: push    edi
0x7968DB: mov     edi, [esp+0Ch+destination]
0x7968DF: mov     byte ptr [esp+0Ch+var_4], 0
0x7968E4: mov     eax, [esp+0Ch+var_4]
0x7968E8: push    eax
0x7968E9: mov     eax, [esp+10h+value]
0x7968ED: push    edx
0x7968EE: push    ecx
0x7968EF: push    eax; value
0x7968F0: push    esi; count
0x7968F1: push    edi; destination
0x7968F2: call    OB_stVector_stVectorUShort_UninitializedFillN_010201A0; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized_fill_n for vector<unsigned short> owners. Deep-copy-constructs count values and normally returns at 0x795DE0; prior noreturn metadata was false.
0x7968F7: mov     eax, esi
0x7968F9: add     esp, 18h
0x7968FC: shl     eax, 4
0x7968FF: add     eax, edi
0x796901: pop     edi
0x796902: pop     esi
0x796903: pop     ecx
0x796904: retn    0Ch
