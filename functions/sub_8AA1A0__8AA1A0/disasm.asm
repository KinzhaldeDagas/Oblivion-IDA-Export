0x8AA1A0: push    esi
0x8AA1A1: mov     esi, ecx
0x8AA1A3: mov     al, [esi+90h]
0x8AA1A9: push    edi
0x8AA1AA: mov     edi, [esp+8+arg_0]
0x8AA1AE: mov     [edi+0B4h], al
0x8AA1B4: mov     cx, [esi+8Eh]
0x8AA1BB: mov     [edi+0Ah], cx
0x8AA1BF: mov     ecx, [esi+64h]
0x8AA1C2: test    ecx, ecx
0x8AA1C4: jz      short loc_8AA1CD
0x8AA1C6: mov     edx, [ecx]
0x8AA1C8: call    dword ptr [edx+10h]
0x8AA1CB: jmp     short loc_8AA1D2
0x8AA1CD: mov     eax, 1
0x8AA1D2: mov     [edi+0B1h], al
0x8AA1D8: mov     eax, [esi+5Ch]
0x8AA1DB: mov     [edi+9Ch], eax
0x8AA1E1: mov     cl, [esi+58h]
0x8AA1E4: mov     [edi+8], cl
0x8AA1E7: mov     edx, [esi+60h]
0x8AA1EA: mov     [edi+0A0h], edx
0x8AA1F0: mov     eax, [esi+50h]
0x8AA1F3: mov     ecx, [eax+0C8h]
0x8AA1F9: mov     [edi+94h], ecx
0x8AA1FF: mov     edx, [esi+50h]
0x8AA202: mov     eax, [edx+0CCh]
0x8AA208: mov     [edi+98h], eax
0x8AA20E: mov     ecx, [esi+50h]
0x8AA211: movaps  xmm0, xmmword ptr [ecx+0D0h]
0x8AA218: movaps  xmmword ptr [edi+30h], xmm0
0x8AA21C: mov     edx, [esi+50h]
0x8AA21F: movaps  xmm0, xmmword ptr [edx+0E0h]
0x8AA226: movaps  xmmword ptr [edi+40h], xmm0
0x8AA22A: mov     ecx, [esi+50h]
0x8AA22D: call    sub_89DA90
0x8AA232: fstp    dword ptr [edi+90h]
0x8AA238: mov     ecx, [esi+50h]
0x8AA23B: mov     eax, [ecx]
0x8AA23D: lea     edx, [edi+50h]
0x8AA240: push    edx
0x8AA241: call    dword ptr [eax+28h]
0x8AA244: mov     ecx, [esi+50h]
0x8AA247: mov     eax, [ecx]
0x8AA249: call    dword ptr [eax+8]
0x8AA24C: mov     [edi+0B0h], al
0x8AA252: mov     ecx, [esi+50h]
0x8AA255: mov     dl, [ecx+0BCh]
0x8AA25B: mov     [edi+0B2h], dl
0x8AA261: mov     eax, [esi+50h]
0x8AA264: mov     ecx, [eax+0B4h]
0x8AA26A: mov     [edi+0A4h], ecx
0x8AA270: mov     edx, [esi+50h]
0x8AA273: mov     eax, [edx+0B8h]
0x8AA279: mov     [edi+0A8h], eax
0x8AA27F: mov     ecx, [esi+50h]
0x8AA282: movaps  xmm0, xmmword ptr [ecx+40h]
0x8AA286: movaps  xmmword ptr [edi+10h], xmm0
0x8AA28A: mov     edx, [esi+50h]
0x8AA28D: movaps  xmm0, xmmword ptr [edx+80h]
0x8AA294: movaps  xmmword ptr [edi+20h], xmm0
0x8AA298: mov     eax, [esi+50h]
0x8AA29B: movaps  xmm0, xmmword ptr [eax+90h]
0x8AA2A2: movaps  xmmword ptr [edi+80h], xmm0
0x8AA2A9: mov     ecx, [esi+14h]
0x8AA2AC: mov     [edi+4], ecx
0x8AA2AF: mov     edx, [esi+30h]
0x8AA2B2: mov     [edi], edx
0x8AA2B4: mov     eax, [esi+34h]
0x8AA2B7: mov     [edi+0ACh], eax
0x8AA2BD: mov     cl, [esi+2Eh]
0x8AA2C0: mov     [edi+0B3h], cl
0x8AA2C6: pop     edi
0x8AA2C7: pop     esi
0x8AA2C8: retn    4
