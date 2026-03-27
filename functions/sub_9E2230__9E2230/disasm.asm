0x9E2230: push    0FFFFFFFFh
0x9E2232: push    offset SEH_9E2230
0x9E2237: mov     eax, large fs:0
0x9E223D: push    eax
0x9E223E: mov     eax, ___security_cookie
0x9E2243: xor     eax, esp
0x9E2245: push    eax
0x9E2246: lea     eax, [esp+10h+var_C]
0x9E224A: mov     large fs:0, eax
0x9E2250: push    offset byte_B08138
0x9E2255: mov     ecx, offset INISettingCollection
0x9E225A: mov     [esp+14h+var_4], 0
0x9E2262: call    SettingCollectionList_AddSetting
0x9E2267: push    offset sub_A1B3C0; void (__cdecl *)()
0x9E226C: call    _atexit
0x9E2271: add     esp, 4
0x9E2274: mov     ecx, [esp+10h+var_C]
0x9E2278: mov     large fs:0, ecx
0x9E227F: pop     ecx
0x9E2280: add     esp, 0Ch
0x9E2283: retn
