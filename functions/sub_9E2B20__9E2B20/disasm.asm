0x9E2B20: push    0FFFFFFFFh
0x9E2B22: push    offset SEH_9E2B20
0x9E2B27: mov     eax, large fs:0
0x9E2B2D: push    eax
0x9E2B2E: mov     eax, ___security_cookie
0x9E2B33: xor     eax, esp
0x9E2B35: push    eax
0x9E2B36: lea     eax, [esp+10h+var_C]
0x9E2B3A: mov     large fs:0, eax
0x9E2B40: push    offset unk_B08B4C
0x9E2B45: mov     ecx, offset INISettingCollection
0x9E2B4A: mov     [esp+14h+var_4], 0
0x9E2B52: call    SettingCollectionList_AddSetting
0x9E2B57: push    offset sub_A1B870; void (__cdecl *)()
0x9E2B5C: call    _atexit
0x9E2B61: add     esp, 4
0x9E2B64: mov     ecx, [esp+10h+var_C]
0x9E2B68: mov     large fs:0, ecx
0x9E2B6F: pop     ecx
0x9E2B70: add     esp, 0Ch
0x9E2B73: retn
