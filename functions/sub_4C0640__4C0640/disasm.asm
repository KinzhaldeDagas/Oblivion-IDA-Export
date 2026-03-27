0x4C0640: push    0FFFFFFFFh
0x4C0642: push    offset SEH_4C0640
0x4C0647: mov     eax, large fs:0
0x4C064D: push    eax
0x4C064E: sub     esp, 2Ch
0x4C0651: push    ebx
0x4C0652: push    ebp
0x4C0653: push    esi
0x4C0654: push    edi
0x4C0655: mov     eax, ds:0B30AACh
0x4C065A: xor     eax, esp
0x4C065C: push    eax
0x4C065D: lea     eax, [esp+4Ch+var_C]
0x4C0661: mov     large fs:0, eax
0x4C0667: mov     [esp+4Ch+var_38], ecx
0x4C066B: cmp     dword ptr [ecx+24h], 0
0x4C066F: jnz     short loc_4C0687
0x4C0671: xor     al, al
0x4C0673: mov     ecx, [esp+4Ch+var_C]
0x4C0677: mov     large fs:0, ecx
0x4C067E: pop     ecx
0x4C067F: pop     edi
0x4C0680: pop     esi
0x4C0681: pop     ebp
0x4C0682: pop     ebx
0x4C0683: add     esp, 38h
0x4C0686: retn
0x4C0687: fldz
0x4C0689: fld     dword ptr ds:0B08B6Ch
0x4C068F: fcom    st(1)
0x4C0691: fnstsw  ax
0x4C0693: fstp    st(1)
0x4C0695: test    ah, 5
0x4C0698: jp      short loc_4C069E
0x4C069A: fstp    st
0x4C069C: fldz
0x4C069E: fstp    [esp+4Ch+var_30]
0x4C06A2: fld1
0x4C06A4: fld     [esp+4Ch+var_30]
0x4C06A8: fcom    st(1)
0x4C06AA: fnstsw  ax
0x4C06AC: fstp    st(1)
0x4C06AE: test    ah, 41h
0x4C06B1: jnz     short loc_4C06BB
0x4C06B3: fstp    st
0x4C06B5: fld     qword ptr ds:0A45EB8h
0x4C06BB: mov     eax, ds:0B08B5Ch
0x4C06C0: fstp    [esp+4Ch+var_30]
0x4C06C4: mov     [esp+4Ch+var_14], eax
0x4C06C8: mov     eax, ds:0B08B64h
0x4C06CD: cmp     eax, 1
0x4C06D0: mov     ds:0B35BF0h, eax
0x4C06D5: jz      short loc_4C06F0
0x4C06D7: cmp     eax, 2
0x4C06DA: jz      short loc_4C06F0
0x4C06DC: cmp     eax, 4
0x4C06DF: jz      short loc_4C06F0
0x4C06E1: cmp     eax, 8
0x4C06E4: jz      short loc_4C06F0
0x4C06E6: mov     eax, 2
0x4C06EB: mov     ds:0B35BF0h, eax
0x4C06F0: mov     [esp+4Ch+var_34], 0
0x4C06F8: jmp     short loc_4C0700
0x4C06FA: align 10h
0x4C0700: xor     edi, edi
0x4C0702: cmp     eax, 10h
0x4C0705: mov     [esp+4Ch+var_18], eax
0x4C0709: jge     loc_4C0FF8
0x4C070F: nop
0x4C0710: cmp     eax, 10h
0x4C0713: mov     [esp+4Ch+var_1C], eax
0x4C0717: jge     loc_4C0FE4
0x4C071D: lea     ecx, [ecx+0]
0x4C0720: xor     ecx, ecx
0x4C0722: mov     eax, 10h
0x4C0727: mov     edx, 4
0x4C072C: mul     edx
0x4C072E: seto    cl
0x4C0731: neg     ecx
0x4C0733: or      ecx, eax
0x4C0735: push    ecx; Size
0x4C0736: call    FormHeapAlloc
0x4C073B: push    40h ; '@'
0x4C073D: mov     ebp, eax
0x4C073F: push    0
0x4C0741: push    ebp
0x4C0742: call    __memset
0x4C0747: mov     eax, [esp+5Ch+var_1C]
0x4C074B: mov     edx, [esp+5Ch+var_34]
0x4C074F: mov     ebx, eax
0x4C0751: shl     ebx, 4
0x4C0754: add     ebx, [esp+5Ch+var_18]
0x4C0758: add     esp, 10h
0x4C075B: add     ebx, eax
0x4C075D: mov     eax, [esp+4Ch+var_38]
0x4C0761: mov     ecx, [eax+24h]
0x4C0764: cmp     dword ptr [ecx+edx*4+20h], 0
0x4C0769: lea     eax, [ecx+edx*4+20h]
0x4C076D: jz      loc_4C0AF8
0x4C0773: mov     ecx, [eax]; this
0x4C0775: call    TESObjectREFR_GetPosition
0x4C077A: test    eax, eax
0x4C077C: mov     [esp+4Ch+var_24], eax
0x4C0780: mov     [esp+4Ch+var_28], 0
0x4C0788: jz      loc_4C0AF8
0x4C078E: cmp     edi, 10h
0x4C0791: jge     loc_4C0AF8
0x4C0797: mov     eax, [esp+4Ch+var_28]
0x4C079B: cmp     eax, [esp+4Ch+var_14]
0x4C079F: jg      loc_4C0AF8
0x4C07A5: mov     ecx, [esp+4Ch+var_24]
0x4C07A9: mov     esi, [ecx]
0x4C07AB: test    esi, esi
0x4C07AD: jz      loc_4C0AE5
0x4C07B3: add     [esp+4Ch+var_28], 1
0x4C07B8: push    44h ; 'D'; Size
0x4C07BA: call    FormHeapAlloc
0x4C07BF: add     esp, 4
0x4C07C2: mov     [esp+4Ch+var_20], eax
0x4C07C6: test    eax, eax
0x4C07C8: mov     [esp+4Ch+var_4], 0
0x4C07D0: jz      short loc_4C07DF
0x4C07D2: mov     ecx, eax
0x4C07D4: call    sub_7C28E0
0x4C07D9: mov     eax, [esp+4Ch+var_20]
0x4C07DD: jmp     short loc_4C07E1
0x4C07DF: xor     eax, eax
0x4C07E1: push    44h ; 'D'
0x4C07E3: push    0
0x4C07E5: push    eax
0x4C07E6: mov     [esp+58h+var_4], 0FFFFFFFFh
0x4C07EE: mov     [ebp+edi*4+0], eax
0x4C07F2: call    __memset
0x4C07F7: add     esp, 0Ch
0x4C07FA: mov     ecx, esi
0x4C07FC: call    sub_4AF3F0
0x4C0801: mov     edx, [ebp+edi*4+0]
0x4C0805: mov     [edx], eax
0x4C0807: mov     eax, [esi+0Ch]
0x4C080A: mov     ecx, [ebp+edi*4+0]
0x4C080E: mov     [ecx+4], eax
0x4C0811: fld     dword ptr ds:0B080DCh
0x4C0817: mov     edx, [ebp+edi*4+0]
0x4C081B: fstp    dword ptr [edx+14h]
0x4C081E: mov     eax, [esi]
0x4C0820: mov     edx, [eax+168h]
0x4C0826: mov     ecx, esi
0x4C0828: call    edx
0x4C082A: mov     eax, [ebp+edi*4+0]
0x4C082E: fstp    dword ptr [eax+18h]
0x4C0831: mov     edx, [esi]
0x4C0833: mov     eax, [edx+160h]
0x4C0839: mov     ecx, esi
0x4C083B: call    eax
0x4C083D: mov     ecx, [ebp+edi*4+0]
0x4C0841: fstp    dword ptr [ecx+10h]
0x4C0844: mov     edx, [esi]
0x4C0846: mov     eax, [edx+150h]
0x4C084C: mov     ecx, esi
0x4C084E: call    eax
0x4C0850: mov     ecx, [ebp+edi*4+0]
0x4C0854: fstp    dword ptr [ecx+8]
0x4C0857: mov     edx, [esi]
0x4C0859: mov     eax, [edx+158h]
0x4C085F: mov     ecx, esi
0x4C0861: call    eax
0x4C0863: mov     ecx, [ebp+edi*4+0]
0x4C0867: fstp    dword ptr [ecx+0Ch]
0x4C086A: mov     edx, [esi]
0x4C086C: mov     eax, [edx+170h]
0x4C0872: mov     ecx, esi
0x4C0874: call    eax
0x4C0876: mov     ecx, [ebp+edi*4+0]
0x4C087A: mov     [ecx+1Ch], al
0x4C087D: mov     edx, [esi]
0x4C087F: mov     eax, [edx+180h]
0x4C0885: mov     ecx, esi
0x4C0887: call    eax
0x4C0889: mov     ecx, [ebp+edi*4+0]
0x4C088D: mov     [ecx+1Eh], al
0x4C0890: mov     edx, [esi]
0x4C0892: mov     eax, [edx+178h]
0x4C0898: mov     ecx, esi
0x4C089A: call    eax
0x4C089C: mov     ecx, [ebp+edi*4+0]
0x4C08A0: mov     [ecx+1Dh], al
0x4C08A3: mov     edx, [esi]
0x4C08A5: mov     eax, [edx+120h]
0x4C08AB: mov     ecx, esi
0x4C08AD: call    eax
0x4C08AF: movzx   ecx, al
0x4C08B2: mov     [esp+4Ch+var_20], ecx
0x4C08B6: mov     eax, [esp+4Ch+var_34]
0x4C08BA: fild    [esp+4Ch+var_20]
0x4C08BE: mov     ecx, [esp+4Ch+var_38]
0x4C08C2: lea     edx, [ebx-12h]
0x4C08C5: push    edx; __int16
0x4C08C6: fdiv    qword ptr ds:0A309F0h
0x4C08CC: push    eax; float
0x4C08CD: fstp    [esp+54h+var_2C]
0x4C08D1: call    sub_4BF160
0x4C08D6: fld     [esp+4Ch+var_30]
0x4C08DA: fcompp
0x4C08DC: fnstsw  ax
0x4C08DE: test    ah, 5
0x4C08E1: jp      short loc_4C08E9
0x4C08E3: fld     [esp+4Ch+var_2C]
0x4C08E7: jmp     short loc_4C08EB
0x4C08E9: fldz
0x4C08EB: mov     esi, [ebp+edi*4+0]
0x4C08EF: fstp    [esp+4Ch+var_20]
0x4C08F3: mov     edx, [esp+4Ch+var_34]
0x4C08F7: fld     [esp+4Ch+var_20]
0x4C08FB: lea     ecx, [ebx-11h]
0x4C08FE: fstp    dword ptr [esi+20h]
0x4C0901: push    ecx; __int16
0x4C0902: mov     ecx, [esp+50h+var_38]
0x4C0906: lea     eax, [esi+20h]
0x4C0909: push    edx; float
0x4C090A: mov     [esp+54h+var_10], eax
0x4C090E: call    sub_4BF160
0x4C0913: fld     [esp+4Ch+var_30]
0x4C0917: fcompp
0x4C0919: fnstsw  ax
0x4C091B: test    ah, 5
0x4C091E: jp      short loc_4C0926
0x4C0920: fld     [esp+4Ch+var_2C]
0x4C0924: jmp     short loc_4C0928
0x4C0926: fldz
0x4C0928: mov     ecx, [esp+4Ch+var_34]
0x4C092C: fstp    [esp+4Ch+var_20]
0x4C0930: fld     [esp+4Ch+var_20]
0x4C0934: lea     eax, [ebx-10h]
0x4C0937: push    eax; __int16
0x4C0938: fstp    dword ptr [esi+24h]
0x4C093B: push    ecx; float
0x4C093C: mov     ecx, [esp+54h+var_38]
0x4C0940: call    sub_4BF160
0x4C0945: fld     [esp+4Ch+var_30]
0x4C0949: fcompp
0x4C094B: fnstsw  ax
0x4C094D: test    ah, 5
0x4C0950: jp      short loc_4C0958
0x4C0952: fld     [esp+4Ch+var_2C]
0x4C0956: jmp     short loc_4C095A
0x4C0958: fldz
0x4C095A: mov     eax, [esp+4Ch+var_34]
0x4C095E: fstp    [esp+4Ch+var_20]
0x4C0962: fld     [esp+4Ch+var_20]
0x4C0966: mov     ecx, [esp+4Ch+var_38]
0x4C096A: lea     edx, [ebx-1]
0x4C096D: fstp    dword ptr [esi+28h]
0x4C0970: push    edx; __int16
0x4C0971: push    eax; float
0x4C0972: call    sub_4BF160
0x4C0977: fld     [esp+4Ch+var_30]
0x4C097B: fcompp
0x4C097D: fnstsw  ax
0x4C097F: test    ah, 5
0x4C0982: jp      short loc_4C098A
0x4C0984: fld     [esp+4Ch+var_2C]
0x4C0988: jmp     short loc_4C098C
0x4C098A: fldz
0x4C098C: mov     ecx, [esp+4Ch+var_34]
0x4C0990: fstp    [esp+4Ch+var_20]
0x4C0994: fld     [esp+4Ch+var_20]
0x4C0998: push    ebx; __int16
0x4C0999: push    ecx; float
0x4C099A: fstp    dword ptr [esi+2Ch]
0x4C099D: mov     ecx, [esp+54h+var_38]
0x4C09A1: call    sub_4BF160
0x4C09A6: fld     [esp+4Ch+var_30]
0x4C09AA: fcompp
0x4C09AC: fnstsw  ax
0x4C09AE: test    ah, 5
0x4C09B1: jp      short loc_4C09B9
0x4C09B3: fld     [esp+4Ch+var_2C]
0x4C09B7: jmp     short loc_4C09BB
0x4C09B9: fldz
0x4C09BB: mov     eax, [esp+4Ch+var_34]
0x4C09BF: fstp    [esp+4Ch+var_20]
0x4C09C3: fld     [esp+4Ch+var_20]
0x4C09C7: mov     ecx, [esp+4Ch+var_38]
0x4C09CB: lea     edx, [ebx+1]
0x4C09CE: fstp    dword ptr [esi+30h]
0x4C09D1: push    edx; __int16
0x4C09D2: push    eax; float
0x4C09D3: call    sub_4BF160
0x4C09D8: fld     [esp+4Ch+var_30]
0x4C09DC: fcompp
0x4C09DE: fnstsw  ax
0x4C09E0: test    ah, 5
0x4C09E3: jp      short loc_4C09EB
0x4C09E5: fld     [esp+4Ch+var_2C]
0x4C09E9: jmp     short loc_4C09ED
0x4C09EB: fldz
0x4C09ED: mov     edx, [esp+4Ch+var_34]
0x4C09F1: fstp    [esp+4Ch+var_20]
0x4C09F5: fld     [esp+4Ch+var_20]
0x4C09F9: lea     ecx, [ebx+10h]
0x4C09FC: push    ecx; __int16
0x4C09FD: fstp    dword ptr [esi+34h]
0x4C0A00: mov     ecx, [esp+50h+var_38]
0x4C0A04: push    edx; float
0x4C0A05: call    sub_4BF160
0x4C0A0A: fld     [esp+4Ch+var_30]
0x4C0A0E: fcompp
0x4C0A10: fnstsw  ax
0x4C0A12: test    ah, 5
0x4C0A15: jp      short loc_4C0A1D
0x4C0A17: fld     [esp+4Ch+var_2C]
0x4C0A1B: jmp     short loc_4C0A1F
0x4C0A1D: fldz
0x4C0A1F: mov     ecx, [esp+4Ch+var_34]
0x4C0A23: fstp    [esp+4Ch+var_20]
0x4C0A27: fld     [esp+4Ch+var_20]
0x4C0A2B: lea     eax, [ebx+11h]
0x4C0A2E: push    eax; __int16
0x4C0A2F: fstp    dword ptr [esi+38h]
0x4C0A32: push    ecx; float
0x4C0A33: mov     ecx, [esp+54h+var_38]
0x4C0A37: call    sub_4BF160
0x4C0A3C: fld     [esp+4Ch+var_30]
0x4C0A40: fcompp
0x4C0A42: fnstsw  ax
0x4C0A44: test    ah, 5
0x4C0A47: jp      short loc_4C0A4F
0x4C0A49: fld     [esp+4Ch+var_2C]
0x4C0A4D: jmp     short loc_4C0A51
0x4C0A4F: fldz
0x4C0A51: mov     eax, [esp+4Ch+var_34]
0x4C0A55: fstp    [esp+4Ch+var_20]
0x4C0A59: fld     [esp+4Ch+var_20]
0x4C0A5D: mov     ecx, [esp+4Ch+var_38]
0x4C0A61: lea     edx, [ebx+12h]
0x4C0A64: fstp    dword ptr [esi+3Ch]
0x4C0A67: push    edx; __int16
0x4C0A68: push    eax; float
0x4C0A69: call    sub_4BF160
0x4C0A6E: fld     [esp+4Ch+var_30]
0x4C0A72: fcom    st(1)
0x4C0A74: fnstsw  ax
0x4C0A76: fstp    st(1)
0x4C0A78: test    ah, 5
0x4C0A7B: jp      short loc_4C0A83
0x4C0A7D: fld     [esp+4Ch+var_2C]
0x4C0A81: jmp     short loc_4C0A85
0x4C0A83: fldz
0x4C0A85: mov     ecx, [esp+4Ch+var_10]
0x4C0A89: fstp    [esp+4Ch+var_20]
0x4C0A8D: fld     [esp+4Ch+var_20]
0x4C0A91: mov     eax, ecx
0x4C0A93: fstp    dword ptr [esi+40h]
0x4C0A96: mov     edx, 9
0x4C0A9B: fldz
0x4C0A9D: fstp    [esp+4Ch+var_2C]
0x4C0AA1: fld     dword ptr [eax]
0x4C0AA3: add     eax, 4
0x4C0AA6: sub     edx, 1
0x4C0AA9: fadd    [esp+4Ch+var_2C]
0x4C0AAD: fstp    [esp+4Ch+var_2C]
0x4C0AB1: jnz     short loc_4C0AA1
0x4C0AB3: fld     [esp+4Ch+var_2C]
0x4C0AB7: fdiv    qword ptr ds:0A45EB0h
0x4C0ABD: fcompp
0x4C0ABF: fnstsw  ax
0x4C0AC1: test    ah, 5
0x4C0AC4: jp      short loc_4C0AE2
0x4C0AC6: xor     eax, eax
0x4C0AC8: mov     [ecx], eax
0x4C0ACA: mov     [ecx+4], eax
0x4C0ACD: mov     [ecx+8], eax
0x4C0AD0: mov     [ecx+0Ch], eax
0x4C0AD3: mov     [ecx+10h], eax
0x4C0AD6: mov     [ecx+14h], eax
0x4C0AD9: mov     [ecx+18h], eax
0x4C0ADC: mov     [ecx+1Ch], eax
0x4C0ADF: mov     [ecx+20h], eax
0x4C0AE2: add     edi, 1
0x4C0AE5: mov     ecx, [esp+4Ch+var_24]
0x4C0AE9: mov     eax, [ecx+4]
0x4C0AEC: test    eax, eax
0x4C0AEE: mov     [esp+4Ch+var_24], eax
0x4C0AF2: jnz     loc_4C078E
0x4C0AF8: fld     qword ptr ds:0A2FC80h
0x4C0AFE: mov     [esp+4Ch+var_20], 0
0x4C0B06: mov     edx, [esp+4Ch+var_38]
0x4C0B0A: mov     ecx, [esp+4Ch+var_34]
0x4C0B0E: mov     eax, [edx+24h]
0x4C0B11: mov     edx, [eax+ecx*4+30h]
0x4C0B15: mov     ecx, [esp+4Ch+var_20]
0x4C0B19: cmp     dword ptr [edx+ecx], 0
0x4C0B1D: lea     esi, [edx+ecx]
0x4C0B20: jz      loc_4C0F8A
0x4C0B26: mov     edx, [esp+4Ch+var_34]
0x4C0B2A: cmp     dword ptr [eax+edx*4+40h], 0
0x4C0B2F: jz      loc_4C0F8A
0x4C0B35: mov     ecx, edx
0x4C0B37: mov     ecx, [eax+ecx*4+40h]
0x4C0B3B: mov     eax, [ecx+ebx*4-48h]
0x4C0B3F: mov     edx, [esp+4Ch+var_20]
0x4C0B43: fld     dword ptr [eax+edx]
0x4C0B46: fcomp   st(1)
0x4C0B48: fnstsw  ax
0x4C0B4A: test    ah, 41h
0x4C0B4D: jz      loc_4C0BD6
0x4C0B53: mov     eax, [ecx+ebx*4-44h]
0x4C0B57: fld     dword ptr [eax+edx]
0x4C0B5A: fcomp   st(1)
0x4C0B5C: fnstsw  ax
0x4C0B5E: test    ah, 41h
0x4C0B61: jz      short loc_4C0BD6
0x4C0B63: mov     eax, [ecx+ebx*4-40h]
0x4C0B67: fld     dword ptr [eax+edx]
0x4C0B6A: fcomp   st(1)
0x4C0B6C: fnstsw  ax
0x4C0B6E: test    ah, 41h
0x4C0B71: jz      short loc_4C0BD6
0x4C0B73: mov     eax, [ecx+ebx*4-4]
0x4C0B77: fld     dword ptr [eax+edx]
0x4C0B7A: fcomp   st(1)
0x4C0B7C: fnstsw  ax
0x4C0B7E: test    ah, 41h
0x4C0B81: jz      short loc_4C0BD6
0x4C0B83: mov     eax, [ecx+ebx*4]
0x4C0B86: fld     dword ptr [edx+eax]
0x4C0B89: fcomp   st(1)
0x4C0B8B: fnstsw  ax
0x4C0B8D: test    ah, 41h
0x4C0B90: jz      short loc_4C0BD6
0x4C0B92: mov     eax, [ecx+ebx*4+4]
0x4C0B96: fld     dword ptr [eax+edx]
0x4C0B99: fcomp   st(1)
0x4C0B9B: fnstsw  ax
0x4C0B9D: test    ah, 41h
0x4C0BA0: jz      short loc_4C0BD6
0x4C0BA2: mov     eax, [ecx+ebx*4+40h]
0x4C0BA6: fld     dword ptr [eax+edx]
0x4C0BA9: fcomp   st(1)
0x4C0BAB: fnstsw  ax
0x4C0BAD: test    ah, 41h
0x4C0BB0: jz      short loc_4C0BD6
0x4C0BB2: mov     eax, [ecx+ebx*4+44h]
0x4C0BB6: fld     dword ptr [eax+edx]
0x4C0BB9: fcomp   st(1)
0x4C0BBB: fnstsw  ax
0x4C0BBD: test    ah, 41h
0x4C0BC0: jz      short loc_4C0BD6
0x4C0BC2: mov     ecx, [ecx+ebx*4+48h]
0x4C0BC6: fld     dword ptr [ecx+edx]
0x4C0BC9: fcomp   st(1)
0x4C0BCB: fnstsw  ax
0x4C0BCD: test    ah, 41h
0x4C0BD0: jnz     loc_4C0F8A
0x4C0BD6: mov     ecx, [esi]; this
0x4C0BD8: fstp    st
0x4C0BDA: mov     [esp+4Ch+var_28], 0
0x4C0BE2: call    TESObjectREFR_GetPosition
0x4C0BE7: test    eax, eax
0x4C0BE9: mov     [esp+4Ch+var_24], eax
0x4C0BED: jz      loc_4C0F84
0x4C0BF3: cmp     edi, 10h
0x4C0BF6: jge     loc_4C0F84
0x4C0BFC: mov     edx, [esp+4Ch+var_14]
0x4C0C00: cmp     [esp+4Ch+var_28], edx
0x4C0C04: jg      loc_4C0F84
0x4C0C0A: mov     eax, [esp+4Ch+var_24]
0x4C0C0E: mov     esi, [eax]
0x4C0C10: test    esi, esi
0x4C0C12: jz      loc_4C0F71
0x4C0C18: push    44h ; 'D'; Size
0x4C0C1A: call    FormHeapAlloc
0x4C0C1F: add     esp, 4
0x4C0C22: mov     [esp+4Ch+var_2C], eax
0x4C0C26: test    eax, eax
0x4C0C28: mov     [esp+4Ch+var_4], 1
0x4C0C30: jz      short loc_4C0C3F
0x4C0C32: mov     ecx, eax
0x4C0C34: call    sub_7C28E0
0x4C0C39: mov     eax, [esp+4Ch+var_2C]
0x4C0C3D: jmp     short loc_4C0C41
0x4C0C3F: xor     eax, eax
0x4C0C41: add     [esp+4Ch+var_28], 1
0x4C0C46: push    44h ; 'D'
0x4C0C48: push    0
0x4C0C4A: push    eax
0x4C0C4B: mov     [esp+58h+var_4], 0FFFFFFFFh
0x4C0C53: mov     [ebp+edi*4+0], eax
0x4C0C57: call    __memset
0x4C0C5C: mov     eax, [ebp+edi*4+0]
0x4C0C60: xor     ecx, ecx
0x4C0C62: add     eax, 20h ; ' '
0x4C0C65: mov     [eax], ecx
0x4C0C67: mov     [eax+4], ecx
0x4C0C6A: mov     [eax+8], ecx
0x4C0C6D: mov     [eax+0Ch], ecx
0x4C0C70: mov     [eax+10h], ecx
0x4C0C73: mov     [eax+14h], ecx
0x4C0C76: mov     [eax+18h], ecx
0x4C0C79: mov     [eax+1Ch], ecx
0x4C0C7C: mov     [eax+20h], ecx
0x4C0C7F: add     esp, 0Ch
0x4C0C82: mov     ecx, esi
0x4C0C84: call    sub_4AF3F0
0x4C0C89: mov     ecx, [ebp+edi*4+0]
0x4C0C8D: mov     [ecx], eax
0x4C0C8F: mov     edx, [ebp+edi*4+0]
0x4C0C93: mov     eax, [esi+0Ch]
0x4C0C96: mov     [edx+4], eax
0x4C0C99: fld     dword ptr ds:0B080DCh
0x4C0C9F: mov     ecx, [ebp+edi*4+0]
0x4C0CA3: fstp    dword ptr [ecx+14h]
0x4C0CA6: mov     edx, [esi]
0x4C0CA8: mov     eax, [edx+168h]
0x4C0CAE: mov     ecx, esi
0x4C0CB0: call    eax
0x4C0CB2: mov     ecx, [ebp+edi*4+0]
0x4C0CB6: fstp    dword ptr [ecx+18h]
0x4C0CB9: mov     edx, [esi]
0x4C0CBB: mov     eax, [edx+160h]
0x4C0CC1: mov     ecx, esi
0x4C0CC3: call    eax
0x4C0CC5: mov     ecx, [ebp+edi*4+0]
0x4C0CC9: fstp    dword ptr [ecx+10h]
0x4C0CCC: mov     edx, [esi]
0x4C0CCE: mov     eax, [edx+150h]
0x4C0CD4: mov     ecx, esi
0x4C0CD6: call    eax
0x4C0CD8: mov     ecx, [ebp+edi*4+0]
0x4C0CDC: fstp    dword ptr [ecx+8]
0x4C0CDF: mov     edx, [esi]
0x4C0CE1: mov     eax, [edx+158h]
0x4C0CE7: mov     ecx, esi
0x4C0CE9: call    eax
0x4C0CEB: mov     ecx, [ebp+edi*4+0]
0x4C0CEF: fstp    dword ptr [ecx+0Ch]
0x4C0CF2: mov     edx, [esi]
0x4C0CF4: mov     eax, [edx+170h]
0x4C0CFA: mov     ecx, esi
0x4C0CFC: call    eax
0x4C0CFE: mov     ecx, [ebp+edi*4+0]
0x4C0D02: mov     [ecx+1Ch], al
0x4C0D05: mov     edx, [esi]
0x4C0D07: mov     eax, [edx+180h]
0x4C0D0D: mov     ecx, esi
0x4C0D0F: call    eax
0x4C0D11: mov     ecx, [ebp+edi*4+0]
0x4C0D15: mov     [ecx+1Eh], al
0x4C0D18: mov     edx, [esi]
0x4C0D1A: mov     eax, [edx+178h]
0x4C0D20: mov     ecx, esi
0x4C0D22: call    eax
0x4C0D24: mov     ecx, [ebp+edi*4+0]
0x4C0D28: mov     [ecx+1Dh], al
0x4C0D2B: mov     edx, [esi]
0x4C0D2D: mov     eax, [edx+120h]
0x4C0D33: mov     ecx, esi
0x4C0D35: call    eax
0x4C0D37: movzx   ecx, al
0x4C0D3A: mov     [esp+4Ch+var_10], ecx
0x4C0D3E: fild    [esp+4Ch+var_10]
0x4C0D42: fdiv    qword ptr ds:0A309F0h
0x4C0D48: fstp    [esp+4Ch+var_2C]
0x4C0D4C: mov     edx, [esp+4Ch+var_38]
0x4C0D50: mov     eax, [edx+24h]
0x4C0D53: mov     ecx, [esp+4Ch+var_34]
0x4C0D57: mov     edx, [eax+ecx*4+40h]
0x4C0D5B: mov     eax, [edx+ebx*4-40h]
0x4C0D5F: mov     ecx, [esp+4Ch+var_20]
0x4C0D63: fld     dword ptr [eax+ecx]
0x4C0D66: fld     [esp+4Ch+var_30]
0x4C0D6A: fcom    st(1)
0x4C0D6C: fnstsw  ax
0x4C0D6E: fstp    st(1)
0x4C0D70: test    ah, 5
0x4C0D73: fld     [esp+4Ch+var_2C]
0x4C0D77: jp      short loc_4C0D81
0x4C0D79: fst     [esp+4Ch+var_2C]
0x4C0D7D: fldz
0x4C0D7F: jmp     short loc_4C0D87
0x4C0D81: fldz
0x4C0D83: fst     [esp+4Ch+var_2C]
0x4C0D87: mov     ecx, [ebp+edi*4+0]
0x4C0D8B: fld     [esp+4Ch+var_2C]
0x4C0D8F: mov     edx, [esp+4Ch+var_38]
0x4C0D93: fstp    dword ptr [ecx+28h]
0x4C0D96: mov     eax, [edx+24h]
0x4C0D99: mov     edx, [esp+4Ch+var_34]
0x4C0D9D: mov     eax, [eax+edx*4+40h]
0x4C0DA1: mov     eax, [eax+ebx*4-44h]
0x4C0DA5: mov     esi, [esp+4Ch+var_20]
0x4C0DA9: fld     dword ptr [eax+esi]
0x4C0DAC: fcomp   st(3)
0x4C0DAE: fnstsw  ax
0x4C0DB0: test    ah, 41h
0x4C0DB3: jnz     short loc_4C0DBD
0x4C0DB5: fxch    st(1)
0x4C0DB7: fst     [esp+4Ch+var_2C]
0x4C0DBB: jmp     short loc_4C0DC3
0x4C0DBD: fst     [esp+4Ch+var_2C]
0x4C0DC1: fxch    st(1)
0x4C0DC3: fld     [esp+4Ch+var_2C]
0x4C0DC7: mov     eax, [esp+4Ch+var_38]
0x4C0DCB: fstp    dword ptr [ecx+24h]
0x4C0DCE: mov     eax, [eax+24h]
0x4C0DD1: mov     eax, [eax+edx*4+40h]
0x4C0DD5: mov     eax, [eax+ebx*4-48h]
0x4C0DD9: fld     dword ptr [eax+esi]
0x4C0DDC: fcomp   st(3)
0x4C0DDE: fnstsw  ax
0x4C0DE0: test    ah, 41h
0x4C0DE3: jnz     short loc_4C0DEB
0x4C0DE5: fst     [esp+4Ch+var_2C]
0x4C0DE9: jmp     short loc_4C0DF3
0x4C0DEB: fxch    st(1)
0x4C0DED: fst     [esp+4Ch+var_2C]
0x4C0DF1: fxch    st(1)
0x4C0DF3: fld     [esp+4Ch+var_2C]
0x4C0DF7: lea     eax, [ecx+20h]
0x4C0DFA: fstp    dword ptr [eax]
0x4C0DFC: mov     [esp+4Ch+var_10], eax
0x4C0E00: mov     eax, [esp+4Ch+var_38]
0x4C0E04: mov     eax, [eax+24h]
0x4C0E07: mov     eax, [eax+edx*4+40h]
0x4C0E0B: mov     eax, [eax+ebx*4+4]
0x4C0E0F: fld     dword ptr [eax+esi]
0x4C0E12: fcomp   st(3)
0x4C0E14: fnstsw  ax
0x4C0E16: test    ah, 41h
0x4C0E19: jnz     short loc_4C0E21
0x4C0E1B: fst     [esp+4Ch+var_2C]
0x4C0E1F: jmp     short loc_4C0E29
0x4C0E21: fxch    st(1)
0x4C0E23: fst     [esp+4Ch+var_2C]
0x4C0E27: fxch    st(1)
0x4C0E29: fld     [esp+4Ch+var_2C]
0x4C0E2D: mov     eax, [esp+4Ch+var_38]
0x4C0E31: fstp    dword ptr [ecx+34h]
0x4C0E34: mov     eax, [eax+24h]
0x4C0E37: mov     eax, [eax+edx*4+40h]
0x4C0E3B: mov     eax, [eax+ebx*4]
0x4C0E3E: fld     dword ptr [eax+esi]
0x4C0E41: fcomp   st(3)
0x4C0E43: fnstsw  ax
0x4C0E45: test    ah, 41h
0x4C0E48: jnz     short loc_4C0E50
0x4C0E4A: fst     [esp+4Ch+var_2C]
0x4C0E4E: jmp     short loc_4C0E58
0x4C0E50: fxch    st(1)
0x4C0E52: fst     [esp+4Ch+var_2C]
0x4C0E56: fxch    st(1)
0x4C0E58: fld     [esp+4Ch+var_2C]
0x4C0E5C: mov     eax, [esp+4Ch+var_38]
0x4C0E60: fstp    dword ptr [ecx+30h]
0x4C0E63: mov     eax, [eax+24h]
0x4C0E66: mov     eax, [eax+edx*4+40h]
0x4C0E6A: mov     eax, [eax+ebx*4-4]
0x4C0E6E: fld     dword ptr [eax+esi]
0x4C0E71: fcomp   st(3)
0x4C0E73: fnstsw  ax
0x4C0E75: test    ah, 41h
0x4C0E78: jnz     short loc_4C0E80
0x4C0E7A: fst     [esp+4Ch+var_2C]
0x4C0E7E: jmp     short loc_4C0E88
0x4C0E80: fxch    st(1)
0x4C0E82: fst     [esp+4Ch+var_2C]
0x4C0E86: fxch    st(1)
0x4C0E88: fld     [esp+4Ch+var_2C]
0x4C0E8C: mov     eax, [esp+4Ch+var_38]
0x4C0E90: fstp    dword ptr [ecx+2Ch]
0x4C0E93: mov     eax, [eax+24h]
0x4C0E96: mov     eax, [eax+edx*4+40h]
0x4C0E9A: mov     eax, [eax+ebx*4+48h]
0x4C0E9E: fld     dword ptr [eax+esi]
0x4C0EA1: fcomp   st(3)
0x4C0EA3: fnstsw  ax
0x4C0EA5: test    ah, 41h
0x4C0EA8: jnz     short loc_4C0EB0
0x4C0EAA: fst     [esp+4Ch+var_2C]
0x4C0EAE: jmp     short loc_4C0EB8
0x4C0EB0: fxch    st(1)
0x4C0EB2: fst     [esp+4Ch+var_2C]
0x4C0EB6: fxch    st(1)
0x4C0EB8: fld     [esp+4Ch+var_2C]
0x4C0EBC: mov     eax, [esp+4Ch+var_38]
0x4C0EC0: fstp    dword ptr [ecx+40h]
0x4C0EC3: mov     eax, [eax+24h]
0x4C0EC6: mov     eax, [eax+edx*4+40h]
0x4C0ECA: mov     eax, [eax+ebx*4+44h]
0x4C0ECE: fld     dword ptr [eax+esi]
0x4C0ED1: fcomp   st(3)
0x4C0ED3: fnstsw  ax
0x4C0ED5: test    ah, 41h
0x4C0ED8: jnz     short loc_4C0EE0
0x4C0EDA: fst     [esp+4Ch+var_2C]
0x4C0EDE: jmp     short loc_4C0EE8
0x4C0EE0: fxch    st(1)
0x4C0EE2: fst     [esp+4Ch+var_2C]
0x4C0EE6: fxch    st(1)
0x4C0EE8: fld     [esp+4Ch+var_2C]
0x4C0EEC: mov     eax, [esp+4Ch+var_38]
0x4C0EF0: fstp    dword ptr [ecx+3Ch]
0x4C0EF3: mov     eax, [eax+24h]
0x4C0EF6: mov     edx, [eax+edx*4+40h]
0x4C0EFA: mov     eax, [edx+ebx*4+40h]
0x4C0EFE: fld     dword ptr [eax+esi]
0x4C0F01: fcomp   st(3)
0x4C0F03: fnstsw  ax
0x4C0F05: test    ah, 41h
0x4C0F08: jnz     short loc_4C0F10
0x4C0F0A: fstp    [esp+4Ch+var_2C]
0x4C0F0E: jmp     short loc_4C0F16
0x4C0F10: fstp    st
0x4C0F12: fst     [esp+4Ch+var_2C]
0x4C0F16: fld     [esp+4Ch+var_2C]
0x4C0F1A: mov     edx, 9
0x4C0F1F: fstp    dword ptr [ecx+38h]
0x4C0F22: mov     ecx, [esp+4Ch+var_10]
0x4C0F26: mov     eax, ecx
0x4C0F28: fstp    [esp+4Ch+var_2C]
0x4C0F2C: fld     [esp+4Ch+var_2C]
0x4C0F30: add     eax, 4
0x4C0F33: sub     edx, 1
0x4C0F36: fadd    dword ptr [eax-4]
0x4C0F39: fstp    [esp+4Ch+var_2C]
0x4C0F3D: jnz     short loc_4C0F2C
0x4C0F3F: fld     [esp+4Ch+var_2C]
0x4C0F43: fdiv    qword ptr ds:0A45EB0h
0x4C0F49: fcompp
0x4C0F4B: fnstsw  ax
0x4C0F4D: test    ah, 5
0x4C0F50: jp      short loc_4C0F6E
0x4C0F52: xor     eax, eax
0x4C0F54: mov     [ecx], eax
0x4C0F56: mov     [ecx+4], eax
0x4C0F59: mov     [ecx+8], eax
0x4C0F5C: mov     [ecx+0Ch], eax
0x4C0F5F: mov     [ecx+10h], eax
0x4C0F62: mov     [ecx+14h], eax
0x4C0F65: mov     [ecx+18h], eax
0x4C0F68: mov     [ecx+1Ch], eax
0x4C0F6B: mov     [ecx+20h], eax
0x4C0F6E: add     edi, 1
0x4C0F71: mov     ecx, [esp+4Ch+var_24]
0x4C0F75: mov     eax, [ecx+4]
0x4C0F78: test    eax, eax
0x4C0F7A: mov     [esp+4Ch+var_24], eax
0x4C0F7E: jnz     loc_4C0BF3
0x4C0F84: fld     qword ptr ds:0A2FC80h
0x4C0F8A: mov     eax, [esp+4Ch+var_20]
0x4C0F8E: add     eax, 4
0x4C0F91: cmp     eax, 20h ; ' '
0x4C0F94: mov     [esp+4Ch+var_20], eax
0x4C0F98: jl      loc_4C0B06
0x4C0F9E: cmp     dword ptr [ebp+0], 0
0x4C0FA2: fstp    st
0x4C0FA4: push    ebp; a3
0x4C0FA5: jz      short loc_4C0FC1
0x4C0FA7: mov     eax, [esp+50h+var_38]
0x4C0FAB: mov     edx, [esp+50h+var_34]
0x4C0FAF: mov     ecx, [eax+24h]
0x4C0FB2: shl     edx, 4
0x4C0FB5: push    ebx; a2
0x4C0FB6: lea     ecx, [edx+ecx+54h]; this
0x4C0FBA: call    NiTMap_SetAt
0x4C0FBF: jmp     short loc_4C0FC9
0x4C0FC1: call    FormHeapFree
0x4C0FC6: add     esp, 4
0x4C0FC9: mov     edx, [esp+4Ch+var_1C]
0x4C0FCD: mov     eax, ds:0B35BF0h
0x4C0FD2: lea     ecx, [edx+eax*2]
0x4C0FD5: xor     edi, edi
0x4C0FD7: cmp     ecx, 10h
0x4C0FDA: mov     [esp+4Ch+var_1C], ecx
0x4C0FDE: jl      loc_4C0720
0x4C0FE4: mov     ecx, [esp+4Ch+var_18]
0x4C0FE8: lea     ecx, [ecx+eax*2]
0x4C0FEB: cmp     ecx, 10h
0x4C0FEE: mov     [esp+4Ch+var_18], ecx
0x4C0FF2: jl      loc_4C0710
0x4C0FF8: mov     ecx, [esp+4Ch+var_34]
0x4C0FFC: add     ecx, 1
0x4C0FFF: cmp     ecx, 4
0x4C1002: mov     [esp+4Ch+var_34], ecx
0x4C1006: jl      loc_4C0700
0x4C100C: mov     al, 1
0x4C100E: mov     ecx, [esp+4Ch+var_C]
0x4C1012: mov     large fs:0, ecx
0x4C1019: pop     ecx
0x4C101A: pop     edi
0x4C101B: pop     esi
0x4C101C: pop     ebp
0x4C101D: pop     ebx
0x4C101E: add     esp, 38h
0x4C1021: retn
