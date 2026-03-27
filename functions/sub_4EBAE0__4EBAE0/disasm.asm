0x4EBAE0: mov     ecx, ds:0B333A0h
0x4EBAE6: push    esi
0x4EBAE7: call    TES__GetCurrentWorldspace
0x4EBAEC: mov     ecx, eax
0x4EBAEE: call    sub_4EF7E0
0x4EBAF3: cmp     [esp+4+arg_0], 0
0x4EBAF8: jz      loc_4EBB8F
0x4EBAFE: push    1
0x4EBB00: call    sub_4EB0E0
0x4EBB05: mov     ecx, ds:0B333A0h
0x4EBB0B: mov     esi, [ecx+4]
0x4EBB0E: add     esp, 4
0x4EBB11: test    esi, esi
0x4EBB13: jz      short loc_4EBB22
0x4EBB15: call    TES__GetCurrentWorldspace
0x4EBB1A: push    eax
0x4EBB1B: mov     ecx, esi
0x4EBB1D: call    sub_483D60
0x4EBB22: mov     ecx, ds:0B333C4h
0x4EBB28: mov     eax, [ecx]
0x4EBB2A: mov     edx, [eax+174h]
0x4EBB30: call    edx
0x4EBB32: mov     edx, [eax]
0x4EBB34: push    1
0x4EBB36: sub     esp, 0Ch
0x4EBB39: mov     ecx, esp
0x4EBB3B: mov     [ecx], edx
0x4EBB3D: mov     edx, [eax+4]
0x4EBB40: mov     eax, [eax+8]
0x4EBB43: mov     [ecx+4], edx
0x4EBB46: mov     [ecx+8], eax
0x4EBB49: call    sub_4EA6E0
0x4EBB4E: mov     ecx, ds:0B33A10h
0x4EBB54: add     esp, 10h
0x4EBB57: push    5
0x4EBB59: call    sub_434020
0x4EBB5E: mov     ecx, ds:0B333C4h
0x4EBB64: mov     edx, [ecx]
0x4EBB66: mov     eax, [edx+174h]
0x4EBB6C: call    eax
0x4EBB6E: mov     edx, [eax]
0x4EBB70: push    0
0x4EBB72: sub     esp, 0Ch
0x4EBB75: mov     ecx, esp
0x4EBB77: mov     [ecx], edx
0x4EBB79: mov     edx, [eax+4]
0x4EBB7C: mov     eax, [eax+8]
0x4EBB7F: mov     [ecx+4], edx
0x4EBB82: mov     [ecx+8], eax
0x4EBB85: call    sub_4EA6E0
0x4EBB8A: add     esp, 10h
0x4EBB8D: pop     esi
0x4EBB8E: retn
0x4EBB8F: cmp     byte ptr ds:0B3608Fh, 0
0x4EBB96: jz      short loc_4EBBDA
0x4EBB98: mov     ecx, ds:0B333A0h
0x4EBB9E: push    0
0x4EBBA0: mov     byte ptr ds:0B3608Fh, 0
0x4EBBA7: call    TES__GetCurrentWorldspace
0x4EBBAC: mov     ecx, eax
0x4EBBAE: call    sub_4EF7E0
0x4EBBB3: mov     ecx, eax
0x4EBBB5: call    sub_4EA080
0x4EBBBA: mov     eax, ds:0B34424h
0x4EBBBF: test    eax, eax
0x4EBBC1: jz      short loc_4EBBC8
0x4EBBC3: or      word ptr [eax+18h], 1
0x4EBBC8: mov     ecx, ds:0B333A0h
0x4EBBCE: mov     ecx, [ecx+54h]
0x4EBBD1: test    ecx, ecx
0x4EBBD3: jz      short loc_4EBBDA
0x4EBBD5: call    sub_499E20
0x4EBBDA: mov     ecx, ds:0B35B8Ch
0x4EBBE0: test    ecx, ecx
0x4EBBE2: jz      short loc_4EBBE9
0x4EBBE4: call    sub_4BD980
0x4EBBE9: mov     edx, ds:0B333A0h
0x4EBBEF: mov     ecx, [edx+4]
0x4EBBF2: test    ecx, ecx
0x4EBBF4: jz      short loc_4EBB8D
0x4EBBF6: mov     eax, [ecx]
0x4EBBF8: mov     edx, [eax+8]
0x4EBBFB: pop     esi
0x4EBBFC: jmp     edx
