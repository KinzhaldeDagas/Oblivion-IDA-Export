0x9E4BD0: push    0FFFFFFFFh
0x9E4BD2: push    offset SEH_9E4BD0
0x9E4BD7: mov     eax, large fs:0
0x9E4BDD: push    eax
0x9E4BDE: mov     eax, ___security_cookie
0x9E4BE3: xor     eax, esp
0x9E4BE5: push    eax
0x9E4BE6: lea     eax, [esp+10h+var_C]
0x9E4BEA: mov     large fs:0, eax
0x9E4BF0: push    offset off_B11ABC; "0.4, 0.6"
0x9E4BF5: mov     ecx, offset BlendSettingCollection
0x9E4BFA: mov     [esp+14h+var_4], 0
0x9E4C02: call    SettingCollectionList_AddSetting
0x9E4C07: push    offset sub_A1CA30; void (__cdecl *)()
0x9E4C0C: call    _atexit
0x9E4C11: add     esp, 4
0x9E4C14: mov     ecx, [esp+10h+var_C]
0x9E4C18: mov     large fs:0, ecx
0x9E4C1F: pop     ecx
0x9E4C20: add     esp, 0Ch
0x9E4C23: retn
