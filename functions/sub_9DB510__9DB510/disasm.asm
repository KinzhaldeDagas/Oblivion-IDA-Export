0x9DB510: push    0FFFFFFFFh
0x9DB512: push    offset SEH_9DB510
0x9DB517: mov     eax, large fs:0
0x9DB51D: push    eax
0x9DB51E: mov     eax, ___security_cookie
0x9DB523: xor     eax, esp
0x9DB525: push    eax
0x9DB526: lea     eax, [esp+10h+var_C]
0x9DB52A: mov     large fs:0, eax
0x9DB530: push    offset unk_B0524C
0x9DB535: mov     ecx, offset INISettingCollection
0x9DB53A: mov     [esp+14h+var_4], 0
0x9DB542: call    SettingCollectionList_AddSetting
0x9DB547: push    offset sub_A17FE0; void (__cdecl *)()
0x9DB54C: call    _atexit
0x9DB551: add     esp, 4
0x9DB554: mov     ecx, [esp+10h+var_C]
0x9DB558: mov     large fs:0, ecx
0x9DB55F: pop     ecx
0x9DB560: add     esp, 0Ch
0x9DB563: retn
