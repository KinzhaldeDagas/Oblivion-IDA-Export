0x9FB1C0: push    0FFFFFFFFh
0x9FB1C2: push    offset SEH_9FB1C0
0x9FB1C7: mov     eax, large fs:0
0x9FB1CD: push    eax
0x9FB1CE: mov     eax, ___security_cookie
0x9FB1D3: xor     eax, esp
0x9FB1D5: push    eax
0x9FB1D6: lea     eax, [esp+10h+var_C]
0x9FB1DA: mov     large fs:0, eax
0x9FB1E0: push    offset byte_B13238
0x9FB1E5: mov     ecx, offset INISettingCollection
0x9FB1EA: mov     [esp+14h+var_4], 0
0x9FB1F2: call    SettingCollectionList_AddSetting
0x9FB1F7: push    offset sub_A24520; void (__cdecl *)()
0x9FB1FC: call    _atexit
0x9FB201: add     esp, 4
0x9FB204: mov     ecx, [esp+10h+var_C]
0x9FB208: mov     large fs:0, ecx
0x9FB20F: pop     ecx
0x9FB210: add     esp, 0Ch
0x9FB213: retn
