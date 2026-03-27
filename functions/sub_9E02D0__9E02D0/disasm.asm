0x9E02D0: push    0FFFFFFFFh
0x9E02D2: push    offset SEH_9E02D0
0x9E02D7: mov     eax, large fs:0
0x9E02DD: push    eax
0x9E02DE: mov     eax, ___security_cookie
0x9E02E3: xor     eax, esp
0x9E02E5: push    eax
0x9E02E6: lea     eax, [esp+10h+var_C]
0x9E02EA: mov     large fs:0, eax
0x9E02F0: push    offset unk_B07604
0x9E02F5: mov     ecx, offset INISettingCollection
0x9E02FA: mov     [esp+14h+var_4], 0
0x9E0302: call    SettingCollectionList_AddSetting
0x9E0307: push    offset sub_A1A7C0; void (__cdecl *)()
0x9E030C: call    _atexit
0x9E0311: add     esp, 4
0x9E0314: mov     ecx, [esp+10h+var_C]
0x9E0318: mov     large fs:0, ecx
0x9E031F: pop     ecx
0x9E0320: add     esp, 0Ch
0x9E0323: retn
