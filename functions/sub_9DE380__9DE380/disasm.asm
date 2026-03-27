0x9DE380: push    0FFFFFFFFh
0x9DE382: push    offset SEH_9DE380
0x9DE387: mov     eax, large fs:0
0x9DE38D: push    eax
0x9DE38E: mov     eax, ___security_cookie
0x9DE393: xor     eax, esp
0x9DE395: push    eax
0x9DE396: lea     eax, [esp+10h+var_C]
0x9DE39A: mov     large fs:0, eax
0x9DE3A0: push    offset flt_B06E64
0x9DE3A5: mov     ecx, offset INISettingCollection
0x9DE3AA: mov     [esp+14h+var_4], 0
0x9DE3B2: call    SettingCollectionList_AddSetting
0x9DE3B7: push    offset sub_A19770; void (__cdecl *)()
0x9DE3BC: call    _atexit
0x9DE3C1: add     esp, 4
0x9DE3C4: mov     ecx, [esp+10h+var_C]
0x9DE3C8: mov     large fs:0, ecx
0x9DE3CF: pop     ecx
0x9DE3D0: add     esp, 0Ch
0x9DE3D3: retn
