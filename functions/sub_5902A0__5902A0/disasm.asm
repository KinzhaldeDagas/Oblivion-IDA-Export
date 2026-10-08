0x5902A0: mov     eax, [esp+arg_4]
0x5902A4: add     eax, 0FFFFFC7Bh; switch 7 cases
0x5902A9: cmp     eax, 6
0x5902AC: ja      short def_5902AE; jumptable 005902AE default case, case 906
0x5902AE: jmp     ds:jpt_5902AE[eax*4]; switch jump
0x5902B5: mov     eax, [esp+arg_0]; jumptable 005902AE case 901
0x5902B9: push    eax
0x5902BA: call    sub_590070
0x5902BF: add     esp, 4
0x5902C2: retn
0x5902C3: mov     ecx, [esp+arg_0]; jumptable 005902AE case 902
0x5902C7: push    ecx
0x5902C8: call    sub_590000
0x5902CD: add     esp, 4
0x5902D0: retn
0x5902D1: push    5Ch ; '\'; jumptable 005902AE case 904
0x5902D3: call    FormHeapAlloc
0x5902D8: add     esp, 4
0x5902DB: test    eax, eax
0x5902DD: jz      short def_5902AE; jumptable 005902AE default case, case 906
0x5902DF: mov     ecx, eax
0x5902E1: jmp     loc_58FF50
0x5902E6: mov     edx, [esp+arg_0]; jumptable 005902AE case 903
0x5902EA: push    edx
0x5902EB: call    sub_58FEC0
0x5902F0: add     esp, 4
0x5902F3: retn
0x5902F4: mov     eax, [esp+arg_0]; jumptable 005902AE case 905
0x5902F8: push    eax
0x5902F9: call    ??0TileMenu@@QAE@XZ; TileMenu::TileMenu(void)
0x5902FE: add     esp, 4
0x590301: retn
0x590302: mov     ecx, [esp+arg_0]; jumptable 005902AE case 907
0x590306: push    ecx
0x590307: call    ??0TileWindow@@QAE@XZ; TileWindow::TileWindow(void)
0x59030C: add     esp, 4
0x59030F: retn
0x590310: xor     eax, eax; jumptable 005902AE default case, case 906
0x590312: retn
0x58FF50: mov     eax, ecx
0x58FF52: fld     dword ptr ds:0A30634h
0x58FF58: xor     ecx, ecx
0x58FF5A: mov     [eax+8], ecx
0x58FF5D: mov     [eax+0Ch], cx
0x58FF61: mov     [eax+0Eh], cx
0x58FF65: mov     [eax+20h], ecx
0x58FF68: mov     [eax+18h], ecx
0x58FF6B: mov     [eax+1Ch], ecx
0x58FF6E: mov     dword ptr [eax+14h], offset ??_7?$NiTList@PAVValue@Tile@@@@6B@; const NiTList<Tile::Value *>::`vftable'
0x58FF75: mov     [eax+3Ch], ecx
0x58FF78: mov     [eax+34h], ecx
0x58FF7B: mov     [eax+38h], ecx
0x58FF7E: mov     dword ptr [eax+30h], offset ??_7?$NiTList@PAVTile@@@@6B@; const NiTList<Tile *>::`vftable'
0x58FF85: mov     [eax+10h], ecx
0x58FF88: mov     [eax+4], cl
0x58FF8B: mov     [eax+6], cl
0x58FF8E: mov     dword ptr [eax], offset ??_7Tile3D@@6B@; const Tile3D::`vftable'
0x58FF94: mov     [eax+48h], ecx
0x58FF97: mov     [eax+4Ch], cx
0x58FF9B: mov     [eax+4Eh], cx
0x58FF9F: mov     [eax+50h], ecx
0x58FFA2: mov     [eax+54h], cx
0x58FFA6: mov     [eax+56h], cx
0x58FFAA: fstp    dword ptr [eax+58h]
0x58FFAD: mov     [eax+24h], ecx
0x58FFB0: mov     [eax+40h], ecx
0x58FFB3: mov     [eax+44h], ecx
0x58FFB6: retn
