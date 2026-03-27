0x6EAF50: test    byte ptr [ecx+0Ch], 1
0x6EAF54: jz      short loc_6EAF5D
0x6EAF56: fld     dword ptr [ecx+20h]
0x6EAF59: fstp    [esp+arg_0]
0x6EAF5D: fld     [esp+arg_0]
0x6EAF61: fld     st
0x6EAF63: fld     dword ptr ds:0A79F00h
0x6EAF69: fucompp
0x6EAF6B: fnstsw  ax
0x6EAF6D: test    ah, 44h
0x6EAF70: jp      short loc_6EAF79
0x6EAF72: fstp    st
0x6EAF74: xor     al, al
0x6EAF76: retn    0Ch
0x6EAF79: mov     eax, [ecx+18h]
0x6EAF7C: mov     edx, [eax]
0x6EAF7E: mov     edx, [edx+50h]
0x6EAF81: push    esi
0x6EAF82: lea     esi, [ecx+30h]
0x6EAF85: mov     ecx, [esp+4+arg_4]
0x6EAF89: push    esi
0x6EAF8A: push    ecx
0x6EAF8B: push    ecx
0x6EAF8C: mov     ecx, eax
0x6EAF8E: fstp    [esp+10h+var_10]
0x6EAF91: call    edx
0x6EAF93: test    al, al
0x6EAF95: mov     eax, [esp+4+arg_8]
0x6EAF99: jz      short loc_6EAFB7
0x6EAF9B: mov     ecx, [esi]
0x6EAF9D: mov     [eax], ecx
0x6EAF9F: mov     edx, [esi+4]
0x6EAFA2: mov     [eax+4], edx
0x6EAFA5: mov     ecx, [esi+8]
0x6EAFA8: mov     [eax+8], ecx
0x6EAFAB: mov     edx, [esi+0Ch]
0x6EAFAE: mov     [eax+0Ch], edx
0x6EAFB1: mov     al, 1
0x6EAFB3: pop     esi
0x6EAFB4: retn    0Ch
0x6EAFB7: mov     ecx, ds:0B24FD4h
0x6EAFBD: mov     [eax], ecx
0x6EAFBF: mov     edx, ds:0B24FD8h
0x6EAFC5: mov     [eax+4], edx
0x6EAFC8: mov     ecx, ds:0B24FDCh
0x6EAFCE: mov     [eax+8], ecx
0x6EAFD1: mov     edx, ds:0B24FE0h
0x6EAFD7: mov     [eax+0Ch], edx
0x6EAFDA: mov     ecx, [eax]
0x6EAFDC: mov     [esi], ecx
0x6EAFDE: mov     edx, [eax+4]
0x6EAFE1: mov     [esi+4], edx
0x6EAFE4: mov     ecx, [eax+8]
0x6EAFE7: mov     [esi+8], ecx
0x6EAFEA: mov     edx, [eax+0Ch]
0x6EAFED: mov     [esi+0Ch], edx
0x6EAFF0: xor     al, al
0x6EAFF2: pop     esi
0x6EAFF3: retn    0Ch
