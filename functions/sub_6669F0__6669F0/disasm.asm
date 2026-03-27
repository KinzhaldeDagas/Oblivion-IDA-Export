0x6669F0: push    esi
0x6669F1: mov     esi, ecx
0x6669F3: cmp     byte ptr [esi+748h], 0
0x6669FA: setz    al
0x6669FD: test    al, al
0x6669FF: mov     [esi+748h], al
0x666A05: jz      short loc_666A61
0x666A07: mov     eax, [esi]
0x666A09: mov     edx, [eax+174h]
0x666A0F: call    edx
0x666A11: mov     ecx, [eax]
0x666A13: mov     [esi+754h], ecx
0x666A19: mov     edx, [eax+4]
0x666A1C: mov     [esi+758h], edx
0x666A22: mov     eax, [eax+8]
0x666A25: mov     edx, [esi]
0x666A27: mov     [esi+75Ch], eax
0x666A2D: mov     eax, [edx+0ECh]
0x666A33: mov     ecx, esi
0x666A35: call    eax
0x666A37: fmul    dword ptr [esi+5D4h]
0x666A3D: mov     al, [esi+748h]
0x666A43: fadd    dword ptr [esi+75Ch]
0x666A49: fstp    dword ptr [esi+75Ch]
0x666A4F: fld     dword ptr [esi+28h]
0x666A52: fstp    dword ptr [esi+74Ch]
0x666A58: fld     dword ptr [esi+20h]
0x666A5B: fstp    dword ptr [esi+750h]
0x666A61: pop     esi
0x666A62: retn
