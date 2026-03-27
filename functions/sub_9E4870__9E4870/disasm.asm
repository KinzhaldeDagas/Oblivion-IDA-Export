0x9E4870: push    0FFFFFFFFh
0x9E4872: push    offset SEH_9E4870
0x9E4877: mov     eax, large fs:0
0x9E487D: push    eax
0x9E487E: mov     eax, ___security_cookie
0x9E4883: xor     eax, esp
0x9E4885: push    eax
0x9E4886: lea     eax, [esp+10h+var_C]
0x9E488A: mov     large fs:0, eax
0x9E4890: push    offset off_B11A74; "1.0, 1.0"
0x9E4895: mov     ecx, offset BlendSettingCollection
0x9E489A: mov     [esp+14h+var_4], 0
0x9E48A2: call    SettingCollectionList_AddSetting
0x9E48A7: push    offset sub_A1C880; void (__cdecl *)()
0x9E48AC: call    _atexit
0x9E48B1: add     esp, 4
0x9E48B4: mov     ecx, [esp+10h+var_C]
0x9E48B8: mov     large fs:0, ecx
0x9E48BF: pop     ecx
0x9E48C0: add     esp, 0Ch
0x9E48C3: retn
