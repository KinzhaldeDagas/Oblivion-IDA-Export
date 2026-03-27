0x747420: mov     eax, [esp+arg_0]
0x747424: mov     ecx, [eax+16B4h]
0x74742A: mov     edx, 2
0x74742F: shl     edx, cl
0x747431: push    ebx
0x747432: push    esi
0x747433: push    edi
0x747434: or      [eax+16B0h], dx
0x74743B: cmp     ecx, 0Dh
0x74743E: mov     esi, 1
0x747443: jle     short loc_74748F
0x747445: movzx   ebx, byte ptr [eax+16B0h]
0x74744C: mov     edx, [eax+14h]
0x74744F: mov     ecx, [eax+8]
0x747452: mov     [ecx+edx], bl
0x747455: add     [eax+14h], esi
0x747458: movzx   ebx, byte ptr [eax+16B1h]
0x74745F: mov     ecx, [eax+14h]
0x747462: mov     edx, [eax+8]
0x747465: mov     [ecx+edx], bl
0x747468: mov     edx, [eax+16B4h]
0x74746E: add     [eax+14h], esi
0x747471: mov     cl, 10h
0x747473: sub     cl, dl
0x747475: mov     edi, 2
0x74747A: shr     di, cl
0x74747D: add     edx, 0FFFFFFF3h
0x747480: mov     [eax+16B4h], edx
0x747486: mov     [eax+16B0h], di
0x74748D: jmp     short loc_747498
0x74748F: add     ecx, 3
0x747492: mov     [eax+16B4h], ecx
0x747498: mov     ecx, [eax+16B4h]
0x74749E: xor     edx, edx
0x7474A0: shl     edx, cl
0x7474A2: or      [eax+16B0h], dx
0x7474A9: cmp     ecx, 9
0x7474AC: jle     short loc_7474F5
0x7474AE: movzx   ebx, byte ptr [eax+16B0h]
0x7474B5: mov     edx, [eax+14h]
0x7474B8: mov     ecx, [eax+8]
0x7474BB: mov     [ecx+edx], bl
0x7474BE: add     [eax+14h], esi
0x7474C1: movzx   ebx, byte ptr [eax+16B1h]
0x7474C8: mov     ecx, [eax+14h]
0x7474CB: mov     edx, [eax+8]
0x7474CE: mov     [ecx+edx], bl
0x7474D1: mov     edx, [eax+16B4h]
0x7474D7: add     [eax+14h], esi
0x7474DA: mov     cl, 10h
0x7474DC: sub     cl, dl
0x7474DE: xor     edi, edi
0x7474E0: shr     di, cl
0x7474E3: add     edx, 0FFFFFFF7h
0x7474E6: mov     [eax+16B4h], edx
0x7474EC: mov     [eax+16B0h], di
0x7474F3: jmp     short loc_7474FE
0x7474F5: add     ecx, 7
0x7474F8: mov     [eax+16B4h], ecx
0x7474FE: call    sub_746E20
0x747503: mov     ecx, [eax+16B4h]
0x747509: mov     edx, [eax+16ACh]
0x74750F: sub     edx, ecx
0x747511: add     edx, 0Bh
0x747514: cmp     edx, 9
0x747517: jge     loc_7475FF
0x74751D: mov     edx, 2
0x747522: shl     edx, cl
0x747524: or      [eax+16B0h], dx
0x74752B: cmp     ecx, 0Dh
0x74752E: jle     short loc_74757A
0x747530: movzx   ebx, byte ptr [eax+16B0h]
0x747537: mov     edx, [eax+14h]
0x74753A: mov     ecx, [eax+8]
0x74753D: mov     [ecx+edx], bl
0x747540: add     [eax+14h], esi
0x747543: movzx   ebx, byte ptr [eax+16B1h]
0x74754A: mov     ecx, [eax+14h]
0x74754D: mov     edx, [eax+8]
0x747550: mov     [ecx+edx], bl
0x747553: mov     edx, [eax+16B4h]
0x747559: add     [eax+14h], esi
0x74755C: mov     cl, 10h
0x74755E: sub     cl, dl
0x747560: mov     edi, 2
0x747565: shr     di, cl
0x747568: add     edx, 0FFFFFFF3h
0x74756B: mov     [eax+16B4h], edx
0x747571: mov     [eax+16B0h], di
0x747578: jmp     short loc_747583
0x74757A: add     ecx, 3
0x74757D: mov     [eax+16B4h], ecx
0x747583: mov     ecx, [eax+16B4h]
0x747589: xor     edx, edx
0x74758B: shl     edx, cl
0x74758D: or      [eax+16B0h], dx
0x747594: cmp     ecx, 9
0x747597: jle     short loc_7475F1
0x747599: movzx   ebx, byte ptr [eax+16B0h]
0x7475A0: mov     edx, [eax+14h]
0x7475A3: mov     ecx, [eax+8]
0x7475A6: mov     [ecx+edx], bl
0x7475A9: add     [eax+14h], esi
0x7475AC: movzx   ebx, byte ptr [eax+16B1h]
0x7475B3: mov     ecx, [eax+14h]
0x7475B6: mov     edx, [eax+8]
0x7475B9: mov     [ecx+edx], bl
0x7475BC: mov     edx, [eax+16B4h]
0x7475C2: add     [eax+14h], esi
0x7475C5: mov     cl, 10h
0x7475C7: sub     cl, dl
0x7475C9: xor     esi, esi
0x7475CB: shr     si, cl
0x7475CE: add     edx, 0FFFFFFF7h
0x7475D1: mov     [eax+16B4h], edx
0x7475D7: mov     [eax+16B0h], si
0x7475DE: call    sub_746E20
0x7475E3: pop     edi
0x7475E4: pop     esi
0x7475E5: mov     dword ptr [eax+16ACh], 7
0x7475EF: pop     ebx
0x7475F0: retn
0x7475F1: add     ecx, 7
0x7475F4: mov     [eax+16B4h], ecx
0x7475FA: call    sub_746E20
0x7475FF: pop     edi
0x747600: pop     esi
0x747601: mov     dword ptr [eax+16ACh], 7
0x74760B: pop     ebx
0x74760C: retn
