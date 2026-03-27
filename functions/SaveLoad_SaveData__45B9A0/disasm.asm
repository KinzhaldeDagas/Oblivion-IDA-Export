0x45B9A0: mov     eax, ds:0B33398h
0x45B9A5: push    esi
0x45B9A6: push    edi
0x45B9A7: mov     edi, [eax+10h]
0x45B9AA: mov     esi, ecx
0x45B9AC: call    dword ptr ds:0A2808Ch
0x45B9B2: cmp     eax, edi
0x45B9B4: jnz     short loc_45B9BB
0x45B9B6: mov     al, [esi+18h]
0x45B9B9: jmp     short loc_45B9C1
0x45B9BB: mov     eax, [esi+18h]
0x45B9BE: shr     eax, 12h
0x45B9C1: and     al, 1
0x45B9C3: test    al, al
0x45B9C5: jz      short loc_45B9D9
0x45B9C7: mov     ecx, ds:0B34D90h
0x45B9CD: mov     edx, [ecx]
0x45B9CF: mov     eax, [edx+18h]
0x45B9D2: push    offset aErrorTessavelo; "Error: TESSaveLoadGame::SaveGameData() "...
0x45B9D7: call    eax
0x45B9D9: mov     edi, [esp+8+Size]
0x45B9DD: mov     ecx, [esp+8+Src]
0x45B9E1: mov     edx, [esi+14h]
0x45B9E4: push    edi; Size
0x45B9E5: push    ecx; Src
0x45B9E6: push    edx; Dst
0x45B9E7: call    _memcpy
0x45B9EC: add     [esi+14h], edi
0x45B9EF: add     esp, 0Ch
0x45B9F2: pop     edi
0x45B9F3: pop     esi
0x45B9F4: retn    8
