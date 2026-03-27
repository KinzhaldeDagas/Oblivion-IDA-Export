0x9DD9C0: push    0FFFFFFFFh
0x9DD9C2: push    offset SEH_9DD9C0
0x9DD9C7: mov     eax, large fs:0
0x9DD9CD: push    eax
0x9DD9CE: mov     eax, ___security_cookie
0x9DD9D3: xor     eax, esp
0x9DD9D5: push    eax
0x9DD9D6: lea     eax, [esp+10h+var_C]
0x9DD9DA: mov     large fs:0, eax
0x9DD9E0: push    offset flt_B06D94
0x9DD9E5: mov     ecx, offset INISettingCollection
0x9DD9EA: mov     [esp+14h+var_4], 0
0x9DD9F2: call    SettingCollectionList_AddSetting
0x9DD9F7: push    offset sub_A19290; void (__cdecl *)()
0x9DD9FC: call    _atexit
0x9DDA01: add     esp, 4
0x9DDA04: mov     ecx, [esp+10h+var_C]
0x9DDA08: mov     large fs:0, ecx
0x9DDA0F: pop     ecx
0x9DDA10: add     esp, 0Ch
0x9DDA13: retn
