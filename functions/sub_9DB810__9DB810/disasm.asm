0x9DB810: push    0FFFFFFFFh
0x9DB812: push    offset SEH_9DB810
0x9DB817: mov     eax, large fs:0
0x9DB81D: push    eax
0x9DB81E: mov     eax, ___security_cookie
0x9DB823: xor     eax, esp
0x9DB825: push    eax
0x9DB826: lea     eax, [esp+10h+var_C]
0x9DB82A: mov     large fs:0, eax
0x9DB830: push    offset off_B05574; "One of the files that \"%s\" is depende"...
0x9DB835: mov     ecx, offset INISettingCollection
0x9DB83A: mov     [esp+14h+var_4], 0
0x9DB842: call    SettingCollectionList_AddSetting
0x9DB847: push    offset sub_A18150; void (__cdecl *)()
0x9DB84C: call    _atexit
0x9DB851: add     esp, 4
0x9DB854: mov     ecx, [esp+10h+var_C]
0x9DB858: mov     large fs:0, ecx
0x9DB85F: pop     ecx
0x9DB860: add     esp, 0Ch
0x9DB863: retn
