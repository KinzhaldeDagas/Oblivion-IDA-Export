0x47C990: push    ecx
0x47C991: push    esi
0x47C992: push    edi
0x47C993: mov     edi, ecx
0x47C995: mov     dword ptr ds:0BA7A8Ch, 3
0x47C99F: mov     esi, [edi+0Ch]
0x47C9A2: test    esi, esi
0x47C9A4: jz      short loc_47C9E3
0x47C9A6: mov     eax, [esi]
0x47C9A8: mov     edx, [eax+4]
0x47C9AB: mov     ecx, esi
0x47C9AD: call    edx
0x47C9AF: test    eax, eax
0x47C9B1: jz      short loc_47C9C1
0x47C9B3: cmp     eax, offset dword_B3CD7C
0x47C9B8: jz      short loc_47CA2C
0x47C9BA: mov     eax, [eax+4]
0x47C9BD: test    eax, eax
0x47C9BF: jnz     short loc_47C9B3
0x47C9C1: xor     al, al
0x47C9C3: neg     al
0x47C9C5: sbb     eax, eax
0x47C9C7: and     eax, esi
0x47C9C9: jnz     short loc_47C9DC
0x47C9CB: mov     eax, [esi]
0x47C9CD: fld     [esp+0Ch+arg_0]
0x47C9D1: mov     edx, [eax+54h]
0x47C9D4: push    ecx
0x47C9D5: mov     ecx, esi
0x47C9D7: fstp    [esp+10h+var_10]
0x47C9DA: call    edx
0x47C9DC: mov     esi, [esi+34h]
0x47C9DF: test    esi, esi
0x47C9E1: jnz     short loc_47C9A6
0x47C9E3: mov     eax, [edi]
0x47C9E5: mov     edx, [eax+74h]
0x47C9E8: mov     ecx, edi
0x47C9EA: call    edx
0x47C9EC: mov     esi, [esp+0Ch+arg_4]
0x47C9F0: test    esi, esi
0x47C9F2: jz      short loc_47CA1C
0x47C9F4: mov     ecx, [esi+1Ch]
0x47C9F7: cmp     ecx, edi
0x47C9F9: jz      short loc_47CA02
0x47C9FB: mov     eax, [ecx]
0x47C9FD: mov     edx, [eax+74h]
0x47CA00: call    edx
0x47CA02: fld     [esp+0Ch+arg_0]
0x47CA06: push    1; char
0x47CA08: push    ecx
0x47CA09: mov     ecx, esi
0x47CA0B: fstp    [esp+14h+var_14]; float
0x47CA0E: call    sub_47C930
0x47CA13: mov     eax, [esi]
0x47CA15: mov     edx, [eax+74h]
0x47CA18: mov     ecx, esi
0x47CA1A: call    edx
0x47CA1C: pop     edi
0x47CA1D: mov     dword ptr ds:0BA7A8Ch, 0
0x47CA27: pop     esi
0x47CA28: pop     ecx
0x47CA29: retn    8
0x47CA2C: mov     al, 1
0x47CA2E: jmp     short loc_47C9C3
