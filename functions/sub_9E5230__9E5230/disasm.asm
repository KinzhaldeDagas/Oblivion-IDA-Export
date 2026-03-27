0x9E5230: push    0FFFFFFFFh
0x9E5232: push    offset SEH_9E5230
0x9E5237: mov     eax, large fs:0
0x9E523D: push    eax
0x9E523E: mov     eax, ___security_cookie
0x9E5243: xor     eax, esp
0x9E5245: push    eax
0x9E5246: lea     eax, [esp+10h+var_C]
0x9E524A: mov     large fs:0, eax
0x9E5250: push    offset off_B11B44; "1.0, 1.0"
0x9E5255: mov     ecx, offset BlendSettingCollection
0x9E525A: mov     [esp+14h+var_4], 0
0x9E5262: call    SettingCollectionList_AddSetting
0x9E5267: push    offset sub_A1CD60; void (__cdecl *)()
0x9E526C: call    _atexit
0x9E5271: add     esp, 4
0x9E5274: mov     ecx, [esp+10h+var_C]
0x9E5278: mov     large fs:0, ecx
0x9E527F: pop     ecx
0x9E5280: add     esp, 0Ch
0x9E5283: retn
