0x65CA60: push    ebx
0x65CA61: mov     ebx, [esp+4+actorValue]
0x65CA65: push    esi
0x65CA66: push    ebx; actorValue
0x65CA67: mov     esi, ecx
0x65CA69: call    AVCollection_GetNode
0x65CA6E: mov     ecx, eax
0x65CA70: test    ecx, ecx
0x65CA72: jnz     short AVCollection_ModAVLimited___ModExistingModifier
0x65CA74: fldz
0x65CA76: fcomp   [esp+8+delta]
0x65CA7A: fnstsw  ax
0x65CA7C: test    ah, 44h
0x65CA7F: jnp     short AVCollection_ModAVLimited___Done
0x65CA81: push    8; Size
0x65CA83: call    FormHeapAlloc
0x65CA88: add     esp, 4
0x65CA8B: test    eax, eax
0x65CA8D: jz      short loc_65CAA5
0x65CA8F: fld     [esp+8+delta]
0x65CA93: push    eax; entry
0x65CA94: mov     ecx, esi; self
0x65CA96: fstp    dword ptr [eax+4]
0x65CA99: mov     [eax], bl
0x65CA9B: call    AVCollection_Add
0x65CAA0: pop     esi
0x65CAA1: pop     ebx
0x65CAA2: retn    0Ch
0x65CAA5: xor     eax, eax
0x65CAA7: push    eax; entry
0x65CAA8: mov     ecx, esi; self
0x65CAAA: call    AVCollection_Add
0x65CAAF: pop     esi
0x65CAB0: pop     ebx
0x65CAB1: retn    0Ch
0x65CAB4: cmp     [esp+8+allowPositive], 0
0x65CAB9: fld     dword ptr [ecx+4]
0x65CABC: fadd    [esp+8+delta]
0x65CAC0: fstp    [esp+8+delta]
0x65CAC4: fldz
0x65CAC6: jnz     short loc_65CAD7
0x65CAC8: fcom    [esp+8+delta]
0x65CACC: fnstsw  ax
0x65CACE: test    ah, 5
0x65CAD1: jp      short loc_65CAD7
0x65CAD3: fst     [esp+8+delta]
0x65CAD7: fld     [esp+8+delta]
0x65CADB: fst     dword ptr [ecx+4]
0x65CADE: fucompp
0x65CAE0: fnstsw  ax
0x65CAE2: test    ah, 44h
0x65CAE5: jp      short AVCollection_ModAVLimited___Done
0x65CAE7: push    ecx; entry
0x65CAE8: mov     ecx, esi; self
0x65CAEA: call    AVCollection_Remove
0x65CAEF: pop     esi
0x65CAF0: pop     ebx
0x65CAF1: retn    0Ch
