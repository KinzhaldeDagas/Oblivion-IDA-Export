0x590220: push    40h ; '@'; Size
0x590222: call    FormHeapAlloc
0x590227: xor     ecx, ecx
0x590229: add     esp, 4
0x59022C: cmp     eax, ecx
0x59022E: jz      short loc_59026E
0x590230: mov     [eax+8], ecx
0x590233: mov     [eax+0Ch], cx
0x590237: mov     [eax+0Eh], cx
0x59023B: mov     [eax+20h], ecx
0x59023E: mov     [eax+18h], ecx
0x590241: mov     [eax+1Ch], ecx
0x590244: mov     dword ptr [eax+14h], offset ??_7?$NiTList@PAVValue@Tile@@@@6B@; const NiTList<Tile::Value *>::`vftable'
0x59024B: mov     [eax+3Ch], ecx
0x59024E: mov     [eax+34h], ecx
0x590251: mov     [eax+38h], ecx
0x590254: mov     dword ptr [eax+30h], offset ??_7?$NiTList@PAVTile@@@@6B@; const NiTList<Tile *>::`vftable'
0x59025B: mov     [eax+24h], ecx
0x59025E: mov     [eax+10h], ecx
0x590261: mov     [eax+4], cl
0x590264: mov     [eax+6], cl
0x590267: mov     dword ptr [eax], offset ??_7TileWindow@@6B@; const TileWindow::`vftable'
0x59026D: retn
0x59026E: xor     eax, eax
0x590270: retn
