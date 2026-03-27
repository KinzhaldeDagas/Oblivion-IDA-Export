0x9DD240: push    0FFFFFFFFh
0x9DD242: push    offset SEH_9DD240
0x9DD247: mov     eax, large fs:0
0x9DD24D: push    eax
0x9DD24E: mov     eax, ___security_cookie
0x9DD253: xor     eax, esp
0x9DD255: push    eax
0x9DD256: lea     eax, [esp+10h+var_C]
0x9DD25A: mov     large fs:0, eax
0x9DD260: push    offset DoStaticAndArchShadows
0x9DD265: mov     ecx, offset INISettingCollection
0x9DD26A: mov     [esp+14h+var_4], 0
0x9DD272: call    SettingCollectionList_AddSetting
0x9DD277: push    offset sub_A18ED0; void (__cdecl *)()
0x9DD27C: call    _atexit
0x9DD281: add     esp, 4
0x9DD284: mov     ecx, [esp+10h+var_C]
0x9DD288: mov     large fs:0, ecx
0x9DD28F: pop     ecx
0x9DD290: add     esp, 0Ch
0x9DD293: retn
