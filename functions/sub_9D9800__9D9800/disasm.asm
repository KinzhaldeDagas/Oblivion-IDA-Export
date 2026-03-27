0x9D9800: push    0FFFFFFFFh
0x9D9802: push    offset SEH_9D9800
0x9D9807: mov     eax, large fs:0
0x9D980D: push    eax
0x9D980E: mov     eax, ___security_cookie
0x9D9813: xor     eax, esp
0x9D9815: push    eax
0x9D9816: lea     eax, [esp+10h+var_C]
0x9D981A: mov     large fs:0, eax
0x9D9820: push    offset dword_B030BC
0x9D9825: mov     ecx, offset INISettingCollection
0x9D982A: mov     [esp+14h+var_4], 0
0x9D9832: call    SettingCollectionList_AddSetting
0x9D9837: push    offset sub_A171B0; void (__cdecl *)()
0x9D983C: call    _atexit
0x9D9841: add     esp, 4
0x9D9844: mov     ecx, [esp+10h+var_C]
0x9D9848: mov     large fs:0, ecx
0x9D984F: pop     ecx
0x9D9850: add     esp, 0Ch
0x9D9853: retn
