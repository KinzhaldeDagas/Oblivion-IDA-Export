0x9E55F0: push    0FFFFFFFFh
0x9E55F2: push    offset SEH_9E55F0
0x9E55F7: mov     eax, large fs:0
0x9E55FD: push    eax
0x9E55FE: mov     eax, ___security_cookie
0x9E5603: xor     eax, esp
0x9E5605: push    eax
0x9E5606: lea     eax, [esp+10h+var_C]
0x9E560A: mov     large fs:0, eax
0x9E5610: push    offset off_B11B94; "1.0f, 1.0"
0x9E5615: mov     ecx, offset BlendSettingCollection
0x9E561A: mov     [esp+14h+var_4], 0
0x9E5622: call    SettingCollectionList_AddSetting
0x9E5627: push    offset sub_A1CF40; void (__cdecl *)()
0x9E562C: call    _atexit
0x9E5631: add     esp, 4
0x9E5634: mov     ecx, [esp+10h+var_C]
0x9E5638: mov     large fs:0, ecx
0x9E563F: pop     ecx
0x9E5640: add     esp, 0Ch
0x9E5643: retn
