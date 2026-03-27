0x9E4DB0: push    0FFFFFFFFh
0x9E4DB2: push    offset SEH_9E4DB0
0x9E4DB7: mov     eax, large fs:0
0x9E4DBD: push    eax
0x9E4DBE: mov     eax, ___security_cookie
0x9E4DC3: xor     eax, esp
0x9E4DC5: push    eax
0x9E4DC6: lea     eax, [esp+10h+var_C]
0x9E4DCA: mov     large fs:0, eax
0x9E4DD0: push    offset off_B11AE4; "1.0, 1.0"
0x9E4DD5: mov     ecx, offset BlendSettingCollection
0x9E4DDA: mov     [esp+14h+var_4], 0
0x9E4DE2: call    SettingCollectionList_AddSetting
0x9E4DE7: push    offset sub_A1CB20; void (__cdecl *)()
0x9E4DEC: call    _atexit
0x9E4DF1: add     esp, 4
0x9E4DF4: mov     ecx, [esp+10h+var_C]
0x9E4DF8: mov     large fs:0, ecx
0x9E4DFF: pop     ecx
0x9E4E00: add     esp, 0Ch
0x9E4E03: retn
