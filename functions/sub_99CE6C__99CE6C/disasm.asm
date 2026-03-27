0x99CE6C: push    ebp
0x99CE6D: mov     ebp, esp
0x99CE6F: sub     esp, 10h
0x99CE72: push    [ebp+arg_0]; struct localeinfo_struct *
0x99CE75: lea     ecx, [ebp+var_10]; this
0x99CE78: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z; _LocaleUpdate::_LocaleUpdate(localeinfo_struct *)
0x99CE7D: push    [ebp+CodePage]; CodePage
0x99CE80: lea     eax, [ebp+var_10]
0x99CE83: push    [ebp+cchData]; cchData
0x99CE86: push    [ebp+lpLCData]; lpLCData
0x99CE89: push    [ebp+LCType]; LCType
0x99CE8C: push    [ebp+Locale]; Locale
0x99CE8F: push    eax; int
0x99CE90: call    unknown_libname_196
0x99CE95: add     esp, 18h
0x99CE98: cmp     [ebp+var_4], 0
0x99CE9C: jz      short locret_99CEA5
0x99CE9E: mov     ecx, [ebp+var_8]
0x99CEA1: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x99CEA5: leave
0x99CEA6: retn
