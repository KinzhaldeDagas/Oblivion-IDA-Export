0x9E53B0: push    0FFFFFFFFh
0x9E53B2: push    offset SEH_9E53B0
0x9E53B7: mov     eax, large fs:0
0x9E53BD: push    eax
0x9E53BE: mov     eax, ___security_cookie
0x9E53C3: xor     eax, esp
0x9E53C5: push    eax
0x9E53C6: lea     eax, [esp+10h+var_C]
0x9E53CA: mov     large fs:0, eax
0x9E53D0: push    offset off_B11B64; "1.0, 1.0"
0x9E53D5: mov     ecx, offset BlendSettingCollection
0x9E53DA: mov     [esp+14h+var_4], 0
0x9E53E2: call    SettingCollectionList_AddSetting
0x9E53E7: push    offset sub_A1CE20; void (__cdecl *)()
0x9E53EC: call    _atexit
0x9E53F1: add     esp, 4
0x9E53F4: mov     ecx, [esp+10h+var_C]
0x9E53F8: mov     large fs:0, ecx
0x9E53FF: pop     ecx
0x9E5400: add     esp, 0Ch
0x9E5403: retn
