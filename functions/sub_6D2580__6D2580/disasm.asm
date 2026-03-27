0x6D2580: push    esi
0x6D2581: mov     esi, ecx
0x6D2583: test    byte ptr [esi+0Ch], 1
0x6D2587: jz      short loc_6D2590
0x6D2589: fld     dword ptr [esi+20h]
0x6D258C: fstp    [esp+4+arg_0]
0x6D2590: fld     [esp+4+arg_0]
0x6D2594: fld     st
0x6D2596: fld     dword ptr ds:0A79F00h
0x6D259C: fucompp
0x6D259E: fnstsw  ax
0x6D25A0: test    ah, 44h
0x6D25A3: jp      short loc_6D25AD
0x6D25A5: fstp    st
0x6D25A7: xor     al, al
0x6D25A9: pop     esi
0x6D25AA: retn    0Ch
0x6D25AD: mov     ecx, [esi+18h]
0x6D25B0: test    ecx, ecx
0x6D25B2: push    edi
0x6D25B3: jz      short loc_6D25DC
0x6D25B5: mov     edx, [esp+8+arg_4]
0x6D25B9: mov     eax, [ecx]
0x6D25BB: mov     eax, [eax+5Ch]
0x6D25BE: lea     edi, [esi+30h]
0x6D25C1: push    edi
0x6D25C2: push    edx
0x6D25C3: push    ecx
0x6D25C4: fstp    [esp+14h+var_14]
0x6D25C7: call    eax
0x6D25C9: test    al, al
0x6D25CB: jz      short loc_6D25DE
0x6D25CD: fld     dword ptr [edi]
0x6D25CF: mov     ecx, [esp+8+arg_8]
0x6D25D3: pop     edi
0x6D25D4: fstp    dword ptr [ecx]
0x6D25D6: mov     al, 1
0x6D25D8: pop     esi
0x6D25D9: retn    0Ch
0x6D25DC: fstp    st
0x6D25DE: fld     dword ptr ds:0A7C6B0h
0x6D25E4: mov     edx, [esp+8+arg_8]
0x6D25E8: fstp    dword ptr [esi+30h]
0x6D25EB: pop     edi
0x6D25EC: fld     dword ptr ds:0A7C6B0h
0x6D25F2: xor     al, al
0x6D25F4: fstp    dword ptr [edx]
0x6D25F6: pop     esi
0x6D25F7: retn    0Ch
