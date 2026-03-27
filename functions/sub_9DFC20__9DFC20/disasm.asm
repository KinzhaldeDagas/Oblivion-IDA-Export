0x9DFC20: push    0FFFFFFFFh
0x9DFC22: push    offset SEH_9DFC20
0x9DFC27: mov     eax, large fs:0
0x9DFC2D: push    eax
0x9DFC2E: mov     eax, ___security_cookie
0x9DFC33: xor     eax, esp
0x9DFC35: push    eax
0x9DFC36: lea     eax, [esp+10h+var_C]
0x9DFC3A: mov     large fs:0, eax
0x9DFC40: push    offset useWaterDepth
0x9DFC45: mov     ecx, offset INISettingCollection
0x9DFC4A: mov     [esp+14h+var_4], 0
0x9DFC52: call    SettingCollectionList_AddSetting
0x9DFC57: push    offset sub_A1A420; void (__cdecl *)()
0x9DFC5C: call    _atexit
0x9DFC61: add     esp, 4
0x9DFC64: mov     ecx, [esp+10h+var_C]
0x9DFC68: mov     large fs:0, ecx
0x9DFC6F: pop     ecx
0x9DFC70: add     esp, 0Ch
0x9DFC73: retn
