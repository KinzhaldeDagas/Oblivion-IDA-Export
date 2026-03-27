0x9D92B0: push    0FFFFFFFFh
0x9D92B2: push    offset SEH_9D92B0
0x9D92B7: mov     eax, large fs:0
0x9D92BD: push    eax
0x9D92BE: mov     eax, ___security_cookie
0x9D92C3: xor     eax, esp
0x9D92C5: push    eax
0x9D92C6: lea     eax, [esp+10h+var_C]
0x9D92CA: mov     large fs:0, eax
0x9D92D0: push    offset lpDefault
0x9D92D5: mov     ecx, offset INISettingCollection
0x9D92DA: mov     [esp+14h+var_4], 0
0x9D92E2: call    SettingCollectionList_AddSetting
0x9D92E7: push    offset sub_A16F10; void (__cdecl *)()
0x9D92EC: call    _atexit
0x9D92F1: add     esp, 4
0x9D92F4: mov     ecx, [esp+10h+var_C]
0x9D92F8: mov     large fs:0, ecx
0x9D92FF: pop     ecx
0x9D9300: add     esp, 0Ch
0x9D9303: retn
