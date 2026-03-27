0x590130: push    48h ; 'H'; Size
0x590132: call    FormHeapAlloc
0x590137: xor     ecx, ecx
0x590139: add     esp, 4
0x59013C: cmp     eax, ecx
0x59013E: jz      short loc_590181
0x590140: mov     [eax+8], ecx
0x590143: mov     [eax+0Ch], cx
0x590147: mov     [eax+0Eh], cx
0x59014B: mov     [eax+20h], ecx
0x59014E: mov     [eax+18h], ecx
0x590151: mov     [eax+1Ch], ecx
0x590154: mov     dword ptr [eax+14h], offset ??_7?$NiTList@PAVValue@Tile@@@@6B@; const NiTList<Tile::Value *>::`vftable'
0x59015B: mov     [eax+3Ch], ecx
0x59015E: mov     [eax+34h], ecx
0x590161: mov     [eax+38h], ecx
0x590164: mov     dword ptr [eax+30h], offset ??_7?$NiTList@PAVTile@@@@6B@; const NiTList<Tile *>::`vftable'
0x59016B: mov     [eax+24h], ecx
0x59016E: mov     [eax+10h], ecx
0x590171: mov     [eax+4], cl
0x590174: mov     [eax+6], cl
0x590177: mov     dword ptr [eax], offset ??_7TileMenu@@6B@; const TileMenu::`vftable'
0x59017D: mov     [eax+44h], ecx
0x590180: retn
0x590181: xor     eax, eax
0x590183: retn
