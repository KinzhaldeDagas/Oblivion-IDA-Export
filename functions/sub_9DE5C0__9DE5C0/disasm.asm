0x9DE5C0: push    0FFFFFFFFh
0x9DE5C2: push    offset SEH_9DE5C0
0x9DE5C7: mov     eax, large fs:0
0x9DE5CD: push    eax
0x9DE5CE: mov     eax, ___security_cookie
0x9DE5D3: xor     eax, esp
0x9DE5D5: push    eax
0x9DE5D6: lea     eax, [esp+10h+var_C]
0x9DE5DA: mov     large fs:0, eax
0x9DE5E0: push    offset flt_B06E94
0x9DE5E5: mov     ecx, offset INISettingCollection
0x9DE5EA: mov     [esp+14h+var_4], 0
0x9DE5F2: call    SettingCollectionList_AddSetting
0x9DE5F7: push    offset sub_A19890; void (__cdecl *)()
0x9DE5FC: call    _atexit
0x9DE601: add     esp, 4
0x9DE604: mov     ecx, [esp+10h+var_C]
0x9DE608: mov     large fs:0, ecx
0x9DE60F: pop     ecx
0x9DE610: add     esp, 0Ch
0x9DE613: retn
