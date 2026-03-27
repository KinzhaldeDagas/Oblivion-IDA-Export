0x69A060: sub     esp, 58h
0x69A063: push    ebx
0x69A064: push    ebp
0x69A065: push    esi
0x69A066: mov     esi, ecx
0x69A068: mov     eax, [esi]
0x69A06A: mov     edx, [eax+30h]
0x69A06D: push    edi
0x69A06E: call    edx
0x69A070: test    eax, eax
0x69A072: jz      loc_69A480
0x69A078: mov     eax, [esi]
0x69A07A: mov     edx, [eax+20h]
0x69A07D: mov     ecx, esi
0x69A07F: call    edx
0x69A081: mov     edi, eax
0x69A083: mov     eax, [esi]
0x69A085: mov     edx, [eax+20h]
0x69A088: mov     ecx, esi
0x69A08A: call    edx
0x69A08C: xor     ebp, ebp
0x69A08E: cmp     eax, ebp
0x69A090: jz      short loc_69A0AB
0x69A092: mov     edx, [eax]
0x69A094: mov     ecx, eax
0x69A096: mov     eax, [edx+190h]
0x69A09C: call    eax
0x69A09E: test    al, al
0x69A0A0: jz      short loc_69A0AB
0x69A0A2: lea     ebx, [esi-5Ch]
0x69A0A5: mov     [esp+68h+var_54], ebx
0x69A0A9: jmp     short loc_69A0B1
0x69A0AB: mov     [esp+68h+var_54], ebp
0x69A0AF: mov     ebx, ebp
0x69A0B1: mov     edx, [esi]
0x69A0B3: mov     eax, [edx+38h]
0x69A0B6: mov     ecx, esi
0x69A0B8: call    eax
0x69A0BA: test    eax, eax
0x69A0BC: jz      short loc_69A0D6
0x69A0BE: mov     edx, [esi]
0x69A0C0: mov     eax, [edx+38h]
0x69A0C3: mov     ecx, esi
0x69A0C5: call    eax
0x69A0C7: mov     edx, [eax]
0x69A0C9: mov     ecx, eax
0x69A0CB: mov     eax, [edx+4]
0x69A0CE: call    eax
0x69A0D0: mov     [esp+68h+var_54+4], eax
0x69A0D4: jmp     short loc_69A0DA
0x69A0D6: mov     [esp+68h+var_54+4], ebp
0x69A0DA: mov     edx, [esi]
0x69A0DC: mov     eax, [edx+30h]
0x69A0DF: push    ebp
0x69A0E0: push    2
0x69A0E2: mov     ecx, esi
0x69A0E4: call    eax
0x69A0E6: mov     ecx, eax
0x69A0E8: add     ecx, 0Ch
0x69A0EB: call    EffectItemList_GetStrongestItem
0x69A0F0: mov     edx, [esi]
0x69A0F2: mov     ebp, eax
0x69A0F4: mov     eax, [edx+30h]
0x69A0F7: push    0
0x69A0F9: mov     ecx, esi
0x69A0FB: mov     [esp+68h+var_3C], ebp
0x69A0FF: call    eax
0x69A101: mov     ecx, eax
0x69A103: call    MagicItem_GetFXEffect
0x69A108: test    ebp, ebp
0x69A10A: mov     [esp+68h+var_4C], eax
0x69A10E: jz      loc_69A480
0x69A114: test    edi, edi
0x69A116: jz      loc_69A480
0x69A11C: mov     edx, [esi]
0x69A11E: mov     eax, [edx+30h]
0x69A121: push    48h ; 'H'
0x69A123: push    454C4554h
0x69A128: mov     ecx, esi
0x69A12A: mov     byte ptr [esp+70h+var_58+3], 1
0x69A12F: call    eax
0x69A131: mov     ecx, eax
0x69A133: add     ecx, 0Ch
0x69A136: call    EffectItemList_HasEffect
0x69A13B: test    al, al
0x69A13D: jz      short loc_69A19C
0x69A13F: mov     edx, [esi]
0x69A141: mov     eax, [edx+30h]
0x69A144: mov     ecx, esi
0x69A146: mov     byte ptr [esp+68h+var_58+3], 0
0x69A14B: call    eax
0x69A14D: test    eax, eax
0x69A14F: jz      short loc_69A19C
0x69A151: lea     ebx, [eax+0Ch]
0x69A154: test    ebx, ebx
0x69A156: jz      short loc_69A198
0x69A158: mov     eax, [ebx+4]
0x69A15B: test    eax, eax
0x69A15D: jz      short loc_69A18C
0x69A15F: cmp     dword ptr [eax], 454C4554h
0x69A165: jnz     short loc_69A187
0x69A167: mov     ebp, [esi]
0x69A169: mov     edx, [ebp+30h]
0x69A16C: push    0
0x69A16E: push    eax
0x69A16F: mov     ecx, esi
0x69A171: call    edx
0x69A173: push    eax
0x69A174: mov     eax, [ebp+40h]
0x69A177: mov     ecx, esi
0x69A179: call    eax
0x69A17B: mov     edx, [esi]
0x69A17D: push    eax
0x69A17E: mov     eax, [edx+28h]
0x69A181: mov     ecx, esi
0x69A183: call    eax
0x69A185: jmp     short loc_69A18C
0x69A187: mov     byte ptr [esp+68h+var_58+3], 1
0x69A18C: mov     ebx, [ebx+8]
0x69A18F: test    ebx, ebx
0x69A191: jz      short loc_69A198
0x69A193: add     ebx, 0FFFFFFFCh
0x69A196: jnz     short loc_69A158
0x69A198: mov     ebx, [esp+68h+var_54]
0x69A19C: test    ebx, ebx
0x69A19E: mov     eax, ds:0B3F9A8h
0x69A1A3: mov     ecx, ds:0B3F9B0h
0x69A1A9: mov     ebp, ds:0B3F9ACh
0x69A1AF: mov     dword ptr [esp+68h+var_24], eax
0x69A1B3: mov     dword ptr [esp+68h+var_24+4], ebp
0x69A1B7: mov     dword ptr [esp+68h+var_1C], ecx
0x69A1BB: mov     [esp+68h+var_30], eax
0x69A1BF: mov     [esp+68h+var_28], ecx
0x69A1C3: jz      loc_69A26F
0x69A1C9: mov     edx, [ebx]
0x69A1CB: mov     eax, [edx+1E0h]
0x69A1D1: mov     ecx, ebx
0x69A1D3: call    eax
0x69A1D5: fstp    [esp+68h+var_28]
0x69A1D9: mov     ecx, ebx
0x69A1DB: call    sub_4A9720
0x69A1E0: fstp    [esp+68h+var_30]
0x69A1E4: mov     edx, [edi]
0x69A1E6: mov     eax, [edx+174h]
0x69A1EC: mov     ecx, edi
0x69A1EE: call    eax
0x69A1F0: mov     ecx, [eax]
0x69A1F2: mov     edx, [eax+4]
0x69A1F5: mov     eax, [eax+8]
0x69A1F8: mov     [esp+68h+var_38], edx
0x69A1FC: mov     edx, [edi]
0x69A1FE: mov     edx, [edx+15Ch]
0x69A204: mov     [esp+68h+var_34], eax
0x69A208: lea     eax, [esp+68h+var_18]
0x69A20C: mov     [esp+68h+var_3C], ecx
0x69A210: push    eax
0x69A211: mov     ecx, edi
0x69A213: call    edx
0x69A215: fld     dword ptr [eax+8]
0x69A218: mov     eax, [edi]
0x69A21A: fstp    qword ptr [esp+68h+var_48]
0x69A21E: mov     edx, [eax+158h]
0x69A224: lea     ecx, [esp+68h+var_C]
0x69A228: push    ecx
0x69A229: mov     ecx, edi
0x69A22B: call    edx
0x69A22D: fld     dword ptr [eax+8]
0x69A230: fsubr   qword ptr [esp+68h+var_48]
0x69A234: fstp    [esp+68h+var_48]
0x69A238: fld     [esp+68h+var_48]
0x69A23C: fmul    qword ptr ds:0A56E18h
0x69A242: fstp    dword ptr [esp+68h+var_1C]
0x69A246: fld     dword ptr [esp+68h+var_24]
0x69A24A: fadd    [esp+68h+var_3C]
0x69A24E: fstp    [esp+68h+var_3C]
0x69A252: mov     ebx, [esp+68h+var_3C]
0x69A256: fld     [esp+68h+var_38]
0x69A25A: fadd    dword ptr [esp+68h+var_24+4]
0x69A25E: fstp    [esp+68h+var_38]
0x69A262: fld     [esp+68h+var_34]
0x69A266: fadd    dword ptr [esp+68h+var_1C]
0x69A26A: jmp     loc_69A32C
0x69A26F: mov     eax, [esp+68h+var_4C]
0x69A273: fld     dword ptr [eax+74h]
0x69A276: mov     ecx, [esp+68h+var_54+4]
0x69A27A: fmul    dword ptr ds:0B37EE8h
0x69A280: push    2; int
0x69A282: sub     esp, 8
0x69A285: lea     edx, [esp+74h+var_C]
0x69A289: fstp    [esp+74h+var_48]
0x69A28D: fldz
0x69A28F: fstp    [esp+74h+var_70]; float
0x69A293: fld     [esp+74h+var_48]
0x69A297: fstp    [esp+74h+var_74]; int
0x69A29A: push    ecx; float
0x69A29B: push    edi; int
0x69A29C: push    edx; int
0x69A29D: call    sub_619B10
0x69A2A2: fld     dword ptr [eax]
0x69A2A4: fadd    dword ptr [edi+20h]
0x69A2A7: mov     edx, [edi]
0x69A2A9: add     esp, 18h
0x69A2AC: fstp    dword ptr [esp+68h+var_24]
0x69A2B0: fld     dword ptr [eax+4]
0x69A2B3: fadd    dword ptr [edi+24h]
0x69A2B6: fstp    dword ptr [esp+68h+var_24+4]
0x69A2BA: mov     ebp, dword ptr [esp+68h+var_24+4]
0x69A2BE: fld     dword ptr [eax+8]
0x69A2C1: mov     eax, dword ptr [esp+68h+var_24]
0x69A2C5: fadd    dword ptr [edi+28h]
0x69A2C8: mov     [esp+68h+var_30], eax
0x69A2CC: mov     eax, [edx+174h]
0x69A2D2: fstp    dword ptr [esp+68h+var_1C]
0x69A2D6: mov     ecx, dword ptr [esp+68h+var_1C]
0x69A2DA: mov     [esp+68h+var_28], ecx
0x69A2DE: mov     ecx, edi
0x69A2E0: call    eax
0x69A2E2: mov     ecx, [eax+4]
0x69A2E5: mov     edx, [eax+8]
0x69A2E8: mov     ebx, [eax]
0x69A2EA: mov     eax, [edi]
0x69A2EC: mov     [esp+68h+var_38], ecx
0x69A2F0: lea     ecx, [esp+68h+var_C]
0x69A2F4: mov     [esp+68h+var_34], edx
0x69A2F8: mov     edx, [eax+15Ch]
0x69A2FE: push    ecx
0x69A2FF: mov     ecx, edi
0x69A301: call    edx
0x69A303: fld     dword ptr [eax+8]
0x69A306: mov     eax, [edi]
0x69A308: fstp    qword ptr [esp+68h+var_48]
0x69A30C: mov     edx, [eax+158h]
0x69A312: lea     ecx, [esp+68h+var_18]
0x69A316: push    ecx
0x69A317: mov     ecx, edi
0x69A319: call    edx
0x69A31B: fld     dword ptr [eax+8]
0x69A31E: fsubr   qword ptr [esp+68h+var_48]
0x69A322: fmul    qword ptr ds:0A2FAA0h
0x69A328: fadd    [esp+68h+var_34]
0x69A32C: mov     eax, [esi]
0x69A32E: fstp    [esp+68h+var_34]
0x69A332: mov     edx, [eax+24h]
0x69A335: mov     ecx, esi
0x69A337: call    edx
0x69A339: test    eax, eax
0x69A33B: jz      short loc_69A355
0x69A33D: mov     ecx, [eax+8Ch]
0x69A343: mov     ebx, [eax+88h]
0x69A349: mov     edi, [eax+90h]
0x69A34F: mov     [esp+68h+var_38], ecx
0x69A353: jmp     short loc_69A359
0x69A355: mov     edi, [esp+68h+var_34]
0x69A359: mov     eax, ds:0B333C4h
0x69A35E: test    eax, eax
0x69A360: jz      short loc_69A367
0x69A362: add     eax, 5Ch ; '\'
0x69A365: jmp     short loc_69A369
0x69A367: xor     eax, eax
0x69A369: cmp     esi, eax
0x69A36B: jz      loc_69A40B
0x69A371: cmp     [esp+68h+var_54], 0
0x69A376: jz      loc_69A40B
0x69A37C: cmp     [esp+68h+var_54+4], 0
0x69A381: jz      loc_69A40B
0x69A387: mov     eax, [esp+68h+var_4C]
0x69A38B: test    eax, eax
0x69A38D: jz      short loc_69A394
0x69A38F: fld     dword ptr [eax+74h]
0x69A392: jmp     short loc_69A396
0x69A394: fld1
0x69A396: mov     ecx, offset flt_B37EE8
0x69A39B: fstp    [esp+68h+var_48]
0x69A39F: call    GameSetting_GetSafeFloatPointer
0x69A3A4: fld     [esp+68h+var_48]
0x69A3A8: fmul    dword ptr [eax]
0x69A3AA: mov     ecx, [esp+68h+var_54]
0x69A3AE: mov     edx, [ecx]
0x69A3B0: mov     eax, [edx+330h]
0x69A3B6: fstp    [esp+68h+var_48]
0x69A3BA: call    eax
0x69A3BC: test    eax, eax
0x69A3BE: jz      short loc_69A3C8
0x69A3C0: mov     eax, [eax+180h]
0x69A3C6: jmp     short loc_69A3CD
0x69A3C8: mov     eax, 1
0x69A3CD: fldz
0x69A3CF: mov     ecx, [esp+68h+var_54+4]
0x69A3D3: mov     edx, [esp+68h+var_38]
0x69A3D7: push    eax
0x69A3D8: sub     esp, 8
0x69A3DB: fstp    [esp+74h+var_70]
0x69A3DF: fld     [esp+74h+var_48]
0x69A3E3: fstp    [esp+74h+var_74]
0x69A3E6: push    ecx
0x69A3E7: sub     esp, 0Ch
0x69A3EA: mov     eax, esp
0x69A3EC: mov     [eax], ebx
0x69A3EE: mov     [eax+4], edx
0x69A3F1: mov     [eax+8], edi
0x69A3F4: lea     eax, [esp+84h+var_C]
0x69A3F8: push    eax
0x69A3F9: call    sub_6159C0
0x69A3FE: mov     ecx, [eax]
0x69A400: mov     ebp, [eax+4]
0x69A403: mov     edx, [eax+8]
0x69A406: add     esp, 20h
0x69A409: jmp     short loc_69A413
0x69A40B: mov     ecx, [esp+68h+var_30]
0x69A40F: mov     edx, [esp+68h+var_28]
0x69A413: cmp     byte ptr [esp+68h+var_58+3], 0
0x69A418: jz      short loc_69A462
0x69A41A: sub     esp, 0Ch
0x69A41D: mov     eax, esp
0x69A41F: mov     [eax], ecx
0x69A421: mov     ecx, [esp+74h+var_38]
0x69A425: mov     [eax+4], ebp
0x69A428: mov     [eax+8], edx
0x69A42B: mov     edx, [esp+74h+var_4C]
0x69A42F: sub     esp, 0Ch
0x69A432: mov     eax, esp
0x69A434: mov     [eax], ebx
0x69A436: mov     [eax+4], ecx
0x69A439: mov     [eax+8], edi
0x69A43C: mov     eax, [esp+80h+var_40]
0x69A440: push    edx
0x69A441: mov     edx, [esi]
0x69A443: push    eax
0x69A444: mov     eax, [edx+30h]
0x69A447: mov     ecx, esi
0x69A449: call    eax
0x69A44B: mov     ecx, [esi+4]
0x69A44E: push    eax
0x69A44F: push    ecx
0x69A450: push    0
0x69A452: push    esi
0x69A453: call    sub_69F490
0x69A458: add     esp, 30h
0x69A45B: mov     dword ptr [esi+4], 0
0x69A462: mov     edi, [esi+4]
0x69A465: test    edi, edi
0x69A467: jz      short loc_69A479
0x69A469: mov     ecx, edi; this
0x69A46B: call    MagicCaster_CastingVFX_destr
0x69A470: push    edi
0x69A471: call    FormHeapFree
0x69A476: add     esp, 4
0x69A479: mov     dword ptr [esi+4], 0
0x69A480: pop     edi
0x69A481: pop     esi
0x69A482: pop     ebp
0x69A483: pop     ebx
0x69A484: add     esp, 58h
0x69A487: retn
