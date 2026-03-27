0x5EDEC0: push    0FFFFFFFFh
0x5EDEC2: push    offset SEH_5EDEC0
0x5EDEC7: mov     eax, large fs:0
0x5EDECD: push    eax
0x5EDECE: sub     esp, 58h
0x5EDED1: push    esi
0x5EDED2: push    edi
0x5EDED3: mov     eax, ds:0B30AACh
0x5EDED8: xor     eax, esp
0x5EDEDA: push    eax
0x5EDEDB: lea     eax, [esp+70h+var_C]
0x5EDEDF: mov     large fs:0, eax
0x5EDEE5: mov     edi, ecx
0x5EDEE7: cmp     dword ptr ds:0B148CCh, 1
0x5EDEEE: jle     loc_5EE18F
0x5EDEF4: cmp     [esp+70h+arg_4], 0
0x5EDEF9: jnz     loc_5EE18F
0x5EDEFF: cmp     edi, ds:0B333C4h
0x5EDF05: jnz     short loc_5EDF3D
0x5EDF07: fldz
0x5EDF09: fst     [esp+70h+var_2C]
0x5EDF0D: mov     eax, [esp+70h+var_2C]
0x5EDF11: fstp    [esp+70h+var_28]
0x5EDF15: fld1
0x5EDF17: mov     ecx, [esp+70h+var_28]
0x5EDF1B: fst     [esp+70h+var_24]
0x5EDF1F: mov     [esp+70h+var_1C], eax
0x5EDF23: fstp    [esp+70h+var_20]
0x5EDF27: mov     [esp+70h+var_18], ecx
0x5EDF2B: mov     edx, [esp+70h+var_24]
0x5EDF2F: mov     eax, [esp+70h+var_20]
0x5EDF33: mov     [esp+70h+var_14], edx
0x5EDF37: mov     [esp+70h+var_10], eax
0x5EDF3B: jmp     short loc_5EDF71
0x5EDF3D: fld1
0x5EDF3F: fst     [esp+70h+var_2C]
0x5EDF43: fldz
0x5EDF45: mov     ecx, [esp+70h+var_2C]
0x5EDF49: fst     [esp+70h+var_28]
0x5EDF4D: mov     [esp+70h+var_1C], ecx
0x5EDF51: fstp    [esp+70h+var_24]
0x5EDF55: mov     edx, [esp+70h+var_28]
0x5EDF59: mov     eax, [esp+70h+var_24]
0x5EDF5D: mov     [esp+70h+var_18], edx
0x5EDF61: fstp    [esp+70h+var_20]
0x5EDF65: mov     ecx, [esp+70h+var_20]
0x5EDF69: mov     [esp+70h+var_14], eax
0x5EDF6D: mov     [esp+70h+var_10], ecx
0x5EDF71: mov     edx, [edi]
0x5EDF73: mov     eax, [edx+154h]
0x5EDF79: mov     ecx, edi
0x5EDF7B: call    eax
0x5EDF7D: test    eax, eax
0x5EDF7F: jz      short loc_5EDFDF
0x5EDF81: mov     ecx, [edi+58h]
0x5EDF84: mov     edx, [ecx]
0x5EDF86: lea     esi, [eax+64h]
0x5EDF89: mov     eax, [edx+310h]
0x5EDF8F: call    eax
0x5EDF91: push    eax
0x5EDF92: lea     ecx, [esp+74h+var_5C]
0x5EDF96: push    ecx
0x5EDF97: mov     ecx, esi
0x5EDF99: call    sub_53D4B0
0x5EDF9E: mov     edx, [eax]
0x5EDFA0: mov     ecx, [eax+4]
0x5EDFA3: mov     [esp+70h+var_50], edx
0x5EDFA7: mov     edx, [eax+8]
0x5EDFAA: lea     eax, [esp+70h+a2]
0x5EDFAE: mov     [esp+70h+var_4C], ecx
0x5EDFB2: push    eax; a2
0x5EDFB3: mov     ecx, edi; this
0x5EDFB5: mov     [esp+74h+var_48], edx
0x5EDFB9: call    sub_5E6A40
0x5EDFBE: push    eax
0x5EDFBF: lea     ecx, [esp+74h+var_2C]
0x5EDFC3: push    ecx
0x5EDFC4: mov     ecx, esi
0x5EDFC6: call    sub_53D4B0
0x5EDFCB: mov     edx, [eax]
0x5EDFCD: mov     ecx, [eax+4]
0x5EDFD0: mov     [esp+70h+var_5C], edx
0x5EDFD4: mov     edx, [eax+8]
0x5EDFD7: mov     [esp+70h+var_58], ecx
0x5EDFDB: mov     [esp+70h+var_54], edx
0x5EDFDF: fld     [esp+70h+var_5C]
0x5EDFE3: fsub    [esp+70h+var_50]
0x5EDFE7: fstp    [esp+70h+arg_4]
0x5EDFEB: fld     [esp+70h+var_58]
0x5EDFEF: fsub    [esp+70h+var_4C]
0x5EDFF3: fstp    [esp+70h+var_64]
0x5EDFF7: fld     [esp+70h+var_54]
0x5EDFFB: fsub    [esp+70h+var_48]
0x5EDFFF: fstp    [esp+70h+var_60]
0x5EE003: fld     [esp+70h+arg_4]
0x5EE007: fstp    [esp+70h+var_44]
0x5EE00B: mov     eax, [esp+70h+var_44]
0x5EE00F: fld     [esp+70h+var_64]
0x5EE013: mov     [esp+70h+var_50], eax
0x5EE017: fstp    [esp+70h+var_40]
0x5EE01B: mov     ecx, [esp+70h+var_40]
0x5EE01F: fld     [esp+70h+var_60]
0x5EE023: mov     [esp+70h+var_4C], ecx
0x5EE027: fstp    [esp+70h+var_3C]
0x5EE02B: mov     edx, [esp+70h+var_3C]
0x5EE02F: lea     ecx, [esp+70h+var_50]
0x5EE033: mov     [esp+70h+var_48], edx
0x5EE037: call    sub_43F350
0x5EE03C: fstp    st
0x5EE03E: fld     [esp+70h+var_50]
0x5EE042: lea     eax, [esp+70h+var_1C]
0x5EE046: fld     qword ptr ds:0A6E6F8h
0x5EE04C: push    eax
0x5EE04D: fmul    st(1), st
0x5EE04F: lea     ecx, [esp+74h+var_44]
0x5EE053: fxch    st(1)
0x5EE055: push    ecx
0x5EE056: fstp    [esp+78h+arg_4]
0x5EE05D: fld     [esp+78h+var_4C]
0x5EE061: fmul    st, st(1)
0x5EE063: fstp    [esp+78h+var_60]
0x5EE067: fmul    [esp+78h+var_48]
0x5EE06B: fstp    [esp+78h+var_64]
0x5EE06F: fld     [esp+78h+arg_4]
0x5EE076: fld     qword ptr ds:0A2FC80h
0x5EE07C: fmul    st(1), st
0x5EE07E: fxch    st(1)
0x5EE080: fstp    [esp+78h+arg_4]
0x5EE087: fld     [esp+78h+var_60]
0x5EE08B: fmul    st, st(1)
0x5EE08D: fstp    [esp+78h+var_60]
0x5EE091: fmul    [esp+78h+var_64]
0x5EE095: fstp    [esp+78h+var_64]
0x5EE099: fld     [esp+78h+arg_4]
0x5EE0A0: fstp    [esp+78h+var_44]
0x5EE0A4: fld     [esp+78h+var_60]
0x5EE0A8: fstp    [esp+78h+var_40]
0x5EE0AC: fld     [esp+78h+var_64]
0x5EE0B0: fstp    [esp+78h+var_3C]
0x5EE0B4: call    sub_6FCDC0
0x5EE0B9: mov     edx, [esp+78h+var_5C]
0x5EE0BD: mov     ecx, [esp+78h+var_54]
0x5EE0C1: mov     esi, eax
0x5EE0C3: mov     eax, [esp+78h+var_58]
0x5EE0C7: mov     [esi+54h], edx
0x5EE0CA: mov     [esi+58h], eax
0x5EE0CD: push    1Ch; Size
0x5EE0CF: mov     [esi+5Ch], ecx
0x5EE0D2: call    FormHeapAlloc
0x5EE0D7: mov     edi, eax
0x5EE0D9: add     esp, 0Ch
0x5EE0DC: mov     [esp+70h+arg_4], edi
0x5EE0E0: test    edi, edi
0x5EE0E2: mov     [esp+70h+var_4], 0
0x5EE0EA: jz      short loc_5EE103
0x5EE0EC: mov     ecx, edi; this
0x5EE0EE: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x5EE0F3: mov     dword ptr [edi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x5EE0F9: mov     word ptr [edi+18h], 8
0x5EE0FF: mov     eax, edi
0x5EE101: jmp     short loc_5EE105
0x5EE103: xor     eax, eax
0x5EE105: mov     dx, [eax+18h]
0x5EE109: and     dx, 0FFD7h
0x5EE10E: or      dx, 10h
0x5EE112: push    eax; a2
0x5EE113: mov     ecx, esi; this
0x5EE115: mov     [esp+74h+var_4], 0FFFFFFFFh
0x5EE11D: mov     [eax+18h], dx
0x5EE121: call    sub_405680
0x5EE126: push    1Ch; Size
0x5EE128: call    FormHeapAlloc
0x5EE12D: mov     edi, eax
0x5EE12F: add     esp, 4
0x5EE132: mov     [esp+70h+arg_4], edi
0x5EE136: test    edi, edi
0x5EE138: mov     [esp+70h+var_4], 1
0x5EE140: jz      short loc_5EE157
0x5EE142: mov     ecx, edi; this
0x5EE144: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x5EE149: mov     dword ptr [edi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x5EE14F: mov     word ptr [edi+18h], 0Fh
0x5EE155: jmp     short loc_5EE159
0x5EE157: xor     edi, edi
0x5EE159: mov     ax, [edi+18h]
0x5EE15D: and     ax, 0FFFEh
0x5EE161: or      ax, 2
0x5EE165: push    edi; a2
0x5EE166: mov     ecx, esi; this
0x5EE168: mov     [esp+74h+var_4], 0FFFFFFFFh
0x5EE170: mov     [edi+18h], ax
0x5EE174: call    sub_405680
0x5EE179: fld     dword ptr ds:0B148D4h
0x5EE17F: push    ecx
0x5EE180: mov     ecx, ds:0B333A0h
0x5EE186: fstp    [esp+74h+var_74]; float
0x5EE189: push    esi; int
0x5EE18A: call    sub_440E60
0x5EE18F: mov     ecx, [esp+70h+var_C]
0x5EE193: mov     large fs:0, ecx
0x5EE19A: pop     ecx
0x5EE19B: pop     edi
0x5EE19C: pop     esi
0x5EE19D: add     esp, 64h
0x5EE1A0: retn    0Ch
