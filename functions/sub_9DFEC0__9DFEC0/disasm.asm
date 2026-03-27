0x9DFEC0: push    0FFFFFFFFh
0x9DFEC2: push    offset SEH_9DFEC0
0x9DFEC7: mov     eax, large fs:0
0x9DFECD: push    eax
0x9DFECE: mov     eax, ___security_cookie
0x9DFED3: xor     eax, esp
0x9DFED5: push    eax
0x9DFED6: lea     eax, [esp+10h+var_C]
0x9DFEDA: mov     large fs:0, eax
0x9DFEE0: push    offset flt_B070D8
0x9DFEE5: mov     ecx, offset INISettingCollection
0x9DFEEA: mov     [esp+14h+var_4], 0
0x9DFEF2: call    SettingCollectionList_AddSetting
0x9DFEF7: push    offset sub_A1A570; void (__cdecl *)()
0x9DFEFC: call    _atexit
0x9DFF01: add     esp, 4
0x9DFF04: mov     ecx, [esp+10h+var_C]
0x9DFF08: mov     large fs:0, ecx
0x9DFF0F: pop     ecx
0x9DFF10: add     esp, 0Ch
0x9DFF13: retn
