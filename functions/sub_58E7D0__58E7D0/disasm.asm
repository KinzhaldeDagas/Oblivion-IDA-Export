0x58E7D0: sub     esp, 8
0x58E7D3: push    esi
0x58E7D4: push    edi
0x58E7D5: lea     eax, [esp+10h+var_8]
0x58E7D9: mov     edi, ecx
0x58E7DB: mov     ecx, [edi+10h]
0x58E7DE: push    eax
0x58E7DF: push    0FF5h
0x58E7E4: mov     [esp+18h+var_8], 0
0x58E7EC: call    sub_58E3B0
0x58E7F1: mov     esi, eax
0x58E7F3: test    esi, esi
0x58E7F5: jz      short loc_58E864
0x58E7F7: push    0FB3h
0x58E7FC: mov     ecx, esi
0x58E7FE: call    Tile_GetPropertyByCode?
0x58E803: test    eax, eax
0x58E805: jz      short loc_58E818
0x58E807: fld     dword ptr ds:0A6906Ch
0x58E80D: push    ecx
0x58E80E: mov     ecx, eax
0x58E810: fstp    [esp+14h+var_14]; float
0x58E813: call    Tile_Property_SetFloatValue?
0x58E818: push    0FF5h
0x58E81D: mov     ecx, edi
0x58E81F: call    Tile_GetFloat
0x58E824: fstp    [esp+10h+var_4]
0x58E828: push    0FB3h
0x58E82D: mov     ecx, esi
0x58E82F: call    Tile_GetPropertyByCode?
0x58E834: test    eax, eax
0x58E836: jz      short loc_58E847
0x58E838: fld     [esp+10h+var_4]
0x58E83C: push    ecx
0x58E83D: mov     ecx, eax
0x58E83F: fstp    [esp+14h+var_14]; float
0x58E842: call    Tile_Property_SetFloatValue?
0x58E847: push    0FB3h
0x58E84C: mov     ecx, esi
0x58E84E: call    Tile_GetPropertyByCode?
0x58E853: test    eax, eax
0x58E855: jz      short loc_58E864
0x58E857: fldz
0x58E859: push    ecx
0x58E85A: mov     ecx, eax
0x58E85C: fstp    [esp+14h+var_14]; float
0x58E85F: call    Tile_Property_SetFloatValue?
0x58E864: pop     edi
0x58E865: pop     esi
0x58E866: add     esp, 8
0x58E869: retn
