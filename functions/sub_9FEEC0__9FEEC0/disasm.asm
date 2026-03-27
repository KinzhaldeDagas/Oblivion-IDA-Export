0x9FEEC0: push    0FFFFFFFFh
0x9FEEC2: push    offset SEH_9FEEC0
0x9FEEC7: mov     eax, large fs:0
0x9FEECD: push    eax
0x9FEECE: mov     eax, ___security_cookie
0x9FEED3: xor     eax, esp
0x9FEED5: push    eax
0x9FEED6: lea     eax, [esp+10h+var_C]
0x9FEEDA: mov     large fs:0, eax
0x9FEEE0: push    offset flt_B16188
0x9FEEE5: mov     ecx, offset INISettingCollection
0x9FEEEA: mov     [esp+14h+var_4], 0
0x9FEEF2: call    SettingCollectionList_AddSetting
0x9FEEF7: push    offset sub_A26030; void (__cdecl *)()
0x9FEEFC: call    _atexit
0x9FEF01: add     esp, 4
0x9FEF04: mov     ecx, [esp+10h+var_C]
0x9FEF08: mov     large fs:0, ecx
0x9FEF0F: pop     ecx
0x9FEF10: add     esp, 0Ch
0x9FEF13: retn
