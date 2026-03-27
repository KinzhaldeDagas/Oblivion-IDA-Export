0x9DFB60: push    0FFFFFFFFh
0x9DFB62: push    offset SEH_9DFB60
0x9DFB67: mov     eax, large fs:0
0x9DFB6D: push    eax
0x9DFB6E: mov     eax, ___security_cookie
0x9DFB73: xor     eax, esp
0x9DFB75: push    eax
0x9DFB76: lea     eax, [esp+10h+var_C]
0x9DFB7A: mov     large fs:0, eax
0x9DFB80: push    offset byte_B07090
0x9DFB85: mov     ecx, offset INISettingCollection
0x9DFB8A: mov     [esp+14h+var_4], 0
0x9DFB92: call    SettingCollectionList_AddSetting
0x9DFB97: push    offset sub_A1A3C0; void (__cdecl *)()
0x9DFB9C: call    _atexit
0x9DFBA1: add     esp, 4
0x9DFBA4: mov     ecx, [esp+10h+var_C]
0x9DFBA8: mov     large fs:0, ecx
0x9DFBAF: pop     ecx
0x9DFBB0: add     esp, 0Ch
0x9DFBB3: retn
