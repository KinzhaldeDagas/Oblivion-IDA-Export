0x6EA970: test    byte ptr [ecx+0Ch], 1
0x6EA974: jz      short loc_6EA97D
0x6EA976: fld     dword ptr [ecx+20h]
0x6EA979: fstp    [esp+arg_0]
0x6EA97D: fld     [esp+arg_0]
0x6EA981: fld     st
0x6EA983: fld     dword ptr ds:0A79F00h
0x6EA989: fucompp
0x6EA98B: fnstsw  ax
0x6EA98D: test    ah, 44h
0x6EA990: jp      short loc_6EA999
0x6EA992: fstp    st
0x6EA994: xor     al, al
0x6EA996: retn    0Ch
0x6EA999: mov     eax, [ecx+18h]
0x6EA99C: mov     edx, [eax]
0x6EA99E: mov     edx, [edx+54h]
0x6EA9A1: push    esi
0x6EA9A2: lea     esi, [ecx+30h]
0x6EA9A5: mov     ecx, [esp+4+arg_4]
0x6EA9A9: push    esi
0x6EA9AA: push    ecx
0x6EA9AB: push    ecx
0x6EA9AC: mov     ecx, eax
0x6EA9AE: fstp    [esp+10h+var_10]
0x6EA9B1: call    edx
0x6EA9B3: test    al, al
0x6EA9B5: jz      short loc_6EA9D1
0x6EA9B7: mov     ecx, [esi]
0x6EA9B9: mov     eax, [esp+4+arg_8]
0x6EA9BD: mov     [eax], ecx
0x6EA9BF: mov     edx, [esi+4]
0x6EA9C2: mov     [eax+4], edx
0x6EA9C5: mov     ecx, [esi+8]
0x6EA9C8: mov     [eax+8], ecx
0x6EA9CB: mov     al, 1
0x6EA9CD: pop     esi
0x6EA9CE: retn    0Ch
0x6EA9D1: mov     edx, ds:0B24FC8h
0x6EA9D7: mov     [esi], edx
0x6EA9D9: mov     eax, ds:0B24FCCh
0x6EA9DE: mov     [esi+4], eax
0x6EA9E1: mov     ecx, ds:0B24FD0h
0x6EA9E7: mov     eax, [esp+4+arg_8]
0x6EA9EB: mov     [esi+8], ecx
0x6EA9EE: mov     edx, [esi]
0x6EA9F0: mov     [eax], edx
0x6EA9F2: mov     ecx, [esi+4]
0x6EA9F5: mov     [eax+4], ecx
0x6EA9F8: mov     edx, [esi+8]
0x6EA9FB: mov     [eax+8], edx
0x6EA9FE: xor     al, al
0x6EAA00: pop     esi
0x6EAA01: retn    0Ch
