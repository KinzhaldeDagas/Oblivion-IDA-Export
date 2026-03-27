0x9DE7A0: push    0FFFFFFFFh
0x9DE7A2: push    offset SEH_9DE7A0
0x9DE7A7: mov     eax, large fs:0
0x9DE7AD: push    eax
0x9DE7AE: mov     eax, ___security_cookie
0x9DE7B3: xor     eax, esp
0x9DE7B5: push    eax
0x9DE7B6: lea     eax, [esp+10h+var_C]
0x9DE7BA: mov     large fs:0, eax
0x9DE7C0: push    offset flt_B06EBC
0x9DE7C5: mov     ecx, offset INISettingCollection
0x9DE7CA: mov     [esp+14h+var_4], 0
0x9DE7D2: call    SettingCollectionList_AddSetting
0x9DE7D7: push    offset sub_A19980; void (__cdecl *)()
0x9DE7DC: call    _atexit
0x9DE7E1: add     esp, 4
0x9DE7E4: mov     ecx, [esp+10h+var_C]
0x9DE7E8: mov     large fs:0, ecx
0x9DE7EF: pop     ecx
0x9DE7F0: add     esp, 0Ch
0x9DE7F3: retn
