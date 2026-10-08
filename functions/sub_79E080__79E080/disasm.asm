0x79E080: push    ecx; st_vector<SFrondTexture> uninitialized-fill thunk: placement-copy-constructs count values and returns destination+count.
0x79E081: mov     edx, [esp+4+value]
0x79E085: push    esi
0x79E086: mov     esi, [esp+8+count]
0x79E08A: push    edi
0x79E08B: mov     edi, [esp+0Ch+destination]
0x79E08F: mov     byte ptr [esp+0Ch+var_4], 0
0x79E094: mov     eax, [esp+0Ch+var_4]
0x79E098: push    eax
0x79E099: mov     eax, [esp+10h+value]
0x79E09D: push    edx
0x79E09E: push    ecx
0x79E09F: push    eax; value
0x79E0A0: push    esi; count
0x79E0A1: push    edi; destination
0x79E0A2: call    OB_SFrondTexture_UninitializedFillN_010201A0; Exception-safe uninitialized_fill_n for SFrondTexture. Placement-copy-constructs count records; the SEH cleanup landing path destroys the constructed prefix before rethrowing.
0x79E0A7: mov     eax, esi
0x79E0A9: imul    eax, 2Ch ; ','
0x79E0AC: add     esp, 18h
0x79E0AF: add     eax, edi
0x79E0B1: pop     edi
0x79E0B2: pop     esi
0x79E0B3: pop     ecx
0x79E0B4: retn    0Ch
