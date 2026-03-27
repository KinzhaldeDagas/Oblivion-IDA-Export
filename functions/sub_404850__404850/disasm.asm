0x404850: push    0FFFFFFFFh
0x404852: push    offset SEH_404850
0x404857: mov     eax, large fs:0
0x40485D: push    eax
0x40485E: push    ecx
0x40485F: push    esi
0x404860: mov     eax, ___security_cookie
0x404865: xor     eax, esp
0x404867: push    eax
0x404868: lea     eax, [esp+18h+var_C]
0x40486C: mov     large fs:0, eax
0x404872: mov     esi, ecx
0x404874: mov     [esp+18h+var_10], esi
0x404878: mov     eax, [esp+18h+arg_0]
0x40487C: fld     [esp+18h+arg_4]
0x404880: fstp    dword ptr [esi]
0x404882: mov     [esi+4], eax
0x404885: push    esi
0x404886: mov     ecx, offset INISettingCollection
0x40488B: mov     [esp+1Ch+var_4], 0
0x404893: call    SettingCollectionList_AddSetting
0x404898: mov     eax, esi
0x40489A: mov     ecx, [esp+18h+var_C]
0x40489E: mov     large fs:0, ecx
0x4048A5: pop     ecx
0x4048A6: pop     esi
0x4048A7: add     esp, 10h
0x4048AA: retn    8
