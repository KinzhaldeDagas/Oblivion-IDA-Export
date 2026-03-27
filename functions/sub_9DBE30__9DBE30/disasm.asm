0x9DBE30: push    0FFFFFFFFh
0x9DBE32: push    offset SEH_9DBE30
0x9DBE37: mov     eax, large fs:0
0x9DBE3D: push    eax
0x9DBE3E: mov     eax, ___security_cookie
0x9DBE43: xor     eax, esp
0x9DBE45: push    eax
0x9DBE46: lea     eax, [esp+10h+var_C]
0x9DBE4A: mov     large fs:0, eax
0x9DBE50: push    offset dword_B05BC4
0x9DBE55: mov     ecx, offset INISettingCollection
0x9DBE5A: mov     [esp+14h+var_4], 0
0x9DBE62: call    SettingCollectionList_AddSetting
0x9DBE67: push    offset sub_A18470; void (__cdecl *)()
0x9DBE6C: call    _atexit
0x9DBE71: add     esp, 4
0x9DBE74: mov     ecx, [esp+10h+var_C]
0x9DBE78: mov     large fs:0, ecx
0x9DBE7F: pop     ecx
0x9DBE80: add     esp, 0Ch
0x9DBE83: retn
