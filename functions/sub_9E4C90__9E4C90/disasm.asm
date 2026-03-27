0x9E4C90: push    0FFFFFFFFh
0x9E4C92: push    offset SEH_9E4C90
0x9E4C97: mov     eax, large fs:0
0x9E4C9D: push    eax
0x9E4C9E: mov     eax, ___security_cookie
0x9E4CA3: xor     eax, esp
0x9E4CA5: push    eax
0x9E4CA6: lea     eax, [esp+10h+var_C]
0x9E4CAA: mov     large fs:0, eax
0x9E4CB0: push    offset off_B11ACC; "Bip01 Head"
0x9E4CB5: mov     ecx, offset BlendSettingCollection
0x9E4CBA: mov     [esp+14h+var_4], 0
0x9E4CC2: call    SettingCollectionList_AddSetting
0x9E4CC7: push    offset sub_A1CA90; void (__cdecl *)()
0x9E4CCC: call    _atexit
0x9E4CD1: add     esp, 4
0x9E4CD4: mov     ecx, [esp+10h+var_C]
0x9E4CD8: mov     large fs:0, ecx
0x9E4CDF: pop     ecx
0x9E4CE0: add     esp, 0Ch
0x9E4CE3: retn
