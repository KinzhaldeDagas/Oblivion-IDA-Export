0x9E4420: push    0FFFFFFFFh
0x9E4422: push    offset SEH_9E4420
0x9E4427: mov     eax, large fs:0
0x9E442D: push    eax
0x9E442E: mov     eax, ___security_cookie
0x9E4433: xor     eax, esp
0x9E4435: push    eax
0x9E4436: lea     eax, [esp+10h+var_C]
0x9E443A: mov     large fs:0, eax
0x9E4440: push    offset dword_B11920
0x9E4445: mov     ecx, offset INISettingCollection
0x9E444A: mov     [esp+14h+var_4], 0
0x9E4452: call    SettingCollectionList_AddSetting
0x9E4457: push    offset sub_A1C670; void (__cdecl *)()
0x9E445C: call    _atexit
0x9E4461: add     esp, 4
0x9E4464: mov     ecx, [esp+10h+var_C]
0x9E4468: mov     large fs:0, ecx
0x9E446F: pop     ecx
0x9E4470: add     esp, 0Ch
0x9E4473: retn
