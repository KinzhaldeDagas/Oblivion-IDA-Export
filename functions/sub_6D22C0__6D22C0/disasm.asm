0x6D22C0: push    esi
0x6D22C1: mov     esi, ecx
0x6D22C3: mov     al, [esi+8]
0x6D22C6: shr     al, 5
0x6D22C9: test    al, 1
0x6D22CB: jz      short loc_6D22D8
0x6D22CD: fld     dword ptr ds:0A7A164h
0x6D22D3: fstp    dword ptr [esi+28h]
0x6D22D6: jmp     short loc_6D22FE
0x6D22D8: fld     [esp+4+arg_0]
0x6D22DC: push    ecx
0x6D22DD: fstp    [esp+8+var_8]; float
0x6D22E0: call    sub_6C36B0
0x6D22E5: test    al, al
0x6D22E7: jz      short loc_6D22FE
0x6D22E9: mov     ecx, [esi+3Ch]
0x6D22EC: test    ecx, ecx
0x6D22EE: jz      short loc_6D232E
0x6D22F0: mov     edx, [ecx]
0x6D22F2: mov     eax, [edx+94h]
0x6D22F8: call    eax
0x6D22FA: test    al, al
0x6D22FC: jz      short loc_6D232E
0x6D22FE: mov     ecx, [esi+3Ch]
0x6D2301: test    ecx, ecx
0x6D2303: jz      short loc_6D232E
0x6D2305: mov     edx, [ecx]
0x6D2307: fld     dword ptr [esi+28h]
0x6D230A: mov     edx, [edx+5Ch]
0x6D230D: lea     eax, [esp+4+arg_0]
0x6D2311: push    eax
0x6D2312: mov     eax, [esi+30h]
0x6D2315: push    eax
0x6D2316: push    ecx
0x6D2317: fstp    [esp+10h+var_10]
0x6D231A: call    edx
0x6D231C: test    al, al
0x6D231E: jz      short loc_6D232E
0x6D2320: mov     esi, [esi+30h]
0x6D2323: fld     [esp+4+arg_0]
0x6D2327: add     dword ptr [esi+54h], 1
0x6D232B: fstp    dword ptr [esi+50h]
0x6D232E: pop     esi
0x6D232F: retn    4
