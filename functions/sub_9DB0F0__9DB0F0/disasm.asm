0x9DB0F0: push    0FFFFFFFFh
0x9DB0F2: push    offset SEH_9DB0F0
0x9DB0F7: mov     eax, large fs:0
0x9DB0FD: push    eax
0x9DB0FE: mov     eax, ___security_cookie
0x9DB103: xor     eax, esp
0x9DB105: push    eax
0x9DB106: lea     eax, [esp+10h+var_C]
0x9DB10A: mov     large fs:0, eax
0x9DB110: push    offset unk_B051FC
0x9DB115: mov     ecx, offset INISettingCollection
0x9DB11A: mov     [esp+14h+var_4], 0
0x9DB122: call    SettingCollectionList_AddSetting
0x9DB127: push    offset sub_A17DE0; void (__cdecl *)()
0x9DB12C: call    _atexit
0x9DB131: add     esp, 4
0x9DB134: mov     ecx, [esp+10h+var_C]
0x9DB138: mov     large fs:0, ecx
0x9DB13F: pop     ecx
0x9DB140: add     esp, 0Ch
0x9DB143: retn
