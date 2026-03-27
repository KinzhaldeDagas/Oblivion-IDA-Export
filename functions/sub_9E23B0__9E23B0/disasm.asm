0x9E23B0: push    0FFFFFFFFh
0x9E23B2: push    offset SEH_9E23B0
0x9E23B7: mov     eax, large fs:0
0x9E23BD: push    eax
0x9E23BE: mov     eax, ___security_cookie
0x9E23C3: xor     eax, esp
0x9E23C5: push    eax
0x9E23C6: lea     eax, [esp+10h+var_C]
0x9E23CA: mov     large fs:0, eax
0x9E23D0: push    offset dword_B08158
0x9E23D5: mov     ecx, offset INISettingCollection
0x9E23DA: mov     [esp+14h+var_4], 0
0x9E23E2: call    SettingCollectionList_AddSetting
0x9E23E7: push    offset sub_A1B480; void (__cdecl *)()
0x9E23EC: call    _atexit
0x9E23F1: add     esp, 4
0x9E23F4: mov     ecx, [esp+10h+var_C]
0x9E23F8: mov     large fs:0, ecx
0x9E23FF: pop     ecx
0x9E2400: add     esp, 0Ch
0x9E2403: retn
