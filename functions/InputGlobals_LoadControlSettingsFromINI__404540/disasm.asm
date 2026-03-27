0x404540: sub     esp, 14Ch
0x404546: mov     eax, ___security_cookie
0x40454B: xor     eax, esp
0x40454D: mov     [esp+14Ch+var_4], eax
0x404554: push    ebx
0x404555: push    esi
0x404556: push    edi
0x404557: mov     ebx, ecx
0x404559: xor     eax, eax
0x40455B: jmp     short loc_404560
0x40455D: align 10h
0x404560: mov     cl, byte ptr word_B3F280[eax]
0x404566: mov     [esp+eax+158h+FileName], cl
0x40456A: add     eax, 1
0x40456D: test    cl, cl
0x40456F: jnz     short loc_404560
0x404571: mov     eax, OblivionINI
0x404576: mov     edx, eax
0x404578: mov     cl, [eax]
0x40457A: add     eax, 1
0x40457D: test    cl, cl
0x40457F: jnz     short loc_404578
0x404581: lea     edi, [esp+158h+FileName]
0x404585: sub     eax, edx
0x404587: add     edi, 0FFFFFFFFh
0x40458A: lea     ebx, [ebx+0]
0x404590: mov     cl, [edi+1]
0x404593: add     edi, 1
0x404596: test    cl, cl
0x404598: jnz     short loc_404590
0x40459A: mov     ecx, eax
0x40459C: shr     ecx, 2
0x40459F: mov     esi, edx
0x4045A1: rep movsd
0x4045A3: mov     ecx, eax
0x4045A5: and     ecx, 3
0x4045A8: rep movsb
0x4045AA: xor     eax, eax
0x4045AC: lea     esp, [esp+0]
0x4045B0: mov     cl, [esp+eax+158h+FileName]
0x4045B4: mov     byte_B07BF4[eax], cl
0x4045BA: add     eax, 1
0x4045BD: test    cl, cl
0x4045BF: jnz     short loc_4045B0
0x4045C1: mov     eax, INISettingCollection
0x4045C6: mov     edx, [eax+14h]
0x4045C9: push    0
0x4045CB: mov     ecx, offset INISettingCollection
0x4045D0: call    edx
0x4045D2: test    al, al
0x4045D4: jz      loc_40467C
0x4045DA: mov     eax, INISettingCollection
0x4045DF: mov     edx, [eax+10h]
0x4045E2: push    offset flt_B02C4C
0x4045E7: mov     ecx, offset INISettingCollection
0x4045EC: call    edx
0x4045EE: fld     flt_B02C4C
0x4045F4: fcomp   ds:dbl_A2FB10
0x4045FA: fnstsw  ax
0x4045FC: test    ah, 44h
0x4045FF: jp      short loc_40466C
0x404601: mov     edi, ds:GetPrivateProfileStringA
0x404607: xor     esi, esi
0x404609: lea     esp, [esp+0]
0x404610: mov     edx, lpKeyName[esi*4]
0x404617: lea     eax, [esp+158h+FileName]
0x40461B: push    eax; lpFileName
0x40461C: push    40h ; '@'; nSize
0x40461E: lea     ecx, [esp+160h+ReturnedString]
0x404622: push    ecx; lpReturnedString
0x404623: push    0; lpDefault
0x404625: push    edx; lpKeyName
0x404626: push    offset AppName; "Controls"
0x40462B: call    edi ; GetPrivateProfileStringA
0x40462D: test    eax, eax
0x40462F: jz      short loc_404664
0x404631: push    10h; Radix
0x404633: lea     eax, [esp+15Ch+EndPtr]
0x404637: push    eax; EndPtr
0x404638: lea     ecx, [esp+160h+ReturnedString]
0x40463C: push    ecx; Str
0x40463D: call    _strtol
0x404642: mov     edx, eax
0x404644: shr     edx, 10h
0x404647: mov     ecx, eax
0x404649: add     esp, 0Ch
0x40464C: shr     ecx, 8
0x40464F: mov     [ebx+esi+1B7Eh], dl
0x404656: mov     [ebx+esi+1B9Bh], cl
0x40465D: mov     [ebx+esi+1BB8h], al
0x404664: add     esi, 1
0x404667: cmp     esi, 1Dh
0x40466A: jl      short loc_404610
0x40466C: mov     edx, INISettingCollection
0x404672: mov     eax, [edx+18h]
0x404675: mov     ecx, offset INISettingCollection
0x40467A: call    eax
0x40467C: mov     ecx, [esp+158h+var_4]
0x404683: pop     edi
0x404684: pop     esi
0x404685: pop     ebx
0x404686: xor     ecx, esp
0x404688: call    @__security_check_cookie@4; __security_check_cookie(x)
0x40468D: add     esp, 14Ch
0x404693: retn
