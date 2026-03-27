0x9DE260: push    0FFFFFFFFh
0x9DE262: push    offset SEH_9DE260
0x9DE267: mov     eax, large fs:0
0x9DE26D: push    eax
0x9DE26E: mov     eax, ___security_cookie
0x9DE273: xor     eax, esp
0x9DE275: push    eax
0x9DE276: lea     eax, [esp+10h+var_C]
0x9DE27A: mov     large fs:0, eax
0x9DE280: push    offset flt_B06E4C
0x9DE285: mov     ecx, offset INISettingCollection
0x9DE28A: mov     [esp+14h+var_4], 0
0x9DE292: call    SettingCollectionList_AddSetting
0x9DE297: push    offset sub_A196E0; void (__cdecl *)()
0x9DE29C: call    _atexit
0x9DE2A1: add     esp, 4
0x9DE2A4: mov     ecx, [esp+10h+var_C]
0x9DE2A8: mov     large fs:0, ecx
0x9DE2AF: pop     ecx
0x9DE2B0: add     esp, 0Ch
0x9DE2B3: retn
