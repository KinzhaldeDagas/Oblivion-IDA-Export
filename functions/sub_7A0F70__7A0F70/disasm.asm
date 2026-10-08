0x7A0F70: push    ecx; Return-value wrapper for outer-vector uninitialized_fill_n; returns destination+count after deep construction.
0x7A0F71: mov     edx, [esp+4+value]
0x7A0F75: push    esi
0x7A0F76: mov     esi, [esp+8+count]
0x7A0F7A: push    edi
0x7A0F7B: mov     edi, [esp+0Ch+destination]
0x7A0F7F: mov     byte ptr [esp+0Ch+var_4], 0
0x7A0F84: mov     eax, [esp+0Ch+var_4]
0x7A0F88: push    eax
0x7A0F89: mov     eax, [esp+10h+value]
0x7A0F8D: push    edx
0x7A0F8E: push    ecx
0x7A0F8F: push    eax; value
0x7A0F90: push    esi; count
0x7A0F91: push    edi; destination
0x7A0F92: call    OB_stVector_stVector_SFrondGuide_UninitializedFillN_010201A0; Exception-safe uninitialized_fill_n for outer-vector elements of type st_vector<SFrondGuide>. Each element is deep-copy-constructed; the unwind landing path destroys the constructed prefix.
0x7A0F97: mov     eax, esi
0x7A0F99: add     esp, 18h
0x7A0F9C: shl     eax, 4
0x7A0F9F: add     eax, edi
0x7A0FA1: pop     edi
0x7A0FA2: pop     esi
0x7A0FA3: pop     ecx
0x7A0FA4: retn    0Ch
