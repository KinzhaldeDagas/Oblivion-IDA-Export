0x9DB4B0: push    0FFFFFFFFh
0x9DB4B2: push    offset SEH_9DB4B0
0x9DB4B7: mov     eax, large fs:0
0x9DB4BD: push    eax
0x9DB4BE: mov     eax, ___security_cookie
0x9DB4C3: xor     eax, esp
0x9DB4C5: push    eax
0x9DB4C6: lea     eax, [esp+10h+var_C]
0x9DB4CA: mov     large fs:0, eax
0x9DB4D0: push    offset byte_B05244
0x9DB4D5: mov     ecx, offset INISettingCollection
0x9DB4DA: mov     [esp+14h+var_4], 0
0x9DB4E2: call    SettingCollectionList_AddSetting
0x9DB4E7: push    offset sub_A17FB0; void (__cdecl *)()
0x9DB4EC: call    _atexit
0x9DB4F1: add     esp, 4
0x9DB4F4: mov     ecx, [esp+10h+var_C]
0x9DB4F8: mov     large fs:0, ecx
0x9DB4FF: pop     ecx
0x9DB500: add     esp, 0Ch
0x9DB503: retn
