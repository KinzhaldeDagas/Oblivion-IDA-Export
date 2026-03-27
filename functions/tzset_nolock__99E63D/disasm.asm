0x99E63D: push    2Ch
0x99E63F: push    offset stru_B00190
0x99E644: call    __SEH_prolog4
0x99E649: xor     ebx, ebx
0x99E64B: mov     [ebp+var_38], ebx
0x99E64E: mov     [ebp+var_2C], ebx
0x99E651: mov     [ebp+var_1C], ebx
0x99E654: mov     [ebp+var_24], ebx
0x99E657: mov     [ebp+var_28], ebx
0x99E65A: mov     [ebp+var_20], ebx
0x99E65D: push    7
0x99E65F: call    __lock
0x99E664: pop     ecx
0x99E665: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x99E668: call    sub_99EE5D
0x99E66D: mov     [ebp+var_20], eax
0x99E670: lea     eax, [ebp+var_1C]
0x99E673: push    eax
0x99E674: call    sub_99EE17
0x99E679: pop     ecx
0x99E67A: cmp     eax, ebx
0x99E67C: jz      short loc_99E68B
0x99E67E: push    ebx
0x99E67F: push    ebx
0x99E680: push    ebx
0x99E681: push    ebx
0x99E682: push    ebx
0x99E683: call    __invoke_watson
0x99E688: add     esp, 14h
0x99E68B: lea     eax, [ebp+var_24]
0x99E68E: push    eax
0x99E68F: call    sub_99EDAF
0x99E694: pop     ecx
0x99E695: cmp     eax, ebx
0x99E697: jz      short loc_99E6A6
0x99E699: push    ebx
0x99E69A: push    ebx
0x99E69B: push    ebx
0x99E69C: push    ebx
0x99E69D: push    ebx
0x99E69E: call    __invoke_watson
0x99E6A3: add     esp, 14h
0x99E6A6: lea     eax, [ebp+var_28]
0x99E6A9: push    eax
0x99E6AA: call    sub_99EDE3
0x99E6AF: pop     ecx
0x99E6B0: cmp     eax, ebx
0x99E6B2: jz      short loc_99E6C1
0x99E6B4: push    ebx
0x99E6B5: push    ebx
0x99E6B6: push    ebx
0x99E6B7: push    ebx
0x99E6B8: push    ebx
0x99E6B9: call    __invoke_watson
0x99E6BE: add     esp, 14h
0x99E6C1: call    ____lc_codepage_func
0x99E6C6: mov     [ebp+CodePage], eax
0x99E6C9: mov     dword_BAA86C, ebx
0x99E6CF: or      edi, 0FFFFFFFFh
0x99E6D2: mov     dword_B31FDC, edi
0x99E6D8: mov     dword_B31FD0, edi
0x99E6DE: push    offset VarName
0x99E6E3: call    _getenv
0x99E6E8: pop     ecx
0x99E6E9: mov     esi, eax
0x99E6EB: mov     [ebp+var_3C], esi
0x99E6EE: cmp     esi, ebx
0x99E6F0: jz      short loc_99E76E
0x99E6F2: cmp     [esi], bl
0x99E6F4: jz      short loc_99E76E
0x99E6F6: mov     eax, dword_BAA870
0x99E6FB: cmp     eax, ebx
0x99E6FD: jz      short loc_99E720
0x99E6FF: push    eax; Str2
0x99E700: push    esi; Str1
0x99E701: call    _strcmp
0x99E706: pop     ecx
0x99E707: pop     ecx
0x99E708: test    eax, eax
0x99E70A: jz      loc_99E859
0x99E710: mov     eax, dword_BAA870
0x99E715: cmp     eax, ebx
0x99E717: jz      short loc_99E720
0x99E719: push    eax; Memory
0x99E71A: call    _free
0x99E71F: pop     ecx
0x99E720: push    esi; Str
0x99E721: call    _strlen
0x99E726: inc     eax
0x99E727: push    eax
0x99E728: call    unknown_libname_72
0x99E72D: pop     ecx
0x99E72E: pop     ecx
0x99E72F: mov     dword_BAA870, eax
0x99E734: cmp     eax, ebx
0x99E736: jz      loc_99E859
0x99E73C: push    esi; Src
0x99E73D: push    esi; Str
0x99E73E: call    _strlen
0x99E743: pop     ecx
0x99E744: inc     eax
0x99E745: push    eax; SizeInBytes
0x99E746: push    dword_BAA870; Dst
0x99E74C: call    _strcpy_s
0x99E751: add     esp, 0Ch
0x99E754: cmp     eax, ebx
0x99E756: jz      loc_99E860
0x99E75C: push    ebx
0x99E75D: push    ebx
0x99E75E: push    ebx
0x99E75F: push    ebx
0x99E760: push    ebx
0x99E761: call    __invoke_watson
0x99E766: add     esp, 14h
0x99E769: jmp     loc_99E860
0x99E76E: mov     eax, dword_BAA870
0x99E773: cmp     eax, ebx
0x99E775: jz      short loc_99E784
0x99E777: push    eax; Memory
0x99E778: call    _free
0x99E77D: pop     ecx
0x99E77E: mov     dword_BAA870, ebx
0x99E784: push    offset TimeZoneInformation; lpTimeZoneInformation
0x99E789: call    ds:GetTimeZoneInformation
0x99E78F: cmp     eax, edi
0x99E791: jz      loc_99E859
0x99E797: xor     ecx, ecx
0x99E799: inc     ecx
0x99E79A: mov     dword_BAA86C, ecx
0x99E7A0: mov     eax, TimeZoneInformation.Bias
0x99E7A5: imul    eax, 3Ch ; '<'
0x99E7A8: mov     [ebp+var_1C], eax
0x99E7AB: cmp     TimeZoneInformation.StandardDate.wMonth, bx
0x99E7B2: jz      short loc_99E7C2
0x99E7B4: mov     edx, TimeZoneInformation.StandardBias
0x99E7BA: imul    edx, 3Ch ; '<'
0x99E7BD: add     eax, edx
0x99E7BF: mov     [ebp+var_1C], eax
0x99E7C2: cmp     TimeZoneInformation.DaylightDate.wMonth, bx
0x99E7C9: jz      short loc_99E7E5
0x99E7CB: mov     eax, TimeZoneInformation.DaylightBias
0x99E7D0: cmp     eax, ebx
0x99E7D2: jz      short loc_99E7E5
0x99E7D4: mov     [ebp+var_24], ecx
0x99E7D7: sub     eax, TimeZoneInformation.StandardBias
0x99E7DD: imul    eax, 3Ch ; '<'
0x99E7E0: mov     [ebp+var_28], eax
0x99E7E3: jmp     short loc_99E7EB
0x99E7E5: mov     [ebp+var_24], ebx
0x99E7E8: mov     [ebp+var_28], ebx
0x99E7EB: lea     eax, [ebp+UsedDefaultChar]
0x99E7EE: push    eax; lpUsedDefaultChar
0x99E7EF: push    ebx; lpDefaultChar
0x99E7F0: push    3Fh ; '?'; cbMultiByte
0x99E7F2: mov     eax, [ebp+var_20]
0x99E7F5: push    dword ptr [eax]; lpMultiByteStr
0x99E7F7: push    edi; cchWideChar
0x99E7F8: push    offset TimeZoneInformation.StandardName; lpWideCharStr
0x99E7FD: push    ebx; dwFlags
0x99E7FE: push    [ebp+CodePage]; CodePage
0x99E801: mov     edi, ds:WideCharToMultiByte
0x99E807: call    edi ; WideCharToMultiByte
0x99E809: test    eax, eax
0x99E80B: jz      short loc_99E81C
0x99E80D: cmp     [ebp+UsedDefaultChar], ebx
0x99E810: jnz     short loc_99E81C
0x99E812: mov     eax, [ebp+var_20]
0x99E815: mov     eax, [eax]
0x99E817: mov     [eax+3Fh], bl
0x99E81A: jmp     short loc_99E823
0x99E81C: mov     eax, [ebp+var_20]
0x99E81F: mov     eax, [eax]
0x99E821: mov     [eax], bl
0x99E823: lea     eax, [ebp+UsedDefaultChar]
0x99E826: push    eax; lpUsedDefaultChar
0x99E827: push    ebx; lpDefaultChar
0x99E828: push    3Fh ; '?'; cbMultiByte
0x99E82A: mov     eax, [ebp+var_20]
0x99E82D: push    dword ptr [eax+4]; lpMultiByteStr
0x99E830: push    0FFFFFFFFh; cchWideChar
0x99E832: push    offset TimeZoneInformation.DaylightName; lpWideCharStr
0x99E837: push    ebx; dwFlags
0x99E838: push    [ebp+CodePage]; CodePage
0x99E83B: call    edi ; WideCharToMultiByte
0x99E83D: test    eax, eax
0x99E83F: jz      short loc_99E851
0x99E841: cmp     [ebp+UsedDefaultChar], ebx
0x99E844: jnz     short loc_99E851
0x99E846: mov     eax, [ebp+var_20]
0x99E849: mov     eax, [eax+4]
0x99E84C: mov     [eax+3Fh], bl
0x99E84F: jmp     short loc_99E859
0x99E851: mov     eax, [ebp+var_20]
0x99E854: mov     eax, [eax+4]
0x99E857: mov     [eax], bl
0x99E859: mov     [ebp+var_2C], 1
0x99E860: mov     edi, [ebp+var_1C]
0x99E863: call    sub_99EE57
0x99E868: mov     [eax], edi
0x99E86A: mov     edi, [ebp+var_24]
0x99E86D: call    sub_99EE4B
0x99E872: mov     [eax], edi
0x99E874: mov     edi, [ebp+var_28]
0x99E877: call    sub_99EE51
0x99E87C: mov     [eax], edi
0x99E87E: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x99E885: call    __tzset_nolock___$LN38_1
