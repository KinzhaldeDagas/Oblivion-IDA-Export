0x9E5830: push    0FFFFFFFFh
0x9E5832: push    offset SEH_9E5830
0x9E5837: mov     eax, large fs:0
0x9E583D: push    eax
0x9E583E: mov     eax, ___security_cookie
0x9E5843: xor     eax, esp
0x9E5845: push    eax
0x9E5846: lea     eax, [esp+10h+var_C]
0x9E584A: mov     large fs:0, eax
0x9E5850: push    offset off_B11BC4; "1.0, 1.0"
0x9E5855: mov     ecx, offset BlendSettingCollection
0x9E585A: mov     [esp+14h+var_4], 0
0x9E5862: call    SettingCollectionList_AddSetting
0x9E5867: push    offset sub_A1D060; void (__cdecl *)()
0x9E586C: call    _atexit
0x9E5871: add     esp, 4
0x9E5874: mov     ecx, [esp+10h+var_C]
0x9E5878: mov     large fs:0, ecx
0x9E587F: pop     ecx
0x9E5880: add     esp, 0Ch
0x9E5883: retn
