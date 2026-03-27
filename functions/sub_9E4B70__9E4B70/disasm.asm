0x9E4B70: push    0FFFFFFFFh
0x9E4B72: push    offset SEH_9E4B70
0x9E4B77: mov     eax, large fs:0
0x9E4B7D: push    eax
0x9E4B7E: mov     eax, ___security_cookie
0x9E4B83: xor     eax, esp
0x9E4B85: push    eax
0x9E4B86: lea     eax, [esp+10h+var_C]
0x9E4B8A: mov     large fs:0, eax
0x9E4B90: push    offset off_B11AB4; "1.0, 1.0"
0x9E4B95: mov     ecx, offset BlendSettingCollection
0x9E4B9A: mov     [esp+14h+var_4], 0
0x9E4BA2: call    SettingCollectionList_AddSetting
0x9E4BA7: push    offset sub_A1CA00; void (__cdecl *)()
0x9E4BAC: call    _atexit
0x9E4BB1: add     esp, 4
0x9E4BB4: mov     ecx, [esp+10h+var_C]
0x9E4BB8: mov     large fs:0, ecx
0x9E4BBF: pop     ecx
0x9E4BC0: add     esp, 0Ch
0x9E4BC3: retn
