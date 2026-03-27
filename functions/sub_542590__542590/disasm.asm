0x542590: sub     esp, 18h
0x542593: cmp     byte ptr ds:0B3667Ch, 0
0x54259A: push    ebx
0x54259B: push    ebp
0x54259C: push    esi
0x54259D: mov     esi, [ecx+0E0h]
0x5425A3: push    edi
0x5425A4: mov     [esp+28h+var_C], ecx
0x5425A8: mov     [esp+28h+var_18], esi
0x5425AC: jz      loc_542722
0x5425B2: push    8; Size
0x5425B4: call    FormHeapAlloc
0x5425B9: add     esp, 4
0x5425BC: test    eax, eax
0x5425BE: jz      short loc_5425D1
0x5425C0: mov     dword ptr [eax], 0
0x5425C6: mov     dword ptr [eax+4], 0
0x5425CD: mov     ebp, eax
0x5425CF: jmp     short loc_5425D3
0x5425D1: xor     ebp, ebp
0x5425D3: xor     ebx, ebx
0x5425D5: test    esi, esi
0x5425D7: mov     [esp+28h+var_8], ebx
0x5425DB: mov     [esp+28h+var_4], ebx
0x5425DF: jz      loc_542689
0x5425E5: mov     edi, [esi]
0x5425E7: test    edi, edi
0x5425E9: jz      loc_542685
0x5425EF: test    dword ptr [edi+0Ch], 80000000h
0x5425F6: jbe     short loc_542646
0x5425F8: cmp     dword ptr [edi+8], 3
0x5425FC: jnz     short loc_542605
0x5425FE: add     byte ptr ds:0B365C0h, 0FFh
0x542605: mov     esi, [edi]
0x542607: test    esi, esi
0x542609: jz      short loc_542637
0x54260B: test    ebx, ebx
0x54260D: jz      short loc_542635
0x54260F: push    8; Size
0x542611: call    FormHeapAlloc
0x542616: add     esp, 4
0x542619: test    eax, eax
0x54261B: jz      short loc_542628
0x54261D: mov     [eax], ebx
0x54261F: mov     dword ptr [eax+4], 0
0x542626: jmp     short loc_54262A
0x542628: xor     eax, eax
0x54262A: mov     ecx, [esp+28h+var_4]
0x54262E: mov     [eax+4], ecx
0x542631: mov     [esp+28h+var_4], eax
0x542635: mov     ebx, esi
0x542637: push    edi
0x542638: call    FormHeapFree
0x54263D: mov     esi, [esp+2Ch+var_18]
0x542641: add     esp, 4
0x542644: jmp     short loc_542676
0x542646: cmp     dword ptr [ebp+0], 0
0x54264A: jz      short loc_542673
0x54264C: push    8; Size
0x54264E: call    FormHeapAlloc
0x542653: add     esp, 4
0x542656: test    eax, eax
0x542658: jz      short loc_542668
0x54265A: mov     edx, [ebp+0]
0x54265D: mov     [eax], edx
0x54265F: mov     dword ptr [eax+4], 0
0x542666: jmp     short loc_54266A
0x542668: xor     eax, eax
0x54266A: mov     ecx, [ebp+4]
0x54266D: mov     [eax+4], ecx
0x542670: mov     [ebp+4], eax
0x542673: mov     [ebp+0], edi
0x542676: mov     esi, [esi+4]
0x542679: test    esi, esi
0x54267B: mov     [esp+28h+var_18], esi
0x54267F: jnz     loc_5425E5
0x542685: mov     [esp+28h+var_8], ebx
0x542689: lea     edi, [esp+28h+var_8]
0x54268D: lea     ecx, [ecx+0]
0x542690: mov     esi, [edi]
0x542692: test    esi, esi
0x542694: jz      short loc_5426E4
0x542696: mov     edi, [edi+4]
0x542699: mov     ecx, esi
0x54269B: call    sub_6B73A0
0x5426A0: test    al, al
0x5426A2: jz      short loc_5426D0
0x5426A4: xor     dl, dl
0x5426A6: mov     eax, ebp
0x5426A8: test    eax, eax
0x5426AA: jz      short loc_5426C5
0x5426AC: mov     ecx, [eax]
0x5426AE: test    ecx, ecx
0x5426B0: jz      short loc_5426C5
0x5426B2: mov     ecx, [ecx]
0x5426B4: mov     ecx, [ecx]
0x5426B6: cmp     ecx, [esi]
0x5426B8: jnz     short loc_5426BC
0x5426BA: mov     dl, 1
0x5426BC: test    dl, dl
0x5426BE: mov     eax, [eax+4]
0x5426C1: jz      short loc_5426A8
0x5426C3: jmp     short loc_5426D0
0x5426C5: test    dl, dl
0x5426C7: jnz     short loc_5426D0
0x5426C9: mov     ecx, esi
0x5426CB: call    sub_6B73C0
0x5426D0: mov     ecx, esi; this
0x5426D2: call    sub_6B73E0
0x5426D7: push    esi
0x5426D8: call    FormHeapFree
0x5426DD: add     esp, 4
0x5426E0: test    edi, edi
0x5426E2: jnz     short loc_542690
0x5426E4: lea     ecx, [esp+28h+var_8]
0x5426E8: call    BSSimpleList_Clear
0x5426ED: mov     esi, [esp+28h+var_C]
0x5426F1: mov     ecx, [esi+0E0h]
0x5426F7: call    BSSimpleList_Clear
0x5426FC: mov     edx, [esi+0E0h]
0x542702: push    edx
0x542703: call    FormHeapFree
0x542708: mov     ecx, [esp+2Ch+var_C]
0x54270C: mov     [esi+0E0h], ebp
0x542712: add     esp, 4
0x542715: mov     [esp+28h+var_18], ebp
0x542719: mov     byte ptr ds:0B3667Ch, 0
0x542720: mov     esi, ebp
0x542722: test    byte ptr [ecx+0FCh], 3
0x542729: jbe     short loc_542734
0x54272B: mov     eax, [ecx+10h]
0x54272E: push    eax
0x54272F: call    sub_5403D0
0x542734: test    esi, esi
0x542736: jz      loc_542B06
0x54273C: fld     qword ptr ds:0A3F398h
0x542742: fldz
0x542744: fld1
0x542746: mov     ecx, [esp+28h+var_18]
0x54274A: mov     esi, [ecx]
0x54274C: test    esi, esi
0x54274E: jz      loc_542B00
0x542754: mov     ecx, [esi]
0x542756: test    ecx, ecx
0x542758: jz      loc_542AED
0x54275E: mov     ebp, [esp+28h+var_C]
0x542762: mov     eax, [ebp+0DCh]
0x542768: cmp     eax, 3
0x54276B: jz      short loc_542772
0x54276D: cmp     eax, 2
0x542770: jnz     short loc_542781
0x542772: mov     edi, [esi+4]
0x542775: mov     edx, [ebp+10h]
0x542778: cmp     edi, edx
0x54277A: jz      short loc_5427C8
0x54277C: cmp     edi, [ebp+14h]
0x54277F: jz      short loc_5427C8
0x542781: fstp    st(2)
0x542783: fstp    st
0x542785: fstp    st
0x542787: call    sub_6B7260
0x54278C: test    al, al
0x54278E: jz      short loc_5427B3
0x542790: mov     eax, [ebp+10h]
0x542793: cmp     [esi+4], eax
0x542796: jnz     short loc_54279B
0x542798: mov     eax, [ebp+14h]
0x54279B: mov     edi, [esi]
0x54279D: push    eax
0x54279E: mov     eax, [edi]
0x5427A0: push    eax
0x5427A1: mov     ecx, ebp
0x5427A3: call    sub_5405C0
0x5427A8: test    al, al
0x5427AA: jnz     short loc_5427B3
0x5427AC: mov     ecx, edi
0x5427AE: call    sub_6B7240
0x5427B3: or      dword ptr [esi+0Ch], 80000000h
0x5427BA: mov     byte ptr ds:0B3667Ch, 1
0x5427C1: fldz
0x5427C3: jmp     loc_542AE1
0x5427C8: mov     eax, [esi+8]
0x5427CB: cmp     eax, 3
0x5427CE: jnz     loc_542937
0x5427D4: fstp    st(2)
0x5427D6: fstp    st
0x5427D8: fstp    st
0x5427DA: call    sub_6B7260
0x5427DF: test    al, al
0x5427E1: jnz     short loc_5427C1
0x5427E3: call    dword ptr ds:0A280D0h
0x5427E9: mov     edx, [esi+0Ch]
0x5427EC: mov     ecx, edx
0x5427EE: and     ecx, 7FFFFFFFh
0x5427F4: cmp     ecx, 80000000h
0x5427FA: jbe     short loc_542801
0x5427FC: mov     ecx, 80000000h
0x542801: cmp     eax, ecx
0x542803: jbe     short loc_5427C1
0x542805: mov     ecx, [esi+4]
0x542808: add     eax, 1Eh
0x54280B: xor     eax, edx
0x54280D: and     eax, 7FFFFFFFh
0x542812: xor     eax, edx
0x542814: mov     [esi+0Ch], eax
0x542817: mov     bl, [ecx+52h]
0x54281A: push    0; Seed
0x54281C: call    GetRandomLargeInteger?
0x542821: movzx   edx, byte ptr ds:0B365C0h
0x542828: movzx   ecx, bl
0x54282B: imul    ecx, edx
0x54282E: cdq
0x54282F: idiv    ecx
0x542831: add     esp, 4
0x542834: test    edx, edx
0x542836: jnz     short loc_5427C1
0x542838: mov     eax, [ebp+10h]
0x54283B: cmp     [esi+4], eax
0x54283E: jnz     short loc_542891
0x542840: movzx   eax, byte ptr [eax+50h]
0x542844: mov     [esp+28h+var_8], eax
0x542848: fild    [esp+28h+var_8]
0x54284C: fmul    qword ptr ds:0A3F398h
0x542852: fld     qword ptr ds:0A3F460h
0x542858: fldz
0x54285A: fsub    st(1), st
0x54285C: fxch    st(2)
0x54285E: fmulp   st(1), st
0x542860: fadd    st, st(1)
0x542862: fstp    [esp+28h+var_8]
0x542866: fld     dword ptr [ebp+0D8h]
0x54286C: fld     [esp+28h+var_8]
0x542870: fcom    st(1)
0x542872: fnstsw  ax
0x542874: fstp    st(1)
0x542876: test    ah, 41h
0x542879: jnz     short loc_542881
0x54287B: fstp    st
0x54287D: fld     st
0x54287F: jmp     short loc_5428E3
0x542881: fld     dword ptr [ebp+0D8h]
0x542887: fsub    st, st(1)
0x542889: fld1
0x54288B: fsubrp  st(2), st
0x54288D: fdivrp  st(1), st
0x54288F: jmp     short loc_5428E3
0x542891: mov     ecx, [ebp+14h]
0x542894: movzx   edx, byte ptr [ecx+51h]
0x542898: mov     [esp+28h+var_8], edx
0x54289C: fild    [esp+28h+var_8]
0x5428A0: fmul    qword ptr ds:0A3F398h
0x5428A6: fmul    qword ptr ds:0A48DD8h
0x5428AC: fadd    qword ptr ds:0A30E40h
0x5428B2: fstp    [esp+28h+var_8]
0x5428B6: fld     dword ptr [ebp+0D8h]
0x5428BC: fld     [esp+28h+var_8]
0x5428C0: fcom    st(1)
0x5428C2: fnstsw  ax
0x5428C4: fstp    st(1)
0x5428C6: test    ah, 41h
0x5428C9: jnz     short loc_5428D9
0x5428CB: fdivr   dword ptr [ebp+0D8h]
0x5428D1: fld1
0x5428D3: fsubrp  st(1), st
0x5428D5: fldz
0x5428D7: jmp     short loc_5428E1
0x5428D9: fstp    st
0x5428DB: fldz
0x5428DD: fld     st
0x5428DF: fxch    st(1)
0x5428E1: fxch    st(1)
0x5428E3: fstp    [esp+28h+var_14]
0x5428E7: fldz
0x5428E9: fld     [esp+28h+var_14]
0x5428ED: fucom   st(1)
0x5428EF: fnstsw  ax
0x5428F1: fstp    st(1)
0x5428F3: test    ah, 44h
0x5428F6: jnp     loc_542ADF
0x5428FC: mov     eax, ds:0B33398h
0x542901: mov     ecx, [eax+24h]
0x542904: cmp     byte ptr [ecx+0A5h], 0
0x54290B: jnz     short loc_542920
0x54290D: push    ecx
0x54290E: fstp    st(1)
0x542910: mov     ecx, esi
0x542912: fstp    [esp+2Ch+var_2C]; float
0x542915: call    sub_540600
0x54291A: fldz
0x54291C: fld     [esp+28h+var_14]
0x542920: fstp    dword ptr [ebp+0E4h]
0x542926: mov     edx, ds:0B33EA0h
0x54292C: mov     [ebp+0E8h], edx
0x542932: jmp     loc_542AE1
0x542937: mov     ebx, ds:0B33398h
0x54293D: mov     ebx, [ebx+24h]
0x542940: cmp     byte ptr [ebx+0A5h], 0
0x542947: jnz     loc_542AD9
0x54294D: cmp     eax, 1
0x542950: jnz     loc_542A6D
0x542956: movzx   eax, byte ptr [edx+4Eh]
0x54295A: mov     [esp+28h+var_8], eax
0x54295E: mov     eax, [ebp+14h]
0x542961: test    eax, eax
0x542963: fild    [esp+28h+var_8]
0x542967: fmul    st, st(3)
0x542969: fld     qword ptr ds:0A3F460h
0x54296F: fsub    st, st(3)
0x542971: fmulp   st(1), st
0x542973: fadd    st, st(2)
0x542975: fstp    [esp+28h+var_8]
0x542979: jz      short loc_5429A1
0x54297B: movzx   eax, byte ptr [eax+4Fh]
0x54297F: mov     [esp+28h+var_10], eax
0x542983: fild    [esp+28h+var_10]
0x542987: fmulp   st(3), st
0x542989: fxch    st(2)
0x54298B: fmul    qword ptr ds:0A48DD8h
0x542991: fadd    qword ptr ds:0A30E40h
0x542997: fstp    [esp+28h+var_10]
0x54299B: fld     [esp+28h+var_10]
0x54299F: jmp     short loc_5429A5
0x5429A1: fstp    st(2)
0x5429A3: fldz
0x5429A5: cmp     edi, edx
0x5429A7: fstp    [esp+28h+var_10]
0x5429AB: fld     dword ptr [ebp+0D8h]
0x5429B1: jnz     short loc_542A15
0x5429B3: fld     [esp+28h+var_8]
0x5429B7: fcom    st(1)
0x5429B9: fnstsw  ax
0x5429BB: fstp    st(1)
0x5429BD: test    ah, 41h
0x5429C0: jnz     short loc_5429C8
0x5429C2: fstp    st
0x5429C4: fld     st
0x5429C6: jmp     short loc_5429D6
0x5429C8: fld     dword ptr [ebp+0D8h]
0x5429CE: fsub    st, st(1)
0x5429D0: fld     st(3)
0x5429D2: fsubrp  st(2), st
0x5429D4: fdivrp  st(1), st
0x5429D6: fstp    [esp+28h+var_14]
0x5429DA: fld     dword ptr [ebp+0D8h]
0x5429E0: fld     [esp+28h+var_10]
0x5429E4: fcom    st(1)
0x5429E6: fnstsw  ax
0x5429E8: fstp    st(1)
0x5429EA: test    ah, 41h
0x5429ED: jnz     short loc_542A02
0x5429EF: fdivr   dword ptr [ebp+0D8h]
0x5429F5: fsubp   st(2), st
0x5429F7: fxch    st(1)
0x5429F9: fstp    [esp+28h+var_10]
0x5429FD: jmp     loc_542AA1
0x542A02: fstp    st
0x542A04: fstp    st(1)
0x542A06: fld     st
0x542A08: fxch    st(1)
0x542A0A: fxch    st(1)
0x542A0C: fstp    [esp+28h+var_10]
0x542A10: jmp     loc_542AA1
0x542A15: fld     [esp+28h+var_10]
0x542A19: fcom    st(1)
0x542A1B: fnstsw  ax
0x542A1D: fstp    st(1)
0x542A1F: test    ah, 41h
0x542A22: jnz     short loc_542A2E
0x542A24: fdivr   dword ptr [ebp+0D8h]
0x542A2A: fsubr   st, st(2)
0x542A2C: jmp     short loc_542A32
0x542A2E: fstp    st
0x542A30: fld     st
0x542A32: fstp    [esp+28h+var_14]
0x542A36: fld     dword ptr [ebp+0D8h]
0x542A3C: fld     [esp+28h+var_8]
0x542A40: fcom    st(1)
0x542A42: fnstsw  ax
0x542A44: fstp    st(1)
0x542A46: test    ah, 41h
0x542A49: jnz     short loc_542A57
0x542A4B: fstp    st
0x542A4D: fstp    st(1)
0x542A4F: fld     st
0x542A51: fstp    [esp+28h+var_10]
0x542A55: jmp     short loc_542AA1
0x542A57: fld     dword ptr [ebp+0D8h]
0x542A5D: fsub    st, st(1)
0x542A5F: fxch    st(3)
0x542A61: fsubrp  st(1), st
0x542A63: fdivp   st(2), st
0x542A65: fxch    st(1)
0x542A67: fstp    [esp+28h+var_10]
0x542A6B: jmp     short loc_542AA1
0x542A6D: cmp     edi, edx
0x542A6F: fstp    st(2)
0x542A71: jnz     short loc_542A89
0x542A73: fld     dword ptr [ebp+0D8h]
0x542A79: fstp    [esp+28h+var_14]
0x542A7D: fld     dword ptr [ebp+0D8h]
0x542A83: fsubp   st(2), st
0x542A85: fxch    st(1)
0x542A87: jmp     short loc_542A9D
0x542A89: fld     dword ptr [ebp+0D8h]
0x542A8F: fsubp   st(2), st
0x542A91: fxch    st(1)
0x542A93: fstp    [esp+28h+var_14]
0x542A97: fld     dword ptr [ebp+0D8h]
0x542A9D: fstp    [esp+28h+var_10]
0x542AA1: cmp     edi, edx
0x542AA3: jnz     short loc_542AA8
0x542AA5: mov     edx, [ebp+14h]
0x542AA8: mov     ecx, [ecx]
0x542AAA: push    edx
0x542AAB: push    ecx
0x542AAC: mov     ecx, ebp
0x542AAE: call    sub_5405C0
0x542AB3: fld     [esp+28h+var_14]
0x542AB7: test    al, al
0x542AB9: jz      short loc_542AC8
0x542ABB: fld     [esp+28h+var_10]
0x542ABF: fcomp   st(1)
0x542AC1: fnstsw  ax
0x542AC3: test    ah, 41h
0x542AC6: jp      short loc_542ADF
0x542AC8: push    ecx
0x542AC9: fstp    st(1)
0x542ACB: mov     ecx, esi
0x542ACD: fstp    [esp+2Ch+var_2C]; float
0x542AD0: call    sub_540600
0x542AD5: fldz
0x542AD7: jmp     short loc_542AE1
0x542AD9: fstp    st(2)
0x542ADB: fstp    st(1)
0x542ADD: jmp     short loc_542AE1
0x542ADF: fstp    st
0x542AE1: fld1
0x542AE3: fld     qword ptr ds:0A3F398h
0x542AE9: fxch    st(2)
0x542AEB: fxch    st(1)
0x542AED: mov     edx, [esp+28h+var_18]
0x542AF1: mov     eax, [edx+4]
0x542AF4: test    eax, eax
0x542AF6: mov     [esp+28h+var_18], eax
0x542AFA: jnz     loc_542746
0x542B00: fstp    st(2)
0x542B02: fstp    st
0x542B04: fstp    st
0x542B06: mov     eax, ds:0B33398h
0x542B0B: mov     ecx, [eax+24h]
0x542B0E: cmp     byte ptr [ecx+0A5h], 0
0x542B15: jz      short loc_542B39
0x542B17: mov     edx, [esp+28h+var_C]
0x542B1B: mov     esi, [edx+0E0h]
0x542B21: test    esi, esi
0x542B23: jz      short loc_542B39
0x542B25: mov     eax, [esi]
0x542B27: test    eax, eax
0x542B29: jz      short loc_542B39
0x542B2B: mov     ecx, [eax]
0x542B2D: call    sub_6B7240
0x542B32: mov     esi, [esi+4]
0x542B35: test    esi, esi
0x542B37: jnz     short loc_542B25
0x542B39: pop     edi
0x542B3A: pop     esi
0x542B3B: pop     ebp
0x542B3C: pop     ebx
0x542B3D: add     esp, 18h
0x542B40: retn
