0x4A85F0: sub     esp, 198h
0x4A85F6: mov     eax, ds:0B30AACh
0x4A85FB: xor     eax, esp
0x4A85FD: mov     [esp+198h+var_4], eax
0x4A8604: push    ebx
0x4A8605: push    esi
0x4A8606: mov     esi, [esp+1A0h+arg_0]
0x4A860D: xor     bl, bl
0x4A860F: cmp     dword ptr [esi+4], 0
0x4A8613: push    edi
0x4A8614: mov     edi, ecx
0x4A8616: jz      loc_4A87B8
0x4A861C: cmp     dword ptr [edi+108h], 0
0x4A8623: setz    al
0x4A8626: test    al, al
0x4A8628: mov     byte ptr [esp+1A4h+var_198+3], al
0x4A862C: jz      short loc_4A8637
0x4A862E: mov     eax, [edi]
0x4A8630: mov     edx, [eax+14h]
0x4A8633: push    1
0x4A8635: call    edx
0x4A8637: cmp     dword ptr [edi+108h], 0
0x4A863E: jz      loc_4A87A8
0x4A8644: mov     eax, [esi+4]
0x4A8647: push    eax
0x4A8648: call    Setting_GetTypeFromName
0x4A864D: lea     ecx, [esp+1A8h+AppName]
0x4A8651: push    ecx
0x4A8652: push    esi
0x4A8653: mov     ebx, eax
0x4A8655: call    INISettingCollection_GetSettingSectionName
0x4A865A: lea     edx, [esp+1B0h+KeyName]
0x4A865E: push    edx; Dest
0x4A865F: push    esi; int
0x4A8660: call    INISettingCollection_GetSettingKeyName
0x4A8665: lea     eax, [ebx-1]; switch 8 cases
0x4A8668: add     esp, 14h
0x4A866B: cmp     eax, 7
0x4A866E: ja      INISettingCollection_SaveSetting___def_4A8674; jumptable 004A8674 default case, cases 2,4
0x4A8674: jmp     ds:jpt_4A8674[eax*4]; switch jump
0x4A867B: mov     ecx, [esi]; jumptable 004A8674 case 6
0x4A867D: lea     eax, [edi+4]
0x4A8680: push    eax
0x4A8681: push    ecx
0x4A8682: lea     edx, [esp+1ACh+KeyName]
0x4A8686: push    edx
0x4A8687: lea     eax, [esp+1B0h+AppName]
0x4A868B: push    eax
0x4A868C: jmp     loc_4A879D
0x4A8691: mov     ecx, [esi]; jumptable 004A8674 cases 1,3
0x4A8693: push    ecx
0x4A8694: lea     edx, [esp+1A8h+String]
0x4A869B: push    offset aD_0; "%d"
0x4A86A0: push    edx
0x4A86A1: call    __sprintf
0x4A86A6: add     esp, 0Ch
0x4A86A9: lea     eax, [edi+4]
0x4A86AC: push    eax
0x4A86AD: lea     ecx, [esp+1A8h+String]
0x4A86B4: push    ecx
0x4A86B5: lea     edx, [esp+1ACh+KeyName]
0x4A86B9: push    edx
0x4A86BA: lea     eax, [esp+1B0h+AppName]
0x4A86BE: push    eax
0x4A86BF: jmp     loc_4A879D
0x4A86C4: fld     dword ptr [esi]; jumptable 004A8674 case 5
0x4A86C6: sub     esp, 8
0x4A86C9: fstp    [esp+1ACh+var_1B0+4]
0x4A86CC: lea     ecx, [esp+1ACh+String]
0x4A86D3: push    offset a_4f_0; "%.4f"
0x4A86D8: push    ecx
0x4A86D9: call    __sprintf
0x4A86DE: add     esp, 10h
0x4A86E1: jmp     loc_4A8787
0x4A86E6: lea     eax, [esp+1A4h+var_188]; jumptable 004A8674 case 7
0x4A86EA: push    eax
0x4A86EB: lea     ecx, [esp+1A8h+var_18C]
0x4A86EF: push    ecx
0x4A86F0: mov     ecx, [esi]
0x4A86F2: lea     edx, [esp+1ACh+var_190]
0x4A86F6: push    edx
0x4A86F7: lea     eax, [esp+1B0h+var_194]
0x4A86FB: push    eax
0x4A86FC: push    ecx
0x4A86FD: call    INISettingCollection_UnpackRGBAValue
0x4A8702: mov     edx, [esp+1B8h+var_18C]
0x4A8706: mov     eax, [esp+1B8h+var_190]
0x4A870A: mov     ecx, [esp+1B8h+var_194]
0x4A870E: push    edx
0x4A870F: push    eax
0x4A8710: push    ecx
0x4A8711: lea     edx, [esp+1C4h+String]
0x4A8718: push    offset aUUU; "%u,%u,%u"
0x4A871D: push    edx
0x4A871E: call    __sprintf
0x4A8723: add     esp, 28h
0x4A8726: jmp     short loc_4A86A9
0x4A8728: lea     ecx, [esp+1A4h+var_194]; jumptable 004A8674 case 8
0x4A872C: push    ecx
0x4A872D: lea     edx, [esp+1A8h+var_190]
0x4A8731: push    edx
0x4A8732: mov     edx, [esi]
0x4A8734: lea     eax, [esp+1ACh+var_18C]
0x4A8738: push    eax
0x4A8739: lea     ecx, [esp+1B0h+var_188]
0x4A873D: push    ecx
0x4A873E: push    edx
0x4A873F: call    INISettingCollection_UnpackRGBAValue
0x4A8744: mov     eax, [esp+1B8h+var_194]
0x4A8748: mov     ecx, [esp+1B8h+var_190]
0x4A874C: mov     edx, [esp+1B8h+var_18C]
0x4A8750: push    eax
0x4A8751: mov     eax, [esp+1BCh+var_188]
0x4A8755: push    ecx
0x4A8756: push    edx
0x4A8757: push    eax
0x4A8758: lea     ecx, [esp+1C8h+String]
0x4A875F: push    offset aUUUU; "%u,%u,%u,%u"
0x4A8764: push    ecx
0x4A8765: call    __sprintf
0x4A876A: add     esp, 2Ch
0x4A876D: jmp     short loc_4A8787
0x4A876F: mov     eax, [esi]; jumptable 004A8674 default case, cases 2,4
0x4A8771: push    eax
0x4A8772: lea     ecx, [esp+1A8h+String]
0x4A8779: push    offset aU_1; "%u"
0x4A877E: push    ecx
0x4A877F: call    __sprintf
0x4A8784: add     esp, 0Ch
0x4A8787: lea     edx, [edi+4]
0x4A878A: push    edx; lpFileName
0x4A878B: lea     eax, [esp+1A8h+String]
0x4A8792: push    eax; lpString
0x4A8793: lea     ecx, [esp+1ACh+KeyName]
0x4A8797: push    ecx; lpKeyName
0x4A8798: lea     edx, [esp+1B0h+AppName]
0x4A879C: push    edx; lpAppName
0x4A879D: call    dword ptr ds:0A280B0h
0x4A87A3: test    eax, eax
0x4A87A5: setnz   bl
0x4A87A8: cmp     byte ptr [esp+1A4h+var_198+3], 0
0x4A87AD: jz      short loc_4A87B8
0x4A87AF: mov     eax, [edi]
0x4A87B1: mov     edx, [eax+18h]
0x4A87B4: mov     ecx, edi
0x4A87B6: call    edx
0x4A87B8: mov     ecx, [esp+1A4h+var_4]
0x4A87BF: pop     edi
0x4A87C0: pop     esi
0x4A87C1: mov     al, bl
0x4A87C3: pop     ebx
0x4A87C4: xor     ecx, esp
0x4A87C6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A87CB: add     esp, 198h
0x4A87D1: retn    4
