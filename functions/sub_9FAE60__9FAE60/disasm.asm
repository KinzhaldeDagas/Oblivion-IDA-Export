0x9FAE60: push    0FFFFFFFFh
0x9FAE62: push    offset SEH_9FAE60
0x9FAE67: mov     eax, large fs:0
0x9FAE6D: push    eax
0x9FAE6E: mov     eax, ___security_cookie
0x9FAE73: xor     eax, esp
0x9FAE75: push    eax
0x9FAE76: lea     eax, [esp+10h+var_C]
0x9FAE7A: mov     large fs:0, eax
0x9FAE80: push    offset off_B12E34; "Data\\Fonts\\Daedric_Font.fnt"
0x9FAE85: mov     ecx, offset INISettingCollection
0x9FAE8A: mov     [esp+14h+var_4], 0
0x9FAE92: call    SettingCollectionList_AddSetting
0x9FAE97: push    offset sub_A24370; void (__cdecl *)()
0x9FAE9C: call    _atexit
0x9FAEA1: add     esp, 4
0x9FAEA4: mov     ecx, [esp+10h+var_C]
0x9FAEA8: mov     large fs:0, ecx
0x9FAEAF: pop     ecx
0x9FAEB0: add     esp, 0Ch
0x9FAEB3: retn
