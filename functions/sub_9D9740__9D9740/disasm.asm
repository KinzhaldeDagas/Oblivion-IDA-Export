0x9D9740: push    0FFFFFFFFh
0x9D9742: push    offset SEH_9D9740
0x9D9747: mov     eax, large fs:0
0x9D974D: push    eax
0x9D974E: mov     eax, ___security_cookie
0x9D9753: xor     eax, esp
0x9D9755: push    eax
0x9D9756: lea     eax, [esp+10h+var_C]
0x9D975A: mov     large fs:0, eax
0x9D9760: push    offset flt_B030AC
0x9D9765: mov     ecx, offset INISettingCollection
0x9D976A: mov     [esp+14h+var_4], 0
0x9D9772: call    SettingCollectionList_AddSetting
0x9D9777: push    offset sub_A17150; void (__cdecl *)()
0x9D977C: call    _atexit
0x9D9781: add     esp, 4
0x9D9784: mov     ecx, [esp+10h+var_C]
0x9D9788: mov     large fs:0, ecx
0x9D978F: pop     ecx
0x9D9790: add     esp, 0Ch
0x9D9793: retn
