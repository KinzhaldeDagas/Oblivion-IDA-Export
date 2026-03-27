0x9DD120: push    0FFFFFFFFh
0x9DD122: push    offset SEH_9DD120
0x9DD127: mov     eax, large fs:0
0x9DD12D: push    eax
0x9DD12E: mov     eax, ___security_cookie
0x9DD133: xor     eax, esp
0x9DD135: push    eax
0x9DD136: lea     eax, [esp+10h+var_C]
0x9DD13A: mov     large fs:0, eax
0x9DD140: push    offset byte_B06CDC
0x9DD145: mov     ecx, offset INISettingCollection
0x9DD14A: mov     [esp+14h+var_4], 0
0x9DD152: call    SettingCollectionList_AddSetting
0x9DD157: push    offset sub_A18E40; void (__cdecl *)()
0x9DD15C: call    _atexit
0x9DD161: add     esp, 4
0x9DD164: mov     ecx, [esp+10h+var_C]
0x9DD168: mov     large fs:0, ecx
0x9DD16F: pop     ecx
0x9DD170: add     esp, 0Ch
0x9DD173: retn
