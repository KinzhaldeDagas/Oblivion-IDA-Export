0x485FA0: mov     eax, [ecx]
0x485FA2: test    eax, eax
0x485FA4: push    ebx
0x485FA5: push    esi
0x485FA6: push    edi
0x485FA7: mov     dl, 1
0x485FA9: jz      short loc_485FCA
0x485FAB: mov     esi, [esp+0Ch+arg_0]
0x485FAF: nop
0x485FB0: test    dl, dl
0x485FB2: jz      short loc_485FD2
0x485FB4: mov     ecx, [eax]
0x485FB6: test    ecx, ecx
0x485FB8: jz      short loc_485FC3
0x485FBA: cmp     [ecx+8], esi
0x485FBD: jnz     short loc_485FC3
0x485FBF: xor     dl, dl
0x485FC1: jmp     short loc_485FC6
0x485FC3: mov     eax, [eax+4]
0x485FC6: test    eax, eax
0x485FC8: jnz     short loc_485FB0
0x485FCA: pop     edi
0x485FCB: pop     esi
0x485FCC: xor     eax, eax
0x485FCE: pop     ebx
0x485FCF: retn    8
0x485FD2: test    eax, eax
0x485FD4: jz      short loc_485FCA
0x485FD6: mov     eax, [eax]
0x485FD8: test    eax, eax
0x485FDA: jz      short loc_485FCA
0x485FDC: mov     edi, [eax]
0x485FDE: test    edi, edi
0x485FE0: jz      short loc_485FCA
0x485FE2: mov     bl, [esp+0Ch+arg_4]
0x485FE6: mov     esi, [edi]
0x485FE8: test    esi, esi
0x485FEA: jz      short loc_485FCA
0x485FEC: push    0
0x485FEE: mov     ecx, esi
0x485FF0: call    ExtraDataList_HasWorn
0x485FF5: test    al, al
0x485FF7: jnz     short loc_486022
0x485FF9: mov     ecx, esi
0x485FFB: call    sub_41DF40
0x486000: test    al, al
0x486002: jz      short loc_486008
0x486004: test    bl, bl
0x486006: jnz     short loc_486017
0x486008: mov     edi, [edi+4]
0x48600B: test    edi, edi
0x48600D: jnz     short loc_485FE6
0x48600F: pop     edi
0x486010: pop     esi
0x486011: xor     eax, eax
0x486013: pop     ebx
0x486014: retn    8
0x486017: push    0
0x486019: push    1
0x48601B: mov     ecx, esi
0x48601D: call    SetWorn
0x486022: pop     edi
0x486023: mov     eax, esi
0x486025: pop     esi
0x486026: pop     ebx
0x486027: retn    8
