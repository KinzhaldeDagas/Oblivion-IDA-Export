0x9DE440: push    0FFFFFFFFh
0x9DE442: push    offset SEH_9DE440
0x9DE447: mov     eax, large fs:0
0x9DE44D: push    eax
0x9DE44E: mov     eax, ___security_cookie
0x9DE453: xor     eax, esp
0x9DE455: push    eax
0x9DE456: lea     eax, [esp+10h+var_C]
0x9DE45A: mov     large fs:0, eax
0x9DE460: push    offset flt_B06E74
0x9DE465: mov     ecx, offset INISettingCollection
0x9DE46A: mov     [esp+14h+var_4], 0
0x9DE472: call    SettingCollectionList_AddSetting
0x9DE477: push    offset sub_A197D0; void (__cdecl *)()
0x9DE47C: call    _atexit
0x9DE481: add     esp, 4
0x9DE484: mov     ecx, [esp+10h+var_C]
0x9DE488: mov     large fs:0, ecx
0x9DE48F: pop     ecx
0x9DE490: add     esp, 0Ch
0x9DE493: retn
