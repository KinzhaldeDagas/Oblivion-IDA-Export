0x9DE2C0: push    0FFFFFFFFh
0x9DE2C2: push    offset SEH_9DE2C0
0x9DE2C7: mov     eax, large fs:0
0x9DE2CD: push    eax
0x9DE2CE: mov     eax, ___security_cookie
0x9DE2D3: xor     eax, esp
0x9DE2D5: push    eax
0x9DE2D6: lea     eax, [esp+10h+var_C]
0x9DE2DA: mov     large fs:0, eax
0x9DE2E0: push    offset flt_B06E54
0x9DE2E5: mov     ecx, offset INISettingCollection
0x9DE2EA: mov     [esp+14h+var_4], 0
0x9DE2F2: call    SettingCollectionList_AddSetting
0x9DE2F7: push    offset sub_A19710; void (__cdecl *)()
0x9DE2FC: call    _atexit
0x9DE301: add     esp, 4
0x9DE304: mov     ecx, [esp+10h+var_C]
0x9DE308: mov     large fs:0, ecx
0x9DE30F: pop     ecx
0x9DE310: add     esp, 0Ch
0x9DE313: retn
