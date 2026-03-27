0x9E58F0: push    0FFFFFFFFh
0x9E58F2: push    offset SEH_9E58F0
0x9E58F7: mov     eax, large fs:0
0x9E58FD: push    eax
0x9E58FE: mov     eax, ___security_cookie
0x9E5903: xor     eax, esp
0x9E5905: push    eax
0x9E5906: lea     eax, [esp+10h+var_C]
0x9E590A: mov     large fs:0, eax
0x9E5910: push    offset off_B11BD4; "1.0, 1.0"
0x9E5915: mov     ecx, offset BlendSettingCollection
0x9E591A: mov     [esp+14h+var_4], 0
0x9E5922: call    SettingCollectionList_AddSetting
0x9E5927: push    offset sub_A1D0C0; void (__cdecl *)()
0x9E592C: call    _atexit
0x9E5931: add     esp, 4
0x9E5934: mov     ecx, [esp+10h+var_C]
0x9E5938: mov     large fs:0, ecx
0x9E593F: pop     ecx
0x9E5940: add     esp, 0Ch
0x9E5943: retn
