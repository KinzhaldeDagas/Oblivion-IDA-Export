0x9E0450: push    0FFFFFFFFh
0x9E0452: push    offset SEH_9E0450
0x9E0457: mov     eax, large fs:0
0x9E045D: push    eax
0x9E045E: mov     eax, ___security_cookie
0x9E0463: xor     eax, esp
0x9E0465: push    eax
0x9E0466: lea     eax, [esp+10h+var_C]
0x9E046A: mov     large fs:0, eax
0x9E0470: push    offset SettingLODFadeOutMultItems
0x9E0475: mov     ecx, offset INISettingCollection
0x9E047A: mov     [esp+14h+var_4], 0
0x9E0482: call    SettingCollectionList_AddSetting
0x9E0487: push    offset sub_A1A880; void (__cdecl *)()
0x9E048C: call    _atexit
0x9E0491: add     esp, 4
0x9E0494: mov     ecx, [esp+10h+var_C]
0x9E0498: mov     large fs:0, ecx
0x9E049F: pop     ecx
0x9E04A0: add     esp, 0Ch
0x9E04A3: retn
