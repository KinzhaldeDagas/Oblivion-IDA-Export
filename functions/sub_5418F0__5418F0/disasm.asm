0x5418F0: sub     esp, 3Ch
0x5418F3: push    esi
0x5418F4: mov     esi, ecx
0x5418F6: mov     eax, [esi+0DCh]
0x5418FC: test    eax, eax
0x5418FE: jnz     loc_541A0D
0x541904: fld     dword ptr ds:0A3D658h
0x54190A: fstp    [esp+40h+var_2C]
0x54190E: mov     eax, [esp+40h+var_2C]
0x541912: fld     dword ptr ds:0A5247Ch
0x541918: mov     [esi+6Ch], eax
0x54191B: fst     [esp+40h+var_28]
0x54191F: mov     ecx, [esp+40h+var_28]
0x541923: fstp    [esp+40h+var_24]
0x541927: mov     edx, [esp+40h+var_24]
0x54192B: fld     dword ptr ds:0A56E98h
0x541931: mov     [esi+70h], ecx
0x541934: fst     [esp+40h+var_2C]
0x541938: mov     eax, [esp+40h+var_2C]
0x54193C: fstp    [esp+40h+var_28]
0x541940: mov     ecx, [esp+40h+var_28]
0x541944: fld     dword ptr ds:0A56E94h
0x54194A: mov     [esi+60h], eax
0x54194D: mov     [esi+74h], edx
0x541950: fstp    [esp+40h+var_24]
0x541954: fld     dword ptr ds:0A2FAACh
0x54195A: mov     edx, [esp+40h+var_24]
0x54195E: mov     [esi+64h], ecx
0x541961: fst     [esp+40h+var_2C]
0x541965: mov     eax, [esp+40h+var_2C]
0x541969: fst     [esp+40h+var_28]
0x54196D: mov     ecx, [esp+40h+var_28]
0x541971: fstp    [esp+40h+var_24]
0x541975: mov     [esi+0A8h], eax
0x54197B: mov     [esi+54h], eax
0x54197E: mov     [esi+68h], edx
0x541981: mov     edx, [esp+40h+var_24]
0x541985: mov     [esi+0ACh], ecx
0x54198B: mov     [esi+58h], ecx
0x54198E: mov     [esi+0B0h], edx
0x541994: mov     [esi+5Ch], edx
0x541997: mov     eax, ds:0B3FA90h
0x54199C: mov     [esi+0B4h], eax
0x5419A2: mov     ecx, ds:0B3FA94h
0x5419A8: mov     [esi+0B8h], ecx
0x5419AE: mov     edx, ds:0B3FA98h
0x5419B4: mov     [esi+0BCh], edx
0x5419BA: mov     eax, [esi+0B4h]
0x5419C0: mov     ecx, [esi+0B8h]
0x5419C6: mov     [esi+9Ch], eax
0x5419CC: mov     [esi+78h], eax
0x5419CF: mov     [esi+3Ch], eax
0x5419D2: mov     [esi+48h], eax
0x5419D5: mov     [esi+90h], eax
0x5419DB: mov     [esi+0A0h], ecx
0x5419E1: mov     [esi+7Ch], ecx
0x5419E4: mov     [esi+40h], ecx
0x5419E7: mov     [esi+4Ch], ecx
0x5419EA: mov     [esi+94h], ecx
0x5419F0: mov     [esi+0A4h], edx
0x5419F6: mov     [esi+80h], edx
0x5419FC: mov     [esi+44h], edx
0x5419FF: mov     [esi+50h], edx
0x541A02: mov     [esi+98h], edx
0x541A08: pop     esi
0x541A09: add     esp, 3Ch
0x541A0C: retn
0x541A0D: cmp     eax, 1
0x541A10: push    edi
0x541A11: jnz     loc_541ACF
0x541A17: mov     eax, ds:0B333A0h
0x541A1C: test    eax, eax
0x541A1E: jz      loc_541ACF
0x541A24: mov     ecx, [eax+34h]
0x541A27: test    ecx, ecx
0x541A29: jz      loc_541ACF
0x541A2F: lea     eax, [esi+6Ch]
0x541A32: push    eax
0x541A33: call    sub_4C9920
0x541A38: mov     edx, ds:0B333A0h
0x541A3E: lea     ecx, [esi+60h]
0x541A41: push    ecx
0x541A42: mov     ecx, [edx+34h]
0x541A45: call    sub_4C98C0
0x541A4A: mov     eax, ds:0B333A0h
0x541A4F: mov     ecx, [eax+34h]
0x541A52: lea     edi, [esi+48h]
0x541A55: push    edi
0x541A56: call    sub_4C99C0
0x541A5B: mov     ecx, [edi]
0x541A5D: mov     edx, [edi+4]
0x541A60: mov     eax, [edi+8]
0x541A63: mov     [esi+0B4h], ecx
0x541A69: mov     [esi+9Ch], ecx
0x541A6F: mov     [esi+78h], ecx
0x541A72: mov     [esi+0A8h], ecx
0x541A78: mov     [esi+54h], ecx
0x541A7B: mov     [esi+3Ch], ecx
0x541A7E: mov     [esi+90h], ecx
0x541A84: mov     [esi+0B8h], edx
0x541A8A: mov     [esi+0A0h], edx
0x541A90: mov     [esi+7Ch], edx
0x541A93: mov     [esi+0ACh], edx
0x541A99: mov     [esi+58h], edx
0x541A9C: mov     [esi+40h], edx
0x541A9F: mov     [esi+94h], edx
0x541AA5: pop     edi
0x541AA6: mov     [esi+0BCh], eax
0x541AAC: mov     [esi+0A4h], eax
0x541AB2: mov     [esi+80h], eax
0x541AB8: mov     [esi+0B0h], eax
0x541ABE: mov     [esi+5Ch], eax
0x541AC1: mov     [esi+44h], eax
0x541AC4: mov     [esi+98h], eax
0x541ACA: pop     esi
0x541ACB: add     esp, 3Ch
0x541ACE: retn
0x541ACF: cmp     dword ptr [esi+10h], 0
0x541AD3: jz      loc_541DC7
0x541AD9: push    ebx
0x541ADA: push    ebp; ArgList
0x541ADB: mov     ecx, esi
0x541ADD: call    sub_53FC10
0x541AE2: fstp    [esp+4Ch+var_3C]
0x541AE6: mov     ecx, esi
0x541AE8: call    sub_499180
0x541AED: fstp    [esp+4Ch+var_38]
0x541AF1: mov     ecx, esi
0x541AF3: call    sub_4991C0
0x541AF8: fstp    [esp+4Ch+var_34]
0x541AFC: mov     ecx, esi
0x541AFE: call    sub_53FC90
0x541B03: fstp    [esp+4Ch+var_30]
0x541B07: fld     [esp+4Ch+var_3C]
0x541B0B: fld     dword ptr [esi+0D0h]
0x541B11: fcomp   st(1)
0x541B13: fnstsw  ax
0x541B15: fld1
0x541B17: test    ah, 41h
0x541B1A: fld1
0x541B1C: fld     [esp+4Ch+var_38]
0x541B20: jnz     short loc_541B89
0x541B22: fld     dword ptr [esi+0D0h]
0x541B28: fcomp   st(1)
0x541B2A: fnstsw  ax
0x541B2C: test    ah, 5
0x541B2F: jp      short loc_541B89
0x541B31: fsub    st, st(3)
0x541B33: xor     ebp, ebp
0x541B35: fmul    qword ptr ds:0A2FAA0h
0x541B3B: fstp    [esp+4Ch+var_38]
0x541B3F: fld     [esp+4Ch+var_38]
0x541B43: fld     st
0x541B45: faddp   st(4), st
0x541B47: fxch    st(3)
0x541B49: fstp    [esp+4Ch+var_38]
0x541B4D: fld     dword ptr [esi+0D0h]
0x541B53: fld     [esp+4Ch+var_38]
0x541B57: fcom    st(1)
0x541B59: fnstsw  ax
0x541B5B: fstp    st(1)
0x541B5D: test    ah, 41h
0x541B60: jnz     short loc_541B6D
0x541B62: fsub    dword ptr [esi+0D0h]
0x541B68: jmp     loc_541C2C
0x541B6D: fsubr   dword ptr [esi+0D0h]
0x541B73: fdivrp  st(3), st
0x541B75: mov     ebx, 1
0x541B7A: fld     st
0x541B7C: fsubrp  st(3), st
0x541B7E: fxch    st(2)
0x541B80: fstp    [esp+4Ch+var_10]
0x541B84: jmp     loc_541C87
0x541B89: fld     dword ptr [esi+0D0h]
0x541B8F: fcompp
0x541B91: fnstsw  ax
0x541B93: fld     [esp+4Ch+var_34]
0x541B97: test    ah, 1
0x541B9A: jnz     short loc_541BBF
0x541B9C: fld     dword ptr [esi+0D0h]
0x541BA2: fcomp   st(1)
0x541BA4: fnstsw  ax
0x541BA6: test    ah, 41h
0x541BA9: jp      short loc_541BBF
0x541BAB: fstp    st
0x541BAD: mov     ebx, 1
0x541BB2: fstp    st(2)
0x541BB4: mov     ebp, ebx
0x541BB6: fst     [esp+4Ch+var_10]
0x541BBA: jmp     loc_541C87
0x541BBF: fld     dword ptr [esi+0D0h]
0x541BC5: fcomp   st(1)
0x541BC7: fnstsw  ax
0x541BC9: fld     [esp+4Ch+var_30]
0x541BCD: test    ah, 41h
0x541BD0: jnz     short loc_541C3F
0x541BD2: fld     dword ptr [esi+0D0h]
0x541BD8: fcomp   st(1)
0x541BDA: fnstsw  ax
0x541BDC: test    ah, 5
0x541BDF: jp      short loc_541C3F
0x541BE1: fstp    st(4)
0x541BE3: mov     ebp, 2
0x541BE8: fld     st
0x541BEA: fsubp   st(4), st
0x541BEC: fxch    st(3)
0x541BEE: fmul    qword ptr ds:0A2FAA0h
0x541BF4: fstp    [esp+4Ch+var_30]
0x541BF8: fld     [esp+4Ch+var_30]
0x541BFC: fld     st
0x541BFE: faddp   st(4), st
0x541C00: fxch    st(3)
0x541C02: fstp    [esp+4Ch+var_30]
0x541C06: fld     dword ptr [esi+0D0h]
0x541C0C: fld     [esp+4Ch+var_30]
0x541C10: fcom    st(1)
0x541C12: fnstsw  ax
0x541C14: fstp    st(1)
0x541C16: test    ah, 41h
0x541C19: jnz     short loc_541C26
0x541C1B: fsub    dword ptr [esi+0D0h]
0x541C21: jmp     loc_541B73
0x541C26: fsubr   dword ptr [esi+0D0h]
0x541C2C: fdivrp  st(3), st
0x541C2E: mov     ebx, 3
0x541C33: fld     st
0x541C35: fsubrp  st(3), st
0x541C37: fxch    st(2)
0x541C39: fstp    [esp+4Ch+var_10]
0x541C3D: jmp     short loc_541C87
0x541C3F: fstp    st(1)
0x541C41: fld     dword ptr [esi+0D0h]
0x541C47: fcompp
0x541C49: fnstsw  ax
0x541C4B: test    ah, 1
0x541C4E: jz      loc_541CD9
0x541C54: fld     dword ptr [esi+0D0h]
0x541C5A: fcomp   st(3)
0x541C5C: fnstsw  ax
0x541C5E: fstp    st(2)
0x541C60: test    ah, 41h
0x541C63: jnp     short loc_541CDB
0x541C65: fstp    st(1)
0x541C67: push    offset aDataErrorDetec; "Data error detected--Transition times s"...
0x541C6C: fstp    st
0x541C6E: call    PrintError
0x541C73: fld1
0x541C75: mov     ebx, 1
0x541C7A: fst     [esp+50h+var_10]
0x541C7E: add     esp, 4
0x541C81: fld1
0x541C83: mov     ebp, ebx
0x541C85: fxch    st(1)
0x541C87: fld     [esp+4Ch+var_10]
0x541C8B: xor     edi, edi
0x541C8D: fld     st
0x541C8F: fsubr   st, st(3)
0x541C91: fstp    [esp+4Ch+var_C]
0x541C95: fst     [esp+4Ch+var_8]
0x541C99: fld     [esp+4Ch+var_C]
0x541C9D: fst     [esp+4Ch+var_4]
0x541CA1: fld     dword ptr [esi+0D8h]
0x541CA7: fmulp   st(2), st
0x541CA9: fxch    st(1)
0x541CAB: fstp    [esp+4Ch+var_10]
0x541CAF: fmul    dword ptr [esi+0D8h]
0x541CB5: fstp    [esp+4Ch+var_C]
0x541CB9: fld     dword ptr [esi+0D8h]
0x541CBF: fsubp   st(2), st
0x541CC1: fld     [esp+4Ch+var_8]
0x541CC5: fmul    st, st(2)
0x541CC7: fstp    [esp+4Ch+var_8]
0x541CCB: fld     [esp+4Ch+var_4]
0x541CCF: fmulp   st(2), st
0x541CD1: fxch    st(1)
0x541CD3: fstp    [esp+4Ch+var_4]
0x541CD7: jmp     short loc_541CF2
0x541CD9: fstp    st(2)
0x541CDB: mov     ebx, 3
0x541CE0: fst     [esp+4Ch+var_10]
0x541CE4: mov     ebp, ebx
0x541CE6: jmp     short loc_541C87
0x541CE8: jmp     short loc_541CF0
0x541CEA: align 10h
0x541CF0: fld1
0x541CF2: mov     eax, [esi+10h]
0x541CF5: fcomp   dword ptr [esi+0D8h]
0x541CFB: lea     ecx, [ebp+edi*4+0]
0x541CFF: lea     ecx, ds:68h[ecx*4]
0x541D06: mov     edx, [ecx+eax]
0x541D09: mov     [esp+4Ch+var_20], edx
0x541D0D: lea     edx, [ebx+edi*4]
0x541D10: lea     edx, ds:68h[edx*4]
0x541D17: mov     eax, [edx+eax]
0x541D1A: mov     [esp+4Ch+var_1C], eax
0x541D1E: fnstsw  ax
0x541D20: test    ah, 41h
0x541D23: jnz     short loc_541D38
0x541D25: mov     eax, [esi+14h]
0x541D28: mov     ecx, [eax+ecx]
0x541D2B: mov     edx, [eax+edx]
0x541D2E: mov     [esp+4Ch+var_18], ecx
0x541D32: mov     [esp+4Ch+var_14], edx
0x541D36: jmp     short loc_541D42
0x541D38: xor     eax, eax
0x541D3A: mov     [esp+4Ch+var_14], eax
0x541D3E: mov     [esp+4Ch+var_18], eax
0x541D42: cmp     dword ptr [esi+14h], 0
0x541D46: fldz
0x541D48: fstp    [esp+4Ch+var_3C]
0x541D4C: jnz     short loc_541D83
0x541D4E: cmp     edi, 4
0x541D51: jnz     short loc_541D61
0x541D53: fld     dword ptr [esi+0E4h]
0x541D59: fmul    dword ptr ds:0B36648h
0x541D5F: jmp     short loc_541D7F
0x541D61: cmp     edi, 3
0x541D64: jnz     short loc_541D74
0x541D66: fld     dword ptr [esi+0E4h]
0x541D6C: fmul    dword ptr ds:0B36650h
0x541D72: jmp     short loc_541D7F
0x541D74: cmp     edi, 2
0x541D77: jnz     short loc_541D83
0x541D79: fld     dword ptr [esi+0E4h]
0x541D7F: fstp    [esp+4Ch+var_3C]
0x541D83: fld     [esp+4Ch+var_3C]
0x541D87: push    ecx
0x541D88: fstp    [esp+50h+var_50]; float
0x541D8B: lea     eax, [esp+50h+var_20]
0x541D8F: lea     ecx, [edi+edi*2+0Fh]
0x541D93: lea     edx, [esi+ecx*4]
0x541D96: push    eax; int
0x541D97: push    edx; int
0x541D98: mov     ecx, esi
0x541D9A: call    sub_5400E0
0x541D9F: add     edi, 1
0x541DA2: cmp     edi, 0Ah
0x541DA5: jl      loc_541CF0
0x541DAB: mov     edx, [esi+6Ch]
0x541DAE: lea     eax, [esi+6Ch]
0x541DB1: lea     ecx, [esi+0B4h]
0x541DB7: mov     [ecx], edx
0x541DB9: mov     edx, [eax+4]
0x541DBC: mov     eax, [eax+8]
0x541DBF: pop     ebp
0x541DC0: mov     [ecx+4], edx
0x541DC3: mov     [ecx+8], eax
0x541DC6: pop     ebx
0x541DC7: pop     edi
0x541DC8: pop     esi
0x541DC9: add     esp, 3Ch
0x541DCC: retn
