0x9DC610: push    0FFFFFFFFh
0x9DC612: push    offset SEH_9DC610
0x9DC617: mov     eax, large fs:0
0x9DC61D: push    eax
0x9DC61E: mov     eax, ___security_cookie
0x9DC623: xor     eax, esp
0x9DC625: push    eax
0x9DC626: lea     eax, [esp+10h+var_C]
0x9DC62A: mov     large fs:0, eax
0x9DC630: push    offset dword_B06AA0
0x9DC635: mov     ecx, offset INISettingCollection
0x9DC63A: mov     [esp+14h+var_4], 0
0x9DC642: call    SettingCollectionList_AddSetting
0x9DC647: push    offset sub_A18860; void (__cdecl *)()
0x9DC64C: call    _atexit
0x9DC651: add     esp, 4
0x9DC654: mov     ecx, [esp+10h+var_C]
0x9DC658: mov     large fs:0, ecx
0x9DC65F: pop     ecx
0x9DC660: add     esp, 0Ch
0x9DC663: retn
