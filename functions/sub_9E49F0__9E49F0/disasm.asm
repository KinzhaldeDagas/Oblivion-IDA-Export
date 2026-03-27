0x9E49F0: push    0FFFFFFFFh
0x9E49F2: push    offset SEH_9E49F0
0x9E49F7: mov     eax, large fs:0
0x9E49FD: push    eax
0x9E49FE: mov     eax, ___security_cookie
0x9E4A03: xor     eax, esp
0x9E4A05: push    eax
0x9E4A06: lea     eax, [esp+10h+var_C]
0x9E4A0A: mov     large fs:0, eax
0x9E4A10: push    offset off_B11A94; "1.0, 1.0"
0x9E4A15: mov     ecx, offset BlendSettingCollection
0x9E4A1A: mov     [esp+14h+var_4], 0
0x9E4A22: call    SettingCollectionList_AddSetting
0x9E4A27: push    offset sub_A1C940; void (__cdecl *)()
0x9E4A2C: call    _atexit
0x9E4A31: add     esp, 4
0x9E4A34: mov     ecx, [esp+10h+var_C]
0x9E4A38: mov     large fs:0, ecx
0x9E4A3F: pop     ecx
0x9E4A40: add     esp, 0Ch
0x9E4A43: retn
