0x9F92B0: push    0FFFFFFFFh
0x9F92B2: push    offset SEH_9F92B0
0x9F92B7: mov     eax, large fs:0
0x9F92BD: push    eax
0x9F92BE: mov     eax, ___security_cookie
0x9F92C3: xor     eax, esp
0x9F92C5: push    eax
0x9F92C6: lea     eax, [esp+10h+var_C]
0x9F92CA: mov     large fs:0, eax
0x9F92D0: push    offset flt_B12610
0x9F92D5: mov     ecx, offset INISettingCollection
0x9F92DA: mov     [esp+14h+var_4], 0
0x9F92E2: call    SettingCollectionList_AddSetting
0x9F92E7: push    offset sub_A236F0; void (__cdecl *)()
0x9F92EC: call    _atexit
0x9F92F1: add     esp, 4
0x9F92F4: mov     ecx, [esp+10h+var_C]
0x9F92F8: mov     large fs:0, ecx
0x9F92FF: pop     ecx
0x9F9300: add     esp, 0Ch
0x9F9303: retn
