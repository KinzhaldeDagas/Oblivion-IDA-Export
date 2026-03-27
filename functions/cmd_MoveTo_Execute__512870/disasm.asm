0x512870: sub     esp, 10h
0x512873: fldz
0x512875: push    esi
0x512876: mov     esi, [esp+14h+a4]
0x51287A: fst     [esp+14h+var_4]
0x51287E: lea     eax, [esp+14h+var_C]
0x512882: fst     [esp+14h+var_8]
0x512886: push    eax
0x512887: fstp    [esp+18h+var_C]
0x51288B: lea     ecx, [esp+18h+var_8]
0x51288F: push    ecx
0x512890: mov     ecx, [esp+1Ch+l]
0x512894: lea     edx, [esp+1Ch+var_4]
0x512898: push    edx
0x512899: mov     edx, [esp+20h+arg_10]
0x51289D: lea     eax, [esp+20h+var_10]
0x5128A1: push    eax; UInt16
0x5128A2: mov     eax, [esp+24h+arg_C]
0x5128A6: push    ecx; l
0x5128A7: mov     ecx, [esp+28h+a3]
0x5128AB: push    edx; a6
0x5128AC: mov     edx, [esp+2Ch+arg_4]
0x5128B0: push    eax; a5
0x5128B1: mov     eax, [esp+30h+a1]
0x5128B5: push    esi; a4
0x5128B6: push    ecx; a3
0x5128B7: push    edx; a2
0x5128B8: push    eax; a1
0x5128B9: mov     dword ptr [esp+40h+var_10], 0
0x5128C1: call    Script_ExtractArgs
0x5128C6: add     esp, 2Ch
0x5128C9: test    al, al
0x5128CB: jnz     short loc_5128D4
0x5128CD: xor     al, al
0x5128CF: pop     esi
0x5128D0: add     esp, 10h
0x5128D3: retn
0x5128D4: mov     eax, dword ptr [esp+14h+var_10]
0x5128D8: test    eax, eax
0x5128DA: jz      short loc_512908
0x5128DC: fld     [esp+14h+var_C]
0x5128E0: sub     esp, 0Ch
0x5128E3: fstp    [esp+20h+var_18]
0x5128E7: fld     [esp+20h+var_8]
0x5128EB: fstp    [esp+20h+var_1C]
0x5128EF: fld     [esp+20h+var_4]
0x5128F3: fstp    [esp+20h+var_20]
0x5128F6: push    eax
0x5128F7: push    esi
0x5128F8: call    TESObjectREFR_Move?
0x5128FD: add     esp, 14h
0x512900: cmp     esi, ds:0B333C4h
0x512906: jz      short loc_5128CD
0x512908: mov     al, 1
0x51290A: pop     esi
0x51290B: add     esp, 10h
0x51290E: retn
