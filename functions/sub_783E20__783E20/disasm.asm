0x783E20: push    esi
0x783E21: mov     esi, eax
0x783E23: movsx   eax, byte ptr [esi]
0x783E26: push    eax; C
0x783E27: call    _isspace
0x783E2C: add     esp, 4
0x783E2F: test    eax, eax
0x783E31: jz      short loc_783E47
0x783E33: movsx   ecx, byte ptr [esi+1]
0x783E37: add     esi, 1
0x783E3A: push    ecx; C
0x783E3B: call    _isspace
0x783E40: add     esp, 4
0x783E43: test    eax, eax
0x783E45: jnz     short loc_783E33
0x783E47: push    edi
0x783E48: push    offset aS; "%s"
0x783E4D: push    esi; Src
0x783E4E: call    _sscanf
0x783E53: mov     eax, edi
0x783E55: add     esp, 0Ch
0x783E58: lea     edx, [eax+1]
0x783E5B: jmp     short loc_783E60
0x783E5D: align 10h
0x783E60: mov     cl, [eax]
0x783E62: add     eax, 1
0x783E65: test    cl, cl
0x783E67: jnz     short loc_783E60
0x783E69: sub     eax, edx
0x783E6B: add     eax, esi
0x783E6D: pop     esi
0x783E6E: retn
