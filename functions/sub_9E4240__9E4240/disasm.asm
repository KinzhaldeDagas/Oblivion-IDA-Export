0x9E4240: push    0FFFFFFFFh
0x9E4242: push    offset SEH_9E4240
0x9E4247: mov     eax, large fs:0
0x9E424D: push    eax
0x9E424E: mov     eax, ___security_cookie
0x9E4253: xor     eax, esp
0x9E4255: push    eax
0x9E4256: lea     eax, [esp+10h+var_C]
0x9E425A: mov     large fs:0, eax
0x9E4260: push    offset flt_B114A4
0x9E4265: mov     ecx, offset INISettingCollection
0x9E426A: mov     [esp+14h+var_4], 0
0x9E4272: call    SettingCollectionList_AddSetting
0x9E4277: push    offset sub_A1C580; void (__cdecl *)()
0x9E427C: call    _atexit
0x9E4281: add     esp, 4
0x9E4284: mov     ecx, [esp+10h+var_C]
0x9E4288: mov     large fs:0, ecx
0x9E428F: pop     ecx
0x9E4290: add     esp, 0Ch
0x9E4293: retn
