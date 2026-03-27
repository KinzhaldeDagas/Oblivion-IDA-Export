0x9FBAD0: push    0FFFFFFFFh
0x9FBAD2: push    offset SEH_9FBAD0
0x9FBAD7: mov     eax, large fs:0
0x9FBADD: push    eax
0x9FBADE: mov     eax, ___security_cookie
0x9FBAE3: xor     eax, esp
0x9FBAE5: push    eax
0x9FBAE6: lea     eax, [esp+10h+var_C]
0x9FBAEA: mov     large fs:0, eax
0x9FBAF0: push    offset dword_B1398C
0x9FBAF5: mov     ecx, offset INISettingCollection
0x9FBAFA: mov     [esp+14h+var_4], 0
0x9FBB02: call    SettingCollectionList_AddSetting
0x9FBB07: push    offset sub_A24980; void (__cdecl *)()
0x9FBB0C: call    _atexit
0x9FBB11: add     esp, 4
0x9FBB14: mov     ecx, [esp+10h+var_C]
0x9FBB18: mov     large fs:0, ecx
0x9FBB1F: pop     ecx
0x9FBB20: add     esp, 0Ch
0x9FBB23: retn
