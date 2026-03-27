0x9DD3C0: push    0FFFFFFFFh
0x9DD3C2: push    offset SEH_9DD3C0
0x9DD3C7: mov     eax, large fs:0
0x9DD3CD: push    eax
0x9DD3CE: mov     eax, ___security_cookie
0x9DD3D3: xor     eax, esp
0x9DD3D5: push    eax
0x9DD3D6: lea     eax, [esp+10h+var_C]
0x9DD3DA: mov     large fs:0, eax
0x9DD3E0: push    offset bAllowScreenShot
0x9DD3E5: mov     ecx, offset INISettingCollection
0x9DD3EA: mov     [esp+14h+var_4], 0
0x9DD3F2: call    SettingCollectionList_AddSetting
0x9DD3F7: push    offset sub_A18F90; void (__cdecl *)()
0x9DD3FC: call    _atexit
0x9DD401: add     esp, 4
0x9DD404: mov     ecx, [esp+10h+var_C]
0x9DD408: mov     large fs:0, ecx
0x9DD40F: pop     ecx
0x9DD410: add     esp, 0Ch
0x9DD413: retn
