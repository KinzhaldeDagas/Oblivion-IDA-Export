0x780B30: push    8Ch ; 'Œ'; Size
0x780B35: call    FormHeapAlloc
0x780B3A: add     esp, 4
0x780B3D: test    eax, eax
0x780B3F: jz      short loc_780B53
0x780B41: mov     ecx, [esp+arg_4]
0x780B45: mov     edx, [esp+arg_0]
0x780B49: push    ecx
0x780B4A: push    edx
0x780B4B: mov     ecx, eax
0x780B4D: call    sub_780A40
0x780B52: retn
0x780B53: xor     eax, eax
0x780B55: retn
