0x9DE140: push    0FFFFFFFFh
0x9DE142: push    offset SEH_9DE140
0x9DE147: mov     eax, large fs:0
0x9DE14D: push    eax
0x9DE14E: mov     eax, ___security_cookie
0x9DE153: xor     eax, esp
0x9DE155: push    eax
0x9DE156: lea     eax, [esp+10h+var_C]
0x9DE15A: mov     large fs:0, eax
0x9DE160: push    offset flt_B06E34
0x9DE165: mov     ecx, offset INISettingCollection
0x9DE16A: mov     [esp+14h+var_4], 0
0x9DE172: call    SettingCollectionList_AddSetting
0x9DE177: push    offset sub_A19650; void (__cdecl *)()
0x9DE17C: call    _atexit
0x9DE181: add     esp, 4
0x9DE184: mov     ecx, [esp+10h+var_C]
0x9DE188: mov     large fs:0, ecx
0x9DE18F: pop     ecx
0x9DE190: add     esp, 0Ch
0x9DE193: retn
