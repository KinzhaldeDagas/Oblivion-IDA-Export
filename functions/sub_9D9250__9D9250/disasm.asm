0x9D9250: push    0FFFFFFFFh
0x9D9252: push    offset SEH_9D9250
0x9D9257: mov     eax, large fs:0
0x9D925D: push    eax
0x9D925E: mov     eax, ___security_cookie
0x9D9263: xor     eax, esp
0x9D9265: push    eax
0x9D9266: lea     eax, [esp+10h+var_C]
0x9D926A: mov     large fs:0, eax
0x9D9270: push    offset lpText
0x9D9275: mov     ecx, offset INISettingCollection
0x9D927A: mov     [esp+14h+var_4], 0
0x9D9282: call    SettingCollectionList_AddSetting
0x9D9287: push    offset sub_A16EE0; void (__cdecl *)()
0x9D928C: call    _atexit
0x9D9291: add     esp, 4
0x9D9294: mov     ecx, [esp+10h+var_C]
0x9D9298: mov     large fs:0, ecx
0x9D929F: pop     ecx
0x9D92A0: add     esp, 0Ch
0x9D92A3: retn
