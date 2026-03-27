0x99D07D: push    ebp
0x99D07E: mov     ebp, esp
0x99D080: sub     esp, 10h
0x99D083: push    ebx
0x99D084: push    esi
0x99D085: mov     esi, [ebp+MbCh]
0x99D088: xor     ebx, ebx
0x99D08A: cmp     esi, ebx
0x99D08C: push    edi
0x99D08D: mov     edi, [ebp+SizeInBytes]
0x99D090: jnz     short loc_99D0A3
0x99D092: cmp     edi, ebx
0x99D094: jbe     short loc_99D0A3
0x99D096: mov     eax, [ebp+SizeConverted]
0x99D099: cmp     eax, ebx
0x99D09B: jz      short loc_99D09F
0x99D09D: mov     [eax], ebx
0x99D09F: xor     eax, eax
0x99D0A1: jmp     short loc_99D122
0x99D0A3: mov     eax, [ebp+SizeConverted]
0x99D0A6: cmp     eax, ebx
0x99D0A8: jz      short loc_99D0AD
0x99D0AA: or      dword ptr [eax], 0FFFFFFFFh
0x99D0AD: cmp     edi, 7FFFFFFFh
0x99D0B3: jbe     short loc_99D0D0
0x99D0B5: call    __errno
0x99D0BA: push    16h
0x99D0BC: pop     esi
0x99D0BD: push    ebx
0x99D0BE: push    ebx
0x99D0BF: push    ebx
0x99D0C0: push    ebx
0x99D0C1: push    ebx
0x99D0C2: mov     [eax], esi
0x99D0C4: call    __invalid_parameter
0x99D0C9: add     esp, 14h
0x99D0CC: mov     eax, esi
0x99D0CE: jmp     short loc_99D122
0x99D0D0: push    [ebp+Locale]; struct localeinfo_struct *
0x99D0D3: lea     ecx, [ebp+var_10]; this
0x99D0D6: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x99D0DB: mov     eax, [ebp+var_10]
0x99D0DE: cmp     [eax+14h], ebx
0x99D0E1: jnz     loc_99D17B
0x99D0E7: mov     ax, [ebp+WCh]
0x99D0EB: cmp     ax, 0FFh
0x99D0EF: jbe     short loc_99D127
0x99D0F1: cmp     esi, ebx
0x99D0F3: jz      short loc_99D104
0x99D0F5: cmp     edi, ebx
0x99D0F7: jbe     short loc_99D104
0x99D0F9: push    edi
0x99D0FA: push    ebx
0x99D0FB: push    esi
0x99D0FC: call    __memset
0x99D101: add     esp, 0Ch
0x99D104: call    __errno
0x99D109: mov     dword ptr [eax], 2Ah ; '*'
0x99D10F: call    __errno
0x99D114: cmp     [ebp+var_4], bl
0x99D117: mov     eax, [eax]
0x99D119: jz      short loc_99D122
0x99D11B: mov     ecx, [ebp+var_8]
0x99D11E: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x99D122: pop     edi
0x99D123: pop     esi
0x99D124: pop     ebx
0x99D125: leave
0x99D126: retn
0x99D127: cmp     esi, ebx
0x99D129: jz      short loc_99D159
0x99D12B: cmp     edi, ebx
0x99D12D: ja      short loc_99D157
0x99D12F: call    __errno
0x99D134: push    22h ; '"'
0x99D136: pop     esi
0x99D137: push    ebx
0x99D138: push    ebx
0x99D139: push    ebx
0x99D13A: push    ebx
0x99D13B: push    ebx
0x99D13C: mov     [eax], esi
0x99D13E: call    __invalid_parameter
0x99D143: add     esp, 14h
0x99D146: cmp     [ebp+var_4], bl
0x99D149: jz      short loc_99D0CC
0x99D14B: mov     eax, [ebp+var_8]
0x99D14E: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99D152: jmp     loc_99D0CC
0x99D157: mov     [esi], al
0x99D159: mov     eax, [ebp+SizeConverted]
0x99D15C: cmp     eax, ebx
0x99D15E: jz      short loc_99D166
0x99D160: mov     dword ptr [eax], 1
0x99D166: cmp     [ebp+var_4], bl
0x99D169: jz      loc_99D09F
0x99D16F: mov     eax, [ebp+var_8]
0x99D172: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99D176: jmp     loc_99D09F
0x99D17B: lea     ecx, [ebp+MbCh]
0x99D17E: push    ecx; lpUsedDefaultChar
0x99D17F: push    ebx; lpDefaultChar
0x99D180: push    edi; cbMultiByte
0x99D181: push    esi; lpMultiByteStr
0x99D182: push    1; cchWideChar
0x99D184: lea     ecx, [ebp+WCh]
0x99D187: push    ecx; lpWideCharStr
0x99D188: push    ebx; dwFlags
0x99D189: mov     [ebp+MbCh], ebx
0x99D18C: push    dword ptr [eax+4]; CodePage
0x99D18F: call    ds:WideCharToMultiByte
0x99D195: cmp     eax, ebx
0x99D197: jz      short loc_99D1AD
0x99D199: cmp     [ebp+MbCh], ebx
0x99D19C: jnz     loc_99D104
0x99D1A2: mov     ecx, [ebp+SizeConverted]
0x99D1A5: cmp     ecx, ebx
0x99D1A7: jz      short loc_99D166
0x99D1A9: mov     [ecx], eax
0x99D1AB: jmp     short loc_99D166
0x99D1AD: call    ds:GetLastError
0x99D1B3: cmp     eax, 7Ah ; 'z'
0x99D1B6: jnz     loc_99D104
0x99D1BC: cmp     esi, ebx
0x99D1BE: jz      loc_99D12F
0x99D1C4: cmp     edi, ebx
0x99D1C6: jbe     loc_99D12F
0x99D1CC: push    edi
0x99D1CD: push    ebx
0x99D1CE: push    esi
0x99D1CF: call    __memset
0x99D1D4: add     esp, 0Ch
0x99D1D7: jmp     loc_99D12F
