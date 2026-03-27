0x9E0390: push    0FFFFFFFFh
0x9E0392: push    offset SEH_9E0390
0x9E0397: mov     eax, large fs:0
0x9E039D: push    eax
0x9E039E: mov     eax, ___security_cookie
0x9E03A3: xor     eax, esp
0x9E03A5: push    eax
0x9E03A6: lea     eax, [esp+10h+var_C]
0x9E03AA: mov     large fs:0, eax
0x9E03B0: push    offset unk_B07614
0x9E03B5: mov     ecx, offset INISettingCollection
0x9E03BA: mov     [esp+14h+var_4], 0
0x9E03C2: call    SettingCollectionList_AddSetting
0x9E03C7: push    offset sub_A1A820; void (__cdecl *)()
0x9E03CC: call    _atexit
0x9E03D1: add     esp, 4
0x9E03D4: mov     ecx, [esp+10h+var_C]
0x9E03D8: mov     large fs:0, ecx
0x9E03DF: pop     ecx
0x9E03E0: add     esp, 0Ch
0x9E03E3: retn
