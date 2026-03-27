0x9D8AD0: push    0FFFFFFFFh
0x9D8AD2: push    offset SEH_9D8AD0
0x9D8AD7: mov     eax, large fs:0
0x9D8ADD: push    eax
0x9D8ADE: mov     eax, ___security_cookie
0x9D8AE3: xor     eax, esp
0x9D8AE5: push    eax
0x9D8AE6: lea     eax, [esp+10h+var_C]
0x9D8AEA: mov     large fs:0, eax
0x9D8AF0: push    offset off_B02D40; "Test\\CameraPath.nif"
0x9D8AF5: mov     ecx, offset INISettingCollection
0x9D8AFA: mov     [esp+14h+var_4], 0
0x9D8B02: call    SettingCollectionList_AddSetting
0x9D8B07: push    offset sub_A16B20; void (__cdecl *)()
0x9D8B0C: call    _atexit
0x9D8B11: add     esp, 4
0x9D8B14: mov     ecx, [esp+10h+var_C]
0x9D8B18: mov     large fs:0, ecx
0x9D8B1F: pop     ecx
0x9D8B20: add     esp, 0Ch
0x9D8B23: retn
