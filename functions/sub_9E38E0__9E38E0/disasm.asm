0x9E38E0: push    0FFFFFFFFh
0x9E38E2: push    offset SEH_9E38E0
0x9E38E7: mov     eax, large fs:0
0x9E38ED: push    eax
0x9E38EE: mov     eax, ___security_cookie
0x9E38F3: xor     eax, esp
0x9E38F5: push    eax
0x9E38F6: lea     eax, [esp+10h+var_C]
0x9E38FA: mov     large fs:0, eax
0x9E3900: push    offset externalLodFiles
0x9E3905: mov     ecx, offset INISettingCollection
0x9E390A: mov     [esp+14h+var_4], 0
0x9E3912: call    SettingCollectionList_AddSetting
0x9E3917: push    offset sub_A1C010; void (__cdecl *)()
0x9E391C: call    _atexit
0x9E3921: add     esp, 4
0x9E3924: mov     ecx, [esp+10h+var_C]
0x9E3928: mov     large fs:0, ecx
0x9E392F: pop     ecx
0x9E3930: add     esp, 0Ch
0x9E3933: retn
