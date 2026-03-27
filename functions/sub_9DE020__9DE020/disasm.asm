0x9DE020: push    0FFFFFFFFh
0x9DE022: push    offset SEH_9DE020
0x9DE027: mov     eax, large fs:0
0x9DE02D: push    eax
0x9DE02E: mov     eax, ___security_cookie
0x9DE033: xor     eax, esp
0x9DE035: push    eax
0x9DE036: lea     eax, [esp+10h+var_C]
0x9DE03A: mov     large fs:0, eax
0x9DE040: push    offset flt_B06E1C
0x9DE045: mov     ecx, offset INISettingCollection
0x9DE04A: mov     [esp+14h+var_4], 0
0x9DE052: call    SettingCollectionList_AddSetting
0x9DE057: push    offset sub_A195C0; void (__cdecl *)()
0x9DE05C: call    _atexit
0x9DE061: add     esp, 4
0x9DE064: mov     ecx, [esp+10h+var_C]
0x9DE068: mov     large fs:0, ecx
0x9DE06F: pop     ecx
0x9DE070: add     esp, 0Ch
0x9DE073: retn
