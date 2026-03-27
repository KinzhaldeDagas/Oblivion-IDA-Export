0x9E52F0: push    0FFFFFFFFh
0x9E52F2: push    offset SEH_9E52F0
0x9E52F7: mov     eax, large fs:0
0x9E52FD: push    eax
0x9E52FE: mov     eax, ___security_cookie
0x9E5303: xor     eax, esp
0x9E5305: push    eax
0x9E5306: lea     eax, [esp+10h+var_C]
0x9E530A: mov     large fs:0, eax
0x9E5310: push    offset off_B11B54; "1.0, 1.0"
0x9E5315: mov     ecx, offset BlendSettingCollection
0x9E531A: mov     [esp+14h+var_4], 0
0x9E5322: call    SettingCollectionList_AddSetting
0x9E5327: push    offset sub_A1CDC0; void (__cdecl *)()
0x9E532C: call    _atexit
0x9E5331: add     esp, 4
0x9E5334: mov     ecx, [esp+10h+var_C]
0x9E5338: mov     large fs:0, ecx
0x9E533F: pop     ecx
0x9E5340: add     esp, 0Ch
0x9E5343: retn
