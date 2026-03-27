0x65CA74: fldz
0x65CA76: fcomp   [esp+arg_C]
0x65CA7A: fnstsw  ax
0x65CA7C: test    ah, 44h
0x65CA7F: jnp     short AVCollection_ModAVLimited___Done
0x65CA81: push    8; Size
0x65CA83: call    FormHeapAlloc
0x65CA88: add     esp, 4
0x65CA8B: test    eax, eax
0x65CA8D: jz      short loc_65CAA5
0x65CA8F: fld     [esp+arg_C]
0x65CA93: push    eax
0x65CA94: mov     ecx, esi
0x65CA96: fstp    dword ptr [eax+4]
0x65CA99: mov     [eax], bl
0x65CA9B: call    AVCollection_Add
0x65CAA0: pop     esi
0x65CAA1: pop     ebx
0x65CAA2: retn    0Ch
0x65CAA5: xor     eax, eax
0x65CAA7: push    eax
0x65CAA8: mov     ecx, esi
0x65CAAA: call    AVCollection_Add
0x65CAAF: pop     esi
0x65CAB0: pop     ebx
0x65CAB1: retn    0Ch
