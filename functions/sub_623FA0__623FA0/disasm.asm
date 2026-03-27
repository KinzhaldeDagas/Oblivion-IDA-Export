0x623FA0: push    esi
0x623FA1: mov     esi, ecx
0x623FA3: cmp     dword ptr [esi+6Ch], 7
0x623FA7: mov     eax, [esi+3Ch]
0x623FAA: mov     ecx, [eax+58h]
0x623FAD: jnz     short loc_624002
0x623FAF: mov     edx, [ecx]
0x623FB1: mov     eax, [edx+184h]
0x623FB7: call    eax
0x623FB9: cmp     eax, esi
0x623FBB: jnz     short loc_624002
0x623FBD: mov     ecx, esi
0x623FBF: call    sub_612D60
0x623FC4: test    eax, eax
0x623FC6: jnz     short loc_624004
0x623FC8: cmp     ds:0B3B908h, al
0x623FCE: jz      short loc_623FE6
0x623FD0: mov     ecx, [esi+3Ch]; this
0x623FD3: call    TESObjectREFR_GetName
0x623FD8: push    eax
0x623FD9: push    offset a_20sCannotFind; "%.20s cannot find any weapons or ammo!"
0x623FDE: call    Interface_ConsolePrint
0x623FE3: add     esp, 8
0x623FE6: push    0
0x623FE8: push    0
0x623FEA: mov     ecx, esi
0x623FEC: call    sub_6239D0
0x623FF1: push    eax
0x623FF2: mov     ecx, esi
0x623FF4: call    sub_612DE0
0x623FF9: push    0
0x623FFB: mov     ecx, esi
0x623FFD: call    sub_619920
0x624002: pop     esi
0x624003: retn
0x624004: mov     eax, 0Dh
0x624009: cmp     [esi+70h], eax
0x62400C: jz      short loc_62401A
0x62400E: fld     dword ptr ds:0A30634h
0x624014: fstp    dword ptr [esi+188h]
0x62401A: mov     [esi+70h], eax
0x62401D: mov     ecx, esi
0x62401F: pop     esi
0x624020: jmp     sub_61D320
