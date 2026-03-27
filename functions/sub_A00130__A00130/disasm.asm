0xA00130: push    0FFFFFFFFh
0xA00132: push    offset SEH_A00130
0xA00137: mov     eax, large fs:0
0xA0013D: push    eax
0xA0013E: mov     eax, ___security_cookie
0xA00143: xor     eax, esp
0xA00145: push    eax
0xA00146: lea     eax, [esp+10h+var_C]
0xA0014A: mov     large fs:0, eax
0xA00150: push    offset flt_B23C58
0xA00155: mov     ecx, offset INISettingCollection
0xA0015A: mov     [esp+14h+var_4], 0
0xA00162: call    SettingCollectionList_AddSetting
0xA00167: push    offset sub_A26770; void (__cdecl *)()
0xA0016C: call    _atexit
0xA00171: add     esp, 4
0xA00174: mov     ecx, [esp+10h+var_C]
0xA00178: mov     large fs:0, ecx
0xA0017F: pop     ecx
0xA00180: add     esp, 0Ch
0xA00183: retn
