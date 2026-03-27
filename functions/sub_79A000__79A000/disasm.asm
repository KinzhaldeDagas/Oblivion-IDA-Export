0x79A000: push    0FFFFFFFFh
0x79A002: push    offset SEH_79A000
0x79A007: mov     eax, large fs:0
0x79A00D: push    eax
0x79A00E: sub     esp, 10h
0x79A011: push    ebx
0x79A012: push    ebp
0x79A013: push    esi
0x79A014: push    edi
0x79A015: mov     eax, ds:0B30AACh
0x79A01A: xor     eax, esp
0x79A01C: push    eax
0x79A01D: lea     eax, [esp+30h+var_C]
0x79A021: mov     large fs:0, eax
0x79A027: mov     edi, ecx
0x79A029: mov     eax, [edi+0Ch]
0x79A02C: xor     ebx, ebx
0x79A02E: cmp     eax, ebx
0x79A030: jnz     short loc_79A036
0x79A032: xor     eax, eax
0x79A034: jmp     short loc_79A04C
0x79A036: mov     ecx, [edi+10h]
0x79A039: sub     ecx, eax
0x79A03B: mov     eax, 2AAAAAABh
0x79A040: imul    ecx
0x79A042: sar     edx, 3
0x79A045: mov     eax, edx
0x79A047: shr     eax, 1Fh
0x79A04A: add     eax, edx
0x79A04C: lea     esi, [eax-1]
0x79A04F: mov     eax, [edi+0Ch]
0x79A052: cmp     eax, ebx
0x79A054: jz      short loc_79A070
0x79A056: mov     ecx, [edi+10h]
0x79A059: sub     ecx, eax
0x79A05B: mov     eax, 2AAAAAABh
0x79A060: imul    ecx
0x79A062: sar     edx, 3
0x79A065: mov     eax, edx
0x79A067: shr     eax, 1Fh
0x79A06A: add     eax, edx
0x79A06C: cmp     esi, eax
0x79A06E: jb      short loc_79A075
0x79A070: call    __invalid_parameter_noinfo
0x79A075: lea     esi, [esi+esi*2]
0x79A078: shl     esi, 4
0x79A07B: add     esi, [edi+0Ch]
0x79A07E: mov     ecx, esi
0x79A080: call    sub_799EE0
0x79A085: sub     eax, 1
0x79A088: jz      loc_79A14D
0x79A08E: mov     [esp+30h+var_18], ebx
0x79A092: mov     eax, [esi+4]
0x79A095: test    eax, eax
0x79A097: jz      short loc_79A0B8
0x79A099: mov     ecx, [esi+8]
0x79A09C: sub     ecx, eax
0x79A09E: mov     eax, 92492493h
0x79A0A3: imul    ecx
0x79A0A5: add     edx, ecx
0x79A0A7: sar     edx, 5
0x79A0AA: mov     eax, edx
0x79A0AC: shr     eax, 1Fh
0x79A0AF: add     eax, edx
0x79A0B1: lea     ecx, [ebx+1]
0x79A0B4: cmp     ecx, eax
0x79A0B6: jb      short loc_79A0BD
0x79A0B8: call    __invalid_parameter_noinfo
0x79A0BD: mov     ebp, [esi+4]
0x79A0C0: test    ebp, ebp
0x79A0C2: jz      short loc_79A0E0
0x79A0C4: mov     ecx, [esi+8]
0x79A0C7: sub     ecx, ebp
0x79A0C9: mov     eax, 92492493h
0x79A0CE: imul    ecx
0x79A0D0: add     edx, ecx
0x79A0D2: sar     edx, 5
0x79A0D5: mov     eax, edx
0x79A0D7: shr     eax, 1Fh
0x79A0DA: add     eax, edx
0x79A0DC: cmp     ebx, eax
0x79A0DE: jb      short loc_79A0E5
0x79A0E0: call    __invalid_parameter_noinfo
0x79A0E5: mov     ecx, [esp+30h+var_18]
0x79A0E9: fld     dword ptr [ecx+ebp+3Ch]
0x79A0ED: mov     eax, [esi+4]
0x79A0F0: fsub    dword ptr [eax+ecx+4]
0x79A0F4: add     eax, ecx
0x79A0F6: fld     dword ptr [ecx+ebp+38h]
0x79A0FA: add     ecx, 38h ; '8'
0x79A0FD: fsub    dword ptr [eax]
0x79A0FF: add     ebx, 1
0x79A102: fld     dword ptr [ecx+ebp+8]
0x79A106: fsub    dword ptr [eax+8]
0x79A109: fld     st(1)
0x79A10B: fmulp   st(2), st
0x79A10D: fld     st(2)
0x79A10F: fmulp   st(3), st
0x79A111: fxch    st(1)
0x79A113: faddp   st(2), st
0x79A115: fmul    st, st
0x79A117: faddp   st(1), st
0x79A119: fstp    [esp+30h+var_18]
0x79A11D: mov     edx, [esp+30h+var_18]
0x79A121: sar     edx, 1
0x79A123: add     edx, 1FC00000h
0x79A129: mov     [esp+30h+var_18], edx
0x79A12D: fld     [esp+30h+var_18]
0x79A131: mov     [esp+30h+var_18], ecx
0x79A135: fadd    dword ptr [esi+10h]
0x79A138: mov     ecx, esi
0x79A13A: fstp    dword ptr [esi+10h]
0x79A13D: call    sub_799EE0
0x79A142: sub     eax, 1
0x79A145: cmp     ebx, eax
0x79A147: jb      loc_79A092
0x79A14D: lea     ecx, [esp+30h+var_19]
0x79A151: call    sub_78EAF0
0x79A156: mov     eax, [edi+44h]
0x79A159: test    eax, eax
0x79A15B: mov     [esp+30h+var_4], 0
0x79A163: jz      short loc_79A17D
0x79A165: mov     ecx, [edi+48h]
0x79A168: sub     ecx, eax
0x79A16A: mov     eax, 2E8BA2E9h
0x79A16F: imul    ecx
0x79A171: sar     edx, 3
0x79A174: mov     eax, edx
0x79A176: shr     eax, 1Fh
0x79A179: add     eax, edx
0x79A17B: jnz     short loc_79A1C7
0x79A17D: mov     eax, [edi+0Ch]
0x79A180: test    eax, eax
0x79A182: jz      short loc_79A19E
0x79A184: mov     ecx, [edi+10h]
0x79A187: sub     ecx, eax
0x79A189: mov     eax, 2AAAAAABh
0x79A18E: imul    ecx
0x79A190: sar     edx, 3
0x79A193: mov     eax, edx
0x79A195: shr     eax, 1Fh
0x79A198: add     eax, edx
0x79A19A: cmp     ebx, eax
0x79A19C: jb      short loc_79A1A3
0x79A19E: call    __invalid_parameter_noinfo
0x79A1A3: mov     edx, [edi+0Ch]
0x79A1A6: lea     ecx, [ebx+ebx*2]
0x79A1A9: shl     ecx, 4
0x79A1AC: mov     byte ptr [ecx+edx+18h], 0
0x79A1B1: fld     dword ptr [esi+10h]
0x79A1B4: fmul    qword ptr ds:0A2FAA0h
0x79A1BA: fstp    dword ptr [esi+14h]
0x79A1BD: fldz
0x79A1BF: fstp    dword ptr [esi+1Ch]
0x79A1C2: jmp     loc_79A359
0x79A1C7: mov     eax, [edi+44h]
0x79A1CA: test    eax, eax
0x79A1CC: jnz     short loc_79A1D2
0x79A1CE: xor     ebx, ebx
0x79A1D0: jmp     short loc_79A1E8
0x79A1D2: mov     ecx, [edi+48h]
0x79A1D5: sub     ecx, eax
0x79A1D7: mov     eax, 2E8BA2E9h
0x79A1DC: imul    ecx
0x79A1DE: sar     edx, 3
0x79A1E1: mov     ebx, edx
0x79A1E3: shr     ebx, 1Fh
0x79A1E6: add     ebx, edx
0x79A1E8: fld     dword ptr ds:0A3F3D8h
0x79A1EE: sub     esp, 8
0x79A1F1: fstp    [esp+38h+var_34]; float
0x79A1F5: lea     ecx, [esp+38h+var_19]
0x79A1F9: fldz
0x79A1FB: fstp    [esp+38h+var_38]; float
0x79A1FE: call    sub_78EA00
0x79A203: fnstcw  word ptr [esp+30h+var_18]
0x79A207: xor     edx, edx
0x79A209: movzx   eax, word ptr [esp+30h+var_18]
0x79A20E: or      eax, 0C00h
0x79A213: mov     dword ptr [esp+30h+var_14], eax
0x79A217: fldcw   word ptr [esp+30h+var_14]
0x79A21B: fistp   [esp+30h+var_14]
0x79A21F: mov     eax, dword ptr [esp+30h+var_14]
0x79A223: div     ebx
0x79A225: fldcw   word ptr [esp+30h+var_18]
0x79A229: mov     [esi+18h], dl
0x79A22C: mov     eax, [edi+44h]
0x79A22F: test    eax, eax
0x79A231: movzx   ebx, dl
0x79A234: jz      short loc_79A250
0x79A236: mov     ecx, [edi+48h]
0x79A239: sub     ecx, eax
0x79A23B: mov     eax, 2E8BA2E9h
0x79A240: imul    ecx
0x79A242: sar     edx, 3
0x79A245: mov     eax, edx
0x79A247: shr     eax, 1Fh
0x79A24A: add     eax, edx
0x79A24C: cmp     ebx, eax
0x79A24E: jb      short loc_79A255
0x79A250: call    __invalid_parameter_noinfo
0x79A255: mov     eax, [edi+44h]
0x79A258: imul    ebx, 2Ch ; ','
0x79A25B: fld     dword ptr [ebx+eax+1Ch]
0x79A25F: movzx   ebx, byte ptr [esi+18h]
0x79A263: fmul    dword ptr [esi+10h]
0x79A266: fmul    qword ptr ds:0A2FAA0h
0x79A26C: fstp    dword ptr [esi+14h]
0x79A26F: mov     eax, [edi+44h]
0x79A272: test    eax, eax
0x79A274: jz      short loc_79A290
0x79A276: mov     ecx, [edi+48h]
0x79A279: sub     ecx, eax
0x79A27B: mov     eax, 2E8BA2E9h
0x79A280: imul    ecx
0x79A282: sar     edx, 3
0x79A285: mov     eax, edx
0x79A287: shr     eax, 1Fh
0x79A28A: add     eax, edx
0x79A28C: cmp     ebx, eax
0x79A28E: jb      short loc_79A295
0x79A290: call    __invalid_parameter_noinfo
0x79A295: mov     ecx, [edi+44h]
0x79A298: imul    ebx, 2Ch ; ','
0x79A29B: fld     dword ptr [ebx+ecx+20h]
0x79A29F: movzx   ebx, byte ptr [esi+18h]
0x79A2A3: fmul    dword ptr [esi+14h]
0x79A2A6: fstp    dword ptr [esi+14h]
0x79A2A9: mov     eax, [edi+44h]
0x79A2AC: test    eax, eax
0x79A2AE: jz      short loc_79A2CA
0x79A2B0: mov     ecx, [edi+48h]
0x79A2B3: sub     ecx, eax
0x79A2B5: mov     eax, 2E8BA2E9h
0x79A2BA: imul    ecx
0x79A2BC: sar     edx, 3
0x79A2BF: mov     eax, edx
0x79A2C1: shr     eax, 1Fh
0x79A2C4: add     eax, edx
0x79A2C6: cmp     ebx, eax
0x79A2C8: jb      short loc_79A2CF
0x79A2CA: call    __invalid_parameter_noinfo
0x79A2CF: mov     eax, [edi+44h]
0x79A2D2: imul    ebx, 2Ch ; ','
0x79A2D5: add     ebx, [edi+44h]
0x79A2D8: test    eax, eax
0x79A2DA: mov     ebp, ebx
0x79A2DC: movzx   ebx, byte ptr [esi+18h]
0x79A2E0: jz      short loc_79A2FC
0x79A2E2: mov     ecx, [edi+48h]
0x79A2E5: sub     ecx, eax
0x79A2E7: mov     eax, 2E8BA2E9h
0x79A2EC: imul    ecx
0x79A2EE: sar     edx, 3
0x79A2F1: mov     eax, edx
0x79A2F3: shr     eax, 1Fh
0x79A2F6: add     eax, edx
0x79A2F8: cmp     ebx, eax
0x79A2FA: jb      short loc_79A301
0x79A2FC: call    __invalid_parameter_noinfo
0x79A301: fld     dword ptr [ebp+28h]
0x79A304: imul    ebx, 2Ch ; ','
0x79A307: add     ebx, [edi+44h]
0x79A30A: sub     esp, 8
0x79A30D: lea     ecx, [esp+38h+var_19]
0x79A311: fstp    [esp+38h+var_34]; float
0x79A315: fld     dword ptr [ebx+24h]
0x79A318: fstp    [esp+38h+var_38]; float
0x79A31B: call    sub_78EA00
0x79A320: fstp    dword ptr [esp+30h+var_14]
0x79A324: fld     dword ptr [esp+30h+var_14]
0x79A328: fst     dword ptr [esi+1Ch]
0x79A32B: mov     eax, [edi+0Ch]
0x79A32E: test    eax, eax
0x79A330: jz      short loc_79A348
0x79A332: mov     edi, [edi+10h]
0x79A335: sub     edi, eax
0x79A337: mov     eax, 2AAAAAABh
0x79A33C: imul    edi
0x79A33E: sar     edx, 3
0x79A341: mov     eax, edx
0x79A343: shr     eax, 1Fh
0x79A346: add     eax, edx
0x79A348: test    al, 1
0x79A34A: jz      short loc_79A357
0x79A34C: fmul    qword ptr ds:0A3D360h
0x79A352: fstp    dword ptr [esi+1Ch]
0x79A355: jmp     short loc_79A359
0x79A357: fstp    st
0x79A359: fld     [esp+30h+arg_0]
0x79A35D: lea     ecx, [esp+30h+var_19]; void *
0x79A361: fmul    dword ptr [esi+10h]
0x79A364: mov     [esp+30h+var_4], 0FFFFFFFFh
0x79A36C: fstp    dword ptr [esi+20h]
0x79A36F: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x79A374: mov     ecx, [esp+30h+var_C]
0x79A378: mov     large fs:0, ecx
0x79A37F: pop     ecx
0x79A380: pop     edi
0x79A381: pop     esi
0x79A382: pop     ebp
0x79A383: pop     ebx
0x79A384: add     esp, 1Ch
0x79A387: retn    4
