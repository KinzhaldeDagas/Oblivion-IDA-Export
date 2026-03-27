0x732690: push    0FFFFFFFFh
0x732692: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x732697: mov     eax, large fs:0
0x73269D: push    eax
0x73269E: push    ecx
0x73269F: push    esi
0x7326A0: push    edi
0x7326A1: mov     eax, ds:0B30AACh
0x7326A6: xor     eax, esp
0x7326A8: push    eax
0x7326A9: lea     eax, [esp+1Ch+var_C]
0x7326AD: mov     large fs:0, eax
0x7326B3: mov     esi, ecx
0x7326B5: mov     [esp+1Ch+var_10], esi
0x7326B9: call    NiObject_constr
0x7326BE: mov     edi, [esp+1Ch+arg_0]
0x7326C2: mov     dword ptr [esi], offset ??_7NiPalette@@6B@; const NiPalette::`vftable'
0x7326C8: mov     al, [edi+8]
0x7326CB: mov     [esi+8], al
0x7326CE: mov     ecx, [edi+0Ch]
0x7326D1: mov     eax, ecx
0x7326D3: mov     [esi+0Ch], ecx
0x7326D6: xor     ecx, ecx
0x7326D8: mov     edx, 4
0x7326DD: mul     edx
0x7326DF: seto    cl
0x7326E2: mov     [esp+1Ch+var_4], 0
0x7326EA: mov     dword ptr [esi+10h], 1
0x7326F1: neg     ecx
0x7326F3: or      ecx, eax
0x7326F5: push    ecx; Size
0x7326F6: call    FormHeapAlloc
0x7326FB: mov     [esi+14h], eax
0x7326FE: mov     ecx, [edi+0Ch]
0x732701: mov     edx, [edi+14h]
0x732704: add     ecx, ecx
0x732706: add     ecx, ecx
0x732708: push    ecx; Size
0x732709: push    edx; Src
0x73270A: push    eax; Dst
0x73270B: call    _memcpy
0x732710: mov     dword ptr [esi+18h], 0
0x732717: mov     ecx, ds:0B3F928h
0x73271D: add     esp, 10h
0x732720: test    ecx, ecx
0x732722: jz      short loc_73272F
0x732724: mov     eax, [ecx]
0x732726: mov     edx, [eax+118h]
0x73272C: push    esi
0x73272D: call    edx
0x73272F: mov     ecx, esi
0x732731: call    sub_7322F0
0x732736: mov     eax, esi
0x732738: mov     ecx, dword ptr [esp+1Ch+var_C]
0x73273C: mov     large fs:0, ecx
0x732743: pop     ecx
0x732744: pop     edi
0x732745: pop     esi
0x732746: add     esp, 10h
0x732749: retn    4
