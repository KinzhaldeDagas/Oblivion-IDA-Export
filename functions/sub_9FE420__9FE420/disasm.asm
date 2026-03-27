0x9FE420: push    0FFFFFFFFh
0x9FE422: push    offset SEH_9FE420
0x9FE427: mov     eax, large fs:0
0x9FE42D: push    eax
0x9FE42E: mov     eax, ___security_cookie
0x9FE433: xor     eax, esp
0x9FE435: push    eax
0x9FE436: lea     eax, [esp+10h+var_C]
0x9FE43A: mov     large fs:0, eax
0x9FE440: push    offset unk_B14F50
0x9FE445: mov     ecx, offset INISettingCollection
0x9FE44A: mov     [esp+14h+var_4], 0
0x9FE452: call    SettingCollectionList_AddSetting
0x9FE457: push    offset sub_A25D10; void (__cdecl *)()
0x9FE45C: call    _atexit
0x9FE461: add     esp, 4
0x9FE464: mov     ecx, [esp+10h+var_C]
0x9FE468: mov     large fs:0, ecx
0x9FE46F: pop     ecx
0x9FE470: add     esp, 0Ch
0x9FE473: retn
