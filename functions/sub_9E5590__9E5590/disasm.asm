0x9E5590: push    0FFFFFFFFh
0x9E5592: push    offset SEH_9E5590
0x9E5597: mov     eax, large fs:0
0x9E559D: push    eax
0x9E559E: mov     eax, ___security_cookie
0x9E55A3: xor     eax, esp
0x9E55A5: push    eax
0x9E55A6: lea     eax, [esp+10h+var_C]
0x9E55AA: mov     large fs:0, eax
0x9E55B0: push    offset off_B11B8C; "1.0, 1.0"
0x9E55B5: mov     ecx, offset BlendSettingCollection
0x9E55BA: mov     [esp+14h+var_4], 0
0x9E55C2: call    SettingCollectionList_AddSetting
0x9E55C7: push    offset sub_A1CF10; void (__cdecl *)()
0x9E55CC: call    _atexit
0x9E55D1: add     esp, 4
0x9E55D4: mov     ecx, [esp+10h+var_C]
0x9E55D8: mov     large fs:0, ecx
0x9E55DF: pop     ecx
0x9E55E0: add     esp, 0Ch
0x9E55E3: retn
