0x556780: mov     ecx, [esp+arg_0]
0x556784: push    esi
0x556785: mov     esi, [esp+4+arg_4]
0x556789: mov     edx, esi
0x55678B: sub     edx, ecx
0x55678D: mov     eax, 2AAAAAABh
0x556792: imul    edx
0x556794: mov     eax, edx
0x556796: shr     eax, 1Fh
0x556799: add     eax, edx
0x55679B: cmp     ecx, esi
0x55679D: mov     edx, [esp+4+arg_8]
0x5567A1: lea     eax, [eax+eax*2]
0x5567A4: lea     eax, [edx+eax*2]
0x5567A7: jz      short loc_5567C6
0x5567A9: sub     edx, ecx
0x5567AB: push    edi
0x5567AC: lea     esp, [esp+0]
0x5567B0: mov     edi, [ecx]
0x5567B2: mov     [edx+ecx], edi
0x5567B5: mov     di, [ecx+4]
0x5567B9: mov     [edx+ecx+4], di
0x5567BE: add     ecx, 6
0x5567C1: cmp     ecx, esi
0x5567C3: jnz     short loc_5567B0
0x5567C5: pop     edi
0x5567C6: pop     esi
0x5567C7: retn
