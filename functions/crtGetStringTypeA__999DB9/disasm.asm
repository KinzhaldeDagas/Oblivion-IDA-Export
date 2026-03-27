0x999DB9: push    ebp
0x999DBA: mov     ebp, esp
0x999DBC: sub     esp, 10h
0x999DBF: push    [ebp+arg_0]; struct localeinfo_struct *
0x999DC2: lea     ecx, [ebp+var_10]; this
0x999DC5: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x999DCA: push    [ebp+arg_1C]; int
0x999DCD: lea     ecx, [ebp+var_10]
0x999DD0: push    [ebp+Locale]; Locale
0x999DD3: push    [ebp+CodePage]; CodePage
0x999DD6: push    [ebp+lpCharType]; lpCharType
0x999DD9: push    [ebp+cbMultiByte]; cbMultiByte
0x999DDC: push    [ebp+lpMultiByteStr]; lpMultiByteStr
0x999DDF: push    [ebp+dwInfoType]; dwInfoType
0x999DE2: call    ?__crtGetStringTypeA_stat@@YAHPAUlocaleinfo_struct@@KPBDHPAGHHH@Z
0x999DE7: add     esp, 1Ch
0x999DEA: cmp     [ebp+var_4], 0
0x999DEE: jz      short locret_999DF7
0x999DF0: mov     ecx, [ebp+var_8]
0x999DF3: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x999DF7: leave
0x999DF8: retn
