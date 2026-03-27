0x9E4F90: push    0FFFFFFFFh
0x9E4F92: push    offset SEH_9E4F90
0x9E4F97: mov     eax, large fs:0
0x9E4F9D: push    eax
0x9E4F9E: mov     eax, ___security_cookie
0x9E4FA3: xor     eax, esp
0x9E4FA5: push    eax
0x9E4FA6: lea     eax, [esp+10h+var_C]
0x9E4FAA: mov     large fs:0, eax
0x9E4FB0: push    offset off_B11B0C; "1.0, 1.0"
0x9E4FB5: mov     ecx, offset BlendSettingCollection
0x9E4FBA: mov     [esp+14h+var_4], 0
0x9E4FC2: call    SettingCollectionList_AddSetting
0x9E4FC7: push    offset sub_A1CC10; void (__cdecl *)()
0x9E4FCC: call    _atexit
0x9E4FD1: add     esp, 4
0x9E4FD4: mov     ecx, [esp+10h+var_C]
0x9E4FD8: mov     large fs:0, ecx
0x9E4FDF: pop     ecx
0x9E4FE0: add     esp, 0Ch
0x9E4FE3: retn
