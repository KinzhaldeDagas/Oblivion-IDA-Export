0x9F88B0: push    0FFFFFFFFh
0x9F88B2: push    offset SEH_9F88B0
0x9F88B7: mov     eax, large fs:0
0x9F88BD: push    eax
0x9F88BE: mov     eax, ___security_cookie
0x9F88C3: xor     eax, esp
0x9F88C5: push    eax
0x9F88C6: lea     eax, [esp+10h+var_C]
0x9F88CA: mov     large fs:0, eax
0x9F88D0: push    offset bFaceMipmaps
0x9F88D5: mov     ecx, offset INISettingCollection
0x9F88DA: mov     [esp+14h+var_4], 0
0x9F88E2: call    SettingCollectionList_AddSetting
0x9F88E7: push    offset sub_A232A0; void (__cdecl *)()
0x9F88EC: call    _atexit
0x9F88F1: add     esp, 4
0x9F88F4: mov     ecx, [esp+10h+var_C]
0x9F88F8: mov     large fs:0, ecx
0x9F88FF: pop     ecx
0x9F8900: add     esp, 0Ch
0x9F8903: retn
