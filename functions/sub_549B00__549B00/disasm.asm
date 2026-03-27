0x549B00: push    0FFFFFFFFh
0x549B02: push    offset SEH_549B00
0x549B07: mov     eax, large fs:0
0x549B0D: push    eax
0x549B0E: sub     esp, 8
0x549B11: push    esi
0x549B12: mov     eax, ds:0B30AACh
0x549B17: xor     eax, esp
0x549B19: push    eax
0x549B1A: lea     eax, [esp+1Ch+var_C]
0x549B1E: mov     large fs:0, eax
0x549B24: mov     esi, ecx
0x549B26: cmp     byte ptr [esi+1DBh], 0
0x549B2D: jnz     loc_54A067
0x549B33: fld     [esp+1Ch+arg_0]
0x549B37: fst     [esp+1Ch+arg_0]
0x549B3B: fldz
0x549B3D: fcom    st(1)
0x549B3F: fnstsw  ax
0x549B41: fstp    st(1)
0x549B43: test    ah, 41h
0x549B46: jnz     short loc_549B4E
0x549B48: fstp    [esp+1Ch+arg_0]
0x549B4C: jmp     short loc_549B50
0x549B4E: fstp    st
0x549B50: fld     [esp+1Ch+arg_0]
0x549B54: fcomp   qword ptr ds:0A309F0h
0x549B5A: fnstsw  ax
0x549B5C: test    ah, 41h
0x549B5F: jnz     short loc_549B6B
0x549B61: fld     dword ptr ds:0A2FE7Ch
0x549B67: fstp    [esp+1Ch+arg_0]
0x549B6B: mov     ecx, [esi+0Ch]
0x549B6E: test    ecx, ecx
0x549B70: jz      short loc_549B7D
0x549B72: mov     eax, [ecx]
0x549B74: mov     edx, [eax+20h]
0x549B77: push    1
0x549B79: call    edx
0x549B7B: jmp     short loc_549BBA
0x549B7D: push    14h; Size
0x549B7F: call    FormHeapAlloc
0x549B84: add     esp, 4
0x549B87: mov     dword ptr [esp+1Ch+var_14], eax
0x549B8B: test    eax, eax
0x549B8D: mov     [esp+1Ch+var_4], 0
0x549B95: jz      short loc_549BA4
0x549B97: push    0Dh
0x549B99: push    1
0x549B9B: mov     ecx, eax
0x549B9D: call    sub_54EA00
0x549BA2: jmp     short loc_549BA6
0x549BA4: xor     eax, eax
0x549BA6: mov     [esi+0Ch], eax
0x549BA9: mov     edx, [eax]
0x549BAB: mov     ecx, eax
0x549BAD: mov     eax, [edx+38h]
0x549BB0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x549BB8: call    eax
0x549BBA: cmp     byte ptr [esi+1DAh], 0
0x549BC1: jnz     loc_54A067
0x549BC7: cmp     byte ptr [esp+1Ch+arg_4], 0
0x549BCC: jz      short loc_549C3C
0x549BCE: fld     [esp+1Ch+arg_0]
0x549BD2: fld     qword ptr ds:0A3F3D0h
0x549BD8: fcom    st(1)
0x549BDA: fnstsw  ax
0x549BDC: test    ah, 41h
0x549BDF: jnz     short loc_549C0E
0x549BE1: fxch    st(1)
0x549BE3: mov     ecx, [esi+0Ch]
0x549BE6: fmul    qword ptr ds:0A3D360h
0x549BEC: mov     edx, [ecx]
0x549BEE: mov     eax, [edx+4Ch]
0x549BF1: push    ecx
0x549BF2: fdivrp  st(1), st
0x549BF4: fadd    qword ptr ds:0A2F928h
0x549BFA: fstp    [esp+20h+arg_4]
0x549BFE: fld     [esp+20h+arg_4]
0x549C02: fstp    [esp+20h+var_20]
0x549C05: push    0
0x549C07: call    eax
0x549C09: jmp     loc_54A048
0x549C0E: fcom    st(1)
0x549C10: fnstsw  ax
0x549C12: test    ah, 5
0x549C15: jp      loc_54A044
0x549C1B: fsub    st(1), st
0x549C1D: mov     ecx, [esi+0Ch]
0x549C20: mov     edx, [ecx]
0x549C22: mov     eax, [edx+4Ch]
0x549C25: fdivp   st(1), st
0x549C27: push    ecx
0x549C28: fstp    [esp+20h+arg_4]
0x549C2C: fld     [esp+20h+arg_4]
0x549C30: fstp    [esp+20h+var_20]
0x549C33: push    2
0x549C35: call    eax
0x549C37: jmp     loc_54A048
0x549C3C: fldz
0x549C3E: fld     [esp+1Ch+arg_0]
0x549C42: fucom   st(1)
0x549C44: fnstsw  ax
0x549C46: fstp    st(1)
0x549C48: test    ah, 44h
0x549C4B: jp      short loc_549C66
0x549C4D: mov     ecx, [esi+0Ch]
0x549C50: fstp    st
0x549C52: fld1
0x549C54: mov     edx, [ecx]
0x549C56: mov     eax, [edx+4Ch]
0x549C59: push    ecx
0x549C5A: fstp    [esp+20h+var_20]
0x549C5D: push    8
0x549C5F: call    eax
0x549C61: jmp     loc_54A048
0x549C66: fld     qword ptr ds:0A641A8h
0x549C6C: fcom    st(1)
0x549C6E: fnstsw  ax
0x549C70: test    ah, 41h
0x549C73: jnz     short loc_549CC2
0x549C75: mov     ecx, [esi+0Ch]
0x549C78: fstp    st
0x549C7A: fmul    qword ptr ds:0A641A0h
0x549C80: mov     edx, [ecx]
0x549C82: mov     eax, [edx+4Ch]
0x549C85: push    ecx
0x549C86: fadd    qword ptr ds:0A2F928h
0x549C8C: fstp    [esp+20h+arg_4]
0x549C90: fld     [esp+20h+arg_4]
0x549C94: fstp    [esp+20h+var_20]
0x549C97: push    8
0x549C99: call    eax
0x549C9B: fld     [esp+1Ch+arg_0]
0x549C9F: fmul    qword ptr ds:0A64198h
0x549CA5: mov     ecx, [esi+0Ch]
0x549CA8: mov     edx, [ecx]
0x549CAA: mov     eax, [edx+4Ch]
0x549CAD: fstp    [esp+1Ch+arg_4]
0x549CB1: push    ecx
0x549CB2: fld     [esp+20h+arg_4]
0x549CB6: fstp    [esp+20h+var_20]
0x549CB9: push    7
0x549CBB: call    eax
0x549CBD: jmp     loc_54A048
0x549CC2: fld     st(1)
0x549CC4: fucomp  st(1)
0x549CC6: fnstsw  ax
0x549CC8: test    ah, 44h
0x549CCB: jp      short loc_549CE8
0x549CCD: mov     ecx, [esi+0Ch]
0x549CD0: fstp    st(1)
0x549CD2: mov     edx, [ecx]
0x549CD4: fstp    st
0x549CD6: fld1
0x549CD8: mov     eax, [edx+4Ch]
0x549CDB: push    ecx
0x549CDC: fstp    [esp+20h+var_20]
0x549CDF: push    7
0x549CE1: call    eax
0x549CE3: jmp     loc_54A048
0x549CE8: fld     qword ptr ds:0A492B0h
0x549CEE: fcom    st(2)
0x549CF0: fnstsw  ax
0x549CF2: test    ah, 41h
0x549CF5: jnz     short loc_549D4A
0x549CF7: mov     ecx, [esi+0Ch]
0x549CFA: fstp    st
0x549CFC: mov     edx, [ecx]
0x549CFE: fsubp   st(1), st
0x549D00: mov     eax, [edx+4Ch]
0x549D03: push    ecx
0x549D04: fst     [esp+20h+var_14]
0x549D08: fmul    qword ptr ds:0A641A0h
0x549D0E: fadd    qword ptr ds:0A2F928h
0x549D14: fstp    [esp+20h+arg_4]
0x549D18: fld     [esp+20h+arg_4]
0x549D1C: fstp    [esp+20h+var_20]
0x549D1F: push    7
0x549D21: call    eax
0x549D23: fld     [esp+1Ch+var_14]
0x549D27: fmul    qword ptr ds:0A64198h
0x549D2D: mov     ecx, [esi+0Ch]
0x549D30: mov     edx, [ecx]
0x549D32: mov     eax, [edx+4Ch]
0x549D35: fstp    [esp+1Ch+arg_4]
0x549D39: push    ecx
0x549D3A: fld     [esp+20h+arg_4]
0x549D3E: fstp    [esp+20h+var_20]
0x549D41: push    6
0x549D43: call    eax
0x549D45: jmp     loc_54A048
0x549D4A: fstp    st(1)
0x549D4C: fld     st(1)
0x549D4E: fucomp  st(1)
0x549D50: fnstsw  ax
0x549D52: test    ah, 44h
0x549D55: jp      short loc_549D72
0x549D57: mov     ecx, [esi+0Ch]
0x549D5A: fstp    st(1)
0x549D5C: mov     edx, [ecx]
0x549D5E: fstp    st
0x549D60: fld1
0x549D62: mov     eax, [edx+4Ch]
0x549D65: push    ecx
0x549D66: fstp    [esp+20h+var_20]
0x549D69: push    6
0x549D6B: call    eax
0x549D6D: jmp     loc_54A048
0x549D72: fld     dword ptr ds:0A64190h
0x549D78: fcom    st(2)
0x549D7A: fnstsw  ax
0x549D7C: test    ah, 41h
0x549D7F: jnz     short loc_549DD4
0x549D81: mov     ecx, [esi+0Ch]
0x549D84: fstp    st
0x549D86: mov     edx, [ecx]
0x549D88: fsubp   st(1), st
0x549D8A: mov     eax, [edx+4Ch]
0x549D8D: push    ecx
0x549D8E: fst     [esp+20h+var_14]
0x549D92: fmul    qword ptr ds:0A641A0h
0x549D98: fadd    qword ptr ds:0A2F928h
0x549D9E: fstp    [esp+20h+arg_4]
0x549DA2: fld     [esp+20h+arg_4]
0x549DA6: fstp    [esp+20h+var_20]
0x549DA9: push    6
0x549DAB: call    eax
0x549DAD: fld     [esp+1Ch+var_14]
0x549DB1: fmul    qword ptr ds:0A64198h
0x549DB7: mov     ecx, [esi+0Ch]
0x549DBA: mov     edx, [ecx]
0x549DBC: mov     eax, [edx+4Ch]
0x549DBF: fstp    [esp+1Ch+arg_4]
0x549DC3: push    ecx
0x549DC4: fld     [esp+20h+arg_4]
0x549DC8: fstp    [esp+20h+var_20]
0x549DCB: push    5
0x549DCD: call    eax
0x549DCF: jmp     loc_54A048
0x549DD4: fstp    st(1)
0x549DD6: fucomp  st(1)
0x549DD8: fnstsw  ax
0x549DDA: test    ah, 44h
0x549DDD: jp      short loc_549DF8
0x549DDF: mov     ecx, [esi+0Ch]
0x549DE2: fstp    st
0x549DE4: fld1
0x549DE6: mov     edx, [ecx]
0x549DE8: mov     eax, [edx+4Ch]
0x549DEB: push    ecx
0x549DEC: fstp    [esp+20h+var_20]
0x549DEF: push    5
0x549DF1: call    eax
0x549DF3: jmp     loc_54A048
0x549DF8: fld     qword ptr ds:0A3F3D0h
0x549DFE: fcom    st(1)
0x549E00: fnstsw  ax
0x549E02: test    ah, 41h
0x549E05: jnz     short loc_549E38
0x549E07: mov     ecx, [esi+0Ch]
0x549E0A: fstp    st
0x549E0C: fsub    qword ptr ds:0A64188h
0x549E12: mov     edx, [ecx]
0x549E14: mov     eax, [edx+4Ch]
0x549E17: push    ecx
0x549E18: fmul    qword ptr ds:0A641A0h
0x549E1E: fadd    qword ptr ds:0A2F928h
0x549E24: fstp    [esp+20h+arg_4]
0x549E28: fld     [esp+20h+arg_4]
0x549E2C: fstp    [esp+20h+var_20]
0x549E2F: push    5
0x549E31: call    eax
0x549E33: jmp     loc_54A048
0x549E38: fld     st(1)
0x549E3A: fucomp  st(1)
0x549E3C: fnstsw  ax
0x549E3E: test    ah, 44h
0x549E41: jp      short loc_549E58
0x549E43: mov     ecx, [esi+0Ch]
0x549E46: fstp    st(1)
0x549E48: mov     edx, [ecx]
0x549E4A: fstp    st
0x549E4C: mov     eax, [edx+20h]
0x549E4F: push    1
0x549E51: call    eax
0x549E53: jmp     loc_54A048
0x549E58: fld     qword ptr ds:0A64180h
0x549E5E: fcom    st(2)
0x549E60: fnstsw  ax
0x549E62: test    ah, 41h
0x549E65: jnz     short loc_549E8E
0x549E67: mov     ecx, [esi+0Ch]
0x549E6A: fstp    st
0x549E6C: mov     edx, [ecx]
0x549E6E: fsubp   st(1), st
0x549E70: mov     eax, [edx+4Ch]
0x549E73: push    ecx
0x549E74: fmul    qword ptr ds:0A64198h
0x549E7A: fstp    [esp+20h+arg_4]
0x549E7E: fld     [esp+20h+arg_4]
0x549E82: fstp    [esp+20h+var_20]
0x549E85: push    9
0x549E87: call    eax
0x549E89: jmp     loc_54A048
0x549E8E: fstp    st(1)
0x549E90: fld     st(1)
0x549E92: fucomp  st(1)
0x549E94: fnstsw  ax
0x549E96: test    ah, 44h
0x549E99: jp      short loc_549EB6
0x549E9B: mov     ecx, [esi+0Ch]
0x549E9E: fstp    st(1)
0x549EA0: mov     edx, [ecx]
0x549EA2: fstp    st
0x549EA4: fld1
0x549EA6: mov     eax, [edx+4Ch]
0x549EA9: push    ecx
0x549EAA: fstp    [esp+20h+var_20]
0x549EAD: push    9
0x549EAF: call    eax
0x549EB1: jmp     loc_54A048
0x549EB6: fld     dword ptr ds:0A46B24h
0x549EBC: fcom    st(2)
0x549EBE: fnstsw  ax
0x549EC0: test    ah, 41h
0x549EC3: jnz     short loc_549F18
0x549EC5: mov     ecx, [esi+0Ch]
0x549EC8: fstp    st
0x549ECA: mov     edx, [ecx]
0x549ECC: fsubp   st(1), st
0x549ECE: mov     eax, [edx+4Ch]
0x549ED1: push    ecx
0x549ED2: fst     [esp+20h+var_14]
0x549ED6: fmul    qword ptr ds:0A641A0h
0x549EDC: fadd    qword ptr ds:0A2F928h
0x549EE2: fstp    [esp+20h+arg_4]
0x549EE6: fld     [esp+20h+arg_4]
0x549EEA: fstp    [esp+20h+var_20]
0x549EED: push    9
0x549EEF: call    eax
0x549EF1: fld     [esp+1Ch+var_14]
0x549EF5: fmul    qword ptr ds:0A64198h
0x549EFB: mov     ecx, [esi+0Ch]
0x549EFE: mov     edx, [ecx]
0x549F00: mov     eax, [edx+4Ch]
0x549F03: fstp    [esp+1Ch+arg_4]
0x549F07: push    ecx
0x549F08: fld     [esp+20h+arg_4]
0x549F0C: fstp    [esp+20h+var_20]
0x549F0F: push    0Ah
0x549F11: call    eax
0x549F13: jmp     loc_54A048
0x549F18: fstp    st(1)
0x549F1A: fucomp  st(1)
0x549F1C: fnstsw  ax
0x549F1E: test    ah, 44h
0x549F21: jp      short loc_549F3C
0x549F23: mov     ecx, [esi+0Ch]
0x549F26: fstp    st
0x549F28: fld1
0x549F2A: mov     edx, [ecx]
0x549F2C: mov     eax, [edx+4Ch]
0x549F2F: push    ecx
0x549F30: fstp    [esp+20h+var_20]
0x549F33: push    0Ah
0x549F35: call    eax
0x549F37: jmp     loc_54A048
0x549F3C: fld     dword ptr ds:0A64178h
0x549F42: fcom    st(1)
0x549F44: fnstsw  ax
0x549F46: test    ah, 41h
0x549F49: jnz     short loc_549FA2
0x549F4B: mov     ecx, [esi+0Ch]
0x549F4E: fstp    st
0x549F50: fsub    qword ptr ds:0A64170h
0x549F56: mov     edx, [ecx]
0x549F58: mov     eax, [edx+4Ch]
0x549F5B: push    ecx
0x549F5C: fst     [esp+20h+var_14]
0x549F60: fmul    qword ptr ds:0A641A0h
0x549F66: fadd    qword ptr ds:0A2F928h
0x549F6C: fstp    [esp+20h+arg_4]
0x549F70: fld     [esp+20h+arg_4]
0x549F74: fstp    [esp+20h+var_20]
0x549F77: push    0Ah
0x549F79: call    eax
0x549F7B: fld     [esp+1Ch+var_14]
0x549F7F: fmul    qword ptr ds:0A64198h
0x549F85: mov     ecx, [esi+0Ch]
0x549F88: mov     edx, [ecx]
0x549F8A: mov     eax, [edx+4Ch]
0x549F8D: fstp    [esp+1Ch+arg_4]
0x549F91: push    ecx
0x549F92: fld     [esp+20h+arg_4]
0x549F96: fstp    [esp+20h+var_20]
0x549F99: push    0Bh
0x549F9B: call    eax
0x549F9D: jmp     loc_54A048
0x549FA2: fucomp  st(1)
0x549FA4: fnstsw  ax
0x549FA6: test    ah, 44h
0x549FA9: jp      short loc_549FC4
0x549FAB: mov     ecx, [esi+0Ch]
0x549FAE: fstp    st
0x549FB0: fld1
0x549FB2: mov     edx, [ecx]
0x549FB4: mov     eax, [edx+4Ch]
0x549FB7: push    ecx
0x549FB8: fstp    [esp+20h+var_20]
0x549FBB: push    0Bh
0x549FBD: call    eax
0x549FBF: jmp     loc_54A048
0x549FC4: fld     qword ptr ds:0A309F0h
0x549FCA: fcom    st(1)
0x549FCC: fnstsw  ax
0x549FCE: test    ah, 41h
0x549FD1: jnz     short loc_54A027
0x549FD3: mov     ecx, [esi+0Ch]
0x549FD6: fstp    st
0x549FD8: fsub    qword ptr ds:0A64168h
0x549FDE: mov     edx, [ecx]
0x549FE0: mov     eax, [edx+4Ch]
0x549FE3: push    ecx
0x549FE4: fst     [esp+20h+var_14]
0x549FE8: fmul    qword ptr ds:0A641A0h
0x549FEE: fadd    qword ptr ds:0A2F928h
0x549FF4: fstp    [esp+20h+arg_4]
0x549FF8: fld     [esp+20h+arg_4]
0x549FFC: fstp    [esp+20h+var_20]
0x549FFF: push    0Bh
0x54A001: call    eax
0x54A003: fld     [esp+1Ch+var_14]
0x54A007: fmul    qword ptr ds:0A64198h
0x54A00D: mov     ecx, [esi+0Ch]
0x54A010: mov     edx, [ecx]
0x54A012: mov     eax, [edx+4Ch]
0x54A015: fstp    [esp+1Ch+arg_4]
0x54A019: push    ecx
0x54A01A: fld     [esp+20h+arg_4]
0x54A01E: fstp    [esp+20h+var_20]
0x54A021: push    0Ch
0x54A023: call    eax
0x54A025: jmp     short loc_54A048
0x54A027: fucompp
0x54A029: fnstsw  ax
0x54A02B: test    ah, 44h
0x54A02E: jp      short loc_54A048
0x54A030: mov     ecx, [esi+0Ch]
0x54A033: fld1
0x54A035: mov     edx, [ecx]
0x54A037: mov     eax, [edx+4Ch]
0x54A03A: push    ecx
0x54A03B: fstp    [esp+20h+var_20]
0x54A03E: push    0Ch
0x54A040: call    eax
0x54A042: jmp     short loc_54A048
0x54A044: fstp    st
0x54A046: fstp    st
0x54A048: mov     edx, [esi+10h]
0x54A04B: mov     eax, [esi+0Ch]
0x54A04E: mov     edx, [edx+2Ch]
0x54A051: lea     ecx, [esi+10h]
0x54A054: push    eax
0x54A055: call    edx
0x54A057: test    al, al
0x54A059: jnz     short loc_54A067
0x54A05B: mov     eax, [esi]
0x54A05D: mov     edx, [eax+0D4h]
0x54A063: mov     ecx, esi
0x54A065: call    edx
0x54A067: mov     ecx, dword ptr [esp+1Ch+var_C]
0x54A06B: mov     large fs:0, ecx
0x54A072: pop     ecx
0x54A073: pop     esi
0x54A074: add     esp, 14h
0x54A077: retn    8
