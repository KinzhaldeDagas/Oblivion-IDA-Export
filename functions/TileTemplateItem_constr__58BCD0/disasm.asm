0x58BCD0: push    0FFFFFFFFh
0x58BCD2: push    offset TileTemplateItem_constr_SEH
0x58BCD7: mov     eax, large fs:0
0x58BCDD: push    eax
0x58BCDE: push    ecx
0x58BCDF: push    esi
0x58BCE0: mov     eax, ds:0B30AACh
0x58BCE5: xor     eax, esp
0x58BCE7: push    eax
0x58BCE8: lea     eax, [esp+18h+var_C]
0x58BCEC: mov     large fs:0, eax
0x58BCF2: mov     esi, ecx
0x58BCF4: mov     [esp+18h+var_10], esi
0x58BCF8: xor     eax, eax
0x58BCFA: mov     [esi], eax
0x58BCFC: mov     [esi+4], ax
0x58BD00: mov     [esi+6], ax
0x58BD04: mov     [esp+18h+var_4], eax
0x58BD08: mov     [esi+18h], eax
0x58BD0B: mov     [esi+10h], eax
0x58BD0E: mov     [esi+14h], eax
0x58BD11: mov     dword ptr [esi+0Ch], offset ??_7?$NiTList@PAVTileTemplateItem@Tile@@@@6B@; const NiTList<Tile::TileTemplateItem *>::`vftable'
0x58BD18: push    eax; a3
0x58BD19: mov     eax, [esp+1Ch+a2]
0x58BD1D: push    eax; a2
0x58BD1E: mov     byte ptr [esp+20h+var_4], 1
0x58BD23: call    BSStringT_Set
0x58BD28: mov     ecx, [esp+18h+storage]
0x58BD2C: mov     [esi+8], ecx
0x58BD2F: mov     eax, esi
0x58BD31: mov     ecx, [esp+18h+var_C]
0x58BD35: mov     large fs:0, ecx
0x58BD3C: pop     ecx
0x58BD3D: pop     esi
0x58BD3E: add     esp, 10h
0x58BD41: retn    8
0x9BF870: mov     ecx, [ebp-10h]; void *
0x9BF873: jmp     BSStringT_Clear
0x9BF878: mov     ecx, [ebp-10h]
0x9BF87B: add     ecx, 0Ch
0x9BF87E: jmp     j_??1?$NiTList@PAVTileTemplateItem@Tile@@@@UAE@XZ; NiTList<Tile::TileTemplateItem *>::~NiTList<Tile::TileTemplateItem *>(void)
0x9BF883: mov     edx, [esp+arg_4]
0x9BF887: lea     eax, [edx-8]
0x9BF88A: mov     ecx, [edx-0Ch]
0x9BF88D: xor     ecx, eax
0x9BF88F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF894: mov     eax, offset stru_AE8D6C
0x9BF899: jmp     ___CxxFrameHandler3
