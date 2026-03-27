0x9DDC60: push    0FFFFFFFFh
0x9DDC62: push    offset SEH_9DDC60
0x9DDC67: mov     eax, large fs:0
0x9DDC6D: push    eax
0x9DDC6E: mov     eax, ___security_cookie
0x9DDC73: xor     eax, esp
0x9DDC75: push    eax
0x9DDC76: lea     eax, [esp+10h+var_C]
0x9DDC7A: mov     large fs:0, eax
0x9DDC80: push    offset unk_B06DCC
0x9DDC85: mov     ecx, offset INISettingCollection
0x9DDC8A: mov     [esp+14h+var_4], 0
0x9DDC92: call    SettingCollectionList_AddSetting
0x9DDC97: push    offset sub_A193E0; void (__cdecl *)()
0x9DDC9C: call    _atexit
0x9DDCA1: add     esp, 4
0x9DDCA4: mov     ecx, [esp+10h+var_C]
0x9DDCA8: mov     large fs:0, ecx
0x9DDCAF: pop     ecx
0x9DDCB0: add     esp, 0Ch
0x9DDCB3: retn
