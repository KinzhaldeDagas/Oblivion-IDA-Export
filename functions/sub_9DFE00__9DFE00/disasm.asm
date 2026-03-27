0x9DFE00: push    0FFFFFFFFh
0x9DFE02: push    offset SEH_9DFE00
0x9DFE07: mov     eax, large fs:0
0x9DFE0D: push    eax
0x9DFE0E: mov     eax, ___security_cookie
0x9DFE13: xor     eax, esp
0x9DFE15: push    eax
0x9DFE16: lea     eax, [esp+10h+var_C]
0x9DFE1A: mov     large fs:0, eax
0x9DFE20: push    offset unk_B070C8
0x9DFE25: mov     ecx, offset INISettingCollection
0x9DFE2A: mov     [esp+14h+var_4], 0
0x9DFE32: call    SettingCollectionList_AddSetting
0x9DFE37: push    offset sub_A1A510; void (__cdecl *)()
0x9DFE3C: call    _atexit
0x9DFE41: add     esp, 4
0x9DFE44: mov     ecx, [esp+10h+var_C]
0x9DFE48: mov     large fs:0, ecx
0x9DFE4F: pop     ecx
0x9DFE50: add     esp, 0Ch
0x9DFE53: retn
