0x633080: mov     eax, [ecx+2BCh]
0x633086: cmp     eax, 6
0x633089: jz      locret_633128
0x63308F: cmp     eax, 5
0x633092: jz      locret_633128
0x633098: mov     dl, [esp+arg_8]
0x63309C: xor     eax, eax
0x63309E: test    dl, dl
0x6330A0: setnz   al
0x6330A3: lea     eax, [eax+eax+2]
0x6330A7: mov     [ecx+2BCh], eax
0x6330AD: mov     eax, [esp+arg_4]
0x6330B1: test    eax, eax
0x6330B3: jz      short loc_6330BB
0x6330B5: mov     [ecx+2C4h], eax
0x6330BB: fldz
0x6330BD: fcomp   dword ptr [ecx+2C0h]
0x6330C3: fnstsw  ax
0x6330C5: test    ah, 1
0x6330C8: jnz     short loc_6330D2
0x6330CA: fld1
0x6330CC: fstp    dword ptr [ecx+2C0h]
0x6330D2: test    dl, dl
0x6330D4: jz      short locret_633128
0x6330D6: mov     ecx, ds:0B333C4h; this
0x6330DC: push    ebx
0x6330DD: push    esi
0x6330DE: mov     esi, [esp+8+arg_0]
0x6330E2: cmp     esi, ecx
0x6330E4: mov     bl, 1
0x6330E6: jnz     short loc_6330F9
0x6330E8: mov     bl, [ecx+588h]
0x6330EE: test    bl, bl
0x6330F0: jnz     short loc_6330F9
0x6330F2: push    0; a1
0x6330F4: call    TogglePOV
0x6330F9: push    3Fh ; '?'
0x6330FB: mov     ecx, esi
0x6330FD: call    sub_5E05F0
0x633102: fld1
0x633104: sub     esp, 8
0x633107: fst     [esp+10h+var_C]; int
0x63310B: mov     ecx, esi
0x63310D: fstp    [esp+10h+var_10]; float
0x633110: call    Actor_ProcessAction
0x633115: pop     esi
0x633116: test    bl, bl
0x633118: pop     ebx
0x633119: jnz     short locret_633128
0x63311B: mov     ecx, ds:0B333C4h; this
0x633121: push    1; a1
0x633123: call    TogglePOV
0x633128: retn    0Ch
