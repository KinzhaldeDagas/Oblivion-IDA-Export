0x4C2000: mov     eax, [ecx+24h]
0x4C2003: sub     esp, 0Ch
0x4C2006: test    eax, eax
0x4C2008: jz      short loc_4C2010
0x4C200A: cmp     dword ptr [eax+4], 0
0x4C200E: jnz     short loc_4C203D
0x4C2010: mov     ecx, ds:0B25AE0h
0x4C2016: mov     eax, [esp+0Ch+arg_8]
0x4C201A: mov     [eax], ecx
0x4C201C: mov     edx, ds:0B25AE4h
0x4C2022: mov     [eax+4], edx
0x4C2025: mov     ecx, ds:0B25AE8h
0x4C202B: mov     [eax+8], ecx
0x4C202E: mov     edx, ds:0B25AECh
0x4C2034: mov     [eax+0Ch], edx
0x4C2037: add     esp, 0Ch
0x4C203A: retn    0Ch
0x4C203D: mov     ecx, [eax+0Ch]
0x4C2040: test    ecx, ecx
0x4C2042: mov     edx, [esp+0Ch+arg_0]
0x4C2046: jz      short loc_4C2078
0x4C2048: cmp     dword ptr [ecx+edx*4], 0
0x4C204C: jz      short loc_4C2078
0x4C204E: mov     eax, [esp+0Ch+arg_4]
0x4C2052: shl     eax, 4
0x4C2055: add     eax, [ecx+edx*4]
0x4C2058: mov     ecx, [esp+0Ch+arg_8]
0x4C205C: mov     edx, [eax]
0x4C205E: mov     [ecx], edx
0x4C2060: mov     edx, [eax+4]
0x4C2063: mov     [ecx+4], edx
0x4C2066: mov     edx, [eax+8]
0x4C2069: mov     [ecx+8], edx
0x4C206C: mov     eax, [eax+0Ch]
0x4C206F: mov     [ecx+0Ch], eax
0x4C2072: add     esp, 0Ch
0x4C2075: retn    0Ch
0x4C2078: cmp     dword ptr [eax], 0
0x4C207B: push    esi
0x4C207C: jz      loc_4C2144
0x4C2082: mov     ecx, [eax]
0x4C2084: cmp     dword ptr [ecx+edx*4], 0
0x4C2088: lea     eax, [ecx+edx*4]
0x4C208B: jz      loc_4C2144
0x4C2091: mov     eax, [eax]
0x4C2093: cmp     word ptr [eax+0B6h], 0
0x4C209B: ja      short loc_4C20A1
0x4C209D: xor     eax, eax
0x4C209F: jmp     short loc_4C20A9
0x4C20A1: mov     edx, [eax+0B0h]
0x4C20A7: mov     eax, [edx]
0x4C20A9: mov     esi, [eax+0B4h]
0x4C20AF: cmp     dword ptr [esi+20h], 0
0x4C20B3: jz      short loc_4C20E3
0x4C20B5: mov     esi, [esi+24h]
0x4C20B8: mov     eax, [esp+10h+arg_4]
0x4C20BC: mov     ecx, [esp+10h+arg_8]
0x4C20C0: shl     eax, 4
0x4C20C3: mov     edx, [eax+esi]
0x4C20C6: add     eax, esi
0x4C20C8: mov     [ecx], edx
0x4C20CA: mov     edx, [eax+4]
0x4C20CD: mov     [ecx+4], edx
0x4C20D0: mov     edx, [eax+8]
0x4C20D3: mov     [ecx+8], edx
0x4C20D6: mov     eax, [eax+0Ch]
0x4C20D9: mov     [ecx+0Ch], eax
0x4C20DC: pop     esi
0x4C20DD: add     esp, 0Ch
0x4C20E0: retn    0Ch
0x4C20E3: mov     [esp+10h+var_C], 0
0x4C20EB: mov     [esp+10h+var_8], 0
0x4C20F3: mov     [esp+10h+var_4], 0
0x4C20F8: mov     ecx, [esi+34h]
0x4C20FB: test    ecx, ecx
0x4C20FD: jz      short loc_4C2144
0x4C20FF: mov     edx, [ecx]
0x4C2101: mov     eax, [edx+4Ch]
0x4C2104: call    eax
0x4C2106: test    al, al
0x4C2108: jz      short loc_4C2144
0x4C210A: push    1
0x4C210C: mov     ecx, esi
0x4C210E: call    sub_728AB0
0x4C2113: test    al, al
0x4C2115: jz      short loc_4C2144
0x4C2117: lea     ecx, [esp+10h+var_C]
0x4C211B: push    ecx
0x4C211C: mov     ecx, esi
0x4C211E: call    sub_728DB0
0x4C2123: mov     edx, [esp+10h+arg_8]
0x4C2127: mov     eax, [esp+10h+arg_4]
0x4C212B: push    edx
0x4C212C: push    eax
0x4C212D: lea     ecx, [esp+18h+var_C]
0x4C2131: call    sub_4C1440
0x4C2136: mov     ecx, esi
0x4C2138: call    sub_728B20
0x4C213D: pop     esi
0x4C213E: add     esp, 0Ch
0x4C2141: retn    0Ch
0x4C2144: mov     ecx, ds:0B25AE0h
0x4C214A: mov     eax, [esp+10h+arg_8]
0x4C214E: mov     [eax], ecx
0x4C2150: mov     edx, ds:0B25AE4h
0x4C2156: mov     [eax+4], edx
0x4C2159: mov     ecx, ds:0B25AE8h
0x4C215F: mov     [eax+8], ecx
0x4C2162: mov     edx, ds:0B25AECh
0x4C2168: mov     [eax+0Ch], edx
0x4C216B: pop     esi
0x4C216C: add     esp, 0Ch
0x4C216F: retn    0Ch
