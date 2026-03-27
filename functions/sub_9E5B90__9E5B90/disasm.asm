0x9E5B90: push    0FFFFFFFFh
0x9E5B92: push    offset SEH_9E5B90
0x9E5B97: mov     eax, large fs:0
0x9E5B9D: push    eax
0x9E5B9E: mov     eax, ___security_cookie
0x9E5BA3: xor     eax, esp
0x9E5BA5: push    eax
0x9E5BA6: lea     eax, [esp+10h+var_C]
0x9E5BAA: mov     large fs:0, eax
0x9E5BB0: push    offset flt_B11C0C
0x9E5BB5: mov     ecx, offset BlendSettingCollection
0x9E5BBA: mov     [esp+14h+var_4], 0
0x9E5BC2: call    SettingCollectionList_AddSetting
0x9E5BC7: push    offset sub_A1D210; void (__cdecl *)()
0x9E5BCC: call    _atexit
0x9E5BD1: add     esp, 4
0x9E5BD4: mov     ecx, [esp+10h+var_C]
0x9E5BD8: mov     large fs:0, ecx
0x9E5BDF: pop     ecx
0x9E5BE0: add     esp, 0Ch
0x9E5BE3: retn
