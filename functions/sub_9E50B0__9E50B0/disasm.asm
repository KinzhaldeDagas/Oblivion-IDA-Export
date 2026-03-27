0x9E50B0: push    0FFFFFFFFh
0x9E50B2: push    offset SEH_9E50B0
0x9E50B7: mov     eax, large fs:0
0x9E50BD: push    eax
0x9E50BE: mov     eax, ___security_cookie
0x9E50C3: xor     eax, esp
0x9E50C5: push    eax
0x9E50C6: lea     eax, [esp+10h+var_C]
0x9E50CA: mov     large fs:0, eax
0x9E50D0: push    offset off_B11B24; "1.0, 1.0"
0x9E50D5: mov     ecx, offset BlendSettingCollection
0x9E50DA: mov     [esp+14h+var_4], 0
0x9E50E2: call    SettingCollectionList_AddSetting
0x9E50E7: push    offset sub_A1CCA0; void (__cdecl *)()
0x9E50EC: call    _atexit
0x9E50F1: add     esp, 4
0x9E50F4: mov     ecx, [esp+10h+var_C]
0x9E50F8: mov     large fs:0, ecx
0x9E50FF: pop     ecx
0x9E5100: add     esp, 0Ch
0x9E5103: retn
