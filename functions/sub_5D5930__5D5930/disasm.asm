0x5D5930: sub     esp, 0Ch
0x5D5933: push    edi; a3
0x5D5934: mov     edi, ecx
0x5D5936: cmp     dword ptr [edi+2Ch], 0
0x5D593A: jz      loc_5D59F4
0x5D5940: push    esi; a3
0x5D5941: push    1; arg1
0x5D5943: push    0; canCreate
0x5D5945: call    InterfaceManager_GetSingleton
0x5D594A: fld     dword ptr [eax+38h]
0x5D594D: add     esp, 8
0x5D5950: call    Double_To_SInt32
0x5D5955: mov     ecx, eax
0x5D5957: mov     eax, 88888889h
0x5D595C: imul    ecx
0x5D595E: add     edx, ecx
0x5D5960: mov     ecx, [edi+2Ch]
0x5D5963: sar     edx, 6
0x5D5966: mov     esi, edx
0x5D5968: shr     esi, 1Fh
0x5D596B: push    0FB5h
0x5D5970: add     esi, edx
0x5D5972: call    Tile_GetFloat
0x5D5977: mov     ecx, [edi+2Ch]
0x5D597A: fstp    [esp+14h+var_C]
0x5D597E: push    0FB0h
0x5D5983: fld     [esp+18h+var_C]
0x5D5987: fstp    [esp+18h+var_8]
0x5D598B: call    Tile_GetFloat
0x5D5990: fcomp   [esp+14h+var_8]
0x5D5994: fnstsw  ax
0x5D5996: test    ah, 41h
0x5D5999: jnz     short loc_5D599F
0x5D599B: test    esi, esi
0x5D599D: jl      short loc_5D59B0
0x5D599F: fldz
0x5D59A1: fcomp   [esp+14h+var_C]
0x5D59A5: fnstsw  ax
0x5D59A7: test    ah, 5
0x5D59AA: jp      short loc_5D59F3
0x5D59AC: test    esi, esi
0x5D59AE: jle     short loc_5D59F3
0x5D59B0: neg     esi
0x5D59B2: mov     [esp+14h+var_C], esi
0x5D59B6: fild    [esp+14h+var_C]
0x5D59BA: push    ecx
0x5D59BB: mov     ecx, [edi+2Ch]; this
0x5D59BE: fstp    [esp+18h+a2]; a3
0x5D59C1: push    0FB7h; a2
0x5D59C6: call    Tile_SetFloat
0x5D59CB: fldz
0x5D59CD: push    ecx
0x5D59CE: fstp    [esp+18h+a2]; a3
0x5D59D1: mov     ecx, [edi+2Ch]; this
0x5D59D4: push    0FB7h; a2
0x5D59D9: call    Tile_SetFloat
0x5D59DE: push    1
0x5D59E0: push    1; arg1
0x5D59E2: push    0; canCreate
0x5D59E4: call    InterfaceManager_GetSingleton
0x5D59E9: add     esp, 8
0x5D59EC: mov     ecx, eax
0x5D59EE: call    sub_57D730
0x5D59F3: pop     esi
0x5D59F4: pop     edi
0x5D59F5: add     esp, 0Ch
0x5D59F8: retn    8
