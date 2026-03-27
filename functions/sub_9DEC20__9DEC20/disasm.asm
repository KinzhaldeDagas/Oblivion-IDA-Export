0x9DEC20: push    0FFFFFFFFh
0x9DEC22: push    offset SEH_9DEC20
0x9DEC27: mov     eax, large fs:0
0x9DEC2D: push    eax
0x9DEC2E: mov     eax, ___security_cookie
0x9DEC33: xor     eax, esp
0x9DEC35: push    eax
0x9DEC36: lea     eax, [esp+10h+var_C]
0x9DEC3A: mov     large fs:0, eax
0x9DEC40: push    offset word_B06F1C
0x9DEC45: mov     ecx, offset INISettingCollection
0x9DEC4A: mov     [esp+14h+var_4], 0
0x9DEC52: call    SettingCollectionList_AddSetting
0x9DEC57: push    offset sub_A19BC0; void (__cdecl *)()
0x9DEC5C: call    _atexit
0x9DEC61: add     esp, 4
0x9DEC64: mov     ecx, [esp+10h+var_C]
0x9DEC68: mov     large fs:0, ecx
0x9DEC6F: pop     ecx
0x9DEC70: add     esp, 0Ch
0x9DEC73: retn
