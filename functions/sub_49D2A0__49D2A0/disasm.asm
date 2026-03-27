0x49D2A0: push    0FFFFFFFFh
0x49D2A2: push    offset SEH_49D2A0
0x49D2A7: mov     eax, large fs:0
0x49D2AD: push    eax
0x49D2AE: sub     esp, 10h
0x49D2B1: push    ebx
0x49D2B2: push    ebp
0x49D2B3: push    esi
0x49D2B4: push    edi
0x49D2B5: mov     eax, ds:0B30AACh
0x49D2BA: xor     eax, esp
0x49D2BC: push    eax
0x49D2BD: lea     eax, [esp+30h+var_C]
0x49D2C1: mov     large fs:0, eax
0x49D2C7: push    30h ; '0'; Size
0x49D2C9: call    FormHeapAlloc
0x49D2CE: mov     edi, eax
0x49D2D0: xor     esi, esi
0x49D2D2: add     esp, 4
0x49D2D5: cmp     edi, esi
0x49D2D7: jz      loc_49D3F3
0x49D2DD: test    byte ptr ds:0B35260h, 1
0x49D2E4: fld     [esp+30h+arg_0]
0x49D2E8: fld     st
0x49D2EA: fld     qword ptr ds:0A2FAA0h
0x49D2F0: fmul    st(1), st
0x49D2F2: fxch    st(1)
0x49D2F4: fstp    [esp+30h+arg_0]
0x49D2F8: fld     [esp+30h+arg_0]
0x49D2FC: fst     [esp+30h+var_1C]
0x49D300: mov     eax, [esp+30h+var_1C]
0x49D304: fld     [esp+30h+arg_4]
0x49D308: mov     [edi], eax
0x49D30A: fld     st
0x49D30C: fmul    st, st(3)
0x49D30E: fstp    [esp+30h+arg_0]
0x49D312: fld     [esp+30h+arg_0]
0x49D316: fst     [esp+30h+var_18]
0x49D31A: mov     ecx, [esp+30h+var_18]
0x49D31E: fldz
0x49D320: mov     [edi+4], ecx
0x49D323: fst     [esp+30h+var_14]
0x49D327: mov     edx, [esp+30h+var_14]
0x49D32B: fxch    st(5)
0x49D32D: fchs
0x49D32F: mov     [edi+8], edx
0x49D332: fmul    st, st(4)
0x49D334: fstp    [esp+30h+arg_0]
0x49D338: fld     [esp+30h+arg_0]
0x49D33C: fst     [esp+30h+var_1C]
0x49D340: mov     eax, [esp+30h+var_1C]
0x49D344: fxch    st(1)
0x49D346: mov     [edi+0Ch], eax
0x49D349: fstp    [esp+30h+var_18]
0x49D34D: mov     ecx, [esp+30h+var_18]
0x49D351: fxch    st(4)
0x49D353: mov     [edi+10h], ecx
0x49D356: fst     [esp+30h+var_14]
0x49D35A: mov     edx, [esp+30h+var_14]
0x49D35E: fxch    st(4)
0x49D360: mov     [edi+14h], edx
0x49D363: fstp    [esp+30h+var_1C]
0x49D367: mov     eax, [esp+30h+var_1C]
0x49D36B: mov     [edi+18h], eax
0x49D36E: fchs
0x49D370: fmulp   st(2), st
0x49D372: fxch    st(1)
0x49D374: fstp    [esp+30h+arg_0]
0x49D378: fld     [esp+30h+arg_0]
0x49D37C: fst     [esp+30h+var_18]
0x49D380: mov     ecx, [esp+30h+var_18]
0x49D384: fxch    st(2)
0x49D386: mov     [edi+1Ch], ecx
0x49D389: fst     [esp+30h+var_14]
0x49D38D: mov     edx, [esp+30h+var_14]
0x49D391: fxch    st(1)
0x49D393: mov     [edi+20h], edx
0x49D396: fstp    [esp+30h+var_1C]
0x49D39A: mov     eax, [esp+30h+var_1C]
0x49D39E: fxch    st(1)
0x49D3A0: mov     [edi+24h], eax
0x49D3A3: fstp    [esp+30h+var_18]
0x49D3A7: mov     ecx, [esp+30h+var_18]
0x49D3AB: mov     [edi+28h], ecx
0x49D3AE: fst     [esp+30h+var_14]
0x49D3B2: mov     edx, [esp+30h+var_14]
0x49D3B6: mov     [edi+2Ch], edx
0x49D3B9: jnz     short loc_49D3D8
0x49D3BB: or      dword ptr ds:0B35260h, 1
0x49D3C2: fst     dword ptr ds:0B35254h
0x49D3C8: fstp    dword ptr ds:0B35258h
0x49D3CE: fld1
0x49D3D0: fstp    dword ptr ds:0B3525Ch
0x49D3D6: jmp     short loc_49D3DA
0x49D3D8: fstp    st
0x49D3DA: push    20h ; ' '; Size
0x49D3DC: call    FormHeapAlloc
0x49D3E1: mov     ebp, eax
0x49D3E3: add     esp, 4
0x49D3E6: cmp     ebp, esi
0x49D3E8: jnz     short loc_49D3FA
0x49D3EA: push    edi
0x49D3EB: call    FormHeapFree
0x49D3F0: add     esp, 4
0x49D3F3: xor     eax, eax
0x49D3F5: jmp     loc_49D78F
0x49D3FA: push    0Ch; Size
0x49D3FC: call    FormHeapAlloc
0x49D401: mov     ebx, eax
0x49D403: add     esp, 4
0x49D406: cmp     ebx, esi
0x49D408: jnz     short loc_49D420
0x49D40A: push    edi
0x49D40B: call    FormHeapFree
0x49D410: push    ebp
0x49D411: call    FormHeapFree
0x49D416: add     esp, 8
0x49D419: xor     eax, eax
0x49D41B: jmp     loc_49D78F
0x49D420: cmp     byte ptr [esp+30h+arg_10], 0
0x49D425: mov     eax, 2
0x49D42A: mov     [ebx], si
0x49D42D: mov     word ptr [ebx+2], 1
0x49D433: mov     [ebx+4], ax
0x49D437: mov     [ebx+6], si
0x49D43B: mov     [ebx+8], ax
0x49D43F: mov     word ptr [ebx+0Ah], 3
0x49D445: mov     [esp+30h+arg_0], esi
0x49D449: jz      short loc_49D4C8
0x49D44B: push    30h ; '0'; Size
0x49D44D: call    FormHeapAlloc
0x49D452: add     esp, 4
0x49D455: cmp     eax, esi
0x49D457: mov     [esp+30h+arg_0], eax
0x49D45B: jz      short loc_49D4C8
0x49D45D: mov     ecx, ds:0B35254h
0x49D463: mov     [eax], ecx
0x49D465: mov     edx, ds:0B35258h
0x49D46B: mov     [eax+4], edx
0x49D46E: mov     ecx, ds:0B3525Ch
0x49D474: mov     [eax+8], ecx
0x49D477: mov     edx, ds:0B35254h
0x49D47D: mov     [eax+0Ch], edx
0x49D480: mov     ecx, ds:0B35258h
0x49D486: mov     [eax+10h], ecx
0x49D489: mov     edx, ds:0B3525Ch
0x49D48F: mov     [eax+14h], edx
0x49D492: mov     ecx, ds:0B35254h
0x49D498: mov     [eax+18h], ecx
0x49D49B: mov     edx, ds:0B35258h
0x49D4A1: mov     [eax+1Ch], edx
0x49D4A4: mov     ecx, ds:0B3525Ch
0x49D4AA: mov     [eax+20h], ecx
0x49D4AD: mov     edx, ds:0B35254h
0x49D4B3: mov     [eax+24h], edx
0x49D4B6: mov     ecx, ds:0B35258h
0x49D4BC: mov     [eax+28h], ecx
0x49D4BF: mov     edx, ds:0B3525Ch
0x49D4C5: mov     [eax+2Ch], edx
0x49D4C8: cmp     byte ptr [esp+30h+arg_14], 0
0x49D4CD: mov     [esp+30h+arg_10], esi
0x49D4D1: jz      loc_49D69F
0x49D4D7: push    40h ; '@'; Size
0x49D4D9: call    FormHeapAlloc
0x49D4DE: mov     esi, eax
0x49D4E0: add     esp, 4
0x49D4E3: mov     [esp+30h+arg_10], esi
0x49D4E7: test    esi, esi
0x49D4E9: mov     [esp+30h+var_4], 0
0x49D4F1: jz      short loc_49D504
0x49D4F3: push    offset sub_47EA50
0x49D4F8: push    4
0x49D4FA: push    10h
0x49D4FC: push    esi
0x49D4FD: call    sub_401080
0x49D502: jmp     short loc_49D506
0x49D504: xor     esi, esi
0x49D506: test    esi, esi
0x49D508: mov     [esp+30h+var_4], 0FFFFFFFFh
0x49D510: mov     [esp+30h+arg_10], esi
0x49D514: jz      loc_49D69F
0x49D51A: test    byte ptr ds:0B35260h, 2
0x49D521: jnz     short loc_49D560
0x49D523: or      dword ptr ds:0B35260h, 2
0x49D52A: fld     dword ptr ds:0A3D65Ch
0x49D530: push    ecx
0x49D531: fstp    [esp+34h+var_34]; float
0x49D534: push    offset aFalphaWater; "fAlpha:Water"
0x49D539: mov     ecx, offset flt_B3524C
0x49D53E: mov     [esp+38h+var_4], 1
0x49D546: call    sub_404850
0x49D54B: push    offset sub_A1A630; void (__cdecl *)()
0x49D550: call    _atexit
0x49D555: add     esp, 4
0x49D558: mov     [esp+30h+var_4], 0FFFFFFFFh
0x49D560: mov     ecx, offset flt_B3524C
0x49D565: call    GameSetting_GetSafeFloatPointer
0x49D56A: fld1
0x49D56C: fcom    dword ptr [eax]
0x49D56E: fnstsw  ax
0x49D570: test    ah, 5
0x49D573: jp      short loc_49D57D
0x49D575: fstp    dword ptr ds:0B3524Ch
0x49D57B: jmp     short loc_49D59E
0x49D57D: mov     ecx, offset flt_B3524C
0x49D582: fstp    st
0x49D584: call    GameSetting_GetSafeFloatPointer
0x49D589: fldz
0x49D58B: fcom    dword ptr [eax]
0x49D58D: fnstsw  ax
0x49D58F: test    ah, 41h
0x49D592: jnz     short loc_49D59C
0x49D594: fstp    dword ptr ds:0B3524Ch
0x49D59A: jmp     short loc_49D59E
0x49D59C: fstp    st
0x49D59E: mov     ecx, offset flt_B3524C
0x49D5A3: call    sub_404E30
0x49D5A8: fstp    [esp+30h+arg_14]
0x49D5AC: fld1
0x49D5AE: fst     [esp+30h+var_1C]
0x49D5B2: mov     eax, [esp+30h+var_1C]
0x49D5B6: fst     [esp+30h+var_18]
0x49D5BA: mov     ecx, [esp+30h+var_18]
0x49D5BE: fstp    [esp+30h+var_14]
0x49D5C2: fld     [esp+30h+arg_14]
0x49D5C6: mov     edx, [esp+30h+var_14]
0x49D5CA: mov     [esi], eax
0x49D5CC: fstp    [esp+30h+var_10]
0x49D5D0: mov     eax, [esp+30h+var_10]
0x49D5D4: mov     [esi+4], ecx
0x49D5D7: mov     [esi+8], edx
0x49D5DA: mov     ecx, offset flt_B3524C
0x49D5DF: mov     [esi+0Ch], eax
0x49D5E2: call    sub_404E30
0x49D5E7: fstp    [esp+30h+arg_14]
0x49D5EB: fld1
0x49D5ED: fst     [esp+30h+var_1C]
0x49D5F1: mov     ecx, [esp+30h+var_1C]
0x49D5F5: fst     [esp+30h+var_18]
0x49D5F9: mov     edx, [esp+30h+var_18]
0x49D5FD: fstp    [esp+30h+var_14]
0x49D601: fld     [esp+30h+arg_14]
0x49D605: mov     eax, [esp+30h+var_14]
0x49D609: mov     [esi+10h], ecx
0x49D60C: fstp    [esp+30h+var_10]
0x49D610: mov     ecx, [esp+30h+var_10]
0x49D614: mov     [esi+14h], edx
0x49D617: mov     [esi+18h], eax
0x49D61A: mov     [esi+1Ch], ecx
0x49D61D: mov     ecx, offset flt_B3524C
0x49D622: call    sub_404E30
0x49D627: fstp    [esp+30h+arg_14]
0x49D62B: fld1
0x49D62D: fst     [esp+30h+var_1C]
0x49D631: mov     edx, [esp+30h+var_1C]
0x49D635: fst     [esp+30h+var_18]
0x49D639: mov     eax, [esp+30h+var_18]
0x49D63D: fstp    [esp+30h+var_14]
0x49D641: fld     [esp+30h+arg_14]
0x49D645: mov     ecx, [esp+30h+var_14]
0x49D649: mov     [esi+20h], edx
0x49D64C: fstp    [esp+30h+var_10]
0x49D650: mov     edx, [esp+30h+var_10]
0x49D654: mov     [esi+24h], eax
0x49D657: mov     [esi+28h], ecx
0x49D65A: mov     ecx, offset flt_B3524C
0x49D65F: mov     [esi+2Ch], edx
0x49D662: call    sub_404E30
0x49D667: fstp    [esp+30h+arg_14]
0x49D66B: fld1
0x49D66D: fst     [esp+30h+var_1C]
0x49D671: mov     eax, [esp+30h+var_1C]
0x49D675: fst     [esp+30h+var_18]
0x49D679: mov     ecx, [esp+30h+var_18]
0x49D67D: fst     [esp+30h+var_14]
0x49D681: fld     [esp+30h+arg_14]
0x49D685: mov     edx, [esp+30h+var_14]
0x49D689: mov     [esi+30h], eax
0x49D68C: fstp    [esp+30h+var_10]
0x49D690: mov     eax, [esp+30h+var_10]
0x49D694: mov     [esi+34h], ecx
0x49D697: mov     [esi+38h], edx
0x49D69A: mov     [esi+3Ch], eax
0x49D69D: jmp     short loc_49D6A1
0x49D69F: fld1
0x49D6A1: mov     eax, [esp+30h+arg_C]
0x49D6A5: fstp    [esp+30h+arg_14]
0x49D6A9: cmp     eax, 1
0x49D6AC: jz      short loc_49D6C4
0x49D6AE: test    eax, eax
0x49D6B0: mov     [esp+30h+arg_14], eax
0x49D6B4: fild    [esp+30h+arg_14]
0x49D6B8: jge     short loc_49D6C0
0x49D6BA: fadd    dword ptr ds:0A2FC78h
0x49D6C0: fstp    [esp+30h+arg_14]
0x49D6C4: fld     [esp+30h+arg_14]
0x49D6C8: push    58h ; 'X'; Size
0x49D6CA: fst     [esp+34h+var_1C]
0x49D6CE: mov     ecx, [esp+34h+var_1C]
0x49D6D2: fst     [esp+34h+var_18]
0x49D6D6: mov     edx, [esp+34h+var_18]
0x49D6DA: fldz
0x49D6DC: mov     [ebp+0], ecx
0x49D6DF: fst     [esp+34h+var_1C]
0x49D6E3: mov     [ebp+4], edx
0x49D6E6: mov     eax, [esp+34h+var_1C]
0x49D6EA: fxch    st(1)
0x49D6EC: fst     [esp+34h+var_18]
0x49D6F0: mov     [ebp+8], eax
0x49D6F3: mov     ecx, [esp+34h+var_18]
0x49D6F7: fxch    st(1)
0x49D6F9: fst     [esp+34h+var_1C]
0x49D6FD: mov     [ebp+0Ch], ecx
0x49D700: mov     edx, [esp+34h+var_1C]
0x49D704: fst     [esp+34h+var_18]
0x49D708: mov     eax, [esp+34h+var_18]
0x49D70C: fxch    st(1)
0x49D70E: fstp    [esp+34h+var_1C]
0x49D712: mov     [ebp+10h], edx
0x49D715: mov     ecx, [esp+34h+var_1C]
0x49D719: mov     [ebp+14h], eax
0x49D71C: fstp    [esp+34h+var_18]
0x49D720: mov     edx, [esp+34h+var_18]
0x49D724: mov     [ebp+18h], ecx
0x49D727: mov     [ebp+1Ch], edx
0x49D72A: call    FormHeapAlloc
0x49D72F: add     esp, 4
0x49D732: mov     [esp+30h+arg_14], eax
0x49D736: test    eax, eax
0x49D738: mov     [esp+30h+var_4], 2
0x49D740: jz      short loc_49D7A5
0x49D742: mov     ecx, [esp+30h+arg_10]
0x49D746: mov     edx, [esp+30h+arg_0]
0x49D74A: push    ebx
0x49D74B: push    2
0x49D74D: push    0
0x49D74F: push    1
0x49D751: push    ebp
0x49D752: push    ecx
0x49D753: push    edx
0x49D754: push    edi
0x49D755: push    4
0x49D757: mov     ecx, eax
0x49D759: call    sub_71FB40
0x49D75E: mov     esi, eax
0x49D760: test    esi, esi
0x49D762: jnz     short loc_49D78D
0x49D764: push    edi
0x49D765: call    FormHeapFree
0x49D76A: mov     eax, [esp+34h+arg_0]
0x49D76E: push    eax
0x49D76F: call    FormHeapFree
0x49D774: push    ebp
0x49D775: call    FormHeapFree
0x49D77A: push    ebx
0x49D77B: call    FormHeapFree
0x49D780: mov     ecx, [esp+40h+arg_10]
0x49D784: push    ecx
0x49D785: call    FormHeapFree
0x49D78A: add     esp, 14h
0x49D78D: mov     eax, esi
0x49D78F: mov     ecx, [esp+30h+var_C]
0x49D793: mov     large fs:0, ecx
0x49D79A: pop     ecx
0x49D79B: pop     edi
0x49D79C: pop     esi
0x49D79D: pop     ebp
0x49D79E: pop     ebx
0x49D79F: add     esp, 1Ch
0x49D7A2: retn    18h
0x49D7A5: xor     esi, esi
0x49D7A7: jmp     short loc_49D764
