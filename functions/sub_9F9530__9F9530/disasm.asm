0x9F9530: push    0FFFFFFFFh
0x9F9532: push    offset SEH_9F9530
0x9F9537: mov     eax, large fs:0
0x9F953D: push    eax
0x9F953E: mov     eax, ___security_cookie
0x9F9543: xor     eax, esp
0x9F9545: push    eax
0x9F9546: lea     eax, [esp+10h+var_C]
0x9F954A: mov     large fs:0, eax
0x9F9550: push    offset bTreetops
0x9F9555: mov     ecx, offset INISettingCollection
0x9F955A: mov     [esp+14h+var_4], 0
0x9F9562: call    SettingCollectionList_AddSetting
0x9F9567: push    offset sub_A23820; void (__cdecl *)()
0x9F956C: call    _atexit
0x9F9571: add     esp, 4
0x9F9574: mov     ecx, [esp+10h+var_C]
0x9F9578: mov     large fs:0, ecx
0x9F957F: pop     ecx
0x9F9580: add     esp, 0Ch
0x9F9583: retn
