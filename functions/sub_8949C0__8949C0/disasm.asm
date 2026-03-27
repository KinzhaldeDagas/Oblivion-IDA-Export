0x8949C0: push    ebp
0x8949C1: mov     ebp, esp
0x8949C3: and     esp, 0FFFFFFF0h
0x8949C6: push    0FFFFFFFFh
0x8949C8: push    offset SEH_8949C0
0x8949CD: mov     eax, large fs:0
0x8949D3: push    eax
0x8949D4: sub     esp, 238h
0x8949DA: mov     eax, ds:0B30AACh
0x8949DF: xor     eax, esp
0x8949E1: mov     [esp+244h+var_14], eax
0x8949E8: push    ebx
0x8949E9: push    esi
0x8949EA: push    edi
0x8949EB: mov     eax, ds:0B30AACh
0x8949F0: xor     eax, esp
0x8949F2: push    eax
0x8949F3: lea     eax, [esp+254h+var_C]
0x8949FA: mov     large fs:0, eax
0x894A00: mov     edi, [ebp+a2]
0x894A03: mov     ebx, ecx
0x894A05: xor     eax, eax
0x894A07: cmp     ebx, eax
0x894A09: mov     [esp+254h+var_235], 0
0x894A0E: jz      short loc_894A22
0x894A10: mov     ecx, [ebx+8]
0x894A13: cmp     ecx, eax
0x894A15: jz      short loc_894A22
0x894A17: call    sub_8AC0C0
0x894A1C: mov     esi, eax
0x894A1E: xor     eax, eax
0x894A20: jmp     short loc_894A24
0x894A22: xor     esi, esi
0x894A24: cmp     [esi+8], eax
0x894A27: jz      loc_894B76
0x894A2D: fld     dword ptr ds:0A965ACh
0x894A33: mov     [esp+254h+var_200], offset ??_7hkClosestCdPointCollector@@6B@; const hkClosestCdPointCollector::`vftable'
0x894A3B: fst     [esp+254h+var_1D4]
0x894A42: mov     [esp+254h+var_1D0], eax
0x894A49: fst     [esp+254h+var_1FC]
0x894A4D: lea     ecx, [esp+254h+var_1A0]
0x894A54: fstp    [esp+254h+var_1BC]
0x894A5B: mov     [esp+254h+var_4], eax
0x894A62: mov     [esp+254h+var_1C0], offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x894A6D: mov     [esp+254h+var_1B0], ecx
0x894A74: mov     [esp+254h+var_1A8], 80000008h
0x894A7F: mov     [esp+254h+var_1AC], eax
0x894A86: fld     dword ptr ds:0A34BA0h
0x894A8C: lea     edx, [esp+254h+var_210]
0x894A90: fst     [esp+254h+var_21C]
0x894A94: push    edx
0x894A95: fstp    [esp+258h+var_220]
0x894A99: mov     ecx, ebx
0x894A9B: mov     byte ptr [esp+258h+var_4], 1
0x894AA3: call    sub_891440
0x894AA8: push    edi; a2
0x894AA9: mov     ecx, ebx; this
0x894AAB: call    sub_452A10
0x894AB0: mov     eax, [esi]
0x894AB2: movaps  xmm0, xmmword ptr [esi+0A0h]
0x894AB9: mov     eax, [eax+30h]
0x894ABC: lea     ecx, [esp+254h+var_1C0]
0x894AC3: push    ecx
0x894AC4: lea     edx, [esp+258h+var_200]
0x894AC8: push    edx
0x894AC9: lea     ecx, [esp+25Ch+var_230]
0x894ACD: push    ecx
0x894ACE: mov     edx, ecx
0x894AD0: push    edx
0x894AD1: mov     ecx, esi
0x894AD3: movaps  [esp+264h+var_230], xmm0
0x894AD8: call    eax
0x894ADA: mov     eax, [esp+254h+var_1AC]
0x894AE1: test    eax, eax
0x894AE3: jle     short loc_894B56
0x894AE5: mov     ecx, [esp+254h+var_1B0]
0x894AEC: fld     qword ptr ds:0A968D8h
0x894AF2: add     ecx, 1Ch
0x894AF5: mov     esi, eax
0x894AF7: mov     eax, [ecx+0Ch]
0x894AFA: mov     eax, [eax+1Ch]
0x894AFD: and     eax, 3Fh
0x894B00: add     eax, 0FFFFFFFCh; switch 17 cases
0x894B03: cmp     eax, 10h
0x894B06: ja      short def_894B0F; jumptable 00894B0F default case, cases 9,13-15,18,19
0x894B08: movzx   edx, ds:byte_894BBC[eax]
0x894B0F: jmp     ds:jpt_894B0F[edx*4]; switch jump
0x894B16: cmp     [ebp+arg_4], 0; jumptable 00894B0F cases 12,16
0x894B1A: jnz     short def_894B0F; jumptable 00894B0F default case, cases 9,13-15,18,19
0x894B1C: jmp     short loc_894B4C; jumptable 00894B0F cases 4-7,10,11
0x894B1E: cmp     [ebp+arg_8], 0; jumptable 00894B0F cases 8,20
0x894B22: jnz     short def_894B0F; jumptable 00894B0F default case, cases 9,13-15,18,19
0x894B24: jmp     short loc_894B4C; jumptable 00894B0F cases 4-7,10,11
0x894B26: cmp     [ebp+arg_C], 0; jumptable 00894B0F case 17
0x894B2A: jz      short loc_894B4C; jumptable 00894B0F cases 4-7,10,11
0x894B2C: fld     dword ptr [ecx]; jumptable 00894B0F default case, cases 9,13-15,18,19
0x894B2E: fstp    [esp+254h+var_234]
0x894B32: fld     [esp+254h+var_234]
0x894B36: fcomp   st(1)
0x894B38: fnstsw  ax
0x894B3A: test    ah, 5
0x894B3D: jp      short loc_894B46
0x894B3F: mov     eax, 1
0x894B44: jmp     short loc_894B48
0x894B46: xor     eax, eax
0x894B48: or      [esp+254h+var_235], al
0x894B4C: add     ecx, 30h ; '0'; jumptable 00894B0F cases 4-7,10,11
0x894B4F: sub     esi, 1
0x894B52: jnz     short loc_894AF7
0x894B54: fstp    st
0x894B56: lea     eax, [esp+254h+var_210]
0x894B5A: push    eax; a2
0x894B5B: mov     ecx, ebx; this
0x894B5D: call    sub_891560
0x894B62: lea     ecx, [esp+254h+var_1C0]; this
0x894B69: mov     byte ptr [esp+254h+var_4], 0
0x894B71: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x894B76: xor     eax, eax
0x894B78: cmp     [esp+254h+var_235], al
0x894B7C: setz    al
0x894B7F: mov     ecx, dword ptr [esp+254h+var_C]
0x894B86: mov     large fs:0, ecx
0x894B8D: pop     ecx
0x894B8E: pop     edi
0x894B8F: pop     esi
0x894B90: pop     ebx
0x894B91: mov     ecx, [esp+244h+var_14]
0x894B98: xor     ecx, esp
0x894B9A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x894B9F: mov     esp, ebp
0x894BA1: pop     ebp
0x894BA2: retn    10h
