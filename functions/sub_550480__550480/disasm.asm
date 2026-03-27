0x550480: push    ecx
0x550481: xor     edx, edx
0x550483: mov     [esp+4+var_4], edx
0x550486: mov     eax, [ecx+8]
0x550489: test    eax, eax
0x55048B: push    esi
0x55048C: push    edi
0x55048D: jz      short loc_550498
0x55048F: mov     esi, [esp+0Ch+var_4]
0x550493: add     eax, 1Ch
0x550496: jmp     short loc_5504A7
0x550498: xor     esi, esi
0x55049A: mov     [esp+0Ch+var_4], esi
0x55049E: lea     eax, [esp+0Ch+var_4]
0x5504A2: mov     edx, 1
0x5504A7: test    dl, 1
0x5504AA: mov     edi, [eax]
0x5504AC: jz      short loc_5504CA
0x5504AE: test    esi, esi
0x5504B0: jz      short loc_5504CA
0x5504B2: lea     eax, [esi+4]
0x5504B5: push    eax; lpAddend
0x5504B6: call    dword ptr ds:0A2807Ch
0x5504BC: test    eax, eax
0x5504BE: jnz     short loc_5504CA
0x5504C0: mov     edx, [esi]
0x5504C2: mov     eax, [edx]
0x5504C4: push    1
0x5504C6: mov     ecx, esi
0x5504C8: call    eax
0x5504CA: mov     eax, edi
0x5504CC: pop     edi
0x5504CD: pop     esi
0x5504CE: pop     ecx
0x5504CF: retn
