0x9D9B20: push    0FFFFFFFFh
0x9D9B22: push    offset SEH_9D9B20
0x9D9B27: mov     eax, large fs:0
0x9D9B2D: push    eax
0x9D9B2E: mov     eax, ___security_cookie
0x9D9B33: xor     eax, esp
0x9D9B35: push    eax
0x9D9B36: lea     eax, [esp+10h+var_C]
0x9D9B3A: mov     large fs:0, eax
0x9D9B40: push    offset dword_B0314C
0x9D9B45: mov     ecx, offset INISettingCollection
0x9D9B4A: mov     [esp+14h+var_4], 0
0x9D9B52: call    SettingCollectionList_AddSetting
0x9D9B57: push    offset sub_A17330; void (__cdecl *)()
0x9D9B5C: call    _atexit
0x9D9B61: add     esp, 4
0x9D9B64: mov     ecx, [esp+10h+var_C]
0x9D9B68: mov     large fs:0, ecx
0x9D9B6F: pop     ecx
0x9D9B70: add     esp, 0Ch
0x9D9B73: retn
