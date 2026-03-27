0x9E3520: push    0FFFFFFFFh
0x9E3522: push    offset SEH_9E3520
0x9E3527: mov     eax, large fs:0
0x9E352D: push    eax
0x9E352E: mov     eax, ___security_cookie
0x9E3533: xor     eax, esp
0x9E3535: push    eax
0x9E3536: lea     eax, [esp+10h+var_C]
0x9E353A: mov     large fs:0, eax
0x9E3540: push    offset bGrassPointLightening
0x9E3545: mov     ecx, offset INISettingCollection
0x9E354A: mov     [esp+14h+var_4], 0
0x9E3552: call    SettingCollectionList_AddSetting
0x9E3557: push    offset sub_A1BE20; void (__cdecl *)()
0x9E355C: call    _atexit
0x9E3561: add     esp, 4
0x9E3564: mov     ecx, [esp+10h+var_C]
0x9E3568: mov     large fs:0, ecx
0x9E356F: pop     ecx
0x9E3570: add     esp, 0Ch
0x9E3573: retn
