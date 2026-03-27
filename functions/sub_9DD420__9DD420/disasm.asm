0x9DD420: push    0FFFFFFFFh
0x9DD422: push    offset SEH_9DD420
0x9DD427: mov     eax, large fs:0
0x9DD42D: push    eax
0x9DD42E: mov     eax, ___security_cookie
0x9DD433: xor     eax, esp
0x9DD435: push    eax
0x9DD436: lea     eax, [esp+10h+var_C]
0x9DD43A: mov     large fs:0, eax
0x9DD440: push    offset byte_B06D1C
0x9DD445: mov     ecx, offset INISettingCollection
0x9DD44A: mov     [esp+14h+var_4], 0
0x9DD452: call    SettingCollectionList_AddSetting
0x9DD457: push    offset sub_A18FC0; void (__cdecl *)()
0x9DD45C: call    _atexit
0x9DD461: add     esp, 4
0x9DD464: mov     ecx, [esp+10h+var_C]
0x9DD468: mov     large fs:0, ecx
0x9DD46F: pop     ecx
0x9DD470: add     esp, 0Ch
0x9DD473: retn
