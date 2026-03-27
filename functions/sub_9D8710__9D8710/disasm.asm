0x9D8710: push    0FFFFFFFFh
0x9D8712: push    offset SEH_9D8710
0x9D8717: mov     eax, large fs:0
0x9D871D: push    eax
0x9D871E: mov     eax, ___security_cookie
0x9D8723: xor     eax, esp
0x9D8725: push    eax
0x9D8726: lea     eax, [esp+10h+var_C]
0x9D872A: mov     large fs:0, eax
0x9D8730: push    offset off_B02CF0
0x9D8735: mov     ecx, offset INISettingCollection
0x9D873A: mov     [esp+14h+var_4], 0
0x9D8742: call    SettingCollectionList_AddSetting
0x9D8747: push    offset sub_A16940; void (__cdecl *)()
0x9D874C: call    _atexit
0x9D8751: add     esp, 4
0x9D8754: mov     ecx, [esp+10h+var_C]
0x9D8758: mov     large fs:0, ecx
0x9D875F: pop     ecx
0x9D8760: add     esp, 0Ch
0x9D8763: retn
