0x679060: push    ecx
0x679061: push    ebx
0x679062: push    esi
0x679063: xor     eax, eax
0x679065: lea     esi, [ecx+40h]
0x679068: mov     [esp+0Ch+var_4], eax
0x67906C: cmp     [esi+4], eax
0x67906F: push    edi
0x679070: jnz     short loc_679081
0x679072: xor     edi, edi
0x679074: cmp     [esi], edi
0x679076: mov     eax, 1
0x67907B: jnz     short loc_679085
0x67907D: mov     bl, al
0x67907F: jmp     short loc_679087
0x679081: mov     edi, [esp+10h+var_4]
0x679085: xor     bl, bl
0x679087: test    al, 1
0x679089: jz      short loc_6790A7
0x67908B: test    edi, edi
0x67908D: jz      short loc_6790A7
0x67908F: lea     eax, [edi+4]
0x679092: push    eax; lpAddend
0x679093: call    dword ptr ds:0A2807Ch
0x679099: test    eax, eax
0x67909B: jnz     short loc_6790A7
0x67909D: mov     edx, [edi]
0x67909F: mov     eax, [edx]
0x6790A1: push    1
0x6790A3: mov     ecx, edi
0x6790A5: call    eax
0x6790A7: test    bl, bl
0x6790A9: jnz     short loc_679113
0x6790AB: push    ebp
0x6790AC: mov     ebp, esi
0x6790AE: test    ebp, ebp
0x6790B0: jz      short loc_679112
0x6790B2: lea     ecx, [esp+14h+var_4]
0x6790B6: push    ecx
0x6790B7: mov     ecx, ebp
0x6790B9: call    sub_677C70
0x6790BE: mov     edi, [eax]
0x6790C0: mov     eax, [esp+14h+var_4]
0x6790C4: test    eax, eax
0x6790C6: jz      short loc_6790E6
0x6790C8: mov     esi, eax
0x6790CA: add     eax, 4
0x6790CD: push    eax; lpAddend
0x6790CE: call    dword ptr ds:0A2807Ch
0x6790D4: test    eax, eax
0x6790D6: jnz     short loc_6790E6
0x6790D8: test    esi, esi
0x6790DA: jz      short loc_6790E6
0x6790DC: mov     edx, [esi]
0x6790DE: mov     eax, [edx]
0x6790E0: push    1
0x6790E2: mov     ecx, esi
0x6790E4: call    eax
0x6790E6: test    edi, edi
0x6790E8: jz      short loc_67910B
0x6790EA: mov     edx, [edi]
0x6790EC: mov     eax, [edx+4]
0x6790EF: mov     ecx, edi
0x6790F1: call    eax
0x6790F3: test    eax, eax
0x6790F5: jz      short loc_67910B
0x6790F7: cmp     eax, offset unk_B3A694
0x6790FC: jz      short loc_679107
0x6790FE: mov     eax, [eax+4]
0x679101: test    eax, eax
0x679103: jnz     short loc_6790F7
0x679105: jmp     short loc_67910B
0x679107: mov     byte ptr [edi+28h], 1
0x67910B: mov     ebp, [ebp+4]
0x67910E: test    ebp, ebp
0x679110: jnz     short loc_6790B2
0x679112: pop     ebp
0x679113: pop     edi
0x679114: pop     esi
0x679115: pop     ebx
0x679116: pop     ecx
0x679117: retn
