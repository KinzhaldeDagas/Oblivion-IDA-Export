0x65F080: push    ebp
0x65F081: mov     ebp, esp
0x65F083: and     esp, 0FFFFFFF0h
0x65F086: sub     esp, 84h
0x65F08C: mov     eax, ds:0B30AACh
0x65F091: xor     eax, esp
0x65F093: mov     [esp+84h+var_4], eax
0x65F09A: cmp     byte ptr [ebp+a4], 0
0x65F09E: mov     eax, [ebp+CameraPosition]
0x65F0A1: push    ebx
0x65F0A2: mov     ebx, [eax+8]
0x65F0A5: push    esi
0x65F0A6: mov     esi, [eax]
0x65F0A8: push    edi
0x65F0A9: mov     edi, [eax+4]
0x65F0AC: mov     [esp+90h+var_68], ecx
0x65F0B0: mov     ecx, [ebp+a1]
0x65F0B3: mov     [esp+90h+var_50], eax
0x65F0B7: mov     [esp+90h+var_60], ecx
0x65F0BB: mov     dword ptr [esp+90h+var_74], esi
0x65F0BF: mov     dword ptr [esp+90h+var_74+4], edi
0x65F0C3: mov     [esp+90h+var_6C], ebx
0x65F0C7: jnz     loc_65F272
0x65F0CD: cmp     byte ptr ds:0B14E4Dh, 0
0x65F0D4: jz      short loc_65F0F4
0x65F0D6: mov     ds:0B3BB38h, esi
0x65F0DC: mov     ds:0B3BB3Ch, edi
0x65F0E2: mov     ds:0B3BB40h, ebx
0x65F0E8: mov     byte ptr ds:0B14E4Dh, 0
0x65F0EF: jmp     loc_65F272
0x65F0F4: fld     dword ptr [esp+90h+var_74]
0x65F0F8: fsub    dword ptr ds:0B3BB38h
0x65F0FE: fstp    dword ptr [esp+90h+var_80]
0x65F102: fld     dword ptr [esp+90h+var_74+4]
0x65F106: fsub    dword ptr ds:0B3BB3Ch
0x65F10C: fstp    dword ptr [esp+90h+var_80+4]
0x65F110: fld     [esp+90h+var_6C]
0x65F114: fsub    dword ptr ds:0B3BB40h
0x65F11A: fstp    [esp+90h+var_78]
0x65F11E: fld     dword ptr [esp+90h+var_80+4]
0x65F122: fld     dword ptr [esp+90h+var_80]
0x65F126: fld     [esp+90h+var_78]
0x65F12A: fld     st(1)
0x65F12C: fmulp   st(2), st
0x65F12E: fld     st(2)
0x65F130: fmulp   st(3), st
0x65F132: fxch    st(1)
0x65F134: faddp   st(2), st
0x65F136: fmul    st, st
0x65F138: faddp   st(1), st
0x65F13A: fstp    [esp+90h+var_84]
0x65F13E: fld     [esp+90h+var_84]
0x65F142: call    __CIsqrt
0x65F147: fstp    [esp+90h+var_84]
0x65F14B: cmp     byte ptr ds:0B3BB04h, 0
0x65F152: fld     [esp+90h+var_84]
0x65F156: fstp    [esp+90h+var_64]
0x65F15A: jz      short loc_65F19E
0x65F15C: cmp     byte ptr ds:0B3BB05h, 0
0x65F163: jz      short loc_65F16D
0x65F165: fld     dword ptr ds:0B36BD8h
0x65F16B: jmp     short loc_65F1A4
0x65F16D: mov     eax, ds:0B3F9A8h
0x65F172: mov     ecx, ds:0B3F9ACh
0x65F178: mov     edx, ds:0B3F9B0h
0x65F17E: mov     dword ptr [esp+90h+var_80], eax
0x65F182: mov     dword ptr [esp+90h+var_80+4], ecx
0x65F186: mov     [esp+90h+var_78], edx
0x65F18A: mov     ds:0B3BB38h, esi
0x65F190: mov     ds:0B3BB3Ch, edi
0x65F196: mov     ds:0B3BB40h, ebx
0x65F19C: jmp     short loc_65F1CE
0x65F19E: fld     dword ptr ds:0B36BE0h
0x65F1A4: fmul    dword ptr ds:0B33E9Ch
0x65F1AA: fstp    [esp+90h+var_84]
0x65F1AE: fld     [esp+90h+var_84]
0x65F1B2: fld     st
0x65F1B4: fmul    dword ptr [esp+90h+var_80]
0x65F1B8: fstp    dword ptr [esp+90h+var_80]
0x65F1BC: fld     dword ptr [esp+90h+var_80+4]
0x65F1C0: fmul    st, st(1)
0x65F1C2: fstp    dword ptr [esp+90h+var_80+4]
0x65F1C6: fmul    [esp+90h+var_78]
0x65F1CA: fstp    [esp+90h+var_78]
0x65F1CE: fld     dword ptr [esp+90h+var_80+4]
0x65F1D2: fld     dword ptr [esp+90h+var_80]
0x65F1D6: fld     [esp+90h+var_78]
0x65F1DA: fld     st(1)
0x65F1DC: fmulp   st(2), st
0x65F1DE: fld     st(2)
0x65F1E0: fmulp   st(3), st
0x65F1E2: fxch    st(1)
0x65F1E4: faddp   st(2), st
0x65F1E6: fmul    st, st
0x65F1E8: faddp   st(1), st
0x65F1EA: fstp    [esp+90h+var_84]
0x65F1EE: fld     [esp+90h+var_84]
0x65F1F2: call    __CIsqrt
0x65F1F7: fstp    [esp+90h+var_84]
0x65F1FB: fld     [esp+90h+var_84]
0x65F1FF: fld     [esp+90h+var_64]
0x65F203: fcompp
0x65F205: fnstsw  ax
0x65F207: test    ah, 41h
0x65F20A: jp      short loc_65F220
0x65F20C: mov     ds:0B3BB38h, esi
0x65F212: mov     ds:0B3BB3Ch, edi
0x65F218: mov     ds:0B3BB40h, ebx
0x65F21E: jmp     short loc_65F250
0x65F220: fld     dword ptr ds:0B3BB38h
0x65F226: fadd    dword ptr [esp+90h+var_80]
0x65F22A: fstp    dword ptr ds:0B3BB38h
0x65F230: fld     dword ptr [esp+90h+var_80+4]
0x65F234: fadd    dword ptr ds:0B3BB3Ch
0x65F23A: fstp    dword ptr ds:0B3BB3Ch
0x65F240: fld     [esp+90h+var_78]
0x65F244: fadd    dword ptr ds:0B3BB40h
0x65F24A: fstp    dword ptr ds:0B3BB40h
0x65F250: mov     esi, ds:0B3BB38h
0x65F256: mov     edi, ds:0B3BB3Ch
0x65F25C: mov     ebx, ds:0B3BB40h
0x65F262: mov     ecx, [esp+90h+var_60]
0x65F266: mov     dword ptr [esp+90h+var_74], esi
0x65F26A: mov     dword ptr [esp+90h+var_74+4], edi
0x65F26E: mov     [esp+90h+var_6C], ebx
0x65F272: fld     dword ptr [esp+90h+var_74]
0x65F276: fsub    dword ptr [ecx]
0x65F278: fstp    dword ptr [esp+90h+var_80]
0x65F27C: fld     dword ptr [esp+90h+var_74+4]
0x65F280: fsub    dword ptr [ecx+4]
0x65F283: fstp    dword ptr [esp+90h+var_80+4]
0x65F287: fld     [esp+90h+var_6C]
0x65F28B: fsub    dword ptr [ecx+8]
0x65F28E: lea     ecx, [esp+90h+var_80]
0x65F292: fstp    [esp+90h+var_78]
0x65F296: call    sub_43F350
0x65F29B: mov     eax, [esp+90h+var_68]
0x65F29F: fstp    [esp+90h+var_84]
0x65F2A3: mov     ecx, [eax+1F0h]
0x65F2A9: test    ecx, ecx
0x65F2AB: jz      loc_65F348
0x65F2B1: mov     eax, [esp+90h+var_60]
0x65F2B5: mov     edx, [eax]
0x65F2B7: mov     [esp+90h+var_5C], edx
0x65F2BB: mov     edx, [eax+4]
0x65F2BE: mov     eax, [eax+8]
0x65F2C1: mov     [esp+90h+var_58], edx
0x65F2C5: lea     edx, [esp+90h+var_40]
0x65F2C9: push    edx
0x65F2CA: mov     [esp+94h+var_54], eax
0x65F2CE: lea     eax, [esp+94h+var_74]
0x65F2D2: push    eax
0x65F2D3: lea     edx, [esp+98h+var_5C]
0x65F2D7: push    edx
0x65F2D8: mov     dword ptr [esp+9Ch+var_74], esi
0x65F2DC: mov     dword ptr [esp+9Ch+var_74+4], edi
0x65F2E0: mov     [esp+9Ch+var_6C], ebx
0x65F2E4: call    sub_5326B0
0x65F2E9: test    al, al
0x65F2EB: jz      short loc_65F348
0x65F2ED: fld     dword ptr [esp+90h+var_74]
0x65F2F1: fsub    [esp+90h+var_5C]
0x65F2F5: fstp    dword ptr [esp+90h+var_74]
0x65F2F9: fld     dword ptr [esp+90h+var_74+4]
0x65F2FD: fsub    [esp+90h+var_58]
0x65F301: fstp    dword ptr [esp+90h+var_74+4]
0x65F305: fld     [esp+90h+var_6C]
0x65F309: fsub    [esp+90h+var_54]
0x65F30D: fstp    [esp+90h+var_6C]
0x65F311: fld     dword ptr [esp+90h+var_74+4]
0x65F315: fld     dword ptr [esp+90h+var_74]
0x65F319: fld     [esp+90h+var_6C]
0x65F31D: fld     st(2)
0x65F31F: fmulp   st(3), st
0x65F321: fld     st(1)
0x65F323: fmulp   st(2), st
0x65F325: fxch    st(2)
0x65F327: faddp   st(1), st
0x65F329: fld     st(1)
0x65F32B: fmulp   st(2), st
0x65F32D: faddp   st(1), st
0x65F32F: fstp    [esp+90h+var_64]
0x65F333: fld     [esp+90h+var_64]
0x65F337: call    __CIsqrt
0x65F33C: fstp    [esp+90h+var_64]
0x65F340: fld     [esp+90h+var_64]
0x65F344: fstp    [esp+90h+var_84]
0x65F348: fld     dword ptr ds:0B36BE8h
0x65F34E: fmul    dword ptr ds:0B33E9Ch
0x65F354: fstp    [esp+90h+var_64]
0x65F358: fld     [esp+90h+var_84]
0x65F35C: fld     dword ptr ds:0B3BACCh
0x65F362: fcom    st(1)
0x65F364: fnstsw  ax
0x65F366: test    ah, 1
0x65F369: jnz     short loc_65F375
0x65F36B: fstp    st
0x65F36D: fstp    dword ptr ds:0B3BACCh
0x65F373: jmp     short loc_65F394
0x65F375: fadd    [esp+90h+var_64]
0x65F379: fcom    st(1)
0x65F37B: fnstsw  ax
0x65F37D: test    ah, 41h
0x65F380: jnz     short loc_65F38C
0x65F382: fstp    st
0x65F384: fstp    dword ptr ds:0B3BACCh
0x65F38A: jmp     short loc_65F394
0x65F38C: fstp    st(1)
0x65F38E: fstp    dword ptr ds:0B3BACCh
0x65F394: fld     dword ptr ds:0B3BACCh
0x65F39A: fld     dword ptr ds:0B36B60h
0x65F3A0: fcom    st(1)
0x65F3A2: fnstsw  ax
0x65F3A4: test    ah, 41h
0x65F3A7: jnz     short loc_65F3B9
0x65F3A9: fstp    st(1)
0x65F3AB: fstp    dword ptr ds:0B3BACCh
0x65F3B1: fld     dword ptr ds:0B3BACCh
0x65F3B7: jmp     short loc_65F3BB
0x65F3B9: fstp    st
0x65F3BB: fld     dword ptr ds:0B36B68h
0x65F3C1: fcom    st(1)
0x65F3C3: fnstsw  ax
0x65F3C5: test    ah, 5
0x65F3C8: jp      short loc_65F3DA
0x65F3CA: fstp    st(1)
0x65F3CC: fstp    dword ptr ds:0B3BACCh
0x65F3D2: fld     dword ptr ds:0B3BACCh
0x65F3D8: jmp     short loc_65F3DC
0x65F3DA: fstp    st
0x65F3DC: fld     dword ptr [esp+90h+var_80]
0x65F3E0: mov     ebx, [esp+90h+var_60]
0x65F3E4: fmul    st, st(1)
0x65F3E6: mov     ecx, [esp+90h+var_68]
0x65F3EA: mov     eax, [ecx]
0x65F3EC: mov     edx, [eax+380h]
0x65F3F2: fstp    [esp+90h+var_5C]
0x65F3F6: fld     dword ptr [esp+90h+var_80+4]
0x65F3FA: fmul    st, st(1)
0x65F3FC: fstp    [esp+90h+var_58]
0x65F400: fmul    [esp+90h+var_78]
0x65F404: fstp    [esp+90h+var_54]
0x65F408: fld     [esp+90h+var_5C]
0x65F40C: fadd    dword ptr [ebx]
0x65F40E: fstp    [esp+90h+a3]
0x65F412: fld     [esp+90h+var_58]
0x65F416: fadd    dword ptr [ebx+4]
0x65F419: fstp    [esp+90h+var_48]
0x65F41D: fld     dword ptr [ebx+8]
0x65F420: fadd    [esp+90h+var_54]
0x65F424: fstp    [esp+90h+var_44]
0x65F428: call    edx
0x65F42A: push    40Ch
0x65F42F: mov     esi, eax
0x65F431: call    Menu_GetOpenMenuTile
0x65F436: mov     edi, [esp+94h+var_68]
0x65F43A: add     esp, 4
0x65F43D: test    eax, eax
0x65F43F: jnz     loc_65F554
0x65F445: mov     ecx, edi; this
0x65F447: call    MobileObject_GetCharProxy
0x65F44C: mov     ecx, edi
0x65F44E: mov     ebx, eax
0x65F450: call    sub_5E0660
0x65F455: fsub    qword ptr ds:0A735C8h
0x65F45B: test    esi, esi
0x65F45D: fstp    [esp+90h+var_68]
0x65F461: jz      short loc_65F478
0x65F463: mov     ecx, esi
0x65F465: call    sub_5E0660
0x65F46A: fmul    qword ptr ds:0A2FAA0h
0x65F470: fadd    [esp+90h+var_68]
0x65F474: fstp    [esp+90h+var_68]
0x65F478: fld     [esp+90h+var_68]
0x65F47C: mov     ecx, [edi+1F0h]; this
0x65F482: sub     esp, 8
0x65F485: fstp    [esp+98h+a5]; a5
0x65F489: lea     eax, [esp+98h+a3]
0x65F48D: fld     dword ptr ds:0B14EC0h
0x65F493: fstp    [esp+98h+camera_size]; camera_size
0x65F496: push    eax; a3
0x65F497: push    ebx; a2
0x65F498: call    sub_5328B0
0x65F49D: fldz
0x65F49F: test    al, al
0x65F4A1: jnz     short loc_65F4D9
0x65F4A3: test    esi, esi
0x65F4A5: jz      loc_65F54E
0x65F4AB: sub     esp, 8
0x65F4AE: fstp    [esp+98h+a5]; a5
0x65F4B2: lea     ecx, [esp+98h+a3]
0x65F4B6: fld     dword ptr ds:0A46C30h
0x65F4BC: fstp    [esp+98h+camera_size]; camera_size
0x65F4BF: push    ecx; a3
0x65F4C0: mov     ecx, esi; this
0x65F4C2: call    MobileObject_GetCharProxy
0x65F4C7: mov     ecx, [edi+1F0h]; this
0x65F4CD: push    eax; a2
0x65F4CE: call    sub_5328B0
0x65F4D3: test    al, al
0x65F4D5: jz      short loc_65F550
0x65F4D7: fldz
0x65F4D9: cmp     byte ptr [edi+589h], 0
0x65F4E0: jnz     short loc_65F54E
0x65F4E2: fld     dword ptr ds:0B14E50h
0x65F4E8: fcom    st(1)
0x65F4EA: fnstsw  ax
0x65F4EC: test    ah, 41h
0x65F4EF: jnz     loc_65F5B6
0x65F4F5: fld     dword ptr ds:0B33E9Ch
0x65F4FB: fmul    qword ptr ds:0A3C800h
0x65F501: fsubp   st(1), st
0x65F503: fstp    dword ptr ds:0B14E50h
0x65F509: fcom    dword ptr ds:0B14E50h
0x65F50F: fnstsw  ax
0x65F511: test    ah, 41h
0x65F514: jnz     short loc_65F51E
0x65F516: fstp    dword ptr ds:0B14E50h
0x65F51C: jmp     short loc_65F520
0x65F51E: fstp    st
0x65F520: mov     ecx, edi; a1
0x65F522: call    sub_5EE1B0
0x65F527: test    esi, esi
0x65F529: jz      loc_65F5C8
0x65F52F: fld     dword ptr ds:0B14E50h
0x65F535: mov     ecx, esi; a1
0x65F537: fstp    dword ptr ds:0B14E54h
0x65F53D: mov     ds:0B3BB00h, esi
0x65F543: call    sub_5EE1B0
0x65F548: mov     ebx, [esp+90h+var_60]
0x65F54C: jmp     short loc_65F5C2
0x65F54E: fstp    st
0x65F550: mov     ebx, [esp+90h+var_60]
0x65F554: fld1
0x65F556: fld     dword ptr ds:0B14E50h
0x65F55C: fcom    st(1)
0x65F55E: fnstsw  ax
0x65F560: test    ah, 5
0x65F563: jp      short loc_65F5BE
0x65F565: fld     dword ptr ds:0B33E9Ch
0x65F56B: fmul    qword ptr ds:0A3C800h
0x65F571: faddp   st(1), st
0x65F573: fstp    dword ptr ds:0B14E50h
0x65F579: fcom    dword ptr ds:0B14E50h
0x65F57F: fnstsw  ax
0x65F581: test    ah, 5
0x65F584: jp      short loc_65F58E
0x65F586: fstp    dword ptr ds:0B14E50h
0x65F58C: jmp     short loc_65F590
0x65F58E: fstp    st
0x65F590: mov     ecx, edi; a1
0x65F592: call    sub_5EE1B0
0x65F597: test    esi, esi
0x65F599: jz      short loc_65F5CC
0x65F59B: fld     dword ptr ds:0B14E50h
0x65F5A1: mov     ecx, esi; a1
0x65F5A3: fstp    dword ptr ds:0B14E54h
0x65F5A9: mov     ds:0B3BB00h, esi
0x65F5AF: call    sub_5EE1B0
0x65F5B4: jmp     short loc_65F5C2
0x65F5B6: mov     ebx, [esp+90h+var_60]
0x65F5BA: fstp    st(1)
0x65F5BC: jmp     short loc_65F5C0
0x65F5BE: fstp    st
0x65F5C0: fstp    st
0x65F5C2: test    esi, esi
0x65F5C4: jnz     short loc_65F625
0x65F5C6: jmp     short loc_65F5CC
0x65F5C8: mov     ebx, [esp+90h+var_60]
0x65F5CC: mov     ecx, ds:0B3BB00h; a1
0x65F5D2: test    ecx, ecx
0x65F5D4: jz      short loc_65F625
0x65F5D6: fld     dword ptr ds:0B33E9Ch
0x65F5DC: fmul    qword ptr ds:0A3C800h
0x65F5E2: fadd    dword ptr ds:0B14E54h
0x65F5E8: fstp    dword ptr ds:0B14E54h
0x65F5EE: fld1
0x65F5F0: fcom    dword ptr ds:0B14E54h
0x65F5F6: fnstsw  ax
0x65F5F8: test    ah, 5
0x65F5FB: jp      short loc_65F605
0x65F5FD: fstp    dword ptr ds:0B14E54h
0x65F603: jmp     short loc_65F607
0x65F605: fstp    st
0x65F607: call    sub_5EE1B0
0x65F60C: fld1
0x65F60E: fcomp   dword ptr ds:0B14E54h
0x65F614: fnstsw  ax
0x65F616: test    ah, 44h
0x65F619: jp      short loc_65F625
0x65F61B: mov     dword ptr ds:0B3BB00h, 0
0x65F625: fld     dword ptr [esp+90h+var_80]
0x65F629: mov     eax, [esp+90h+var_50]
0x65F62D: fld     dword ptr ds:0B3BACCh
0x65F633: pop     edi
0x65F634: fld     st
0x65F636: pop     esi
0x65F637: fmulp   st(2), st
0x65F639: fxch    st(1)
0x65F63B: fstp    [esp+88h+var_5C]
0x65F63F: fld     dword ptr [esp+88h+var_80+4]
0x65F643: fmul    st, st(1)
0x65F645: fstp    [esp+88h+var_58]
0x65F649: fmul    [esp+88h+var_78]
0x65F64D: fstp    [esp+88h+var_54]
0x65F651: fld     [esp+88h+var_5C]
0x65F655: fadd    dword ptr [ebx]
0x65F657: fstp    dword ptr [esp+88h+var_74]
0x65F65B: mov     edx, dword ptr [esp+88h+var_74]
0x65F65F: fld     [esp+88h+var_58]
0x65F663: fadd    dword ptr [ebx+4]
0x65F666: fstp    dword ptr [esp+88h+var_74+4]
0x65F66A: mov     ecx, dword ptr [esp+88h+var_74+4]
0x65F66E: fld     dword ptr [ebx+8]
0x65F671: mov     [eax], edx
0x65F673: fadd    [esp+88h+var_54]
0x65F677: mov     [eax+4], ecx
0x65F67A: mov     ecx, [esp+88h+var_4]
0x65F681: pop     ebx
0x65F682: fstp    [esp+84h+var_6C]
0x65F686: mov     edx, [esp+84h+var_6C]
0x65F68A: xor     ecx, esp
0x65F68C: mov     [eax+8], edx
0x65F68F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x65F694: mov     esp, ebp
0x65F696: pop     ebp
0x65F697: retn    0Ch
