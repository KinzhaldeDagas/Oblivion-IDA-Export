0x9FC7C0: push    0FFFFFFFFh
0x9FC7C2: push    offset SEH_9FC7C0
0x9FC7C7: mov     eax, large fs:0
0x9FC7CD: push    eax
0x9FC7CE: mov     eax, ___security_cookie
0x9FC7D3: xor     eax, esp
0x9FC7D5: push    eax
0x9FC7D6: lea     eax, [esp+10h+var_C]
0x9FC7DA: mov     large fs:0, eax
0x9FC7E0: push    offset flt_B1480C
0x9FC7E5: mov     ecx, offset INISettingCollection
0x9FC7EA: mov     [esp+14h+var_4], 0
0x9FC7F2: call    SettingCollectionList_AddSetting
0x9FC7F7: push    offset sub_A24F00; void (__cdecl *)()
0x9FC7FC: call    _atexit
0x9FC801: add     esp, 4
0x9FC804: mov     ecx, [esp+10h+var_C]
0x9FC808: mov     large fs:0, ecx
0x9FC80F: pop     ecx
0x9FC810: add     esp, 0Ch
0x9FC813: retn
