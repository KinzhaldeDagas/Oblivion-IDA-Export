0x8E0500: sub     esp, 38h
0x8E0503: push    ebx
0x8E0504: mov     ebx, ds:0BA9DE4h
0x8E050A: push    ebp
0x8E050B: push    esi
0x8E050C: push    edi
0x8E050D: mov     edi, large fs:2Ch
0x8E0514: mov     eax, [edi+ebx*4]
0x8E0517: mov     edx, [eax+1A8h]
0x8E051D: mov     ebp, ecx
0x8E051F: mov     ecx, [eax+1A4h]
0x8E0525: cmp     ecx, edx
0x8E0527: mov     [esp+48h+var_38], ebp
0x8E052B: jnb     short loc_8E0551
0x8E052D: mov     esi, eax
0x8E052F: mov     ecx, [esi+1A4h]
0x8E0535: mov     dword ptr [ecx], offset aTtsimulate; "TtSimulate"
0x8E053B: rdtsc
0x8E053D: mov     [esp+48h+var_34], eax
0x8E0541: mov     edx, [esp+48h+var_34]
0x8E0545: mov     [ecx+4], edx
0x8E0548: add     ecx, 0Ch
0x8E054B: mov     [esi+1A4h], ecx
0x8E0551: fld     [esp+48h+arg_8]
0x8E0555: mov     eax, [esp+48h+arg_8]
0x8E0559: mov     esi, [esp+48h+arg_0]
0x8E055D: fadd    st, st
0x8E055F: mov     [ebp+8], eax
0x8E0562: fstp    [esp+48h+arg_8]
0x8E0566: fld     [esp+48h+arg_4]
0x8E056A: fadd    dword ptr [esi+10h]
0x8E056D: fstp    dword ptr [esi+10h]
0x8E0570: fld     [esp+48h+arg_8]
0x8E0574: fmul    dword ptr ds:0A34BA0h
0x8E057A: fstp    [esp+48h+arg_0]
0x8E057E: mov     edi, edi
0x8E0580: fld     dword ptr [esi+10h]
0x8E0583: fsub    dword ptr [esi+18h]
0x8E0586: fabs
0x8E0588: fcomp   [esp+48h+arg_0]
0x8E058C: fnstsw  ax
0x8E058E: test    ah, 5
0x8E0591: jp      short loc_8E05AE
0x8E0593: fld     [esp+48h+arg_4]
0x8E0597: fdiv    [esp+48h+arg_8]
0x8E059B: fcomp   dword ptr ds:0A2FAACh
0x8E05A1: fnstsw  ax
0x8E05A3: test    ah, 41h
0x8E05A6: jnz     short loc_8E05AE
0x8E05A8: mov     ecx, [esi+18h]
0x8E05AB: mov     [esi+10h], ecx
0x8E05AE: fld     dword ptr [esi+18h]
0x8E05B1: fld     dword ptr [esi+14h]
0x8E05B4: fst     [esp+48h+var_30]
0x8E05B8: fld     st(1)
0x8E05BA: fstp    [esp+48h+var_2C]
0x8E05BE: fxch    st(1)
0x8E05C0: fsub    st, st(1)
0x8E05C2: fstp    [esp+48h+var_28]
0x8E05C6: fstp    st
0x8E05C8: fld     dword ptr ds:0A2FAA8h
0x8E05CE: fld     [esp+48h+var_28]
0x8E05D2: fucompp
0x8E05D4: fnstsw  ax
0x8E05D6: test    ah, 44h
0x8E05D9: jp      short loc_8E05E5
0x8E05DB: mov     [esp+48h+var_24], 0
0x8E05E3: jmp     short loc_8E05F3
0x8E05E5: fld     dword ptr ds:0A2F948h
0x8E05EB: fdiv    [esp+48h+var_28]
0x8E05EF: fstp    [esp+48h+var_24]
0x8E05F3: mov     eax, [ebp+0Ch]
0x8E05F6: fld     dword ptr [esi+18h]
0x8E05F9: test    eax, eax
0x8E05FB: jnz     loc_8E06FD
0x8E0601: fcomp   dword ptr [esi+10h]
0x8E0604: fnstsw  ax
0x8E0606: test    ah, 5
0x8E0609: jp      loc_8E083C
0x8E060F: mov     ecx, esi
0x8E0611: call    sub_8992B0
0x8E0616: mov     edx, [edi+ebx*4]
0x8E0619: mov     ecx, [edx+19Ch]
0x8E061F: test    ecx, ecx
0x8E0621: mov     ebp, eax
0x8E0623: jnz     short loc_8E062B
0x8E0625: mov     ecx, ds:0BA7D9Ch
0x8E062B: mov     eax, [ecx+2Ch]
0x8E062E: sub     eax, [ecx+20h]
0x8E0631: sub     eax, 10h
0x8E0634: cmp     ebp, eax
0x8E0636: jle     short loc_8E065A
0x8E0638: mov     eax, ds:0BA7D98h
0x8E063D: mov     edx, [eax+14h]
0x8E0640: mov     ecx, [eax+28h]
0x8E0643: add     ecx, edx
0x8E0645: mov     edx, [eax+8]
0x8E0648: cmp     edx, ecx
0x8E064A: jg      short loc_8E0650
0x8E064C: xor     edx, edx
0x8E064E: jmp     short loc_8E0652
0x8E0650: sub     edx, ecx
0x8E0652: cmp     ebp, edx
0x8E0654: jg      loc_8E07AD
0x8E065A: fld     [esp+48h+arg_8]
0x8E065E: mov     ecx, [esi+18h]
0x8E0661: fadd    dword ptr [esi+18h]
0x8E0664: mov     [esi+14h], ecx
0x8E0667: fst     dword ptr [esi+18h]
0x8E066A: fld     dword ptr [esi+14h]
0x8E066D: fst     [esp+48h+var_20]
0x8E0671: fld     st(1)
0x8E0673: fstp    [esp+48h+var_1C]
0x8E0677: fxch    st(1)
0x8E0679: fsub    st, st(1)
0x8E067B: fstp    [esp+48h+var_18]
0x8E067F: fstp    st
0x8E0681: fld     dword ptr ds:0A2FAA8h
0x8E0687: fld     [esp+48h+var_18]
0x8E068B: fucompp
0x8E068D: fnstsw  ax
0x8E068F: test    ah, 44h
0x8E0692: jp      short loc_8E069E
0x8E0694: mov     [esp+48h+var_14], 0
0x8E069C: jmp     short loc_8E06AC
0x8E069E: fld     dword ptr ds:0A2F948h
0x8E06A4: fdiv    [esp+48h+var_18]
0x8E06A8: fstp    [esp+48h+var_14]
0x8E06AC: mov     edx, [esp+48h+var_20]
0x8E06B0: mov     ecx, [esp+48h+var_18]
0x8E06B4: mov     eax, [esp+48h+var_1C]
0x8E06B8: mov     [esp+48h+var_30], edx
0x8E06BC: mov     edx, [esp+48h+var_14]
0x8E06C0: mov     [esp+48h+var_24], edx
0x8E06C4: mov     [esp+48h+var_28], ecx
0x8E06C8: mov     ecx, [esi+5Ch]
0x8E06CB: lea     edx, [esp+48h+var_30]
0x8E06CF: push    edx
0x8E06D0: mov     [esp+4Ch+var_2C], eax
0x8E06D4: mov     eax, [ecx]
0x8E06D6: push    esi
0x8E06D7: call    dword ptr [eax+0Ch]
0x8E06DA: mov     eax, [esi+14h]
0x8E06DD: mov     ebp, [esp+48h+var_38]
0x8E06E1: lea     ecx, [esp+48h+var_30]
0x8E06E5: push    ecx
0x8E06E6: push    esi
0x8E06E7: mov     ecx, ebp
0x8E06E9: mov     [esi+0Ch], eax
0x8E06EC: call    sub_8D6E40
0x8E06F1: mov     dword ptr [ebp+0Ch], 1
0x8E06F8: jmp     loc_8E0580
0x8E06FD: fadd    dword ptr [esi+14h]
0x8E0700: fmul    dword ptr ds:0A3D65Ch
0x8E0706: fcomp   dword ptr [esi+10h]
0x8E0709: fnstsw  ax
0x8E070B: test    ah, 5
0x8E070E: jp      loc_8E083C
0x8E0714: fld     dword ptr [esi+18h]
0x8E0717: fld     dword ptr [esi+14h]
0x8E071A: fst     [esp+48h+var_10]
0x8E071E: fld     st(1)
0x8E0720: fstp    [esp+48h+var_C]
0x8E0724: fxch    st(1)
0x8E0726: fsub    st, st(1)
0x8E0728: fstp    [esp+48h+var_8]
0x8E072C: fstp    st
0x8E072E: fld     dword ptr ds:0A2FAA8h
0x8E0734: fld     [esp+48h+var_8]
0x8E0738: fucompp
0x8E073A: fnstsw  ax
0x8E073C: test    ah, 44h
0x8E073F: jp      short loc_8E074B
0x8E0741: mov     [esp+48h+var_4], 0
0x8E0749: jmp     short loc_8E0759
0x8E074B: fld     dword ptr ds:0A2F948h
0x8E0751: fdiv    [esp+48h+var_8]
0x8E0755: fstp    [esp+48h+var_4]
0x8E0759: mov     eax, [esp+48h+var_C]
0x8E075D: mov     edx, [esp+48h+var_10]
0x8E0761: mov     ecx, [esp+48h+var_8]
0x8E0765: mov     [esp+48h+var_2C], eax
0x8E0769: lea     eax, [esp+48h+var_30]
0x8E076D: mov     [esp+48h+var_30], edx
0x8E0771: mov     edx, [esp+48h+var_4]
0x8E0775: push    eax
0x8E0776: mov     [esp+4Ch+var_28], ecx
0x8E077A: push    esi
0x8E077B: mov     ecx, ebp
0x8E077D: mov     [esp+50h+var_24], edx
0x8E0781: call    sub_8D7920
0x8E0786: mov     ecx, ds:0BA7D98h
0x8E078C: cmp     dword ptr [ecx+4], 1
0x8E0790: jz      short loc_8E07F8
0x8E0792: mov     dword ptr [ebp+0Ch], 0
0x8E0799: fld     dword ptr [esi+18h]
0x8E079C: fadd    dword ptr [esi+14h]
0x8E079F: fmul    dword ptr ds:0A3D65Ch
0x8E07A5: fstp    dword ptr [esi+0Ch]
0x8E07A8: jmp     loc_8E0580
0x8E07AD: mov     dword ptr [eax+4], 1
0x8E07B4: mov     eax, [edi+ebx*4]
0x8E07B7: mov     edx, [eax+1A4h]
0x8E07BD: cmp     edx, [eax+1A8h]
0x8E07C3: jnb     short loc_8E07E9
0x8E07C5: mov     edi, eax
0x8E07C7: mov     ecx, [edi+1A4h]
0x8E07CD: mov     dword ptr [ecx], offset aEt; "Et"
0x8E07D3: rdtsc
0x8E07D5: mov     [esp+48h+arg_8], eax
0x8E07D9: mov     eax, [esp+48h+arg_8]
0x8E07DD: mov     [ecx+4], eax
0x8E07E0: add     ecx, 0Ch
0x8E07E3: mov     [edi+1A4h], ecx
0x8E07E9: pop     edi
0x8E07EA: pop     esi
0x8E07EB: pop     ebp
0x8E07EC: mov     eax, 1
0x8E07F1: pop     ebx
0x8E07F2: add     esp, 38h
0x8E07F5: retn    0Ch
0x8E07F8: mov     eax, [edi+ebx*4]
0x8E07FB: mov     ecx, [eax+1A4h]
0x8E0801: cmp     ecx, [eax+1A8h]
0x8E0807: jnb     short loc_8E082D
0x8E0809: mov     edi, eax
0x8E080B: mov     ecx, [edi+1A4h]
0x8E0811: mov     dword ptr [ecx], offset aEt; "Et"
0x8E0817: rdtsc
0x8E0819: mov     [esp+48h+arg_8], eax
0x8E081D: mov     edx, [esp+48h+arg_8]
0x8E0821: mov     [ecx+4], edx
0x8E0824: add     ecx, 0Ch
0x8E0827: mov     [edi+1A4h], ecx
0x8E082D: pop     edi
0x8E082E: pop     esi
0x8E082F: pop     ebp
0x8E0830: mov     eax, 2
0x8E0835: pop     ebx
0x8E0836: add     esp, 38h
0x8E0839: retn    0Ch
0x8E083C: mov     eax, [esi+10h]
0x8E083F: mov     [esi+0Ch], eax
0x8E0842: mov     eax, [edi+ebx*4]
0x8E0845: mov     ecx, [eax+1A4h]
0x8E084B: cmp     ecx, [eax+1A8h]
0x8E0851: jnb     short loc_8E0877
0x8E0853: mov     ebp, eax
0x8E0855: mov     ecx, [ebp+1A4h]
0x8E085B: mov     dword ptr [ecx], offset aTtpostsimulate; "TtPostSimulateCb"
0x8E0861: rdtsc
0x8E0863: mov     [esp+48h+arg_8], eax
0x8E0867: mov     edx, [esp+48h+arg_8]
0x8E086B: mov     [ecx+4], edx
0x8E086E: add     ecx, 0Ch
0x8E0871: mov     [ebp+1A4h], ecx
0x8E0877: fld     dword ptr [esi+10h]
0x8E087A: fld     dword ptr [esi+10h]
0x8E087D: fsub    [esp+48h+arg_4]
0x8E0881: fst     [esp+48h+var_30]
0x8E0885: fld     st(1)
0x8E0887: fstp    [esp+48h+var_2C]
0x8E088B: fxch    st(1)
0x8E088D: fsub    st, st(1)
0x8E088F: fstp    [esp+48h+var_28]
0x8E0893: fstp    st
0x8E0895: fld     dword ptr ds:0A2FAA8h
0x8E089B: fld     [esp+48h+var_28]
0x8E089F: fucompp
0x8E08A1: fnstsw  ax
0x8E08A3: test    ah, 44h
0x8E08A6: jp      short loc_8E08B2
0x8E08A8: mov     [esp+48h+var_24], 0
0x8E08B0: jmp     short loc_8E08C0
0x8E08B2: fld     dword ptr ds:0A2F948h
0x8E08B8: fdiv    [esp+48h+var_28]
0x8E08BC: fstp    [esp+48h+var_24]
0x8E08C0: lea     eax, [esp+48h+var_30]
0x8E08C4: push    eax
0x8E08C5: push    esi
0x8E08C6: call    sub_8DCD60
0x8E08CB: mov     eax, [edi+ebx*4]
0x8E08CE: mov     ecx, [eax+1A4h]
0x8E08D4: mov     edx, [eax+1A8h]
0x8E08DA: add     esp, 8
0x8E08DD: cmp     ecx, edx
0x8E08DF: jnb     short loc_8E0905
0x8E08E1: mov     esi, eax
0x8E08E3: mov     ecx, [esi+1A4h]
0x8E08E9: mov     dword ptr [ecx], offset aEt; "Et"
0x8E08EF: rdtsc
0x8E08F1: mov     [esp+48h+arg_8], eax
0x8E08F5: mov     edx, [esp+48h+arg_8]
0x8E08F9: mov     [ecx+4], edx
0x8E08FC: add     ecx, 0Ch
0x8E08FF: mov     [esi+1A4h], ecx
0x8E0905: mov     eax, [edi+ebx*4]
0x8E0908: mov     ecx, [eax+1A4h]
0x8E090E: cmp     ecx, [eax+1A8h]
0x8E0914: jnb     short loc_8E093A
0x8E0916: mov     edi, eax
0x8E0918: mov     ecx, [edi+1A4h]
0x8E091E: mov     dword ptr [ecx], offset aEt; "Et"
0x8E0924: rdtsc
0x8E0926: mov     [esp+48h+arg_8], eax
0x8E092A: mov     edx, [esp+48h+arg_8]
0x8E092E: mov     [ecx+4], edx
0x8E0931: add     ecx, 0Ch
0x8E0934: mov     [edi+1A4h], ecx
0x8E093A: pop     edi
0x8E093B: pop     esi
0x8E093C: pop     ebp
0x8E093D: xor     eax, eax
0x8E093F: pop     ebx
0x8E0940: add     esp, 38h
0x8E0943: retn    0Ch
