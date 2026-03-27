0x9E5290: push    0FFFFFFFFh
0x9E5292: push    offset SEH_9E5290
0x9E5297: mov     eax, large fs:0
0x9E529D: push    eax
0x9E529E: mov     eax, ___security_cookie
0x9E52A3: xor     eax, esp
0x9E52A5: push    eax
0x9E52A6: lea     eax, [esp+10h+var_C]
0x9E52AA: mov     large fs:0, eax
0x9E52B0: push    offset off_B11B4C; "1.0, 1.0"
0x9E52B5: mov     ecx, offset BlendSettingCollection
0x9E52BA: mov     [esp+14h+var_4], 0
0x9E52C2: call    SettingCollectionList_AddSetting
0x9E52C7: push    offset sub_A1CD90; void (__cdecl *)()
0x9E52CC: call    _atexit
0x9E52D1: add     esp, 4
0x9E52D4: mov     ecx, [esp+10h+var_C]
0x9E52D8: mov     large fs:0, ecx
0x9E52DF: pop     ecx
0x9E52E0: add     esp, 0Ch
0x9E52E3: retn
