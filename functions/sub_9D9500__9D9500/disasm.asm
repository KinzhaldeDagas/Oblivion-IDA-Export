0x9D9500: push    0FFFFFFFFh
0x9D9502: push    offset SEH_9D9500
0x9D9507: mov     eax, large fs:0
0x9D950D: push    eax
0x9D950E: mov     eax, ___security_cookie
0x9D9513: xor     eax, esp
0x9D9515: push    eax
0x9D9516: lea     eax, [esp+10h+var_C]
0x9D951A: mov     large fs:0, eax
0x9D9520: push    offset iDebugTextLeftRightOffset
0x9D9525: mov     ecx, offset INISettingCollection
0x9D952A: mov     [esp+14h+var_4], 0
0x9D9532: call    SettingCollectionList_AddSetting
0x9D9537: push    offset sub_A17030; void (__cdecl *)()
0x9D953C: call    _atexit
0x9D9541: add     esp, 4
0x9D9544: mov     ecx, [esp+10h+var_C]
0x9D9548: mov     large fs:0, ecx
0x9D954F: pop     ecx
0x9D9550: add     esp, 0Ch
0x9D9553: retn
