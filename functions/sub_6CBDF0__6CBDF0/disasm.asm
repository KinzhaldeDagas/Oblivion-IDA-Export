0x6CBDF0: sub     esp, 10h
0x6CBDF3: test    byte ptr [ecx+0Ch], 1
0x6CBDF7: jz      short loc_6CBE00
0x6CBDF9: fld     dword ptr [ecx+20h]
0x6CBDFC: fstp    [esp+10h+arg_0]
0x6CBE00: fld     [esp+10h+arg_0]
0x6CBE04: fld     st
0x6CBE06: fld     dword ptr ds:0A79F00h
0x6CBE0C: fucompp
0x6CBE0E: fnstsw  ax
0x6CBE10: test    ah, 44h
0x6CBE13: jp      short loc_6CBE43
0x6CBE15: mov     eax, [esp+10h+arg_8]
0x6CBE19: fstp    st
0x6CBE1B: fld     dword ptr ds:0A7DEB4h
0x6CBE21: fchs
0x6CBE23: fstp    dword ptr [eax]
0x6CBE25: fld     dword ptr ds:0A7DEB4h
0x6CBE2B: fchs
0x6CBE2D: fstp    dword ptr [eax+10h]
0x6CBE30: fld     dword ptr ds:0A7DEB4h
0x6CBE36: fchs
0x6CBE38: fstp    dword ptr [eax+1Ch]
0x6CBE3B: xor     al, al
0x6CBE3D: add     esp, 10h
0x6CBE40: retn    0Ch
0x6CBE43: mov     ecx, [ecx+18h]
0x6CBE46: mov     edx, [esp+10h+arg_4]
0x6CBE4A: mov     eax, [ecx]
0x6CBE4C: mov     eax, [eax+4Ch]
0x6CBE4F: push    esi
0x6CBE50: mov     esi, [esp+14h+arg_8]
0x6CBE54: push    esi
0x6CBE55: push    edx
0x6CBE56: push    ecx
0x6CBE57: fstp    [esp+20h+var_20]
0x6CBE5A: call    eax
0x6CBE5C: test    al, al
0x6CBE5E: jz      short loc_6CBEAE
0x6CBE60: fld     dword ptr [esi+10h]
0x6CBE63: fld     dword ptr ds:0A7DEB4h
0x6CBE69: fchs
0x6CBE6B: fucompp
0x6CBE6D: fnstsw  ax
0x6CBE6F: test    ah, 44h
0x6CBE72: jnp     short loc_6CBEA5
0x6CBE74: mov     ecx, [esi+0Ch]
0x6CBE77: mov     edx, [esi+10h]
0x6CBE7A: mov     eax, [esi+14h]
0x6CBE7D: mov     [esp+14h+var_10], ecx
0x6CBE81: mov     ecx, [esi+18h]
0x6CBE84: mov     [esp+14h+var_4], ecx
0x6CBE88: lea     ecx, [esp+14h+var_10]
0x6CBE8C: mov     [esp+14h+var_C], edx
0x6CBE90: mov     [esp+14h+var_8], eax
0x6CBE94: call    sub_715340
0x6CBE99: lea     edx, [esp+14h+var_10]
0x6CBE9D: push    edx
0x6CBE9E: mov     ecx, esi
0x6CBEA0: call    sub_471430
0x6CBEA5: mov     al, 1
0x6CBEA7: pop     esi
0x6CBEA8: add     esp, 10h
0x6CBEAB: retn    0Ch
0x6CBEAE: fld     dword ptr ds:0A7DEB4h
0x6CBEB4: xor     al, al
0x6CBEB6: fchs
0x6CBEB8: fstp    dword ptr [esi]
0x6CBEBA: fld     dword ptr ds:0A7DEB4h
0x6CBEC0: fchs
0x6CBEC2: fstp    dword ptr [esi+10h]
0x6CBEC5: fld     dword ptr ds:0A7DEB4h
0x6CBECB: fchs
0x6CBECD: fstp    dword ptr [esi+1Ch]
0x6CBED0: pop     esi
0x6CBED1: add     esp, 10h
0x6CBED4: retn    0Ch
