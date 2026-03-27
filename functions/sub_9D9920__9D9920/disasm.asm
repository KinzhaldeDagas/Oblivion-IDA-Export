0x9D9920: push    0FFFFFFFFh
0x9D9922: push    offset SEH_9D9920
0x9D9927: mov     eax, large fs:0
0x9D992D: push    eax
0x9D992E: mov     eax, ___security_cookie
0x9D9933: xor     eax, esp
0x9D9935: push    eax
0x9D9936: lea     eax, [esp+10h+var_C]
0x9D993A: mov     large fs:0, eax
0x9D9940: push    offset flt_B03124
0x9D9945: mov     ecx, offset INISettingCollection
0x9D994A: mov     [esp+14h+var_4], 0
0x9D9952: call    SettingCollectionList_AddSetting
0x9D9957: push    offset sub_A17240; void (__cdecl *)()
0x9D995C: call    _atexit
0x9D9961: add     esp, 4
0x9D9964: mov     ecx, [esp+10h+var_C]
0x9D9968: mov     large fs:0, ecx
0x9D996F: pop     ecx
0x9D9970: add     esp, 0Ch
0x9D9973: retn
