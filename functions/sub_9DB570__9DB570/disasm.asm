0x9DB570: push    0FFFFFFFFh
0x9DB572: push    offset SEH_9DB570
0x9DB577: mov     eax, large fs:0
0x9DB57D: push    eax
0x9DB57E: mov     eax, ___security_cookie
0x9DB583: xor     eax, esp
0x9DB585: push    eax
0x9DB586: lea     eax, [esp+10h+var_C]
0x9DB58A: mov     large fs:0, eax
0x9DB590: push    offset unk_B05254
0x9DB595: mov     ecx, offset INISettingCollection
0x9DB59A: mov     [esp+14h+var_4], 0
0x9DB5A2: call    SettingCollectionList_AddSetting
0x9DB5A7: push    offset sub_A18010; void (__cdecl *)()
0x9DB5AC: call    _atexit
0x9DB5B1: add     esp, 4
0x9DB5B4: mov     ecx, [esp+10h+var_C]
0x9DB5B8: mov     large fs:0, ecx
0x9DB5BF: pop     ecx
0x9DB5C0: add     esp, 0Ch
0x9DB5C3: retn
