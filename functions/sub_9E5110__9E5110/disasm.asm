0x9E5110: push    0FFFFFFFFh
0x9E5112: push    offset SEH_9E5110
0x9E5117: mov     eax, large fs:0
0x9E511D: push    eax
0x9E511E: mov     eax, ___security_cookie
0x9E5123: xor     eax, esp
0x9E5125: push    eax
0x9E5126: lea     eax, [esp+10h+var_C]
0x9E512A: mov     large fs:0, eax
0x9E5130: push    offset off_B11B2C; "0.3, 0.9"
0x9E5135: mov     ecx, offset BlendSettingCollection
0x9E513A: mov     [esp+14h+var_4], 0
0x9E5142: call    SettingCollectionList_AddSetting
0x9E5147: push    offset sub_A1CCD0; void (__cdecl *)()
0x9E514C: call    _atexit
0x9E5151: add     esp, 4
0x9E5154: mov     ecx, [esp+10h+var_C]
0x9E5158: mov     large fs:0, ecx
0x9E515F: pop     ecx
0x9E5160: add     esp, 0Ch
0x9E5163: retn
