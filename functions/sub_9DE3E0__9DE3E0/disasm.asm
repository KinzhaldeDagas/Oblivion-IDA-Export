0x9DE3E0: push    0FFFFFFFFh
0x9DE3E2: push    offset SEH_9DE3E0
0x9DE3E7: mov     eax, large fs:0
0x9DE3ED: push    eax
0x9DE3EE: mov     eax, ___security_cookie
0x9DE3F3: xor     eax, esp
0x9DE3F5: push    eax
0x9DE3F6: lea     eax, [esp+10h+var_C]
0x9DE3FA: mov     large fs:0, eax
0x9DE400: push    offset dword_B06E6C
0x9DE405: mov     ecx, offset INISettingCollection
0x9DE40A: mov     [esp+14h+var_4], 0
0x9DE412: call    SettingCollectionList_AddSetting
0x9DE417: push    offset sub_A197A0; void (__cdecl *)()
0x9DE41C: call    _atexit
0x9DE421: add     esp, 4
0x9DE424: mov     ecx, [esp+10h+var_C]
0x9DE428: mov     large fs:0, ecx
0x9DE42F: pop     ecx
0x9DE430: add     esp, 0Ch
0x9DE433: retn
