0x9D96E0: push    0FFFFFFFFh
0x9D96E2: push    offset SEH_9D96E0
0x9D96E7: mov     eax, large fs:0
0x9D96ED: push    eax
0x9D96EE: mov     eax, ___security_cookie
0x9D96F3: xor     eax, esp
0x9D96F5: push    eax
0x9D96F6: lea     eax, [esp+10h+var_C]
0x9D96FA: mov     large fs:0, eax
0x9D9700: push    offset off_B030A4; "OblivionIntro.bik"
0x9D9705: mov     ecx, offset INISettingCollection
0x9D970A: mov     [esp+14h+var_4], 0
0x9D9712: call    SettingCollectionList_AddSetting
0x9D9717: push    offset sub_A17120; void (__cdecl *)()
0x9D971C: call    _atexit
0x9D9721: add     esp, 4
0x9D9724: mov     ecx, [esp+10h+var_C]
0x9D9728: mov     large fs:0, ecx
0x9D972F: pop     ecx
0x9D9730: add     esp, 0Ch
0x9D9733: retn
