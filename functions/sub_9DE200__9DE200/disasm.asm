0x9DE200: push    0FFFFFFFFh
0x9DE202: push    offset SEH_9DE200
0x9DE207: mov     eax, large fs:0
0x9DE20D: push    eax
0x9DE20E: mov     eax, ___security_cookie
0x9DE213: xor     eax, esp
0x9DE215: push    eax
0x9DE216: lea     eax, [esp+10h+var_C]
0x9DE21A: mov     large fs:0, eax
0x9DE220: push    offset flt_B06E44
0x9DE225: mov     ecx, offset INISettingCollection
0x9DE22A: mov     [esp+14h+var_4], 0
0x9DE232: call    SettingCollectionList_AddSetting
0x9DE237: push    offset sub_A196B0; void (__cdecl *)()
0x9DE23C: call    _atexit
0x9DE241: add     esp, 4
0x9DE244: mov     ecx, [esp+10h+var_C]
0x9DE248: mov     large fs:0, ecx
0x9DE24F: pop     ecx
0x9DE250: add     esp, 0Ch
0x9DE253: retn
