0x572EC0: mov     eax, [esp+arg_0]
0x572EC4: push    esi
0x572EC5: lea     esi, [eax+eax*2]
0x572EC8: add     esi, esi
0x572ECA: add     esi, esi
0x572ECC: mov     eax, ds:dword_B12DD0[esi+esi]
0x572ED3: add     esi, esi
0x572ED5: test    eax, eax
0x572ED7: jz      short loc_572F52
0x572ED9: cmp     [esp+4+arg_4], 0
0x572EDE: jnz     short loc_572EF4
0x572EE0: cmp     byte ptr ds:0B3A6D4h, 0
0x572EE7: jnz     short loc_572EF4
0x572EE9: mov     ds:byte_B12DC8[esi], 0
0x572EF0: pop     esi
0x572EF1: retn    8
0x572EF4: mov     ecx, [eax+1Ch]
0x572EF7: mov     edx, [ecx]
0x572EF9: mov     edx, [edx+88h]
0x572EFF: push    eax
0x572F00: lea     eax, [esp+8+arg_4]
0x572F04: push    eax
0x572F05: call    edx
0x572F07: mov     eax, dword ptr [esp+4+arg_4]
0x572F0B: test    eax, eax
0x572F0D: jz      short loc_572F2F
0x572F0F: push    edi
0x572F10: mov     edi, eax
0x572F12: add     eax, 4
0x572F15: push    eax; lpAddend
0x572F16: call    dword ptr ds:0A2807Ch
0x572F1C: test    eax, eax
0x572F1E: jnz     short loc_572F2E
0x572F20: test    edi, edi
0x572F22: jz      short loc_572F2E
0x572F24: mov     eax, [edi]
0x572F26: mov     edx, [eax]
0x572F28: push    1
0x572F2A: mov     ecx, edi
0x572F2C: call    edx
0x572F2E: pop     edi
0x572F2F: fldz
0x572F31: mov     ecx, ds:0B333A0h
0x572F37: push    0
0x572F39: fstp    dword ptr [esi+0B12DD4h]
0x572F3F: push    0
0x572F41: push    0
0x572F43: mov     ds:dword_B12DD0[esi], 0
0x572F4D: call    sub_440AF0
0x572F52: pop     esi
0x572F53: retn    8
