0x99CFE4: push    ebp
0x99CFE5: mov     ebp, esp
0x99CFE7: sub     esp, 10h
0x99CFEA: push    [ebp+arg_0]; struct localeinfo_struct *
0x99CFED: lea     ecx, [ebp+var_10]; this
0x99CFF0: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z; _LocaleUpdate::_LocaleUpdate(localeinfo_struct *)
0x99CFF5: push    [ebp+CodePage]; CodePage
0x99CFF8: lea     eax, [ebp+var_10]
0x99CFFB: push    [ebp+cbMultiByte]; cbMultiByte
0x99CFFE: push    [ebp+lpMultiByteStr]; lpMultiByteStr
0x99D001: push    [ebp+LCType]; LCType
0x99D004: push    [ebp+Locale]; Locale
0x99D007: push    eax; int
0x99D008: call    unknown_libname_198
0x99D00D: add     esp, 18h
0x99D010: cmp     [ebp+var_4], 0
0x99D014: jz      short locret_99D01D
0x99D016: mov     ecx, [ebp+var_8]
0x99D019: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x99D01D: leave
0x99D01E: retn
