0x5328B0: push    ebp
0x5328B1: mov     ebp, esp
0x5328B3: and     esp, 0FFFFFFF0h
0x5328B6: push    0FFFFFFFFh
0x5328B8: push    offset SEH_5328B0
0x5328BD: mov     eax, large fs:0
0x5328C3: push    eax
0x5328C4: sub     esp, 208h
0x5328CA: mov     eax, ds:0B30AACh
0x5328CF: xor     eax, esp
0x5328D1: mov     [esp+214h+var_14], eax
0x5328D8: push    ebx
0x5328D9: push    esi
0x5328DA: push    edi
0x5328DB: mov     eax, ds:0B30AACh
0x5328E0: xor     eax, esp
0x5328E2: push    eax
0x5328E3: lea     eax, [esp+224h+var_C]
0x5328EA: mov     large fs:0, eax
0x5328F0: mov     eax, [ebp+arg_4]
0x5328F3: fld     dword ptr [eax]
0x5328F5: mov     esi, [ebp+arg_0]
0x5328F8: test    esi, esi
0x5328FA: fld     qword ptr ds:0A39088h
0x532900: fmul    st(1), st
0x532902: mov     edi, ecx
0x532904: fxch    st(1)
0x532906: mov     [esp+224h+var_20D], 0
0x53290B: fstp    dword ptr [esp+224h+var_1E0]
0x53290F: fld     dword ptr [eax+4]
0x532912: fmul    st, st(1)
0x532914: fstp    dword ptr [esp+224h+var_1E0+4]
0x532918: fmul    dword ptr [eax+8]
0x53291B: fstp    dword ptr [esp+224h+var_1E0+8]
0x53291F: jz      short loc_53292F
0x532921: mov     ecx, [esi+8]
0x532924: test    ecx, ecx
0x532926: jz      short loc_53292F
0x532928: call    sub_8AC070
0x53292D: jmp     short loc_532934
0x53292F: mov     eax, offset stru_BA7A40
0x532934: movaps  xmm0, xmmword ptr [eax]
0x532937: mov     ecx, ds:0B333C4h; this
0x53293D: movaps  [esp+224h+var_1D0], xmm0
0x532942: call    MobileObject_GetCharProxy
0x532947: cmp     esi, eax
0x532949: jnz     short loc_532997
0x53294B: movaps  xmm0, [esp+224h+var_1E0]
0x532950: mov     ebx, [edi]
0x532952: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x532956: movss   [esp+224h+var_1F0], xmm0
0x53295C: fld     [esp+224h+var_1F0]
0x532960: movaps  xmm0, [esp+224h+var_1D0]
0x532965: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x532969: movss   dword ptr [esp+224h+var_1D0], xmm0
0x53296F: fld     dword ptr [esp+224h+var_1D0]
0x532973: fcompp
0x532975: fnstsw  ax
0x532977: test    ah, 5
0x53297A: jp      short loc_53299A
0x53297C: fld     dword ptr [esp+224h+var_1E0+8]
0x532980: fld     [ebp+arg_C]
0x532983: fmul    qword ptr ds:0A39088h
0x532989: fstp    [esp+224h+var_208]
0x53298D: fsub    [esp+224h+var_208]
0x532991: fstp    dword ptr [esp+224h+var_1E0+8]
0x532995: jmp     short loc_53299A
0x532997: mov     ebx, [edi+4]
0x53299A: fld     dword ptr ds:0A55910h
0x5329A0: lea     eax, [esp+224h+var_1A0]
0x5329A7: xor     edi, edi
0x5329A9: fstp    [esp+224h+var_1BC]
0x5329AD: mov     [esp+224h+var_1C0], offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x5329B5: mov     [esp+224h+var_1B0], eax
0x5329B9: mov     [esp+224h+var_1A8], 80000008h
0x5329C1: mov     [esp+224h+var_1AC], edi
0x5329C5: fldz
0x5329C7: cmp     ebx, edi
0x5329C9: fstp    [esp+224h+var_1F8]
0x5329CD: mov     [esp+224h+var_4], edi
0x5329D4: jz      short loc_5329E6
0x5329D6: mov     eax, [ebx+8]
0x5329D9: cmp     eax, edi
0x5329DB: jz      short loc_5329E6
0x5329DD: add     eax, 14h
0x5329E0: mov     [esp+224h+var_204], eax
0x5329E4: jmp     short loc_5329EA
0x5329E6: mov     [esp+224h+var_204], edi
0x5329EA: cmp     esi, edi
0x5329EC: jz      short loc_5329FC
0x5329EE: mov     ecx, [esi+8]
0x5329F1: cmp     ecx, edi
0x5329F3: jz      short loc_5329FC
0x5329F5: call    sub_8AC0C0
0x5329FA: jmp     short loc_5329FE
0x5329FC: xor     eax, eax
0x5329FE: add     eax, 14h
0x532A01: cmp     esi, edi
0x532A03: mov     [esp+224h+var_208], eax
0x532A07: jz      short loc_532A17
0x532A09: mov     ecx, [esi+8]
0x532A0C: cmp     ecx, edi
0x532A0E: jz      short loc_532A17
0x532A10: call    sub_8AC0C0
0x532A15: jmp     short loc_532A19
0x532A17: xor     eax, eax
0x532A19: mov     eax, [eax+8]
0x532A1C: cmp     eax, edi
0x532A1E: jz      short loc_532A28
0x532A20: mov     esi, [eax+2B0h]
0x532A26: jmp     short loc_532A2A
0x532A28: xor     esi, esi
0x532A2A: cmp     esi, edi
0x532A2C: jz      loc_532B4F
0x532A32: mov     edx, [esi]
0x532A34: mov     eax, [edx+58h]
0x532A37: mov     ecx, esi
0x532A39: call    eax
0x532A3B: mov     edx, [esi]
0x532A3D: mov     eax, [edx+58h]
0x532A40: mov     ecx, esi
0x532A42: call    eax
0x532A44: mov     edx, [esi]
0x532A46: mov     edi, [eax+7Ch]
0x532A49: mov     eax, [edx+58h]
0x532A4C: mov     ecx, esi
0x532A4E: call    eax
0x532A50: test    edi, edi
0x532A52: jz      loc_532B4F
0x532A58: mov     [esp+224h+var_200], edi
0x532A5C: mov     edx, [esi]
0x532A5E: mov     eax, [edx+58h]
0x532A61: mov     ecx, esi
0x532A63: call    eax
0x532A65: mov     edx, [esi]
0x532A67: mov     eax, [edx+58h]
0x532A6A: mov     ecx, esi
0x532A6C: call    eax
0x532A6E: mov     eax, [eax+78h]
0x532A71: test    eax, eax
0x532A73: jz      short loc_532A7E
0x532A75: add     eax, 0Ch
0x532A78: mov     [esp+224h+var_1FC], eax
0x532A7C: jmp     short loc_532A86
0x532A7E: mov     [esp+224h+var_1FC], 0
0x532A86: mov     edx, [esi]
0x532A88: mov     eax, [edx+58h]
0x532A8B: mov     ecx, esi
0x532A8D: call    eax
0x532A8F: test    ebx, ebx
0x532A91: jz      short loc_532ACE
0x532A93: mov     esi, [ebx+8]
0x532A96: test    esi, esi
0x532A98: jz      short loc_532ABA
0x532A9A: mov     ecx, ebx
0x532A9C: call    sub_89F570
0x532AA1: fldz
0x532AA3: push    ecx
0x532AA4: fstp    [esp+228h+var_228]; float
0x532AA7: lea     ecx, [esp+228h+var_1E0]
0x532AAB: push    ecx; int
0x532AAC: mov     ecx, esi
0x532AAE: call    sub_8ABAC0
0x532AB3: mov     ecx, ebx
0x532AB5: call    sub_89F570
0x532ABA: mov     eax, [ebx+8]
0x532ABD: test    eax, eax
0x532ABF: jz      short loc_532ACE
0x532AC1: add     eax, 14h
0x532AC4: jz      short loc_532ACE
0x532AC6: mov     edx, [eax]
0x532AC8: mov     [esp+224h+var_20C], edx
0x532ACC: jmp     short loc_532AD6
0x532ACE: mov     [esp+224h+var_20C], 0
0x532AD6: mov     eax, [esp+224h+var_208]
0x532ADA: mov     ecx, [eax]
0x532ADC: mov     edx, [esp+224h+var_204]
0x532AE0: mov     eax, [ecx]
0x532AE2: mov     esi, [edx]
0x532AE4: mov     edx, [eax+8]
0x532AE7: call    edx
0x532AE9: mov     ebx, eax
0x532AEB: mov     eax, [esi]
0x532AED: mov     edx, [eax+8]
0x532AF0: mov     ecx, esi
0x532AF2: call    edx
0x532AF4: shl     eax, 5
0x532AF7: add     eax, ebx
0x532AF9: movzx   eax, byte ptr [eax+edi+190h]
0x532B01: lea     eax, [eax+eax*4]
0x532B04: mov     eax, [edi+eax*4+998h]
0x532B0B: test    eax, eax
0x532B0D: jz      short loc_532B4F
0x532B0F: mov     esi, [esp+224h+var_20C]
0x532B13: fld     dword ptr [esi+0Ch]
0x532B16: lea     ecx, [esp+224h+var_1C0]
0x532B1A: push    ecx
0x532B1B: fstp    [esp+228h+var_20C]
0x532B1F: mov     ecx, [esp+228h+var_208]
0x532B23: fld     [ebp+camera_size]
0x532B26: lea     edx, [esp+228h+var_200]
0x532B2A: fstp    dword ptr [esi+0Ch]
0x532B2D: push    edx
0x532B2E: mov     edx, [esp+22Ch+var_204]
0x532B32: push    ecx
0x532B33: push    edx
0x532B34: call    eax
0x532B36: fld     [esp+234h+var_20C]
0x532B3A: add     esp, 10h
0x532B3D: cmp     [esp+224h+var_1AC], 0
0x532B42: fstp    dword ptr [esi+0Ch]
0x532B45: setnle  al
0x532B48: test    al, al
0x532B4A: setnz   [esp+224h+var_20D]
0x532B4F: lea     ecx, [esp+224h+var_1C0]; this
0x532B53: mov     [esp+224h+var_4], 0FFFFFFFFh
0x532B5E: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x532B63: mov     al, [esp+224h+var_20D]
0x532B67: mov     ecx, [esp+224h+var_C]
0x532B6E: mov     large fs:0, ecx
0x532B75: pop     ecx
0x532B76: pop     edi
0x532B77: pop     esi
0x532B78: pop     ebx
0x532B79: mov     ecx, [esp+214h+var_14]
0x532B80: xor     ecx, esp
0x532B82: call    @__security_check_cookie@4; __security_check_cookie(x)
0x532B87: mov     esp, ebp
0x532B89: pop     ebp
0x532B8A: retn    10h
