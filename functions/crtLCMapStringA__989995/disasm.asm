0x989995: push    ebp
0x989996: mov     ebp, esp
0x989998: sub     esp, 10h
0x98999B: push    [ebp+arg_0]; struct localeinfo_struct *
0x98999E: lea     ecx, [ebp+var_10]; this
0x9899A1: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9899A6: push    [ebp+arg_20]
0x9899A9: lea     ecx, [ebp+var_10]
0x9899AC: push    [ebp+arg_1C]; int
0x9899AF: push    [ebp+arg_18]; int
0x9899B2: push    [ebp+arg_14]; int
0x9899B5: push    [ebp+cchSrc]; cchSrc
0x9899B8: push    [ebp+arg_C]; int
0x9899BB: push    [ebp+dwMapFlags]; dwMapFlags
0x9899BE: push    [ebp+Locale]; Locale
0x9899C1: call    unknown_libname_67
0x9899C6: add     esp, 20h
0x9899C9: cmp     [ebp+var_4], 0
0x9899CD: jz      short locret_9899D6
0x9899CF: mov     ecx, [ebp+var_8]
0x9899D2: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9899D6: leave
0x9899D7: retn
