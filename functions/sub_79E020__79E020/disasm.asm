0x79E020: push    ebx; Checked erase-range for st_vector<SFrondTexture>. Validates iterator owners, deep-moves [last,end) over [first,last), destroys the vacated tail, updates end, and returns {owner,first}.
0x79E021: push    ebp
0x79E022: mov     ebp, [esp+8+firstOwner]
0x79E026: test    ebp, ebp
0x79E028: push    esi
0x79E029: mov     esi, ecx
0x79E02B: jz      short loc_79E033
0x79E02D: cmp     ebp, [esp+0Ch+lastOwner]
0x79E031: jz      short loc_79E038
0x79E033: call    __invalid_parameter_noinfo
0x79E038: mov     ebx, [esp+0Ch+first]
0x79E03C: mov     eax, [esp+0Ch+last]
0x79E040: cmp     ebx, eax
0x79E042: jz      short loc_79E069
0x79E044: mov     ecx, [esi+8]
0x79E047: push    edi
0x79E048: push    ebx; destinationFirst
0x79E049: push    ecx; last
0x79E04A: push    eax; first
0x79E04B: call    OB_SFrondTexture_CopyAssignRangeForwardThunk_010201A0; Checked/STL trampoline around forward SFrondTexture range assignment; returns destination end.
0x79E050: mov     edx, [esp+1Ch+result]
0x79E054: push    edx
0x79E055: mov     edi, eax
0x79E057: mov     eax, [esi+8]
0x79E05A: push    esi
0x79E05B: push    eax; last
0x79E05C: push    edi; first
0x79E05D: call    OB_SFrondTexture_DestroyRange_010201A0; Destroys [first,last) SFrondTexture records at 0x2C-byte stride by releasing each embedded filename string.
0x79E062: add     esp, 1Ch
0x79E065: mov     [esi+8], edi
0x79E068: pop     edi
0x79E069: mov     eax, [esp+0Ch+result]
0x79E06D: pop     esi
0x79E06E: mov     [eax], ebp
0x79E070: pop     ebp
0x79E071: mov     [eax+4], ebx
0x79E074: pop     ebx
0x79E075: retn    14h
