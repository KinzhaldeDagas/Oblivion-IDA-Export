0x9E0210: push    0FFFFFFFFh
0x9E0212: push    offset SEH_9E0210
0x9E0217: mov     eax, large fs:0
0x9E021D: push    eax
0x9E021E: mov     eax, ___security_cookie
0x9E0223: xor     eax, esp
0x9E0225: push    eax
0x9E0226: lea     eax, [esp+10h+var_C]
0x9E022A: mov     large fs:0, eax
0x9E0230: push    offset unk_B075F4
0x9E0235: mov     ecx, offset INISettingCollection
0x9E023A: mov     [esp+14h+var_4], 0
0x9E0242: call    SettingCollectionList_AddSetting
0x9E0247: push    offset sub_A1A760; void (__cdecl *)()
0x9E024C: call    _atexit
0x9E0251: add     esp, 4
0x9E0254: mov     ecx, [esp+10h+var_C]
0x9E0258: mov     large fs:0, ecx
0x9E025F: pop     ecx
0x9E0260: add     esp, 0Ch
0x9E0263: retn
