0x9D9310: push    0FFFFFFFFh
0x9D9312: push    offset SEH_9D9310
0x9D9317: mov     eax, large fs:0
0x9D931D: push    eax
0x9D931E: mov     eax, ___security_cookie
0x9D9323: xor     eax, esp
0x9D9325: push    eax
0x9D9326: lea     eax, [esp+10h+var_C]
0x9D932A: mov     large fs:0, eax
0x9D9330: push    offset off_B02DF0; "Insert the Oblivion Disc."
0x9D9335: mov     ecx, offset INISettingCollection
0x9D933A: mov     [esp+14h+var_4], 0
0x9D9342: call    SettingCollectionList_AddSetting
0x9D9347: push    offset sub_A16F40; void (__cdecl *)()
0x9D934C: call    _atexit
0x9D9351: add     esp, 4
0x9D9354: mov     ecx, [esp+10h+var_C]
0x9D9358: mov     large fs:0, ecx
0x9D935F: pop     ecx
0x9D9360: add     esp, 0Ch
0x9D9363: retn
