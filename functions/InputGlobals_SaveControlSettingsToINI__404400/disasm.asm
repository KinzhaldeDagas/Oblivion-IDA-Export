0x404400: sub     esp, 148h
0x404406: mov     eax, ___security_cookie
0x40440B: xor     eax, esp
0x40440D: mov     [esp+148h+var_4], eax
0x404414: push    ebx
0x404415: push    esi
0x404416: push    edi
0x404417: mov     ebx, ecx
0x404419: xor     eax, eax
0x40441B: jmp     short loc_404420
0x40441D: align 10h
0x404420: mov     cl, byte ptr word_B3F280[eax]
0x404426: mov     [esp+eax+154h+FileName], cl
0x40442A: add     eax, 1
0x40442D: test    cl, cl
0x40442F: jnz     short loc_404420
0x404431: mov     eax, OblivionINI
0x404436: mov     edx, eax
0x404438: mov     cl, [eax]
0x40443A: add     eax, 1
0x40443D: test    cl, cl
0x40443F: jnz     short loc_404438
0x404441: lea     edi, [esp+154h+FileName]
0x404445: sub     eax, edx
0x404447: add     edi, 0FFFFFFFFh
0x40444A: lea     ebx, [ebx+0]
0x404450: mov     cl, [edi+1]
0x404453: add     edi, 1
0x404456: test    cl, cl
0x404458: jnz     short loc_404450
0x40445A: mov     ecx, eax
0x40445C: shr     ecx, 2
0x40445F: mov     esi, edx
0x404461: rep movsd
0x404463: mov     ecx, eax
0x404465: and     ecx, 3
0x404468: rep movsb
0x40446A: xor     eax, eax
0x40446C: lea     esp, [esp+0]
0x404470: mov     cl, [esp+eax+154h+FileName]
0x404474: mov     byte_B07BF4[eax], cl
0x40447A: add     eax, 1
0x40447D: test    cl, cl
0x40447F: jnz     short loc_404470
0x404481: mov     eax, INISettingCollection
0x404486: mov     edx, [eax+14h]
0x404489: push    1
0x40448B: mov     ecx, offset INISettingCollection
0x404490: call    edx
0x404492: test    al, al
0x404494: jz      loc_404523
0x40449A: mov     eax, INISettingCollection
0x40449F: fld     ds:flt_A2FB0C
0x4044A5: mov     edx, [eax+0Ch]
0x4044A8: fstp    flt_B02C4C
0x4044AE: push    ebp
0x4044AF: push    offset flt_B02C4C
0x4044B4: mov     ecx, offset INISettingCollection
0x4044B9: call    edx
0x4044BB: mov     ebp, ds:WritePrivateProfileStringA
0x4044C1: lea     esi, [ebx+1B9Bh]
0x4044C7: mov     edi, offset lpKeyName
0x4044CC: mov     ebx, 1Dh
0x4044D1: movzx   ecx, byte ptr [esi+1Dh]
0x4044D5: xor     eax, eax
0x4044D7: mov     ah, [esi-1Dh]
0x4044DA: lea     edx, [esp+158h+String]
0x4044DE: mov     al, [esi]
0x4044E0: shl     eax, 8
0x4044E3: or      eax, ecx
0x4044E5: push    eax
0x4044E6: push    offset a08x; "%08X"
0x4044EB: push    edx
0x4044EC: call    __sprintf
0x4044F1: mov     edx, [edi]
0x4044F3: add     esp, 0Ch
0x4044F6: lea     eax, [esp+158h+FileName]
0x4044FA: push    eax; lpFileName
0x4044FB: lea     ecx, [esp+15Ch+String]
0x4044FF: push    ecx; lpString
0x404500: push    edx; lpKeyName
0x404501: push    offset AppName; "Controls"
0x404506: call    ebp ; WritePrivateProfileStringA
0x404508: add     esi, 1
0x40450B: add     edi, 4
0x40450E: sub     ebx, 1
0x404511: jnz     short loc_4044D1
0x404513: mov     eax, INISettingCollection
0x404518: mov     edx, [eax+18h]
0x40451B: mov     ecx, offset INISettingCollection
0x404520: call    edx
0x404522: pop     ebp
0x404523: mov     ecx, [esp+154h+var_4]
0x40452A: pop     edi
0x40452B: pop     esi
0x40452C: pop     ebx
0x40452D: xor     ecx, esp
0x40452F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x404534: add     esp, 148h
0x40453A: retn
