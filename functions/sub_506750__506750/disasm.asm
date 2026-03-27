0x506750: push    ecx
0x506751: mov     ecx, [esp+4+l]
0x506755: mov     edx, [esp+4+arg_10]
0x506759: push    esi
0x50675A: mov     esi, [esp+8+a4]
0x50675E: lea     eax, [esp+8+var_4]
0x506762: push    eax; UInt16
0x506763: mov     eax, [esp+0Ch+arg_C]
0x506767: push    ecx; l
0x506768: mov     ecx, [esp+10h+a3]
0x50676C: push    edx; a6
0x50676D: mov     edx, [esp+14h+arg_4]
0x506771: push    eax; a5
0x506772: mov     eax, [esp+18h+a1]
0x506776: push    esi; a4
0x506777: push    ecx; a3
0x506778: push    edx; a2
0x506779: push    eax; a1
0x50677A: mov     dword ptr [esp+28h+var_4], 0FFFFFFFFh
0x506782: call    Script_ExtractArgs
0x506787: add     esp, 20h
0x50678A: test    al, al
0x50678C: jnz     short loc_506791
0x50678E: pop     esi
0x50678F: pop     ecx
0x506790: retn
0x506791: mov     eax, dword ptr [esp+8+var_4]
0x506795: cmp     eax, 0FFFFFFFFh
0x506798: jz      short loc_5067B2
0x50679A: test    eax, eax
0x50679C: setnz   cl
0x50679F: push    ecx
0x5067A0: mov     ecx, esi
0x5067A2: call    sub_46AB20
0x5067A7: mov     edx, [esi]
0x5067A9: mov     eax, [edx+40h]
0x5067AC: push    1
0x5067AE: mov     ecx, esi
0x5067B0: call    eax
0x5067B2: mov     al, 1
0x5067B4: pop     esi
0x5067B5: pop     ecx
0x5067B6: retn
