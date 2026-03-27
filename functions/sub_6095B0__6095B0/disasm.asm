0x6095B0: sub     esp, 64h
0x6095B3: push    esi
0x6095B4: mov     esi, ecx
0x6095B6: mov     eax, [esi]
0x6095B8: mov     edx, [eax+1C8h]
0x6095BE: push    edi
0x6095BF: call    edx
0x6095C1: mov     ecx, ds:0B33B00h
0x6095C7: call    sub_45A500
0x6095CC: test    al, al
0x6095CE: jnz     short loc_60960E
0x6095D0: mov     eax, [esi]
0x6095D2: mov     edi, [esi+5Ch]
0x6095D5: mov     edx, [eax+154h]
0x6095DB: mov     ecx, esi
0x6095DD: add     edi, 4
0x6095E0: call    edx
0x6095E2: fldz
0x6095E4: mov     ecx, [edi]
0x6095E6: mov     [eax+54h], ecx
0x6095E9: mov     edx, [edi+4]
0x6095EC: mov     [eax+58h], edx
0x6095EF: mov     ecx, [edi+8]
0x6095F2: mov     [eax+5Ch], ecx
0x6095F5: mov     edx, [esi]
0x6095F7: mov     eax, [edx+154h]
0x6095FD: push    0; a3
0x6095FF: push    ecx
0x609600: mov     ecx, esi
0x609602: fstp    [esp+74h+a2]; a2
0x609605: call    eax
0x609607: mov     ecx, eax; this
0x609609: call    NiAVObject_UpdateNiAVObject
0x60960E: mov     edx, [esi]
0x609610: mov     eax, [edx+154h]
0x609616: push    0; a4
0x609618: push    1; a3
0x60961A: push    1; a2
0x60961C: mov     ecx, esi
0x60961E: call    eax
0x609620: push    eax; a1
0x609621: call    sub_88D070
0x609626: mov     eax, ds:0B3B7D4h
0x60962B: add     esp, 10h
0x60962E: test    eax, eax
0x609630: jnz     short loc_609655
0x609632: mov     eax, ds:0B2EB3Ch
0x609637: add     eax, 1
0x60963A: and     eax, 0FFFFh
0x60963F: mov     ds:0B2EB3Ch, eax
0x609644: jnz     short loc_609650
0x609646: mov     eax, 0Ah
0x60964B: mov     ds:0B2EB3Ch, eax
0x609650: mov     ds:0B3B7D4h, eax
0x609655: mov     edi, [esp+6Ch+arg_0]
0x609659: shl     eax, 10h
0x60965C: or      eax, 4
0x60965F: test    edi, edi
0x609661: jz      short loc_609672
0x609663: mov     ecx, [edi+8]
0x609666: test    ecx, ecx
0x609668: jz      short loc_609672
0x60966A: add     ecx, 14h
0x60966D: jz      short loc_609672
0x60966F: mov     [ecx+1Ch], eax
0x609672: mov     edx, [edi]
0x609674: mov     eax, [edx+80h]
0x60967A: mov     ecx, edi
0x60967C: call    eax
0x60967E: mov     ecx, ds:0B33B00h
0x609684: call    sub_45A500
0x609689: test    al, al
0x60968B: jnz     loc_60988A
0x609691: fld     dword ptr [esi+88h]
0x609697: lea     ecx, [esp+6Ch+var_60]
0x60969B: fld     qword ptr ds:0A3D360h
0x6096A1: push    ecx
0x6096A2: fmul    st(1), st
0x6096A4: fxch    st(1)
0x6096A6: fstp    [esp+70h+var_60]
0x6096AA: fld     dword ptr [esi+8Ch]
0x6096B0: fmul    st, st(1)
0x6096B2: fstp    [esp+70h+var_5C]
0x6096B6: fmul    dword ptr [esi+90h]
0x6096BC: fstp    [esp+70h+var_58]
0x6096C0: call    sub_4BFAA0
0x6096C5: mov     edx, [esi+5Ch]
0x6096C8: add     edx, 10h
0x6096CB: push    edx
0x6096CC: call    sub_4BFAA0
0x6096D1: mov     eax, [esi+5Ch]
0x6096D4: fld     dword ptr [eax+14h]
0x6096D7: add     esp, 8
0x6096DA: fld     [esp+6Ch+var_5C]
0x6096DE: fld     st
0x6096E0: fmulp   st(2), st
0x6096E2: fld     dword ptr [eax+10h]
0x6096E5: fld     [esp+6Ch+var_60]
0x6096E9: fld     st
0x6096EB: fmulp   st(2), st
0x6096ED: fxch    st(3)
0x6096EF: faddp   st(1), st
0x6096F1: fld     dword ptr [eax+18h]
0x6096F4: fld     [esp+6Ch+var_58]
0x6096F8: fld     st
0x6096FA: fmulp   st(2), st
0x6096FC: fxch    st(2)
0x6096FE: faddp   st(1), st
0x609700: fstp    [esp+6Ch+arg_0]
0x609704: fld     dword ptr [eax+10h]
0x609707: fld     [esp+6Ch+arg_0]
0x60970B: fld     st
0x60970D: fmulp   st(2), st
0x60970F: fxch    st(1)
0x609711: fstp    [esp+6Ch+var_48]
0x609715: fld     dword ptr [eax+14h]
0x609718: fmul    st, st(1)
0x60971A: fstp    [esp+6Ch+var_44]
0x60971E: fmul    dword ptr [eax+18h]
0x609721: fstp    [esp+6Ch+var_40]
0x609725: fld     [esp+6Ch+var_48]
0x609729: fsub    st, st(3)
0x60972B: fstp    [esp+6Ch+var_3C]
0x60972F: fld     [esp+6Ch+var_44]
0x609733: fsub    st, st(2)
0x609735: fstp    [esp+6Ch+var_38]
0x609739: fld     [esp+6Ch+var_40]
0x60973D: fsub    st, st(1)
0x60973F: fstp    [esp+6Ch+var_34]
0x609743: fld     [esp+6Ch+var_3C]
0x609747: fld     qword ptr ds:0A3D0C0h
0x60974D: fmul    st(1), st
0x60974F: fxch    st(1)
0x609751: fstp    [esp+6Ch+var_48]
0x609755: fld     [esp+6Ch+var_38]
0x609759: fmul    st, st(1)
0x60975B: fstp    [esp+6Ch+var_44]
0x60975F: fmul    [esp+6Ch+var_34]
0x609763: fstp    [esp+6Ch+var_40]
0x609767: fld     [esp+6Ch+var_48]
0x60976B: faddp   st(3), st
0x60976D: fxch    st(2)
0x60976F: fstp    [esp+6Ch+var_60]
0x609773: fadd    [esp+6Ch+var_44]
0x609777: fstp    [esp+6Ch+var_5C]
0x60977B: fadd    [esp+6Ch+var_40]
0x60977F: fstp    [esp+6Ch+var_58]
0x609783: fld     dword ptr [esi+6Ch]
0x609786: fmul    dword ptr ds:0B37058h
0x60978C: fstp    [esp+6Ch+arg_0]
0x609790: fld     [esp+6Ch+var_60]
0x609794: fld     [esp+6Ch+arg_0]
0x609798: fld     st
0x60979A: fmulp   st(2), st
0x60979C: fxch    st(1)
0x60979E: lea     eax, [esp+6Ch+var_3C]
0x6097A2: fstp    [esp+6Ch+var_3C]
0x6097A6: push    eax
0x6097A7: fld     [esp+70h+var_5C]
0x6097AB: mov     ecx, edi
0x6097AD: fmul    st, st(1)
0x6097AF: fstp    [esp+70h+var_38]
0x6097B3: fmul    [esp+70h+var_58]
0x6097B7: fstp    [esp+70h+var_34]
0x6097BB: call    sub_4D9960
0x6097C0: mov     edx, [esi]
0x6097C2: mov     eax, [edx+154h]
0x6097C8: mov     ecx, esi
0x6097CA: call    eax
0x6097CC: lea     ecx, [esp+6Ch+var_24]
0x6097D0: push    ecx
0x6097D1: lea     ecx, [eax+64h]
0x6097D4: call    sub_7102B0
0x6097D9: mov     edx, [esi+5Ch]
0x6097DC: add     edx, 10h
0x6097DF: push    edx
0x6097E0: lea     eax, [esp+70h+var_54]
0x6097E4: push    eax
0x6097E5: lea     ecx, [esp+74h+var_24]
0x6097E9: call    sub_7101F0
0x6097EE: fld     [esp+6Ch+var_50]
0x6097F2: fabs
0x6097F4: fstp    [esp+6Ch+arg_0]
0x6097F8: fld     [esp+6Ch+arg_0]
0x6097FC: fld     [esp+6Ch+var_4C]
0x609800: fld     st
0x609802: fabs
0x609804: fstp    [esp+6Ch+var_64]
0x609808: fld     [esp+6Ch+var_64]
0x60980C: fcomp   st(2)
0x60980E: fnstsw  ax
0x609810: fstp    st(1)
0x609812: test    ah, 5
0x609815: jp      short loc_60982D
0x609817: push    ecx
0x609818: fstp    [esp+70h+var_70]; float
0x60981B: call    sub_537770
0x609820: fmul    [esp+70h+arg_0]
0x609824: add     esp, 4
0x609827: fstp    [esp+6Ch+var_4C]
0x60982B: jmp     short loc_60982F
0x60982D: fstp    st
0x60982F: fldz
0x609831: lea     ecx, [esp+6Ch+var_54]
0x609835: push    ecx
0x609836: fstp    [esp+70h+var_50]
0x60983A: call    sub_4BFAA0
0x60983F: fld     dword ptr ds:0B37050h
0x609845: mov     edx, [esi]
0x609847: fld     st
0x609849: fmul    [esp+70h+var_4C]
0x60984D: mov     eax, [edx+154h]
0x609853: add     esp, 4
0x609856: mov     ecx, esi
0x609858: fstp    [esp+6Ch+var_30]
0x60985C: fldz
0x60985E: fstp    [esp+6Ch+var_2C]
0x609862: fld     [esp+6Ch+var_54]
0x609866: fchs
0x609868: fmulp   st(1), st
0x60986A: fstp    [esp+6Ch+var_28]
0x60986E: call    eax
0x609870: lea     ecx, [esp+6Ch+var_30]
0x609874: push    ecx
0x609875: lea     edx, [esp+70h+var_3C]
0x609879: push    edx
0x60987A: lea     ecx, [eax+64h]
0x60987D: call    sub_7101F0
0x609882: push    eax
0x609883: mov     ecx, edi
0x609885: call    sub_4D99E0
0x60988A: mov     eax, [esi]
0x60988C: mov     edx, [eax+154h]
0x609892: mov     ecx, esi
0x609894: call    edx
0x609896: push    eax
0x609897: call    sub_480340
0x60989C: add     esp, 4
0x60989F: test    eax, eax
0x6098A1: pop     edi
0x6098A2: pop     esi
0x6098A3: jz      short loc_6098AA
0x6098A5: or      word ptr [eax+0Ch], 0Ch
0x6098AA: mov     al, 1
0x6098AC: add     esp, 64h
0x6098AF: retn    4
