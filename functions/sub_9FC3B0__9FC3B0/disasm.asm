0x9FC3B0: push    0FFFFFFFFh
0x9FC3B2: push    offset SEH_9FC3B0
0x9FC3B7: mov     eax, large fs:0
0x9FC3BD: push    eax
0x9FC3BE: mov     eax, ___security_cookie
0x9FC3C3: xor     eax, esp
0x9FC3C5: push    eax
0x9FC3C6: lea     eax, [esp+10h+var_C]
0x9FC3CA: mov     large fs:0, eax
0x9FC3D0: push    offset dword_B14160
0x9FC3D5: mov     ecx, offset INISettingCollection
0x9FC3DA: mov     [esp+14h+var_4], 0
0x9FC3E2: call    SettingCollectionList_AddSetting
0x9FC3E7: push    offset sub_A24CB0; void (__cdecl *)()
0x9FC3EC: call    _atexit
0x9FC3F1: add     esp, 4
0x9FC3F4: mov     ecx, [esp+10h+var_C]
0x9FC3F8: mov     large fs:0, ecx
0x9FC3FF: pop     ecx
0x9FC400: add     esp, 0Ch
0x9FC403: retn
