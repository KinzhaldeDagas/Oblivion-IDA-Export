0x9D88F0: push    0FFFFFFFFh
0x9D88F2: push    offset SEH_9D88F0
0x9D88F7: mov     eax, large fs:0
0x9D88FD: push    eax
0x9D88FE: mov     eax, ___security_cookie
0x9D8903: xor     eax, esp
0x9D8905: push    eax
0x9D8906: lea     eax, [esp+10h+var_C]
0x9D890A: mov     large fs:0, eax
0x9D8910: push    offset dword_B02D18
0x9D8915: mov     ecx, offset INISettingCollection
0x9D891A: mov     [esp+14h+var_4], 0
0x9D8922: call    SettingCollectionList_AddSetting
0x9D8927: push    offset sub_A16A30; void (__cdecl *)()
0x9D892C: call    _atexit
0x9D8931: add     esp, 4
0x9D8934: mov     ecx, [esp+10h+var_C]
0x9D8938: mov     large fs:0, ecx
0x9D893F: pop     ecx
0x9D8940: add     esp, 0Ch
0x9D8943: retn
