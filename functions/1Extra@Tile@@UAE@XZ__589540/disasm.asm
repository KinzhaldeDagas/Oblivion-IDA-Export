0x589540: push    0FFFFFFFFh
0x589542: push    offset ??1Extra@Tile@@UAE@XZ_SEH
0x589547: mov     eax, large fs:0
0x58954D: push    eax
0x58954E: push    ecx
0x58954F: push    esi
0x589550: mov     eax, ds:0B30AACh
0x589555: xor     eax, esp
0x589557: push    eax
0x589558: lea     eax, [esp+18h+var_C]
0x58955C: mov     large fs:0, eax
0x589562: mov     esi, ecx
0x589564: mov     [esp+18h+var_10], esi
0x589568: mov     dword ptr [esi], offset ??_7Extra@Tile@@6B@; const Tile::Extra::`vftable'
0x58956E: cmp     dword ptr [esi+0Ch], 0
0x589572: mov     [esp+18h+var_4], 0
0x58957A: jz      short loc_58959B
0x58957C: mov     eax, [esi+10h]
0x58957F: mov     eax, [eax+1Ch]
0x589582: push    eax
0x589583: call    sub_588E60
0x589588: mov     ecx, [esi+0Ch]
0x58958B: mov     [ecx+10h], eax
0x58958E: mov     eax, [esi+0Ch]
0x589591: add     esp, 4
0x589594: mov     dword ptr [eax+24h], 0
0x58959B: mov     ecx, esi
0x58959D: mov     dword ptr [esi+0Ch], 0
0x5895A4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5895AC: call    NiExtraData_dtor
0x5895B1: mov     ecx, [esp+18h+var_C]
0x5895B5: mov     large fs:0, ecx
0x5895BC: pop     ecx
0x5895BD: pop     esi
0x5895BE: add     esp, 10h
0x5895C1: retn
