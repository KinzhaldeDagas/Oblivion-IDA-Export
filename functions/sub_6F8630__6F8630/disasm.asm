0x6F8630: push    0FFFFFFFFh
0x6F8632: push    offset SEH_6F8630
0x6F8637: mov     eax, large fs:0
0x6F863D: push    eax
0x6F863E: sub     esp, 8Ch
0x6F8644: mov     eax, ds:0B30AACh
0x6F8649: xor     eax, esp
0x6F864B: mov     [esp+98h+var_10], eax
0x6F8652: push    esi
0x6F8653: push    edi; int
0x6F8654: mov     eax, ds:0B30AACh
0x6F8659: xor     eax, esp
0x6F865B: push    eax; int
0x6F865C: lea     eax, [esp+0A4h+var_C]
0x6F8663: mov     large fs:0, eax
0x6F8669: mov     eax, [esp+0A4h+arg_8]
0x6F8670: mov     esi, ecx
0x6F8672: mov     [esp+0A4h+var_98], esi
0x6F8676: mov     [esi+4], eax
0x6F8679: push    offset aC; "C"
0x6F867E: lea     ecx, [esp+0A8h+var_84]
0x6F8682: mov     [esp+0A8h+var_4], 0
0x6F868D: mov     dword ptr [esi], offset ??_7?$ctype@D@std@@6B@; const std::ctype<char>::`vftable'
0x6F8693: call    sub_6F84E0
0x6F8698: lea     ecx, [esp+0A4h+var_94]
0x6F869C: push    ecx
0x6F869D: call    __Getctype
0x6F86A2: mov     edx, [eax]
0x6F86A4: mov     [esi+8], edx
0x6F86A7: mov     ecx, [eax+4]
0x6F86AA: mov     [esi+0Ch], ecx
0x6F86AD: mov     edx, [eax+8]
0x6F86B0: mov     [esi+10h], edx
0x6F86B3: mov     eax, [eax+0Ch]
0x6F86B6: add     esp, 4
0x6F86B9: lea     ecx, [esp+0A4h+var_84]; this
0x6F86BD: mov     [esi+14h], eax
0x6F86C0: call    sub_6F7670
0x6F86C5: mov     edi, [esp+0A4h+arg_0]
0x6F86CC: test    edi, edi
0x6F86CE: jz      short loc_6F8701
0x6F86D0: mov     eax, [esi+14h]
0x6F86D3: test    eax, eax
0x6F86D5: jle     short loc_6F86E2
0x6F86D7: mov     ecx, [esi+10h]
0x6F86DA: push    ecx; Memory
0x6F86DB: call    _free
0x6F86E0: jmp     short loc_6F86ED
0x6F86E2: jge     short loc_6F86F0
0x6F86E4: mov     edx, [esi+10h]
0x6F86E7: push    edx
0x6F86E8: call    FormHeapFree
0x6F86ED: add     esp, 4
0x6F86F0: mov     al, byte ptr [esp+0A4h+arg_4]
0x6F86F7: neg     al
0x6F86F9: mov     [esi+10h], edi
0x6F86FC: sbb     eax, eax
0x6F86FE: mov     [esi+14h], eax
0x6F8701: mov     eax, esi
0x6F8703: mov     ecx, [esp+0A4h+var_C]
0x6F870A: mov     large fs:0, ecx
0x6F8711: pop     ecx
0x6F8712: pop     edi
0x6F8713: pop     esi
0x6F8714: mov     ecx, [esp+98h+var_10]
0x6F871B: xor     ecx, esp
0x6F871D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6F8722: add     esp, 98h
0x6F8728: retn    0Ch
