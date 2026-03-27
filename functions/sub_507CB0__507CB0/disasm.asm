0x507CB0: mov     eax, ds:0B333A0h
0x507CB5: xor     byte ptr ds:0B361FDh, 1
0x507CBC: test    eax, eax
0x507CBE: jz      short loc_507CFD
0x507CC0: cmp     byte ptr ds:0B361FDh, 0
0x507CC7: jz      short loc_507CCD
0x507CC9: push    0
0x507CCB: jmp     short loc_507CF5
0x507CCD: mov     ecx, [eax+34h]
0x507CD0: test    ecx, ecx
0x507CD2: jz      short loc_507CF3
0x507CD4: call    sub_4C9820
0x507CD9: test    al, al
0x507CDB: jz      short loc_507CE6
0x507CDD: mov     eax, ds:0B333A0h
0x507CE2: push    2
0x507CE4: jmp     short loc_507CF5
0x507CE6: mov     ecx, ds:0B333A0h
0x507CEC: mov     ecx, [ecx+5Ch]
0x507CEF: push    1
0x507CF1: jmp     short loc_507CF8
0x507CF3: push    3
0x507CF5: mov     ecx, [eax+5Ch]
0x507CF8: call    sub_543BB0
0x507CFD: cmp     byte ptr ds:0B361ACh, 0
0x507D04: jz      short loc_507D27
0x507D06: cmp     byte ptr ds:0B361FDh, 0
0x507D0D: mov     eax, offset aOff
0x507D12: jnz     short loc_507D19
0x507D14: mov     eax, offset aOn_0
0x507D19: push    eax
0x507D1A: push    offset aSkyS; "Sky -> %s"
0x507D1F: call    Interface_ConsolePrint
0x507D24: add     esp, 8
0x507D27: mov     al, 1
0x507D29: retn
