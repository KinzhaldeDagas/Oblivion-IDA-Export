0x9D8830: push    0FFFFFFFFh
0x9D8832: push    offset SEH_9D8830
0x9D8837: mov     eax, large fs:0
0x9D883D: push    eax
0x9D883E: mov     eax, ___security_cookie
0x9D8843: xor     eax, esp
0x9D8845: push    eax
0x9D8846: lea     eax, [esp+10h+var_C]
0x9D884A: mov     large fs:0, eax
0x9D8850: push    offset dword_B02D08
0x9D8855: mov     ecx, offset INISettingCollection
0x9D885A: mov     [esp+14h+var_4], 0
0x9D8862: call    SettingCollectionList_AddSetting
0x9D8867: push    offset sub_A169D0; void (__cdecl *)()
0x9D886C: call    _atexit
0x9D8871: add     esp, 4
0x9D8874: mov     ecx, [esp+10h+var_C]
0x9D8878: mov     large fs:0, ecx
0x9D887F: pop     ecx
0x9D8880: add     esp, 0Ch
0x9D8883: retn
