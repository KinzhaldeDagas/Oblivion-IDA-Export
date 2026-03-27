0x9F9250: push    0FFFFFFFFh
0x9F9252: push    offset SEH_9F9250
0x9F9257: mov     eax, large fs:0
0x9F925D: push    eax
0x9F925E: mov     eax, ___security_cookie
0x9F9263: xor     eax, esp
0x9F9265: push    eax
0x9F9266: lea     eax, [esp+10h+var_C]
0x9F926A: mov     large fs:0, eax
0x9F9270: push    offset flt_B12608
0x9F9275: mov     ecx, offset INISettingCollection
0x9F927A: mov     [esp+14h+var_4], 0
0x9F9282: call    SettingCollectionList_AddSetting
0x9F9287: push    offset sub_A236C0; void (__cdecl *)()
0x9F928C: call    _atexit
0x9F9291: add     esp, 4
0x9F9294: mov     ecx, [esp+10h+var_C]
0x9F9298: mov     large fs:0, ecx
0x9F929F: pop     ecx
0x9F92A0: add     esp, 0Ch
0x9F92A3: retn
