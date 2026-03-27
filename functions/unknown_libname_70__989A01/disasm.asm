0x989A01: push    ebp
0x989A02: mov     ebp, esp
0x989A04: sub     esp, 48h
0x989A07: mov     eax, ___security_cookie
0x989A0C: xor     eax, ebp
0x989A0E: mov     [ebp+var_4], eax
0x989A11: push    ebx
0x989A12: xor     ebx, ebx
0x989A14: push    esi
0x989A15: mov     esi, [ebp+arg_0]
0x989A18: cmp     [esi+14h], ebx
0x989A1B: push    edi
0x989A1C: mov     [ebp+var_2C], ebx
0x989A1F: mov     [ebp+Dst], ebx
0x989A22: mov     [ebp+var_1C], ebx
0x989A25: mov     [ebp+var_28], ebx
0x989A28: mov     [ebp+Memory], ebx
0x989A2B: mov     [ebp+var_48], esi
0x989A2E: mov     [ebp+var_44], ebx
0x989A31: jz      loc_989D42
0x989A37: lea     eax, [esi+4]
0x989A3A: cmp     [eax], ebx
0x989A3C: jnz     short loc_989A5E
0x989A3E: push    eax
0x989A3F: movzx   eax, word ptr [esi+30h]
0x989A43: push    1004h
0x989A48: push    eax
0x989A49: lea     eax, [ebp+var_48]
0x989A4C: push    ebx
0x989A4D: push    eax
0x989A4E: call    unknown_libname_90
0x989A53: add     esp, 14h
0x989A56: test    eax, eax
0x989A58: jnz     unknown_libname_70___unknown_libname_71
0x989A5E: push    4
0x989A60: call    unknown_libname_72
0x989A65: push    2
0x989A67: mov     edi, 180h
0x989A6C: push    edi
0x989A6D: mov     [ebp+var_2C], eax
0x989A70: call    unknown_libname_74
0x989A75: push    1
0x989A77: push    edi
0x989A78: mov     [ebp+Dst], eax
0x989A7B: call    unknown_libname_74
0x989A80: push    1
0x989A82: push    edi
0x989A83: mov     [ebp+var_1C], eax
0x989A86: call    unknown_libname_74
0x989A8B: push    1
0x989A8D: push    101h
0x989A92: mov     [ebp+var_28], eax
0x989A95: call    unknown_libname_74
0x989A9A: add     esp, 24h
0x989A9D: cmp     [ebp+var_2C], ebx
0x989AA0: mov     [ebp+Memory], eax
0x989AA3: jz      unknown_libname_70___unknown_libname_71
0x989AA9: cmp     [ebp+Dst], ebx
0x989AAC: jz      unknown_libname_70___unknown_libname_71
0x989AB2: cmp     eax, ebx
0x989AB4: jz      unknown_libname_70___unknown_libname_71
0x989ABA: cmp     [ebp+var_1C], ebx
0x989ABD: jz      unknown_libname_70___unknown_libname_71
0x989AC3: cmp     [ebp+var_28], ebx
0x989AC6: jz      unknown_libname_70___unknown_libname_71
0x989ACC: mov     eax, [ebp+var_2C]
0x989ACF: mov     [eax], ebx
0x989AD1: xor     eax, eax
0x989AD3: mov     ecx, [ebp+Memory]
0x989AD6: mov     [eax+ecx], al
0x989AD9: inc     eax
0x989ADA: cmp     eax, 100h
0x989ADF: jl      short loc_989AD3
0x989AE1: lea     eax, [ebp+CPInfo]
0x989AE4: push    eax; lpCPInfo
0x989AE5: push    dword ptr [esi+4]; CodePage
0x989AE8: call    ds:GetCPInfo
0x989AEE: test    eax, eax
0x989AF0: jz      unknown_libname_70___unknown_libname_71
0x989AF6: cmp     [ebp+CPInfo.MaxCharSize], 5
0x989AFA: ja      unknown_libname_70___unknown_libname_71
0x989B00: movzx   eax, word ptr [ebp+CPInfo.MaxCharSize]
0x989B04: cmp     eax, 1
0x989B07: mov     [ebp+var_30], eax
0x989B0A: jle     short loc_989B39
0x989B0C: cmp     [ebp+CPInfo.LeadByte], bl
0x989B0F: jz      short loc_989B39
0x989B11: lea     eax, [ebp+CPInfo.LeadByte+1]
0x989B14: mov     cl, [eax]
0x989B16: cmp     cl, bl
0x989B18: jz      short loc_989B39
0x989B1A: movzx   edi, byte ptr [eax-1]
0x989B1E: movzx   ecx, cl
0x989B21: jmp     short loc_989B2E
0x989B23: mov     ecx, [ebp+Memory]
0x989B26: mov     byte ptr [edi+ecx], 20h ; ' '
0x989B2A: movzx   ecx, byte ptr [eax]
0x989B2D: inc     edi
0x989B2E: cmp     edi, ecx
0x989B30: jle     short loc_989B23
0x989B32: inc     eax
0x989B33: inc     eax
0x989B34: cmp     [eax-1], bl
0x989B37: jnz     short loc_989B14
0x989B39: mov     eax, [ebp+Dst]
0x989B3C: push    ebx; int
0x989B3D: push    ebx; Locale
0x989B3E: push    dword ptr [esi+4]; CodePage
0x989B41: add     eax, 100h
0x989B46: push    eax; lpCharType
0x989B47: push    100h; cbMultiByte
0x989B4C: push    [ebp+Memory]; lpMultiByteStr
0x989B4F: mov     [ebp+var_3C], eax
0x989B52: push    1; dwInfoType
0x989B54: push    ebx; struct localeinfo_struct *
0x989B55: call    ___crtGetStringTypeA
0x989B5A: add     esp, 20h
0x989B5D: test    eax, eax
0x989B5F: jz      unknown_libname_70___unknown_libname_71
0x989B65: mov     ecx, [ebp+var_1C]
0x989B68: mov     eax, [ebp+Memory]
0x989B6B: push    ebx; int
0x989B6C: push    dword ptr [esi+4]; int
0x989B6F: mov     edi, 0FFh
0x989B74: push    edi; int
0x989B75: add     ecx, 81h
0x989B7B: push    ecx; int
0x989B7C: push    edi; cchSrc
0x989B7D: inc     eax
0x989B7E: push    eax; int
0x989B7F: push    100h; dwMapFlags
0x989B84: push    dword ptr [esi+14h]; Locale
0x989B87: push    ebx; struct localeinfo_struct *
0x989B88: call    ___crtLCMapStringA
0x989B8D: add     esp, 24h
0x989B90: test    eax, eax
0x989B92: jz      unknown_libname_70___unknown_libname_71
0x989B98: mov     eax, [ebp+var_28]
0x989B9B: push    ebx; int
0x989B9C: push    dword ptr [esi+4]; int
0x989B9F: add     eax, 81h
0x989BA4: push    edi; int
0x989BA5: push    eax; int
0x989BA6: mov     eax, [ebp+Memory]
0x989BA9: push    edi; cchSrc
0x989BAA: inc     eax
0x989BAB: push    eax; int
0x989BAC: push    200h; dwMapFlags
0x989BB1: push    dword ptr [esi+14h]; Locale
0x989BB4: push    ebx; struct localeinfo_struct *
0x989BB5: call    ___crtLCMapStringA
0x989BBA: add     esp, 24h
0x989BBD: test    eax, eax
0x989BBF: jz      unknown_libname_70___unknown_libname_71
0x989BC5: cmp     [ebp+var_30], 1
0x989BC9: mov     eax, [ebp+Dst]
0x989BCC: mov     edi, [ebp+var_1C]
0x989BCF: mov     edx, [ebp+var_28]
0x989BD2: lea     ecx, [eax+0FEh]
0x989BD8: mov     [ecx], bx
0x989BDB: mov     [ebp+var_38], ecx
0x989BDE: lea     ecx, [edi+80h]
0x989BE4: mov     [edi+7Fh], bl
0x989BE7: mov     [edx+7Fh], bl
0x989BEA: mov     [ecx], bl
0x989BEC: mov     [ebp+var_40], ecx
0x989BEF: lea     ecx, [edx+80h]
0x989BF5: mov     [ebp+var_34], ecx
0x989BF8: mov     [ecx], bl
0x989BFA: jle     short loc_989C46
0x989BFC: cmp     [ebp+CPInfo.LeadByte], bl
0x989BFF: jz      short loc_989C46
0x989C01: lea     ecx, [ebp+CPInfo.LeadByte+1]
0x989C04: mov     [ebp+var_1C], ecx
0x989C07: mov     dl, [ecx]
0x989C09: cmp     dl, bl
0x989C0B: jz      short loc_989C46
0x989C0D: movzx   ecx, byte ptr [ecx-1]
0x989C11: movzx   edx, dl
0x989C14: cmp     ecx, edx
0x989C16: jg      short loc_989C39
0x989C18: lea     edx, [eax+ecx*2+100h]
0x989C1F: jmp     short loc_989C24
0x989C21: mov     edx, [ebp+Dst]
0x989C24: mov     word ptr [edx], 8000h
0x989C29: inc     ecx
0x989C2A: inc     edx
0x989C2B: inc     edx
0x989C2C: mov     [ebp+Dst], edx
0x989C2F: mov     edx, [ebp+var_1C]
0x989C32: movzx   edx, byte ptr [edx]
0x989C35: cmp     ecx, edx
0x989C37: jle     short loc_989C21
0x989C39: mov     ecx, [ebp+var_1C]
0x989C3C: inc     ecx
0x989C3D: inc     ecx
0x989C3E: cmp     [ecx-1], bl
0x989C41: mov     [ebp+var_1C], ecx
0x989C44: jnz     short loc_989C07
0x989C46: push    0FEh ; 'þ'; Size
0x989C4B: lea     ecx, [eax+200h]
0x989C51: push    ecx; Src
0x989C52: push    eax; Dst
0x989C53: call    _memcpy
0x989C58: push    7Fh; Size
0x989C5A: lea     eax, [edi+100h]
0x989C60: push    eax; Src
0x989C61: push    edi; Dst
0x989C62: call    _memcpy
0x989C67: mov     eax, [ebp+var_28]
0x989C6A: push    7Fh; Size
0x989C6C: lea     ecx, [eax+100h]
0x989C72: push    ecx; Src
0x989C73: push    eax; Dst
0x989C74: call    _memcpy
0x989C79: mov     eax, [esi+0C0h]
0x989C7F: add     esp, 24h
0x989C82: cmp     eax, ebx
0x989C84: jz      short loc_989CD1
0x989C86: push    eax; lpAddend
0x989C87: call    ds:InterlockedDecrement
0x989C8D: test    eax, eax
0x989C8F: jnz     short loc_989CD1
0x989C91: mov     eax, [esi+0C4h]
0x989C97: sub     eax, 0FEh ; 'þ'
0x989C9C: push    eax; Memory
0x989C9D: call    _free
0x989CA2: mov     eax, [esi+0CCh]
0x989CA8: mov     edi, 80h ; '€'
0x989CAD: sub     eax, edi
0x989CAF: push    eax; Memory
0x989CB0: call    _free
0x989CB5: mov     eax, [esi+0D0h]
0x989CBB: sub     eax, edi
0x989CBD: push    eax; Memory
0x989CBE: call    _free
0x989CC3: push    dword ptr [esi+0C0h]; Memory
0x989CC9: call    _free
0x989CCE: add     esp, 10h
0x989CD1: mov     eax, [ebp+var_2C]
0x989CD4: mov     dword ptr [eax], 1
0x989CDA: mov     [esi+0C0h], eax
0x989CE0: mov     eax, [ebp+var_3C]
0x989CE3: mov     [esi+0C8h], eax
0x989CE9: mov     eax, [ebp+var_38]
0x989CEC: mov     [esi+0C4h], eax
0x989CF2: mov     eax, [ebp+var_40]
0x989CF5: mov     [esi+0CCh], eax
0x989CFB: mov     eax, [ebp+var_34]
0x989CFE: mov     [esi+0D0h], eax
0x989D04: mov     eax, [ebp+var_30]
0x989D07: mov     [esi+0ACh], eax
0x989D0D: push    [ebp+Memory]; Memory
0x989D10: call    _free
0x989D15: pop     ecx
0x989D16: mov     eax, ebx
0x989D18: jmp     short loc_989D87
