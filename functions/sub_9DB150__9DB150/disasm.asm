0x9DB150: push    0FFFFFFFFh
0x9DB152: push    offset SEH_9DB150
0x9DB157: mov     eax, large fs:0
0x9DB15D: push    eax
0x9DB15E: mov     eax, ___security_cookie
0x9DB163: xor     eax, esp
0x9DB165: push    eax
0x9DB166: lea     eax, [esp+10h+var_C]
0x9DB16A: mov     large fs:0, eax
0x9DB170: push    offset unk_B05204
0x9DB175: mov     ecx, offset INISettingCollection
0x9DB17A: mov     [esp+14h+var_4], 0
0x9DB182: call    SettingCollectionList_AddSetting
0x9DB187: push    offset sub_A17E10; void (__cdecl *)()
0x9DB18C: call    _atexit
0x9DB191: add     esp, 4
0x9DB194: mov     ecx, [esp+10h+var_C]
0x9DB198: mov     large fs:0, ecx
0x9DB19F: pop     ecx
0x9DB1A0: add     esp, 0Ch
0x9DB1A3: retn
