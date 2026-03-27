0x5AD0D0: push    ebp
0x5AD0D1: mov     ebp, esp
0x5AD0D3: and     esp, 0FFFFFFC0h
0x5AD0D6: push    0FFFFFFFFh
0x5AD0D8: push    offset ??0LoadingMenu@@QAE@XZ_SEH
0x5AD0DD: mov     eax, large fs:0
0x5AD0E3: push    eax
0x5AD0E4: sub     esp, 568h
0x5AD0EA: mov     eax, ds:0B30AACh
0x5AD0EF: xor     eax, esp
0x5AD0F1: mov     [esp+574h+var_44], eax
0x5AD0F8: push    ebx
0x5AD0F9: push    esi
0x5AD0FA: push    edi
0x5AD0FB: mov     eax, ds:0B30AACh
0x5AD100: xor     eax, esp
0x5AD102: push    eax; Format
0x5AD103: lea     eax, [esp+584h+var_C]
0x5AD10A: mov     large fs:0, eax
0x5AD110: mov     esi, ecx
0x5AD112: mov     [esp+584h+var_554], esi
0x5AD116: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5AD11B: fldz
0x5AD11D: xor     edi, edi
0x5AD11F: mov     dword ptr [esi], offset ??_7LoadingMenu@@6B@; const LoadingMenu::`vftable'
0x5AD125: mov     [esi+4Ch], edi
0x5AD128: mov     [esi+50h], edi
0x5AD12B: fstp    dword ptr [esi+40h]
0x5AD12E: or      eax, 0FFFFFFFFh
0x5AD131: mov     [esi+3Ch], eax
0x5AD134: mov     [esi+28h], eax
0x5AD137: mov     [esi+60h], edi
0x5AD13A: mov     [esi+64h], edi
0x5AD13D: mov     byte ptr [esi+70h], 0
0x5AD141: mov     byte ptr [esi+71h], 1
0x5AD145: mov     eax, ds:0B33398h
0x5AD14A: mov     ecx, [eax+24h]
0x5AD14D: cmp     ecx, edi
0x5AD14F: mov     [esp+584h+var_4], edi
0x5AD156: jz      short loc_5AD15D
0x5AD158: call    sub_6A9B40
0x5AD15D: fldz
0x5AD15F: lea     ebx, [esi+2Ch]
0x5AD162: fstp    [esp+584h+var_558]
0x5AD166: jmp     short loc_5AD170
0x5AD168: align 10h
0x5AD170: mov     eax, ds:0B14120h[edi*4]
0x5AD177: test    eax, eax
0x5AD179: jnz     short loc_5AD18B
0x5AD17B: push    edi; ArgList
0x5AD17C: push    offset aMissingLoading; "Missing [LoadingBar] 'fPercentageOfBar%"...
0x5AD181: call    PrintError
0x5AD186: add     esp, 8
0x5AD189: jmp     short loc_5AD19E
0x5AD18B: fld     dword ptr [eax]
0x5AD18D: fstp    dword ptr ds:0B3B3DCh[edi*4]
0x5AD194: fld     dword ptr [eax]
0x5AD196: fadd    [esp+584h+var_558]
0x5AD19A: fstp    [esp+584h+var_558]
0x5AD19E: mov     dword ptr [ebx], 0
0x5AD1A4: add     edi, 1
0x5AD1A7: add     ebx, 4
0x5AD1AA: cmp     edi, 4
0x5AD1AD: jl      short loc_5AD170
0x5AD1AF: fld1
0x5AD1B1: fld     [esp+584h+var_558]
0x5AD1B5: fcom    st(1)
0x5AD1B7: fnstsw  ax
0x5AD1B9: fstp    st(1)
0x5AD1BB: test    ah, 41h
0x5AD1BE: jnz     short loc_5AD1C8
0x5AD1C0: fsub    qword ptr ds:0A2F928h
0x5AD1C6: jmp     short loc_5AD1CC
0x5AD1C8: fld1
0x5AD1CA: fsubrp  st(1), st
0x5AD1CC: fcomp   qword ptr ds:0A3B150h
0x5AD1D2: fnstsw  ax
0x5AD1D4: test    ah, 5
0x5AD1D7: jnp     loc_5AD2E7
0x5AD1DD: push    offset aTotalValueOfLo; "Total value of [LoadingBar] percentages"...
0x5AD1E2: lea     ecx, [esp+588h+Dest]
0x5AD1E9: push    400h; Count
0x5AD1EE: push    ecx; Dest
0x5AD1EF: call    __snprintf
0x5AD1F4: add     esp, 0Ch
0x5AD1F7: mov     edi, offset off_B14120
0x5AD1FC: lea     esp, [esp+0]
0x5AD200: mov     eax, [edi]
0x5AD202: test    eax, eax
0x5AD204: jz      short loc_5AD22B
0x5AD206: fld     dword ptr [eax]
0x5AD208: mov     ecx, [eax+4]
0x5AD20B: sub     esp, 8
0x5AD20E: fstp    qword ptr [esp+58Ch+Format]
0x5AD211: push    ecx; Format
0x5AD212: push    offset aS_04f; "\t%s - %.04f\r\n"
0x5AD217: lea     edx, [esp+594h+var_550]
0x5AD21B: push    104h; Count
0x5AD220: push    edx; Dest
0x5AD221: call    __snprintf
0x5AD226: add     esp, 18h
0x5AD229: jmp     short loc_5AD246
0x5AD22B: mov     eax, [eax+4]
0x5AD22E: push    eax; Format
0x5AD22F: push    offset aSNotFound; "\t%s - NOT FOUND\r\n"
0x5AD234: lea     eax, [esp+58Ch+var_550]
0x5AD238: push    104h; Count
0x5AD23D: push    eax; Dest
0x5AD23E: call    __snprintf
0x5AD243: add     esp, 10h
0x5AD246: lea     eax, [esp+584h+Dest]
0x5AD24D: lea     edx, [eax+1]
0x5AD250: mov     cl, [eax]
0x5AD252: add     eax, 1
0x5AD255: test    cl, cl
0x5AD257: jnz     short loc_5AD250
0x5AD259: sub     eax, edx
0x5AD25B: mov     ecx, 400h
0x5AD260: sub     ecx, eax
0x5AD262: push    ecx; size_t
0x5AD263: lea     edx, [esp+588h+var_550]
0x5AD267: push    edx; unsigned __int8 *
0x5AD268: lea     eax, [esp+58Ch+Dest]
0x5AD26F: push    eax; unsigned __int8 *
0x5AD270: call    __mbsnbcat
0x5AD275: add     edi, 4
0x5AD278: add     esp, 0Ch
0x5AD27B: cmp     edi, offset byte_B14130
0x5AD281: jl      loc_5AD200
0x5AD287: fld     [esp+584h+var_558]
0x5AD28B: sub     esp, 8
0x5AD28E: fstp    qword ptr [esp+58Ch+Format]; Format
0x5AD291: push    offset aIniTotal_04f; "INI Total = %.04f"
0x5AD296: lea     ecx, [esp+590h+var_550]
0x5AD29A: push    104h; Count
0x5AD29F: push    ecx; Dest
0x5AD2A0: call    __snprintf
0x5AD2A5: lea     eax, [esp+598h+Dest]
0x5AD2AC: add     esp, 14h
0x5AD2AF: lea     edx, [eax+1]
0x5AD2B2: mov     cl, [eax]
0x5AD2B4: add     eax, 1
0x5AD2B7: test    cl, cl
0x5AD2B9: jnz     short loc_5AD2B2
0x5AD2BB: sub     eax, edx
0x5AD2BD: mov     edx, 400h
0x5AD2C2: sub     edx, eax
0x5AD2C4: push    edx; size_t
0x5AD2C5: lea     eax, [esp+588h+var_550]
0x5AD2C9: push    eax; unsigned __int8 *
0x5AD2CA: lea     ecx, [esp+58Ch+Dest]
0x5AD2D1: push    ecx; unsigned __int8 *
0x5AD2D2: call    __mbsnbcat
0x5AD2D7: lea     edx, [esp+590h+Dest]
0x5AD2DE: push    edx; Format
0x5AD2DF: call    PrintError
0x5AD2E4: add     esp, 10h
0x5AD2E7: push    18h; Size
0x5AD2E9: call    FormHeapAlloc
0x5AD2EE: mov     edi, eax
0x5AD2F0: add     esp, 4
0x5AD2F3: mov     [esp+584h+var_558], edi
0x5AD2F7: test    edi, edi
0x5AD2F9: mov     ebx, ds:0A280D0h
0x5AD2FF: mov     byte ptr [esp+584h+var_4], 1
0x5AD307: jz      short loc_5AD315
0x5AD309: call    ebx ; GetTickCount
0x5AD30B: push    eax
0x5AD30C: mov     ecx, edi
0x5AD30E: call    sub_47D150
0x5AD313: jmp     short loc_5AD317
0x5AD315: xor     edi, edi
0x5AD317: mov     byte ptr [esp+584h+var_4], 0
0x5AD31F: mov     [esi+54h], edi
0x5AD322: call    ebx ; GetTickCount
0x5AD324: push    eax
0x5AD325: mov     ecx, edi
0x5AD327: call    sub_47D170
0x5AD32C: mov     eax, [esi+54h]
0x5AD32F: mov     eax, [eax+10h]
0x5AD332: mov     [esi+68h], eax
0x5AD335: mov     [esi+6Ch], eax
0x5AD338: fld     dword ptr ds:0B14158h
0x5AD33E: fstp    dword ptr [esi+40h]
0x5AD341: mov     eax, esi
0x5AD343: mov     ecx, [esp+584h+var_C]
0x5AD34A: mov     large fs:0, ecx
0x5AD351: pop     ecx
0x5AD352: pop     edi
0x5AD353: pop     esi
0x5AD354: pop     ebx
0x5AD355: mov     ecx, [esp+574h+var_44]
0x5AD35C: xor     ecx, esp
0x5AD35E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5AD363: mov     esp, ebp
0x5AD365: pop     ebp
0x5AD366: retn
