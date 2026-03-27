0x412E20: push    esi
0x412E21: mov     esi, [esp+4+arg_0]
0x412E25: test    esi, esi
0x412E27: jz      short SettingCollectionMap_AddSetting___Done
0x412E29: mov     eax, [esi+4]
0x412E2C: test    eax, eax
0x412E2E: jz      short SettingCollectionMap_AddSetting___Done
0x412E30: push    edi
0x412E31: lea     edi, [ecx+10Ch]
0x412E37: lea     ecx, [esp+8+arg_0]
0x412E3B: push    ecx
0x412E3C: push    eax
0x412E3D: mov     ecx, edi
0x412E3F: call    NiTMap_GetAt
0x412E44: test    al, al
0x412E46: jz      short loc_412E5E
0x412E48: mov     edx, [esi+4]
0x412E4B: push    edx; ArgList
0x412E4C: push    offset aSettingKeySA_0; "Setting key '%s' already used in map.\n"...
0x412E51: call    PrintError
0x412E56: add     esp, 8
0x412E59: pop     edi
0x412E5A: pop     esi
0x412E5B: retn    4
0x412E5E: mov     eax, [esi+4]
0x412E61: push    esi
0x412E62: push    eax
0x412E63: mov     ecx, edi
0x412E65: call    sub_412D30
0x412E6A: pop     edi
0x412E6B: pop     esi
0x412E6C: retn    4
