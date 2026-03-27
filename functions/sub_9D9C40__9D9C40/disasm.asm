0x9D9C40: push    0FFFFFFFFh
0x9D9C42: push    offset SEH_9D9C40
0x9D9C47: mov     eax, large fs:0
0x9D9C4D: push    eax
0x9D9C4E: mov     eax, ___security_cookie
0x9D9C53: xor     eax, esp
0x9D9C55: push    eax
0x9D9C56: lea     eax, [esp+10h+var_C]
0x9D9C5A: mov     large fs:0, eax
0x9D9C60: push    offset off_B03164; "ScreenShot"
0x9D9C65: mov     ecx, offset INISettingCollection
0x9D9C6A: mov     [esp+14h+var_4], 0
0x9D9C72: call    SettingCollectionList_AddSetting
0x9D9C77: push    offset sub_A173C0; void (__cdecl *)()
0x9D9C7C: call    _atexit
0x9D9C81: add     esp, 4
0x9D9C84: mov     ecx, [esp+10h+var_C]
0x9D9C88: mov     large fs:0, ecx
0x9D9C8F: pop     ecx
0x9D9C90: add     esp, 0Ch
0x9D9C93: retn
