0x9FC9A0: push    0FFFFFFFFh
0x9FC9A2: push    offset SEH_9FC9A0
0x9FC9A7: mov     eax, large fs:0
0x9FC9AD: push    eax
0x9FC9AE: mov     eax, ___security_cookie
0x9FC9B3: xor     eax, esp
0x9FC9B5: push    eax
0x9FC9B6: lea     eax, [esp+10h+var_C]
0x9FC9BA: mov     large fs:0, eax
0x9FC9C0: push    offset flt_B14834
0x9FC9C5: mov     ecx, offset INISettingCollection
0x9FC9CA: mov     [esp+14h+var_4], 0
0x9FC9D2: call    SettingCollectionList_AddSetting
0x9FC9D7: push    offset sub_A24FF0; void (__cdecl *)()
0x9FC9DC: call    _atexit
0x9FC9E1: add     esp, 4
0x9FC9E4: mov     ecx, [esp+10h+var_C]
0x9FC9E8: mov     large fs:0, ecx
0x9FC9EF: pop     ecx
0x9FC9F0: add     esp, 0Ch
0x9FC9F3: retn
