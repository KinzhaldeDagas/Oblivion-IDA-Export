0x9E5FF0: push    0FFFFFFFFh
0x9E5FF2: push    offset SEH_9E5FF0
0x9E5FF7: mov     eax, large fs:0
0x9E5FFD: push    eax
0x9E5FFE: mov     eax, ___security_cookie
0x9E6003: xor     eax, esp
0x9E6005: push    eax
0x9E6006: lea     eax, [esp+10h+var_C]
0x9E600A: mov     large fs:0, eax
0x9E6010: push    offset byte_B11DE4
0x9E6015: mov     ecx, offset INISettingCollection
0x9E601A: mov     [esp+14h+var_4], 0
0x9E6022: call    SettingCollectionList_AddSetting
0x9E6027: push    offset sub_A1D3B0; void (__cdecl *)()
0x9E602C: call    _atexit
0x9E6031: add     esp, 4
0x9E6034: mov     ecx, [esp+10h+var_C]
0x9E6038: mov     large fs:0, ecx
0x9E603F: pop     ecx
0x9E6040: add     esp, 0Ch
0x9E6043: retn
