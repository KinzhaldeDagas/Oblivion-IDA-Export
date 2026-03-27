0x9FAEC0: push    0FFFFFFFFh
0x9FAEC2: push    offset SEH_9FAEC0
0x9FAEC7: mov     eax, large fs:0
0x9FAECD: push    eax
0x9FAECE: mov     eax, ___security_cookie
0x9FAED3: xor     eax, esp
0x9FAED5: push    eax
0x9FAED6: lea     eax, [esp+10h+var_C]
0x9FAEDA: mov     large fs:0, eax
0x9FAEE0: push    offset off_B12E3C; "Data\\Fonts\\Handwritten.fnt"
0x9FAEE5: mov     ecx, offset INISettingCollection
0x9FAEEA: mov     [esp+14h+var_4], 0
0x9FAEF2: call    SettingCollectionList_AddSetting
0x9FAEF7: push    offset sub_A243A0; void (__cdecl *)()
0x9FAEFC: call    _atexit
0x9FAF01: add     esp, 4
0x9FAF04: mov     ecx, [esp+10h+var_C]
0x9FAF08: mov     large fs:0, ecx
0x9FAF0F: pop     ecx
0x9FAF10: add     esp, 0Ch
0x9FAF13: retn
