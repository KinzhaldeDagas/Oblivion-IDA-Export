0x58CED0: mov     eax, [esp+arg_0]
0x58CED4: push    eax
0x58CED5: call    Tile_GetPropertyByCode?
0x58CEDA: test    eax, eax
0x58CEDC: jz      short locret_58CEEA
0x58CEDE: mov     ecx, [esp+arg_4]
0x58CEE2: push    ecx
0x58CEE3: mov     ecx, eax
0x58CEE5: call    sub_58CA50
0x58CEEA: retn    8
