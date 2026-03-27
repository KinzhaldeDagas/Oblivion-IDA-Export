0x9FE300: push    0FFFFFFFFh
0x9FE302: push    offset SEH_9FE300
0x9FE307: mov     eax, large fs:0
0x9FE30D: push    eax
0x9FE30E: mov     eax, ___security_cookie
0x9FE313: xor     eax, esp
0x9FE315: push    eax
0x9FE316: lea     eax, [esp+10h+var_C]
0x9FE31A: mov     large fs:0, eax
0x9FE320: push    offset byte_B14F38
0x9FE325: mov     ecx, offset INISettingCollection
0x9FE32A: mov     [esp+14h+var_4], 0
0x9FE332: call    SettingCollectionList_AddSetting
0x9FE337: push    offset sub_A25C80; void (__cdecl *)()
0x9FE33C: call    _atexit
0x9FE341: add     esp, 4
0x9FE344: mov     ecx, [esp+10h+var_C]
0x9FE348: mov     large fs:0, ecx
0x9FE34F: pop     ecx
0x9FE350: add     esp, 0Ch
0x9FE353: retn
