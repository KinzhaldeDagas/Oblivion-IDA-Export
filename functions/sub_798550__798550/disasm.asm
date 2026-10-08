0x798550: push    edi; Oblivion CLeafGeometry::SetTextureCoords. Writes a direct and mirrored 0x20-byte UV record for one leaf map; the global DirectX/Gamebryo texture flip negates each T component rather than computing 1-T.
0x798551: mov     edi, ecx
0x798553: cmp     dword ptr [edi+14h], 0
0x798557: jz      loc_79862A
0x79855D: push    esi
0x79855E: mov     esi, [esp+8+texcoordBlock]
0x798562: test    esi, esi
0x798564: jz      loc_798629
0x79856A: call    CSpeedTreeRT__GetTextureFlip; Embedded leaf UV ingestion queries the process-global texture flip. In stock Oblivion it is true, so every T/V component is multiplied by -1.0 before the direct and mirrored 0x20-byte records are published.
0x79856F: test    al, al
0x798571: jz      short loc_79857B
0x798573: fld     dword ptr ds:0A30634h; When texture flip is enabled, load the exact IEEE-754 -1.0 constant at 0xA30634; otherwise use +1.0. This is a sign inversion, not a 1-V transform.
0x798579: jmp     short loc_79857D
0x79857B: fld1
0x79857D: mov     eax, [edi+14h]
0x798580: fstp    [esp+8+texcoordBlock]
0x798584: fld     dword ptr [esi]
0x798586: mov     ecx, [esp+8+leafMapIndex]
0x79858A: shl     ecx, 6
0x79858D: fstp    dword ptr [eax+ecx]; Writes direct map record at leafDiffuseTexcoordTable + mapIndex*0x40. S values are copied; T values use the global sign. No map-index bounds check exists here.
0x798590: add     eax, ecx
0x798592: fld     dword ptr [esi+4]
0x798595: add     eax, 4
0x798598: fld     [esp+8+texcoordBlock]
0x79859C: add     eax, 4
0x79859F: fld     st
0x7985A1: add     eax, 4
0x7985A4: fmulp   st(2), st
0x7985A6: add     eax, 4
0x7985A9: fxch    st(1)
0x7985AB: add     eax, 4
0x7985AE: add     eax, 4
0x7985B1: fstp    dword ptr [eax-14h]
0x7985B4: fld     dword ptr [esi+8]
0x7985B7: fstp    dword ptr [eax-10h]
0x7985BA: fld     dword ptr [esi+0Ch]
0x7985BD: fmul    st, st(1)
0x7985BF: fstp    dword ptr [eax-0Ch]
0x7985C2: fld     dword ptr [esi+10h]
0x7985C5: fstp    dword ptr [eax-8]
0x7985C8: fld     dword ptr [esi+14h]
0x7985CB: fmul    st, st(1)
0x7985CD: fstp    dword ptr [eax-4]
0x7985D0: fld     dword ptr [esi+18h]
0x7985D3: fstp    dword ptr [eax]
0x7985D5: fld     st
0x7985D7: fmul    dword ptr [esi+1Ch]
0x7985DA: fstp    dword ptr [eax+4]
0x7985DD: mov     eax, [edi+14h]
0x7985E0: fld     dword ptr [esi+8]
0x7985E3: lea     eax, [ecx+eax+20h]; Writes mirrored companion at mapIndex*0x40+0x20 by swapping S coordinates while keeping the already signed T ordering.
0x7985E7: fstp    dword ptr [eax]
0x7985E9: add     eax, 4
0x7985EC: fld     dword ptr [esi+4]
0x7985EF: add     eax, 4
0x7985F2: fmul    st, st(1)
0x7985F4: add     eax, 4
0x7985F7: add     eax, 4
0x7985FA: add     eax, 4
0x7985FD: fstp    dword ptr [eax-10h]
0x798600: add     eax, 4
0x798603: fld     dword ptr [esi]
0x798605: fstp    dword ptr [eax-10h]
0x798608: fld     dword ptr [esi+0Ch]
0x79860B: fmul    st, st(1)
0x79860D: fstp    dword ptr [eax-0Ch]
0x798610: fld     dword ptr [esi+18h]
0x798613: fstp    dword ptr [eax-8]
0x798616: fld     dword ptr [esi+14h]
0x798619: fmul    st, st(1)
0x79861B: fstp    dword ptr [eax-4]
0x79861E: fld     dword ptr [esi+10h]
0x798621: fstp    dword ptr [eax]
0x798623: fmul    dword ptr [esi+1Ch]
0x798626: fstp    dword ptr [eax+4]
0x798629: pop     esi
0x79862A: pop     edi
0x79862B: retn    8
