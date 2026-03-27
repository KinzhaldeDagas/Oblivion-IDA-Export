0x9F9310: push    0FFFFFFFFh
0x9F9312: push    offset SEH_9F9310
0x9F9317: mov     eax, large fs:0
0x9F931D: push    eax
0x9F931E: mov     eax, ___security_cookie
0x9F9323: xor     eax, esp
0x9F9325: push    eax
0x9F9326: lea     eax, [esp+10h+var_C]
0x9F932A: mov     large fs:0, eax
0x9F9330: push    offset flt_B12618
0x9F9335: mov     ecx, offset INISettingCollection
0x9F933A: mov     [esp+14h+var_4], 0
0x9F9342: call    SettingCollectionList_AddSetting
0x9F9347: push    offset sub_A23720; void (__cdecl *)()
0x9F934C: call    _atexit
0x9F9351: add     esp, 4
0x9F9354: mov     ecx, [esp+10h+var_C]
0x9F9358: mov     large fs:0, ecx
0x9F935F: pop     ecx
0x9F9360: add     esp, 0Ch
0x9F9363: retn
