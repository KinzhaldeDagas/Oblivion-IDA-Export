0x58CEB0: mov     eax, [esp+this]
0x58CEB4: push    eax
0x58CEB5: call    Tile_GetPropertyByCode?
0x58CEBA: test    eax, eax
0x58CEBC: jz      short locret_58CECD
0x58CEBE: fld     [esp+a2]
0x58CEC2: push    ecx
0x58CEC3: mov     ecx, eax
0x58CEC5: fstp    [esp+4+var_4]; float
0x58CEC8: call    Tile_Property_SetFloatValue?
0x58CECD: retn    8
