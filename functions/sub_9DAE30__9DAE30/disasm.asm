0x9DAE30: push    0FFFFFFFFh
0x9DAE32: push    offset SEH_9DAE30
0x9DAE37: mov     eax, large fs:0
0x9DAE3D: push    eax
0x9DAE3E: mov     eax, ___security_cookie
0x9DAE43: xor     eax, esp
0x9DAE45: push    eax
0x9DAE46: lea     eax, [esp+10h+var_C]
0x9DAE4A: mov     large fs:0, eax
0x9DAE50: push    offset flt_B05150
0x9DAE55: mov     ecx, offset INISettingCollection
0x9DAE5A: mov     [esp+14h+var_4], 0
0x9DAE62: call    SettingCollectionList_AddSetting
0x9DAE67: push    offset sub_A17C90; void (__cdecl *)()
0x9DAE6C: call    _atexit
0x9DAE71: add     esp, 4
0x9DAE74: mov     ecx, [esp+10h+var_C]
0x9DAE78: mov     large fs:0, ecx
0x9DAE7F: pop     ecx
0x9DAE80: add     esp, 0Ch
0x9DAE83: retn
