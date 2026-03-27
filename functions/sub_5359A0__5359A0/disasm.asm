0x5359A0: push    esi
0x5359A1: mov     esi, [esp+4+arg_0]
0x5359A5: mov     edx, [esi+0Ch]
0x5359A8: test    edx, edx
0x5359AA: mov     eax, esi
0x5359AC: jz      short loc_5359B9
0x5359AE: mov     edi, edi
0x5359B0: mov     eax, edx
0x5359B2: mov     edx, [eax+0Ch]
0x5359B5: test    edx, edx
0x5359B7: jnz     short loc_5359B0
0x5359B9: mov     eax, [eax+1Ch]
0x5359BC: mov     edx, [ecx+40h]
0x5359BF: xor     edx, eax
0x5359C1: test    dl, 3Fh
0x5359C4: jnz     short loc_5359CF
0x5359C6: shr     eax, 10h
0x5359C9: cmp     ax, [ecx+42h]
0x5359CD: jnz     short loc_5359DA
0x5359CF: mov     eax, [esp+4+arg_4]
0x5359D3: push    eax
0x5359D4: push    esi
0x5359D5: call    sub_8B1AB0
0x5359DA: pop     esi
0x5359DB: retn    8
