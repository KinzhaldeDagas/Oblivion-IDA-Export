0x9E59B0: push    0FFFFFFFFh
0x9E59B2: push    offset SEH_9E59B0
0x9E59B7: mov     eax, large fs:0
0x9E59BD: push    eax
0x9E59BE: mov     eax, ___security_cookie
0x9E59C3: xor     eax, esp
0x9E59C5: push    eax
0x9E59C6: lea     eax, [esp+10h+var_C]
0x9E59CA: mov     large fs:0, eax
0x9E59D0: push    offset flt_B11BE4
0x9E59D5: mov     ecx, offset BlendSettingCollection
0x9E59DA: mov     [esp+14h+var_4], 0
0x9E59E2: call    SettingCollectionList_AddSetting
0x9E59E7: push    offset sub_A1D120; void (__cdecl *)()
0x9E59EC: call    _atexit
0x9E59F1: add     esp, 4
0x9E59F4: mov     ecx, [esp+10h+var_C]
0x9E59F8: mov     large fs:0, ecx
0x9E59FF: pop     ecx
0x9E5A00: add     esp, 0Ch
0x9E5A03: retn
