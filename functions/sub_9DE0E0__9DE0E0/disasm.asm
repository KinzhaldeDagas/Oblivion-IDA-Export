0x9DE0E0: push    0FFFFFFFFh
0x9DE0E2: push    offset SEH_9DE0E0
0x9DE0E7: mov     eax, large fs:0
0x9DE0ED: push    eax
0x9DE0EE: mov     eax, ___security_cookie
0x9DE0F3: xor     eax, esp
0x9DE0F5: push    eax
0x9DE0F6: lea     eax, [esp+10h+var_C]
0x9DE0FA: mov     large fs:0, eax
0x9DE100: push    offset flt_B06E2C
0x9DE105: mov     ecx, offset INISettingCollection
0x9DE10A: mov     [esp+14h+var_4], 0
0x9DE112: call    SettingCollectionList_AddSetting
0x9DE117: push    offset sub_A19620; void (__cdecl *)()
0x9DE11C: call    _atexit
0x9DE121: add     esp, 4
0x9DE124: mov     ecx, [esp+10h+var_C]
0x9DE128: mov     large fs:0, ecx
0x9DE12F: pop     ecx
0x9DE130: add     esp, 0Ch
0x9DE133: retn
