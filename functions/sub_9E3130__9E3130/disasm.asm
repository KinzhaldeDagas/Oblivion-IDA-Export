0x9E3130: push    0FFFFFFFFh
0x9E3132: push    offset SEH_9E3130
0x9E3137: mov     eax, large fs:0
0x9E313D: push    eax
0x9E313E: mov     eax, ___security_cookie
0x9E3143: xor     eax, esp
0x9E3145: push    eax
0x9E3146: lea     eax, [esp+10h+var_C]
0x9E314A: mov     large fs:0, eax
0x9E3150: push    offset dword_B097D0
0x9E3155: mov     ecx, offset INISettingCollection
0x9E315A: mov     [esp+14h+var_4], 0
0x9E3162: call    SettingCollectionList_AddSetting
0x9E3167: push    offset sub_A1BB90; void (__cdecl *)()
0x9E316C: call    _atexit
0x9E3171: add     esp, 4
0x9E3174: mov     ecx, [esp+10h+var_C]
0x9E3178: mov     large fs:0, ecx
0x9E317F: pop     ecx
0x9E3180: add     esp, 0Ch
0x9E3183: retn
