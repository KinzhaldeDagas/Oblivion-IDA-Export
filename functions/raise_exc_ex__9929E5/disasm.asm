0x9929E5: push    ebp
0x9929E6: mov     ebp, esp
0x9929E8: mov     eax, [ebp+Arguments]
0x9929EB: mov     cl, byte ptr [ebp+dwExceptionCode]
0x9929EE: push    ebx
0x9929EF: push    esi
0x9929F0: push    edi
0x9929F1: xor     edi, edi
0x9929F3: mov     [eax+4], edi
0x9929F6: mov     eax, [ebp+Arguments]
0x9929F9: xor     ebx, ebx
0x9929FB: mov     [eax+8], edi
0x9929FE: mov     eax, [ebp+Arguments]
0x992A01: inc     ebx
0x992A02: test    cl, 10h
0x992A05: mov     [eax+0Ch], edi
0x992A08: jz      short loc_992A17
0x992A0A: mov     eax, [ebp+Arguments]
0x992A0D: or      [eax+4], ebx
0x992A10: mov     [ebp+dwExceptionCode], 0C000008Fh
0x992A17: test    cl, 2
0x992A1A: jz      short loc_992A2A
0x992A1C: mov     eax, [ebp+Arguments]
0x992A1F: or      dword ptr [eax+4], 2
0x992A23: mov     [ebp+dwExceptionCode], 0C0000093h
0x992A2A: test    bl, cl
0x992A2C: jz      short loc_992A3C
0x992A2E: mov     eax, [ebp+Arguments]
0x992A31: or      dword ptr [eax+4], 4
0x992A35: mov     [ebp+dwExceptionCode], 0C0000091h
0x992A3C: test    cl, 4
0x992A3F: jz      short loc_992A4F
0x992A41: mov     eax, [ebp+Arguments]
0x992A44: or      dword ptr [eax+4], 8
0x992A48: mov     [ebp+dwExceptionCode], 0C000008Eh
0x992A4F: test    cl, 8
0x992A52: jz      short loc_992A62
0x992A54: mov     eax, [ebp+Arguments]
0x992A57: or      dword ptr [eax+4], 10h
0x992A5B: mov     [ebp+dwExceptionCode], 0C0000090h
0x992A62: mov     esi, [ebp+arg_4]
0x992A65: mov     ecx, [esi]
0x992A67: mov     eax, [ebp+Arguments]
0x992A6A: shl     ecx, 4
0x992A6D: not     ecx
0x992A6F: xor     ecx, [eax+8]
0x992A72: and     ecx, 10h
0x992A75: xor     [eax+8], ecx
0x992A78: mov     ecx, [esi]
0x992A7A: mov     eax, [ebp+Arguments]
0x992A7D: add     ecx, ecx
0x992A7F: not     ecx
0x992A81: xor     ecx, [eax+8]
0x992A84: and     ecx, 8
0x992A87: xor     [eax+8], ecx
0x992A8A: mov     ecx, [esi]
0x992A8C: mov     eax, [ebp+Arguments]
0x992A8F: shr     ecx, 1
0x992A91: not     ecx
0x992A93: xor     ecx, [eax+8]
0x992A96: and     ecx, 4
0x992A99: xor     [eax+8], ecx
0x992A9C: mov     ecx, [esi]
0x992A9E: mov     eax, [ebp+Arguments]
0x992AA1: shr     ecx, 3
0x992AA4: not     ecx
0x992AA6: xor     ecx, [eax+8]
0x992AA9: and     ecx, 2
0x992AAC: xor     [eax+8], ecx
0x992AAF: mov     ecx, [esi]
0x992AB1: mov     eax, [ebp+Arguments]
0x992AB4: shr     ecx, 5
0x992AB7: not     ecx
0x992AB9: xor     ecx, [eax+8]
0x992ABC: and     ecx, ebx
0x992ABE: xor     [eax+8], ecx
0x992AC1: call    __statfp
0x992AC6: test    bl, al
0x992AC8: jz      short loc_992AD1
0x992ACA: mov     ecx, [ebp+Arguments]
0x992ACD: or      dword ptr [ecx+0Ch], 10h
0x992AD1: test    al, 4
0x992AD3: jz      short loc_992ADC
0x992AD5: mov     ecx, [ebp+Arguments]
0x992AD8: or      dword ptr [ecx+0Ch], 8
0x992ADC: test    al, 8
0x992ADE: jz      short loc_992AE7
0x992AE0: mov     ecx, [ebp+Arguments]
0x992AE3: or      dword ptr [ecx+0Ch], 4
0x992AE7: test    al, 10h
0x992AE9: jz      short loc_992AF2
0x992AEB: mov     ecx, [ebp+Arguments]
0x992AEE: or      dword ptr [ecx+0Ch], 2
0x992AF2: test    al, 20h
0x992AF4: jz      short loc_992AFC
0x992AF6: mov     eax, [ebp+Arguments]
0x992AF9: or      [eax+0Ch], ebx
0x992AFC: mov     eax, [esi]
0x992AFE: mov     ecx, 0C00h
0x992B03: and     eax, ecx
0x992B05: jz      short loc_992B3C
0x992B07: cmp     eax, 400h
0x992B0C: jz      short loc_992B30
0x992B0E: cmp     eax, 800h
0x992B13: jz      short loc_992B21
0x992B15: cmp     eax, ecx
0x992B17: jnz     short loc_992B42
0x992B19: mov     eax, [ebp+Arguments]
0x992B1C: or      dword ptr [eax], 3
0x992B1F: jmp     short loc_992B42
0x992B21: mov     eax, [ebp+Arguments]
0x992B24: mov     ecx, [eax]
0x992B26: and     ecx, 0FFFFFFFEh
0x992B29: or      ecx, 2
0x992B2C: mov     [eax], ecx
0x992B2E: jmp     short loc_992B42
0x992B30: mov     eax, [ebp+Arguments]
0x992B33: mov     ecx, [eax]
0x992B35: and     ecx, 0FFFFFFFDh
0x992B38: or      ecx, ebx
0x992B3A: jmp     short loc_992B2C
0x992B3C: mov     eax, [ebp+Arguments]
0x992B3F: and     dword ptr [eax], 0FFFFFFFCh
0x992B42: mov     eax, [esi]
0x992B44: mov     ecx, 300h
0x992B49: and     eax, ecx
0x992B4B: jz      short loc_992B6D
0x992B4D: cmp     eax, 200h
0x992B52: jz      short loc_992B60
0x992B54: cmp     eax, ecx
0x992B56: jnz     short loc_992B7A
0x992B58: mov     eax, [ebp+Arguments]
0x992B5B: and     dword ptr [eax], 0FFFFFFE3h
0x992B5E: jmp     short loc_992B7A
0x992B60: mov     eax, [ebp+Arguments]
0x992B63: mov     ecx, [eax]
0x992B65: and     ecx, 0FFFFFFE7h
0x992B68: or      ecx, 4
0x992B6B: jmp     short loc_992B78
0x992B6D: mov     eax, [ebp+Arguments]
0x992B70: mov     ecx, [eax]
0x992B72: and     ecx, 0FFFFFFEBh
0x992B75: or      ecx, 8
0x992B78: mov     [eax], ecx
0x992B7A: mov     eax, [ebp+Arguments]
0x992B7D: mov     ecx, [ebp+arg_C]
0x992B80: shl     ecx, 5
0x992B83: xor     ecx, [eax]
0x992B85: and     ecx, 1FFE0h
0x992B8B: xor     [eax], ecx
0x992B8D: mov     eax, [ebp+Arguments]
0x992B90: or      [eax+20h], ebx
0x992B93: cmp     [ebp+arg_18], edi
0x992B96: mov     eax, [ebp+Arguments]
0x992B99: mov     edi, [ebp+arg_14]
0x992B9C: jz      short loc_992BC4
0x992B9E: and     dword ptr [eax+20h], 0FFFFFFE1h
0x992BA2: mov     eax, [ebp+arg_10]
0x992BA5: fld     dword ptr [eax]
0x992BA7: mov     eax, [ebp+Arguments]
0x992BAA: fstp    dword ptr [eax+10h]
0x992BAD: mov     eax, [ebp+Arguments]
0x992BB0: or      [eax+60h], ebx
0x992BB3: mov     eax, [ebp+Arguments]
0x992BB6: and     dword ptr [eax+60h], 0FFFFFFE1h
0x992BBA: fld     dword ptr [edi]
0x992BBC: mov     eax, [ebp+Arguments]
0x992BBF: fstp    dword ptr [eax+50h]
0x992BC2: jmp     short loc_992BF8
0x992BC4: mov     ecx, [eax+20h]
0x992BC7: and     ecx, 0FFFFFFE3h
0x992BCA: or      ecx, 2
0x992BCD: mov     [eax+20h], ecx
0x992BD0: mov     eax, [ebp+arg_10]
0x992BD3: fld     qword ptr [eax]
0x992BD5: mov     eax, [ebp+Arguments]
0x992BD8: fstp    qword ptr [eax+10h]
0x992BDB: mov     eax, [ebp+Arguments]
0x992BDE: or      [eax+60h], ebx
0x992BE1: mov     eax, [ebp+Arguments]
0x992BE4: mov     ecx, [eax+60h]
0x992BE7: and     ecx, 0FFFFFFE3h
0x992BEA: or      ecx, 2
0x992BED: mov     [eax+60h], ecx
0x992BF0: fld     qword ptr [edi]
0x992BF2: mov     eax, [ebp+Arguments]
0x992BF5: fstp    qword ptr [eax+50h]
0x992BF8: call    __clrfp
0x992BFD: lea     eax, [ebp+Arguments]
0x992C00: push    eax; lpArguments
0x992C01: push    ebx; nNumberOfArguments
0x992C02: push    0; dwExceptionFlags
0x992C04: push    [ebp+dwExceptionCode]; dwExceptionCode
0x992C07: call    ds:RaiseException
0x992C0D: mov     ecx, [ebp+Arguments]
0x992C10: test    byte ptr [ecx+8], 10h
0x992C14: jz      short loc_992C19
0x992C16: and     dword ptr [esi], 0FFFFFFFEh
0x992C19: test    byte ptr [ecx+8], 8
0x992C1D: jz      short loc_992C22
0x992C1F: and     dword ptr [esi], 0FFFFFFFBh
0x992C22: test    byte ptr [ecx+8], 4
0x992C26: jz      short loc_992C2B
0x992C28: and     dword ptr [esi], 0FFFFFFF7h
0x992C2B: test    byte ptr [ecx+8], 2
0x992C2F: jz      short loc_992C34
0x992C31: and     dword ptr [esi], 0FFFFFFEFh
0x992C34: test    [ecx+8], bl
0x992C37: jz      short loc_992C3C
0x992C39: and     dword ptr [esi], 0FFFFFFDFh
0x992C3C: mov     eax, [ecx]
0x992C3E: and     eax, 3
0x992C41: xor     ebx, ebx
0x992C43: sub     eax, ebx
0x992C45: mov     edx, 0FFFFF3FFh
0x992C4A: jz      short loc_992C7B
0x992C4C: dec     eax
0x992C4D: jz      short loc_992C6D
0x992C4F: dec     eax
0x992C50: jz      short loc_992C5D
0x992C52: dec     eax
0x992C53: jnz     short loc_992C7D
0x992C55: or      dword ptr [esi], 0C00h
0x992C5B: jmp     short loc_992C7D
0x992C5D: mov     eax, [esi]
0x992C5F: and     eax, 0FFFFFBFFh
0x992C64: or      eax, 800h
0x992C69: mov     [esi], eax
0x992C6B: jmp     short loc_992C7D
0x992C6D: mov     eax, [esi]
0x992C6F: and     eax, 0FFFFF7FFh
0x992C74: or      eax, 400h
0x992C79: jmp     short loc_992C69
0x992C7B: and     [esi], edx
0x992C7D: mov     eax, [ecx]
0x992C7F: shr     eax, 2
0x992C82: and     eax, 7
0x992C85: sub     eax, ebx
0x992C87: jz      short loc_992C9E
0x992C89: dec     eax
0x992C8A: jz      short loc_992C93
0x992C8C: dec     eax
0x992C8D: jnz     short loc_992CA9
0x992C8F: and     [esi], edx
0x992C91: jmp     short loc_992CA9
0x992C93: mov     eax, [esi]
0x992C95: and     eax, edx
0x992C97: or      eax, 200h
0x992C9C: jmp     short loc_992CA7
0x992C9E: mov     eax, [esi]
0x992CA0: and     eax, edx
0x992CA2: or      eax, 300h
0x992CA7: mov     [esi], eax
0x992CA9: cmp     [ebp+arg_18], ebx
0x992CAC: jz      short loc_992CB5
0x992CAE: fld     dword ptr [ecx+50h]
0x992CB1: fstp    dword ptr [edi]
0x992CB3: jmp     short loc_992CBA
0x992CB5: fld     qword ptr [ecx+50h]
0x992CB8: fstp    qword ptr [edi]
0x992CBA: pop     edi
0x992CBB: pop     esi
0x992CBC: pop     ebx
0x992CBD: pop     ebp
0x992CBE: retn
