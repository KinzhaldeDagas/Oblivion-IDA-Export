0x9DDC00: push    0FFFFFFFFh
0x9DDC02: push    offset SEH_9DDC00
0x9DDC07: mov     eax, large fs:0
0x9DDC0D: push    eax
0x9DDC0E: mov     eax, ___security_cookie
0x9DDC13: xor     eax, esp
0x9DDC15: push    eax
0x9DDC16: lea     eax, [esp+10h+var_C]
0x9DDC1A: mov     large fs:0, eax
0x9DDC20: push    offset byte_B06DC4
0x9DDC25: mov     ecx, offset INISettingCollection
0x9DDC2A: mov     [esp+14h+var_4], 0
0x9DDC32: call    SettingCollectionList_AddSetting
0x9DDC37: push    offset sub_A193B0; void (__cdecl *)()
0x9DDC3C: call    _atexit
0x9DDC41: add     esp, 4
0x9DDC44: mov     ecx, [esp+10h+var_C]
0x9DDC48: mov     large fs:0, ecx
0x9DDC4F: pop     ecx
0x9DDC50: add     esp, 0Ch
0x9DDC53: retn
