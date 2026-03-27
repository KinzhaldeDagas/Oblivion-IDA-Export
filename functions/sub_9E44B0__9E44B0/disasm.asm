0x9E44B0: push    0FFFFFFFFh
0x9E44B2: push    offset SEH_9E44B0
0x9E44B7: mov     eax, large fs:0
0x9E44BD: push    eax
0x9E44BE: mov     eax, ___security_cookie
0x9E44C3: xor     eax, esp
0x9E44C5: push    eax
0x9E44C6: lea     eax, [esp+10h+var_C]
0x9E44CA: mov     large fs:0, eax
0x9E44D0: push    offset fGetUpTime
0x9E44D5: mov     ecx, offset BlendSettingCollection
0x9E44DA: mov     [esp+14h+var_4], 0
0x9E44E2: call    SettingCollectionList_AddSetting
0x9E44E7: push    offset sub_A1C6A0; void (__cdecl *)()
0x9E44EC: call    _atexit
0x9E44F1: add     esp, 4
0x9E44F4: mov     ecx, [esp+10h+var_C]
0x9E44F8: mov     large fs:0, ecx
0x9E44FF: pop     ecx
0x9E4500: add     esp, 0Ch
0x9E4503: retn
