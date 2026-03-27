0x6FF0A0: sub     esp, 38h
0x6FF0A3: push    ebx
0x6FF0A4: mov     ebx, [esp+3Ch+arg_4]
0x6FF0A8: cmp     word ptr [ebx+48h], 0
0x6FF0AD: push    esi
0x6FF0AE: mov     esi, ecx
0x6FF0B0: jz      loc_6FF27A
0x6FF0B6: mov     eax, [esi+10h]
0x6FF0B9: push    edi
0x6FF0BA: mov     edi, [eax+1Ch]
0x6FF0BD: test    edi, edi
0x6FF0BF: jnz     short loc_6FF0D1
0x6FF0C1: mov     edx, [esi]
0x6FF0C3: mov     eax, [edx+54h]
0x6FF0C6: call    eax
0x6FF0C8: pop     edi
0x6FF0C9: pop     esi
0x6FF0CA: pop     ebx
0x6FF0CB: add     esp, 38h
0x6FF0CE: retn    8
0x6FF0D1: push    ebp
0x6FF0D2: lea     ebp, [esi+24h]
0x6FF0D5: push    offset Vector3_InitValue?
0x6FF0DA: mov     ecx, ebp
0x6FF0DC: call    sub_8AA350
0x6FF0E1: fld     [esp+48h+arg_0]
0x6FF0E5: test    al, al
0x6FF0E7: jz      short loc_6FF121
0x6FF0E9: mov     ecx, ds:0B3F9A8h
0x6FF0EF: mov     [esi+30h], ecx
0x6FF0F2: mov     edx, ds:0B3F9ACh
0x6FF0F8: mov     [esi+34h], edx
0x6FF0FB: mov     eax, ds:0B3F9B0h
0x6FF100: fst     dword ptr [esi+1Ch]
0x6FF103: mov     [esi+38h], eax
0x6FF106: mov     ecx, [edi+88h]
0x6FF10C: mov     [ebp+0], ecx
0x6FF10F: mov     edx, [edi+8Ch]
0x6FF115: mov     [ebp+4], edx
0x6FF118: mov     eax, [edi+90h]
0x6FF11E: mov     [ebp+8], eax
0x6FF121: mov     ecx, [edi+88h]
0x6FF127: fld     st
0x6FF129: fsub    dword ptr [esi+1Ch]
0x6FF12C: mov     edx, [edi+8Ch]
0x6FF132: mov     edi, [edi+90h]
0x6FF138: movzx   ebx, word ptr [ebx+48h]
0x6FF13C: fstp    [esp+48h+var_38]
0x6FF140: mov     [esp+48h+var_24], ecx
0x6FF144: fldz
0x6FF146: mov     [esp+48h+var_20], edx
0x6FF14A: fld     [esp+48h+var_38]
0x6FF14E: mov     [esp+48h+var_1C], edi
0x6FF152: fucom   st(1)
0x6FF154: fnstsw  ax
0x6FF156: fstp    st(1)
0x6FF158: test    ah, 44h
0x6FF15B: jnp     loc_6FF261
0x6FF161: fstp    st(1)
0x6FF163: push    offset Vector3_InitValue?
0x6FF168: fld     [esp+4Ch+var_24]
0x6FF16C: lea     ecx, [esp+4Ch+var_18]
0x6FF170: fsub    dword ptr [ebp+0]
0x6FF173: fstp    [esp+4Ch+var_18]
0x6FF177: fld     [esp+4Ch+var_20]
0x6FF17B: fsub    dword ptr [ebp+4]
0x6FF17E: fstp    [esp+4Ch+var_14]
0x6FF182: fld     [esp+4Ch+var_1C]
0x6FF186: fsub    dword ptr [ebp+8]
0x6FF189: fstp    [esp+4Ch+var_10]
0x6FF18D: fld     dword ptr [esi+20h]
0x6FF190: fstp    [esp+4Ch+var_34]
0x6FF194: fld     [esp+4Ch+var_34]
0x6FF198: fld     [esp+4Ch+var_18]
0x6FF19C: fmul    st, st(1)
0x6FF19E: fstp    [esp+4Ch+var_C]
0x6FF1A2: fld     [esp+4Ch+var_14]
0x6FF1A6: fmul    st, st(1)
0x6FF1A8: fstp    [esp+4Ch+var_8]
0x6FF1AC: fmul    [esp+4Ch+var_10]
0x6FF1B0: fstp    [esp+4Ch+var_4]
0x6FF1B4: fld1
0x6FF1B6: fdivrp  st(1), st
0x6FF1B8: fstp    [esp+4Ch+var_34]
0x6FF1BC: fld     [esp+4Ch+var_34]
0x6FF1C0: fld     [esp+4Ch+var_C]
0x6FF1C4: fmul    st, st(1)
0x6FF1C6: fstp    [esp+4Ch+var_30]
0x6FF1CA: fld     [esp+4Ch+var_8]
0x6FF1CE: fmul    st, st(1)
0x6FF1D0: fstp    [esp+4Ch+var_2C]
0x6FF1D4: fmul    [esp+4Ch+var_4]
0x6FF1D8: fstp    [esp+4Ch+var_28]
0x6FF1DC: fld     [esp+4Ch+var_30]
0x6FF1E0: fsub    dword ptr [esi+30h]
0x6FF1E3: fstp    [esp+4Ch+var_18]
0x6FF1E7: fld     [esp+4Ch+var_2C]
0x6FF1EB: fsub    dword ptr [esi+34h]
0x6FF1EE: fstp    [esp+4Ch+var_14]
0x6FF1F2: fld     [esp+4Ch+var_28]
0x6FF1F6: fsub    dword ptr [esi+38h]
0x6FF1F9: fstp    [esp+4Ch+var_10]
0x6FF1FD: call    sub_8AA390
0x6FF202: test    al, al
0x6FF204: jz      short loc_6FF244
0x6FF206: test    ebx, ebx
0x6FF208: mov     eax, [esp+48h+arg_4]
0x6FF20C: mov     eax, [eax+5Ch]
0x6FF20F: jz      short loc_6FF244
0x6FF211: fld     [esp+48h+var_18]
0x6FF215: fld     [esp+48h+var_14]
0x6FF219: fld     [esp+48h+var_10]
0x6FF21D: fld     dword ptr [eax]
0x6FF21F: sub     ebx, 1
0x6FF222: fadd    st, st(3)
0x6FF224: add     eax, 1Ch
0x6FF227: test    ebx, ebx
0x6FF229: fstp    dword ptr [eax-1Ch]
0x6FF22C: fld     dword ptr [eax-18h]
0x6FF22F: fadd    st, st(2)
0x6FF231: fstp    dword ptr [eax-18h]
0x6FF234: fld     dword ptr [eax-14h]
0x6FF237: fadd    st, st(1)
0x6FF239: fstp    dword ptr [eax-14h]
0x6FF23C: jnz     short loc_6FF21D
0x6FF23E: fstp    st(2)
0x6FF240: fstp    st
0x6FF242: fstp    st
0x6FF244: mov     ecx, [esp+48h+var_30]
0x6FF248: fld     [esp+48h+arg_0]
0x6FF24C: mov     edx, [esp+48h+var_2C]
0x6FF250: fld     [esp+48h+var_38]
0x6FF254: mov     eax, [esp+48h+var_28]
0x6FF258: mov     [esi+30h], ecx
0x6FF25B: mov     [esi+34h], edx
0x6FF25E: mov     [esi+38h], eax
0x6FF261: mov     ecx, [esp+48h+var_24]
0x6FF265: fstp    dword ptr [esi+18h]
0x6FF268: mov     edx, [esp+48h+var_20]
0x6FF26C: mov     [ebp+0], ecx
0x6FF26F: fstp    dword ptr [esi+1Ch]
0x6FF272: mov     [ebp+4], edx
0x6FF275: mov     [ebp+8], edi
0x6FF278: pop     ebp
0x6FF279: pop     edi
0x6FF27A: pop     esi
0x6FF27B: pop     ebx
0x6FF27C: add     esp, 38h
0x6FF27F: retn    8
