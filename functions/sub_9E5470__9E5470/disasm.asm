0x9E5470: push    0FFFFFFFFh
0x9E5472: push    offset SEH_9E5470
0x9E5477: mov     eax, large fs:0
0x9E547D: push    eax
0x9E547E: mov     eax, ___security_cookie
0x9E5483: xor     eax, esp
0x9E5485: push    eax
0x9E5486: lea     eax, [esp+10h+var_C]
0x9E548A: mov     large fs:0, eax
0x9E5490: push    offset off_B11B74; "1.0, 1.0"
0x9E5495: mov     ecx, offset BlendSettingCollection
0x9E549A: mov     [esp+14h+var_4], 0
0x9E54A2: call    SettingCollectionList_AddSetting
0x9E54A7: push    offset sub_A1CE80; void (__cdecl *)()
0x9E54AC: call    _atexit
0x9E54B1: add     esp, 4
0x9E54B4: mov     ecx, [esp+10h+var_C]
0x9E54B8: mov     large fs:0, ecx
0x9E54BF: pop     ecx
0x9E54C0: add     esp, 0Ch
0x9E54C3: retn
