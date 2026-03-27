0x9E5770: push    0FFFFFFFFh
0x9E5772: push    offset SEH_9E5770
0x9E5777: mov     eax, large fs:0
0x9E577D: push    eax
0x9E577E: mov     eax, ___security_cookie
0x9E5783: xor     eax, esp
0x9E5785: push    eax
0x9E5786: lea     eax, [esp+10h+var_C]
0x9E578A: mov     large fs:0, eax
0x9E5790: push    offset off_B11BB4; "1.0, 1.0"
0x9E5795: mov     ecx, offset BlendSettingCollection
0x9E579A: mov     [esp+14h+var_4], 0
0x9E57A2: call    SettingCollectionList_AddSetting
0x9E57A7: push    offset sub_A1D000; void (__cdecl *)()
0x9E57AC: call    _atexit
0x9E57B1: add     esp, 4
0x9E57B4: mov     ecx, [esp+10h+var_C]
0x9E57B8: mov     large fs:0, ecx
0x9E57BF: pop     ecx
0x9E57C0: add     esp, 0Ch
0x9E57C3: retn
