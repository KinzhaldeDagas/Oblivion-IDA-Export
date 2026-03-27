0x9E39C0: push    0FFFFFFFFh
0x9E39C2: push    offset SEH_9E39C0
0x9E39C7: mov     eax, large fs:0
0x9E39CD: push    eax
0x9E39CE: mov     eax, ___security_cookie
0x9E39D3: xor     eax, esp
0x9E39D5: push    eax
0x9E39D6: lea     eax, [esp+10h+var_C]
0x9E39DA: mov     large fs:0, eax
0x9E39E0: push    offset flt_B09E28
0x9E39E5: mov     ecx, offset INISettingCollection
0x9E39EA: mov     [esp+14h+var_4], 0
0x9E39F2: call    SettingCollectionList_AddSetting
0x9E39F7: push    offset sub_A1C0A0; void (__cdecl *)()
0x9E39FC: call    _atexit
0x9E3A01: add     esp, 4
0x9E3A04: mov     ecx, [esp+10h+var_C]
0x9E3A08: mov     large fs:0, ecx
0x9E3A0F: pop     ecx
0x9E3A10: add     esp, 0Ch
0x9E3A13: retn
