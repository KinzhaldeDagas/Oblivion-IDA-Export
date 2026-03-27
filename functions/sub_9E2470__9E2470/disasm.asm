0x9E2470: push    0FFFFFFFFh
0x9E2472: push    offset SEH_9E2470
0x9E2477: mov     eax, large fs:0
0x9E247D: push    eax
0x9E247E: mov     eax, ___security_cookie
0x9E2483: xor     eax, esp
0x9E2485: push    eax
0x9E2486: lea     eax, [esp+10h+var_C]
0x9E248A: mov     large fs:0, eax
0x9E2490: push    offset flt_B08168
0x9E2495: mov     ecx, offset INISettingCollection
0x9E249A: mov     [esp+14h+var_4], 0
0x9E24A2: call    SettingCollectionList_AddSetting
0x9E24A7: push    offset sub_A1B4E0; void (__cdecl *)()
0x9E24AC: call    _atexit
0x9E24B1: add     esp, 4
0x9E24B4: mov     ecx, [esp+10h+var_C]
0x9E24B8: mov     large fs:0, ecx
0x9E24BF: pop     ecx
0x9E24C0: add     esp, 0Ch
0x9E24C3: retn
