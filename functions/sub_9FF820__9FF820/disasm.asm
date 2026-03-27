0x9FF820: push    0FFFFFFFFh
0x9FF822: push    offset SEH_9FF820
0x9FF827: mov     eax, large fs:0
0x9FF82D: push    eax
0x9FF82E: mov     eax, ___security_cookie
0x9FF833: xor     eax, esp
0x9FF835: push    eax
0x9FF836: lea     eax, [esp+10h+var_C]
0x9FF83A: mov     large fs:0, eax
0x9FF840: push    offset dword_B162AC
0x9FF845: mov     ecx, offset INISettingCollection
0x9FF84A: mov     [esp+14h+var_4], 0
0x9FF852: call    SettingCollectionList_AddSetting
0x9FF857: push    offset sub_A264F0; void (__cdecl *)()
0x9FF85C: call    _atexit
0x9FF861: add     esp, 4
0x9FF864: mov     ecx, [esp+10h+var_C]
0x9FF868: mov     large fs:0, ecx
0x9FF86F: pop     ecx
0x9FF870: add     esp, 0Ch
0x9FF873: retn
