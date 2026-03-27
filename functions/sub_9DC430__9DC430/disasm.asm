0x9DC430: push    0FFFFFFFFh
0x9DC432: push    offset SEH_9DC430
0x9DC437: mov     eax, large fs:0
0x9DC43D: push    eax
0x9DC43E: mov     eax, ___security_cookie
0x9DC443: xor     eax, esp
0x9DC445: push    eax
0x9DC446: lea     eax, [esp+10h+var_C]
0x9DC44A: mov     large fs:0, eax
0x9DC450: push    offset unk_B068D8
0x9DC455: mov     ecx, offset INISettingCollection
0x9DC45A: mov     [esp+14h+var_4], 0
0x9DC462: call    SettingCollectionList_AddSetting
0x9DC467: push    offset sub_A18740; void (__cdecl *)()
0x9DC46C: call    _atexit
0x9DC471: add     esp, 4
0x9DC474: mov     ecx, [esp+10h+var_C]
0x9DC478: mov     large fs:0, ecx
0x9DC47F: pop     ecx
0x9DC480: add     esp, 0Ch
0x9DC483: retn
