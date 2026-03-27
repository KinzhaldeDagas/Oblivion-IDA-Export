0x9FB460: push    0FFFFFFFFh
0x9FB462: push    offset SEH_9FB460
0x9FB467: mov     eax, large fs:0
0x9FB46D: push    eax
0x9FB46E: mov     eax, ___security_cookie
0x9FB473: xor     eax, esp
0x9FB475: push    eax
0x9FB476: lea     eax, [esp+10h+var_C]
0x9FB47A: mov     large fs:0, eax
0x9FB480: push    offset flt_B135B0
0x9FB485: mov     ecx, offset INISettingCollection
0x9FB48A: mov     [esp+14h+var_4], 0
0x9FB492: call    SettingCollectionList_AddSetting
0x9FB497: push    offset sub_A24670; void (__cdecl *)()
0x9FB49C: call    _atexit
0x9FB4A1: add     esp, 4
0x9FB4A4: mov     ecx, [esp+10h+var_C]
0x9FB4A8: mov     large fs:0, ecx
0x9FB4AF: pop     ecx
0x9FB4B0: add     esp, 0Ch
0x9FB4B3: retn
