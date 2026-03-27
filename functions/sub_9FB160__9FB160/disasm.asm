0x9FB160: push    0FFFFFFFFh
0x9FB162: push    offset SEH_9FB160
0x9FB167: mov     eax, large fs:0
0x9FB16D: push    eax
0x9FB16E: mov     eax, ___security_cookie
0x9FB173: xor     eax, esp
0x9FB175: push    eax
0x9FB176: lea     eax, [esp+10h+var_C]
0x9FB17A: mov     large fs:0, eax
0x9FB180: push    offset byte_B13230
0x9FB185: mov     ecx, offset INISettingCollection
0x9FB18A: mov     [esp+14h+var_4], 0
0x9FB192: call    SettingCollectionList_AddSetting
0x9FB197: push    offset sub_A244F0; void (__cdecl *)()
0x9FB19C: call    _atexit
0x9FB1A1: add     esp, 4
0x9FB1A4: mov     ecx, [esp+10h+var_C]
0x9FB1A8: mov     large fs:0, ecx
0x9FB1AF: pop     ecx
0x9FB1B0: add     esp, 0Ch
0x9FB1B3: retn
