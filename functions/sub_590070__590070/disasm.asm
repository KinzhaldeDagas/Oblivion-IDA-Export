0x590070: push    44h ; 'D'; Size
0x590072: call    FormHeapAlloc
0x590077: xor     ecx, ecx
0x590079: add     esp, 4
0x59007C: cmp     eax, ecx
0x59007E: jz      short loc_5900BE
0x590080: mov     [eax+8], ecx
0x590083: mov     [eax+0Ch], cx
0x590087: mov     [eax+0Eh], cx
0x59008B: mov     [eax+20h], ecx
0x59008E: mov     [eax+18h], ecx
0x590091: mov     [eax+1Ch], ecx
0x590094: mov     dword ptr [eax+14h], offset ??_7?$NiTList@PAVValue@Tile@@@@6B@; const NiTList<Tile::Value *>::`vftable'
0x59009B: mov     [eax+3Ch], ecx
0x59009E: mov     [eax+34h], ecx
0x5900A1: mov     [eax+38h], ecx
0x5900A4: mov     dword ptr [eax+30h], offset ??_7?$NiTList@PAVTile@@@@6B@; const NiTList<Tile *>::`vftable'
0x5900AB: mov     [eax+24h], ecx
0x5900AE: mov     [eax+10h], ecx
0x5900B1: mov     [eax+4], cl
0x5900B4: mov     [eax+6], cl
0x5900B7: mov     dword ptr [eax], offset ??_7TileRect@@6B@; const TileRect::`vftable'
0x5900BD: retn
0x5900BE: xor     eax, eax
0x5900C0: retn
