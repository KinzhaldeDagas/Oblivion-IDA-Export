0x4F87F0: fldz
0x4F87F2: mov     ecx, [esp+arg_C]
0x4F87F6: fstp    qword ptr [ecx]
0x4F87F8: mov     eax, ds:0B333C4h
0x4F87FD: add     eax, 116h
0x4F8802: cmp     byte ptr [eax], 0
0x4F8805: jz      short loc_4F880B
0x4F8807: fld1
0x4F8809: fstp    qword ptr [ecx]
0x4F880B: cmp     byte ptr ds:0B361ACh, 0
0x4F8812: jz      short loc_4F8831
0x4F8814: cmp     byte ptr [eax], 0
0x4F8817: mov     eax, offset aIs; "is"
0x4F881C: jnz     short loc_4F8823
0x4F881E: mov     eax, offset aIsNot; "is not"
0x4F8823: push    eax
0x4F8824: push    offset aThePlayerSInTh; "The player %s in the SE world"
0x4F8829: call    Interface_ConsolePrint
0x4F882E: add     esp, 8
0x4F8831: mov     al, 1
0x4F8833: retn
