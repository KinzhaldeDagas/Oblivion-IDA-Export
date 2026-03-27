0x9E4FF0: push    0FFFFFFFFh
0x9E4FF2: push    offset SEH_9E4FF0
0x9E4FF7: mov     eax, large fs:0
0x9E4FFD: push    eax
0x9E4FFE: mov     eax, ___security_cookie
0x9E5003: xor     eax, esp
0x9E5005: push    eax
0x9E5006: lea     eax, [esp+10h+var_C]
0x9E500A: mov     large fs:0, eax
0x9E5010: push    offset off_B11B14; "1.0, 1.0"
0x9E5015: mov     ecx, offset BlendSettingCollection
0x9E501A: mov     [esp+14h+var_4], 0
0x9E5022: call    SettingCollectionList_AddSetting
0x9E5027: push    offset sub_A1CC40; void (__cdecl *)()
0x9E502C: call    _atexit
0x9E5031: add     esp, 4
0x9E5034: mov     ecx, [esp+10h+var_C]
0x9E5038: mov     large fs:0, ecx
0x9E503F: pop     ecx
0x9E5040: add     esp, 0Ch
0x9E5043: retn
