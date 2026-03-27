0x97CBE0: push    ebp
0x97CBE1: mov     ebp, esp
0x97CBE3: and     esp, 0FFFFFFF8h
0x97CBE6: sub     esp, 4FCh
0x97CBEC: push    ebx
0x97CBED: push    esi
0x97CBEE: push    edi
0x97CBEF: mov     edi, [ebp+arg_0]
0x97CBF2: fld     dword ptr [edi+3Ch]
0x97CBF5: lea     edx, [edi+3Ch]
0x97CBF8: fsub    dword ptr [ecx+3Ch]
0x97CBFB: lea     eax, [ecx+48h]
0x97CBFE: mov     [esp+508h+var_4B0], eax
0x97CC02: lea     eax, [ecx+3Ch]
0x97CC05: fstp    dword ptr [esp+508h+var_4AC]
0x97CC09: mov     [esp+508h+var_4F4], edx
0x97CC0D: fld     dword ptr [edx+4]
0x97CC10: mov     [esp+508h+var_48C], eax
0x97CC14: fsub    dword ptr [eax+4]
0x97CC17: lea     ebx, [edi+48h]
0x97CC1A: mov     [esp+508h+var_44C], ebx
0x97CC21: add     ebx, 0Ch
0x97CC24: fstp    dword ptr [esp+508h+var_4AC+4]
0x97CC28: xor     esi, esi
0x97CC2A: fld     dword ptr [edx+8]
0x97CC2D: mov     edx, [edi+78h]
0x97CC30: fsub    dword ptr [eax+8]
0x97CC33: mov     eax, [ecx+78h]
0x97CC36: add     edx, 10h
0x97CC39: mov     dword ptr [esp+508h+var_448], edx
0x97CC40: fstp    [esp+508h+var_4A4]
0x97CC44: fld     dword ptr [edx]
0x97CC46: fsub    dword ptr [eax+10h]
0x97CC49: fstp    [esp+508h+var_404]
0x97CC50: fld     dword ptr [edx+4]
0x97CC53: fsub    dword ptr [eax+14h]
0x97CC56: fstp    [esp+508h+var_400]
0x97CC5D: fld     dword ptr [edx+8]
0x97CC60: xor     edx, edx
0x97CC62: fsub    dword ptr [eax+18h]
0x97CC65: mov     [esp+508h+var_4EC], edx
0x97CC69: fstp    [esp+508h+var_3FC]
0x97CC70: fld     dword ptr [eax+4]
0x97CC73: mov     eax, [esp+508h+var_4B0]
0x97CC77: fstp    [esp+508h+var_4F8]
0x97CC7B: fldz
0x97CC7D: fstp    [esp+508h+var_4F0]
0x97CC81: fld     dword ptr [ebx-8]
0x97CC84: fst     [esp+508h+var_3E8]
0x97CC8B: fld     dword ptr [eax+4]
0x97CC8E: fld     dword ptr [ebx-0Ch]
0x97CC91: fld     dword ptr [eax]
0x97CC93: fld     dword ptr [ebx-4]
0x97CC96: fst     [esp+508h+var_378]
0x97CC9D: fld     dword ptr [eax+8]
0x97CCA0: fld     st(2)
0x97CCA2: mov     eax, [esp+508h+var_44C]
0x97CCA9: fmul    st, st(4)
0x97CCAB: add     eax, 18h
0x97CCAE: fld     st(5)
0x97CCB0: mov     [esp+508h+var_474], eax
0x97CCB7: fmulp   st(7), st
0x97CCB9: faddp   st(6), st
0x97CCBB: fld     st
0x97CCBD: fmulp   st(2), st
0x97CCBF: fxch    st(5)
0x97CCC1: faddp   st(1), st
0x97CCC3: fstp    [esp+508h+var_470]
0x97CCCA: fld     dword ptr [ebx+4]
0x97CCCD: fmul    st, st(3)
0x97CCCF: fld     dword ptr [ebx]
0x97CCD1: fmul    st, st(2)
0x97CCD3: faddp   st(1), st
0x97CCD5: fld     dword ptr [ebx+8]
0x97CCD8: fmul    st, st(5)
0x97CCDA: faddp   st(1), st
0x97CCDC: fstp    [esp+508h+var_46C]
0x97CCE3: fld     dword ptr [eax+4]
0x97CCE6: fmul    st, st(3)
0x97CCE8: fld     dword ptr [eax]
0x97CCEA: fmul    st, st(2)
0x97CCEC: faddp   st(1), st
0x97CCEE: fld     dword ptr [eax+8]
0x97CCF1: fmul    st, st(5)
0x97CCF3: faddp   st(1), st
0x97CCF5: fstp    [esp+508h+var_468]
0x97CCFC: fld     dword ptr [esp+508h+var_4AC+4]
0x97CD00: fst     [esp+508h+var_348]
0x97CD07: fld     dword ptr [esp+508h+var_4AC]
0x97CD0B: fst     [esp+508h+var_428]
0x97CD12: fld     [esp+508h+var_4A4]
0x97CD16: fst     [esp+508h+var_418]
0x97CD1D: fxch    st(1)
0x97CD1F: fmul    st, st(3)
0x97CD21: fld     st(2)
0x97CD23: fmul    st, st(6)
0x97CD25: faddp   st(1), st
0x97CD27: fxch    st(1)
0x97CD29: fmul    st, st(6)
0x97CD2B: faddp   st(1), st
0x97CD2D: fstp    dword ptr [esp+508h+var_488]
0x97CD34: fld     [esp+508h+var_400]
0x97CD3B: fstp    [esp+508h+var_358]
0x97CD42: fld     [esp+508h+var_404]
0x97CD49: fst     [esp+508h+var_4E8]
0x97CD4D: fld     [esp+508h+var_3FC]
0x97CD54: fstp    [esp+508h+var_4A0]
0x97CD58: fld     [esp+508h+var_4F8]
0x97CD5C: fld     dword ptr [esp+508h+var_488]
0x97CD63: fxch    st(2)
0x97CD65: fmulp   st(4), st
0x97CD67: fld     [esp+508h+var_358]
0x97CD6E: fmulp   st(6), st
0x97CD70: fxch    st(3)
0x97CD72: faddp   st(5), st
0x97CD74: fld     [esp+508h+var_4A0]
0x97CD78: fmulp   st(6), st
0x97CD7A: fxch    st(4)
0x97CD7C: faddp   st(5), st
0x97CD7E: fxch    st(4)
0x97CD80: fstp    [esp+508h+var_4F8]
0x97CD84: fld     [esp+508h+var_4F8]
0x97CD88: fmul    st, st(1)
0x97CD8A: fadd    st, st(3)
0x97CD8C: fstp    dword ptr [esp+508h+var_4AC]
0x97CD90: fld     dword ptr [edi+70h]
0x97CD93: fst     [esp+508h+var_4C0]
0x97CD97: fld     [esp+508h+var_46C]
0x97CD9E: fst     [esp+508h+var_3A8]
0x97CDA5: fld     dword ptr [edi+6Ch]
0x97CDA8: fst     [esp+508h+var_318]
0x97CDAF: fld     [esp+508h+var_470]
0x97CDB6: fstp    [esp+508h+var_398]
0x97CDBD: fld     dword ptr [edi+74h]
0x97CDC0: fstp    [esp+508h+var_328]
0x97CDC7: fld     [esp+508h+var_468]
0x97CDCE: fstp    [esp+508h+var_3B8]
0x97CDD5: fmul    [esp+508h+var_398]
0x97CDDC: fstp    [esp+508h+var_4F8]
0x97CDE0: fld     [esp+508h+var_4F8]
0x97CDE4: fabs
0x97CDE6: fstp    [esp+508h+var_4F8]
0x97CDEA: fld     [esp+508h+var_4F8]
0x97CDEE: fxch    st(1)
0x97CDF0: fmul    st, st(2)
0x97CDF2: fstp    [esp+508h+var_4F8]
0x97CDF6: fld     [esp+508h+var_4F8]
0x97CDFA: fabs
0x97CDFC: fstp    [esp+508h+var_4F8]
0x97CE00: fadd    [esp+508h+var_4F8]
0x97CE04: fld     [esp+508h+var_3B8]
0x97CE0B: fmul    [esp+508h+var_328]
0x97CE12: fstp    [esp+508h+var_4F8]
0x97CE16: fld     [esp+508h+var_4F8]
0x97CE1A: fabs
0x97CE1C: fstp    [esp+508h+var_4F8]
0x97CE20: fadd    [esp+508h+var_4F8]
0x97CE24: fstp    [esp+508h+var_4F8]
0x97CE28: fld     [esp+508h+var_4F8]
0x97CE2C: fld     dword ptr [ecx+6Ch]
0x97CE2F: fabs
0x97CE31: fstp    [esp+508h+var_4F8]
0x97CE35: fadd    [esp+508h+var_4F8]
0x97CE39: fstp    [esp+508h+var_4D4]
0x97CE3D: fld     [esp+508h+var_4D4]
0x97CE41: fld     st
0x97CE43: fcom    st(5)
0x97CE45: fnstsw  ax
0x97CE47: fld     dword ptr [esp+508h+var_4AC]
0x97CE4B: test    ah, 5
0x97CE4E: jp      short loc_97CEA4
0x97CE50: fstp    st(2)
0x97CE52: fcom    st(1)
0x97CE54: fnstsw  ax
0x97CE56: test    ah, 5
0x97CE59: jp      short loc_97CE74
0x97CE5B: fstp    st
0x97CE5D: xor     eax, eax
0x97CE5F: fstp    st(2)
0x97CE61: fstp    st
0x97CE63: fstp    st
0x97CE65: fstp    st(1)
0x97CE67: fstp    st
0x97CE69: fstp    st
0x97CE6B: pop     edi
0x97CE6C: pop     esi
0x97CE6D: pop     ebx
0x97CE6E: mov     esp, ebp
0x97CE70: pop     ebp
0x97CE71: retn    0Ch
0x97CE74: fsub    st, st(5)
0x97CE76: fmul    st, st(3)
0x97CE78: fxch    st(1)
0x97CE7A: fsub    st, st(5)
0x97CE7C: fdivp   st(1), st
0x97CE7E: fstp    dword ptr [esp+508h+var_4D0]
0x97CE82: fldz
0x97CE84: fld     dword ptr [esp+508h+var_4D0]
0x97CE88: fcom    st(1)
0x97CE8A: fnstsw  ax
0x97CE8C: fstp    st(1)
0x97CE8E: test    ah, 41h
0x97CE91: jnz     short loc_97CEEF
0x97CE93: mov     esi, 1
0x97CE98: fstp    [esp+508h+var_4F0]
0x97CE9C: mov     edx, esi
0x97CE9E: mov     [esp+508h+var_4EC], edx
0x97CEA2: jmp     short loc_97CEF1
0x97CEA4: fstp    st(1)
0x97CEA6: fxch    st(1)
0x97CEA8: fchs
0x97CEAA: fcom    st(5)
0x97CEAC: fnstsw  ax
0x97CEAE: test    ah, 41h
0x97CEB1: jnz     short loc_97CEED
0x97CEB3: fcom    st(1)
0x97CEB5: fnstsw  ax
0x97CEB7: test    ah, 41h
0x97CEBA: jz      short loc_97CE5B
0x97CEBC: fsub    st, st(5)
0x97CEBE: fmul    st, st(3)
0x97CEC0: fxch    st(1)
0x97CEC2: fsub    st, st(5)
0x97CEC4: fdivp   st(1), st
0x97CEC6: fstp    dword ptr [esp+508h+var_4D0]
0x97CECA: fldz
0x97CECC: fld     dword ptr [esp+508h+var_4D0]
0x97CED0: fcom    st(1)
0x97CED2: fnstsw  ax
0x97CED4: fstp    st(1)
0x97CED6: test    ah, 41h
0x97CED9: jnz     short loc_97CEEF
0x97CEDB: or      edx, 0FFFFFFFFh
0x97CEDE: fstp    [esp+508h+var_4F0]
0x97CEE2: mov     esi, 1
0x97CEE7: mov     [esp+508h+var_4EC], edx
0x97CEEB: jmp     short loc_97CEF1
0x97CEED: fstp    st
0x97CEEF: fstp    st
0x97CEF1: mov     eax, [esp+508h+var_4B0]
0x97CEF5: fld     dword ptr [eax+10h]
0x97CEF8: add     eax, 0Ch
0x97CEFB: fmul    [esp+508h+var_3E8]
0x97CF02: fld     dword ptr [eax]
0x97CF04: fmul    st, st(4)
0x97CF06: faddp   st(1), st
0x97CF08: fld     dword ptr [eax+8]
0x97CF0B: fmul    [esp+508h+var_378]
0x97CF12: faddp   st(1), st
0x97CF14: fstp    [esp+508h+var_464]
0x97CF1B: fld     dword ptr [ebx+4]
0x97CF1E: fmul    dword ptr [eax+4]
0x97CF21: fld     dword ptr [ebx]
0x97CF23: fmul    dword ptr [eax]
0x97CF25: faddp   st(1), st
0x97CF27: fld     dword ptr [ebx+8]
0x97CF2A: fmul    dword ptr [eax+8]
0x97CF2D: mov     eax, [esp+508h+var_474]
0x97CF34: faddp   st(1), st
0x97CF36: fstp    [esp+508h+var_460]
0x97CF3D: fld     dword ptr [eax+4]
0x97CF40: mov     eax, [esp+508h+var_4B0]
0x97CF44: fmul    dword ptr [eax+10h]
0x97CF47: add     eax, 0Ch
0x97CF4A: mov     eax, [esp+508h+var_474]
0x97CF51: fld     dword ptr [eax]
0x97CF53: mov     eax, [esp+508h+var_4B0]
0x97CF57: fmul    dword ptr [eax+0Ch]
0x97CF5A: add     eax, 0Ch
0x97CF5D: mov     eax, [esp+508h+var_474]
0x97CF64: faddp   st(1), st
0x97CF66: fld     dword ptr [eax+8]
0x97CF69: mov     eax, [esp+508h+var_4B0]
0x97CF6D: fmul    dword ptr [eax+14h]
0x97CF70: add     eax, 0Ch
0x97CF73: faddp   st(1), st
0x97CF75: fstp    [esp+508h+var_45C]
0x97CF7C: fld     dword ptr [eax+4]
0x97CF7F: fmul    st, st(5)
0x97CF81: fld     dword ptr [eax]
0x97CF83: fmul    [esp+508h+var_428]
0x97CF8A: faddp   st(1), st
0x97CF8C: fld     dword ptr [eax+8]
0x97CF8F: fmul    [esp+508h+var_418]
0x97CF96: faddp   st(1), st
0x97CF98: fstp    dword ptr [esp+508h+var_488+4]
0x97CF9F: fld     dword ptr [esp+508h+var_488+4]
0x97CFA6: fstp    [esp+508h+var_308]
0x97CFAD: fld     dword ptr [eax+4]
0x97CFB0: fmul    [esp+508h+var_358]
0x97CFB7: fld     dword ptr [eax]
0x97CFB9: fmul    [esp+508h+var_4E8]
0x97CFBD: faddp   st(1), st
0x97CFBF: fld     dword ptr [eax+8]
0x97CFC2: fmul    [esp+508h+var_4A0]
0x97CFC6: faddp   st(1), st
0x97CFC8: fstp    [esp+508h+var_4F8]
0x97CFCC: fld     [esp+508h+var_4F8]
0x97CFD0: fmul    st, st(2)
0x97CFD2: fadd    [esp+508h+var_308]
0x97CFD9: fstp    dword ptr [esp+508h+var_4AC+4]
0x97CFDD: fld     [esp+508h+var_460]
0x97CFE4: fst     [esp+508h+var_438]
0x97CFEB: fld     [esp+508h+var_464]
0x97CFF2: fst     [esp+508h+var_3C8]
0x97CFF9: fld     [esp+508h+var_45C]
0x97D000: fst     [esp+508h+var_338]
0x97D007: fxch    st(1)
0x97D009: fmul    [esp+508h+var_318]
0x97D010: fstp    [esp+508h+var_4F8]
0x97D014: fld     [esp+508h+var_4F8]
0x97D018: fabs
0x97D01A: fstp    [esp+508h+var_4F8]
0x97D01E: fld     [esp+508h+var_4F8]
0x97D022: fxch    st(2)
0x97D024: fmul    st, st(3)
0x97D026: fstp    [esp+508h+var_4F8]
0x97D02A: fld     [esp+508h+var_4F8]
0x97D02E: fxch    st(2)
0x97D030: fstp    [esp+508h+var_388]
0x97D037: fxch    st(1)
0x97D039: fabs
0x97D03B: fstp    [esp+508h+var_4F8]
0x97D03F: fld     [esp+508h+var_4F8]
0x97D043: fadd    [esp+508h+var_388]
0x97D04A: fxch    st(1)
0x97D04C: fmul    [esp+508h+var_328]
0x97D053: fstp    [esp+508h+var_4F8]
0x97D057: fld     [esp+508h+var_4F8]
0x97D05B: fabs
0x97D05D: fstp    [esp+508h+var_4F8]
0x97D061: fadd    [esp+508h+var_4F8]
0x97D065: fstp    [esp+508h+var_4F8]
0x97D069: fld     [esp+508h+var_4F8]
0x97D06D: fld     dword ptr [ecx+70h]
0x97D070: fabs
0x97D072: fstp    [esp+508h+var_4F8]
0x97D076: fadd    [esp+508h+var_4F8]
0x97D07A: fstp    [esp+508h+var_4D4]
0x97D07E: fld     [esp+508h+var_4D4]
0x97D082: fld     st
0x97D084: fcom    st(5)
0x97D086: fnstsw  ax
0x97D088: test    ah, 5
0x97D08B: jp      short loc_97D0EA
0x97D08D: fstp    st(1)
0x97D08F: fld     dword ptr [esp+508h+var_4AC]
0x97D093: fcom    st(1)
0x97D095: fnstsw  ax
0x97D097: test    ah, 41h
0x97D09A: jnz     short loc_97D0B5
0x97D09C: fstp    st(1)
0x97D09E: xor     eax, eax
0x97D0A0: fstp    st(2)
0x97D0A2: fstp    st
0x97D0A4: fstp    st
0x97D0A6: fstp    st(1)
0x97D0A8: fstp    st
0x97D0AA: fstp    st
0x97D0AC: pop     edi
0x97D0AD: pop     esi
0x97D0AE: pop     ebx
0x97D0AF: mov     esp, ebp
0x97D0B1: pop     ebp
0x97D0B2: retn    0Ch
0x97D0B5: fxch    st(1)
0x97D0B7: fsub    st, st(5)
0x97D0B9: fmul    st, st(3)
0x97D0BB: fxch    st(1)
0x97D0BD: fsub    st, st(5)
0x97D0BF: fdivp   st(1), st
0x97D0C1: fstp    dword ptr [esp+508h+var_4D0]
0x97D0C5: fld     dword ptr [esp+508h+var_4D0]
0x97D0C9: fld     [esp+508h+var_4F0]
0x97D0CD: fcomp   st(1)
0x97D0CF: fnstsw  ax
0x97D0D1: test    ah, 5
0x97D0D4: jp      short loc_97D137
0x97D0D6: mov     edx, 1
0x97D0DB: fstp    [esp+508h+var_4F0]
0x97D0DF: mov     esi, 2
0x97D0E4: mov     [esp+508h+var_4EC], edx
0x97D0E8: jmp     short loc_97D139
0x97D0EA: fstp    st
0x97D0EC: fchs
0x97D0EE: fcom    st(4)
0x97D0F0: fnstsw  ax
0x97D0F2: test    ah, 41h
0x97D0F5: jnz     short loc_97D137
0x97D0F7: fld     dword ptr [esp+508h+var_4AC]
0x97D0FB: fcom    st(1)
0x97D0FD: fnstsw  ax
0x97D0FF: test    ah, 5
0x97D102: jnp     short loc_97D09C
0x97D104: fxch    st(1)
0x97D106: fsub    st, st(5)
0x97D108: fmul    st, st(3)
0x97D10A: fxch    st(1)
0x97D10C: fsub    st, st(5)
0x97D10E: fdivp   st(1), st
0x97D110: fstp    dword ptr [esp+508h+var_4D0]
0x97D114: fld     dword ptr [esp+508h+var_4D0]
0x97D118: fld     [esp+508h+var_4F0]
0x97D11C: fcomp   st(1)
0x97D11E: fnstsw  ax
0x97D120: test    ah, 5
0x97D123: jp      short loc_97D137
0x97D125: or      edx, 0FFFFFFFFh
0x97D128: fstp    [esp+508h+var_4F0]
0x97D12C: mov     esi, 2
0x97D131: mov     [esp+508h+var_4EC], edx
0x97D135: jmp     short loc_97D139
0x97D137: fstp    st
0x97D139: mov     eax, [esp+508h+var_4B0]
0x97D13D: fld     dword ptr [eax+1Ch]
0x97D140: add     eax, 18h
0x97D143: fmul    [esp+508h+var_3E8]
0x97D14A: fld     dword ptr [eax]
0x97D14C: fmul    st, st(4)
0x97D14E: faddp   st(1), st
0x97D150: fld     dword ptr [eax+8]
0x97D153: fmul    [esp+508h+var_378]
0x97D15A: faddp   st(1), st
0x97D15C: fstp    [esp+508h+var_458]
0x97D163: fld     dword ptr [ebx+4]
0x97D166: fmul    dword ptr [eax+4]
0x97D169: fld     dword ptr [ebx]
0x97D16B: fmul    dword ptr [eax]
0x97D16D: faddp   st(1), st
0x97D16F: fld     dword ptr [ebx+8]
0x97D172: fmul    dword ptr [eax+8]
0x97D175: mov     eax, [esp+508h+var_474]
0x97D17C: faddp   st(1), st
0x97D17E: fstp    [esp+508h+var_454]
0x97D185: fld     dword ptr [eax+4]
0x97D188: mov     eax, [esp+508h+var_4B0]
0x97D18C: fmul    dword ptr [eax+1Ch]
0x97D18F: add     eax, 18h
0x97D192: fld     dword ptr [eax]
0x97D194: mov     eax, [esp+508h+var_474]
0x97D19B: fmul    dword ptr [eax]
0x97D19D: faddp   st(1), st
0x97D19F: fld     dword ptr [eax+8]
0x97D1A2: mov     eax, [esp+508h+var_4B0]
0x97D1A6: fmul    dword ptr [eax+20h]
0x97D1A9: add     eax, 18h
0x97D1AC: faddp   st(1), st
0x97D1AE: fstp    [esp+508h+var_450]
0x97D1B5: fld     dword ptr [eax+4]
0x97D1B8: fmul    st, st(5)
0x97D1BA: fld     dword ptr [eax]
0x97D1BC: fmul    [esp+508h+var_428]
0x97D1C3: faddp   st(1), st
0x97D1C5: fld     dword ptr [eax+8]
0x97D1C8: fmul    [esp+508h+var_418]
0x97D1CF: faddp   st(1), st
0x97D1D1: fstp    [esp+508h+var_480]
0x97D1D8: fld     [esp+508h+var_480]
0x97D1DF: fstp    [esp+508h+var_378]
0x97D1E6: fld     dword ptr [eax+4]
0x97D1E9: fmul    [esp+508h+var_358]
0x97D1F0: fld     dword ptr [eax]
0x97D1F2: fmul    [esp+508h+var_4E8]
0x97D1F6: faddp   st(1), st
0x97D1F8: fld     dword ptr [eax+8]
0x97D1FB: fmul    [esp+508h+var_4A0]
0x97D1FF: faddp   st(1), st
0x97D201: fstp    [esp+508h+var_4F8]
0x97D205: fld     [esp+508h+var_4F8]
0x97D209: fmul    st, st(2)
0x97D20B: fadd    [esp+508h+var_378]
0x97D212: fstp    [esp+508h+var_4A4]
0x97D216: fld     [esp+508h+var_454]
0x97D21D: fst     [esp+508h+var_3F8]
0x97D224: fld     [esp+508h+var_458]
0x97D22B: fst     [esp+508h+var_3D8]
0x97D232: fld     [esp+508h+var_450]
0x97D239: fst     [esp+508h+var_368]
0x97D240: fxch    st(1)
0x97D242: fmul    [esp+508h+var_318]
0x97D249: fstp    [esp+508h+var_4F8]
0x97D24D: fld     [esp+508h+var_4F8]
0x97D251: fabs
0x97D253: fstp    [esp+508h+var_4F8]
0x97D257: fld     [esp+508h+var_4F8]
0x97D25B: fxch    st(2)
0x97D25D: fmulp   st(3), st
0x97D25F: fxch    st(2)
0x97D261: fstp    [esp+508h+var_4F8]
0x97D265: fld     [esp+508h+var_4F8]
0x97D269: fxch    st(1)
0x97D26B: fstp    [esp+508h+var_3E8]
0x97D272: fabs
0x97D274: fstp    [esp+508h+var_4F8]
0x97D278: fld     [esp+508h+var_4F8]
0x97D27C: fadd    [esp+508h+var_3E8]
0x97D283: fxch    st(1)
0x97D285: fmul    [esp+508h+var_328]
0x97D28C: fstp    [esp+508h+var_4F8]
0x97D290: fld     [esp+508h+var_4F8]
0x97D294: fabs
0x97D296: fstp    [esp+508h+var_4F8]
0x97D29A: fadd    [esp+508h+var_4F8]
0x97D29E: fstp    [esp+508h+var_4F8]
0x97D2A2: fld     [esp+508h+var_4F8]
0x97D2A6: fld     dword ptr [ecx+74h]
0x97D2A9: fabs
0x97D2AB: fstp    [esp+508h+var_4F8]
0x97D2AF: fadd    [esp+508h+var_4F8]
0x97D2B3: fstp    [esp+508h+var_4D4]
0x97D2B7: fld     [esp+508h+var_4D4]
0x97D2BB: fld     st
0x97D2BD: fcom    st(4)
0x97D2BF: fnstsw  ax
0x97D2C1: test    ah, 5
0x97D2C4: jp      short loc_97D321
0x97D2C6: fstp    st(1)
0x97D2C8: fld     dword ptr [esp+508h+var_4AC]
0x97D2CC: fcom    st(1)
0x97D2CE: fnstsw  ax
0x97D2D0: test    ah, 41h
0x97D2D3: jnz     short loc_97D2EC
0x97D2D5: fstp    st(1)
0x97D2D7: xor     eax, eax
0x97D2D9: fstp    st(1)
0x97D2DB: fstp    st
0x97D2DD: fstp    st(1)
0x97D2DF: fstp    st
0x97D2E1: fstp    st
0x97D2E3: pop     edi
0x97D2E4: pop     esi
0x97D2E5: pop     ebx
0x97D2E6: mov     esp, ebp
0x97D2E8: pop     ebp
0x97D2E9: retn    0Ch
0x97D2EC: fxch    st(1)
0x97D2EE: fsub    st, st(4)
0x97D2F0: fmul    st, st(2)
0x97D2F2: fxch    st(1)
0x97D2F4: fsub    st, st(4)
0x97D2F6: fdivp   st(1), st
0x97D2F8: fstp    dword ptr [esp+508h+var_4D0]
0x97D2FC: fld     dword ptr [esp+508h+var_4D0]
0x97D300: fld     [esp+508h+var_4F0]
0x97D304: fcomp   st(1)
0x97D306: fnstsw  ax
0x97D308: test    ah, 5
0x97D30B: jp      short loc_97D36E
0x97D30D: mov     edx, 1
0x97D312: fstp    [esp+508h+var_4F0]
0x97D316: mov     esi, 3
0x97D31B: mov     [esp+508h+var_4EC], edx
0x97D31F: jmp     short loc_97D370
0x97D321: fstp    st
0x97D323: fchs
0x97D325: fcom    st(3)
0x97D327: fnstsw  ax
0x97D329: test    ah, 41h
0x97D32C: jnz     short loc_97D36E
0x97D32E: fld     dword ptr [esp+508h+var_4AC]
0x97D332: fcom    st(1)
0x97D334: fnstsw  ax
0x97D336: test    ah, 5
0x97D339: jnp     short loc_97D2D5
0x97D33B: fxch    st(1)
0x97D33D: fsub    st, st(4)
0x97D33F: fmul    st, st(2)
0x97D341: fxch    st(1)
0x97D343: fsub    st, st(4)
0x97D345: fdivp   st(1), st
0x97D347: fstp    dword ptr [esp+508h+var_4D0]
0x97D34B: fld     dword ptr [esp+508h+var_4D0]
0x97D34F: fld     [esp+508h+var_4F0]
0x97D353: fcomp   st(1)
0x97D355: fnstsw  ax
0x97D357: test    ah, 5
0x97D35A: jp      short loc_97D36E
0x97D35C: or      edx, 0FFFFFFFFh
0x97D35F: fstp    [esp+508h+var_4F0]
0x97D363: mov     esi, 3
0x97D368: mov     [esp+508h+var_4EC], edx
0x97D36C: jmp     short loc_97D370
0x97D36E: fstp    st
0x97D370: fld     dword ptr [ecx+70h]
0x97D373: mov     eax, [esp+508h+var_44C]
0x97D37A: fst     [esp+508h+var_3E8]
0x97D381: fld     dword ptr [ecx+6Ch]
0x97D384: fst     [esp+508h+var_388]
0x97D38B: fld     dword ptr [ecx+74h]
0x97D38E: fxch    st(1)
0x97D390: fmul    [esp+508h+var_398]
0x97D397: fstp    [esp+508h+var_4F8]
0x97D39B: fld     [esp+508h+var_4F8]
0x97D39F: fabs
0x97D3A1: fstp    [esp+508h+var_4F8]
0x97D3A5: fld     [esp+508h+var_4F8]
0x97D3A9: fxch    st(2)
0x97D3AB: fmul    [esp+508h+var_3C8]
0x97D3B2: fstp    [esp+508h+var_4F8]
0x97D3B6: fld     [esp+508h+var_4F8]
0x97D3BA: fabs
0x97D3BC: fstp    [esp+508h+var_4F8]
0x97D3C0: fld     [esp+508h+var_4F8]
0x97D3C4: faddp   st(2), st
0x97D3C6: fld     [esp+508h+var_3D8]
0x97D3CD: fmul    st, st(1)
0x97D3CF: fstp    [esp+508h+var_4F8]
0x97D3D3: fld     [esp+508h+var_4F8]
0x97D3D7: fabs
0x97D3D9: fstp    [esp+508h+var_4F8]
0x97D3DD: fld     [esp+508h+var_4F8]
0x97D3E1: faddp   st(2), st
0x97D3E3: fxch    st(1)
0x97D3E5: fstp    [esp+508h+var_4F8]
0x97D3E9: fld     [esp+508h+var_4F8]
0x97D3ED: fld     dword ptr [edi+6Ch]
0x97D3F0: fabs
0x97D3F2: fstp    [esp+508h+var_4F8]
0x97D3F6: fadd    [esp+508h+var_4F8]
0x97D3FA: fstp    [esp+508h+var_4D4]
0x97D3FE: fld     dword ptr [eax+4]
0x97D401: fst     [esp+508h+var_4D0]
0x97D405: fld     dword ptr [eax+8]
0x97D408: fst     [esp+508h+var_488]
0x97D40F: fxch    st(1)
0x97D411: fmul    st, st(6)
0x97D413: fld     [esp+508h+var_428]
0x97D41A: fmul    st, st(5)
0x97D41C: faddp   st(1), st
0x97D41E: fxch    st(1)
0x97D420: fmul    [esp+508h+var_418]
0x97D427: faddp   st(1), st
0x97D429: fstp    [esp+508h+var_4F8]
0x97D42D: fld     [esp+508h+var_4F8]
0x97D431: fld     [esp+508h+var_4D0]
0x97D435: fmul    [esp+508h+var_358]
0x97D43C: fld     [esp+508h+var_4E8]
0x97D440: fmulp   st(5), st
0x97D442: faddp   st(4), st
0x97D444: fld     [esp+508h+var_488]
0x97D44B: fmul    [esp+508h+var_4A0]
0x97D44F: faddp   st(4), st
0x97D451: fxch    st(3)
0x97D453: fstp    [esp+508h+var_4F8]
0x97D457: fld     [esp+508h+var_4F8]
0x97D45B: fmul    st, st(2)
0x97D45D: fadd    st, st(3)
0x97D45F: fstp    dword ptr [esp+508h+var_4D0]
0x97D463: fld     [esp+508h+var_4D4]
0x97D467: fld     st
0x97D469: fcom    st(4)
0x97D46B: fnstsw  ax
0x97D46D: test    ah, 5
0x97D470: jp      short loc_97D4D1
0x97D472: fstp    st(1)
0x97D474: fld     dword ptr [esp+508h+var_4D0]
0x97D478: fcom    st(1)
0x97D47A: fnstsw  ax
0x97D47C: test    ah, 41h
0x97D47F: jnz     short loc_97D49A
0x97D481: fstp    st(4)
0x97D483: xor     eax, eax
0x97D485: fstp    st(2)
0x97D487: fstp    st
0x97D489: fstp    st
0x97D48B: fstp    st(1)
0x97D48D: fstp    st
0x97D48F: fstp    st
0x97D491: pop     edi
0x97D492: pop     esi
0x97D493: pop     ebx
0x97D494: mov     esp, ebp
0x97D496: pop     ebp
0x97D497: retn    0Ch
0x97D49A: fxch    st(1)
0x97D49C: fsub    st, st(4)
0x97D49E: fmul    st, st(3)
0x97D4A0: fxch    st(1)
0x97D4A2: fsubrp  st(4), st
0x97D4A4: fdivrp  st(3), st
0x97D4A6: fxch    st(2)
0x97D4A8: fstp    dword ptr [esp+508h+var_4D0]
0x97D4AC: fld     dword ptr [esp+508h+var_4D0]
0x97D4B0: fld     [esp+508h+var_4F0]
0x97D4B4: fcomp   st(1)
0x97D4B6: fnstsw  ax
0x97D4B8: test    ah, 5
0x97D4BB: jp      short loc_97D526
0x97D4BD: mov     edx, 1
0x97D4C2: fstp    [esp+508h+var_4F0]
0x97D4C6: mov     esi, 4
0x97D4CB: mov     [esp+508h+var_4EC], edx
0x97D4CF: jmp     short loc_97D528
0x97D4D1: fstp    st
0x97D4D3: fchs
0x97D4D5: fcom    st(3)
0x97D4D7: fnstsw  ax
0x97D4D9: test    ah, 41h
0x97D4DC: jnz     short loc_97D520
0x97D4DE: fld     dword ptr [esp+508h+var_4D0]
0x97D4E2: fcom    st(1)
0x97D4E4: fnstsw  ax
0x97D4E6: test    ah, 5
0x97D4E9: jnp     short loc_97D481
0x97D4EB: fxch    st(1)
0x97D4ED: fsub    st, st(4)
0x97D4EF: fmul    st, st(3)
0x97D4F1: fxch    st(1)
0x97D4F3: fsubrp  st(4), st
0x97D4F5: fdivrp  st(3), st
0x97D4F7: fxch    st(2)
0x97D4F9: fstp    dword ptr [esp+508h+var_4D0]
0x97D4FD: fld     dword ptr [esp+508h+var_4D0]
0x97D501: fld     [esp+508h+var_4F0]
0x97D505: fcomp   st(1)
0x97D507: fnstsw  ax
0x97D509: test    ah, 5
0x97D50C: jp      short loc_97D526
0x97D50E: or      edx, 0FFFFFFFFh
0x97D511: fstp    [esp+508h+var_4F0]
0x97D515: mov     esi, 4
0x97D51A: mov     [esp+508h+var_4EC], edx
0x97D51E: jmp     short loc_97D528
0x97D520: fstp    st(3)
0x97D522: fstp    st(2)
0x97D524: jmp     short loc_97D528
0x97D526: fstp    st
0x97D528: fld     [esp+508h+var_388]
0x97D52F: fmul    [esp+508h+var_3A8]
0x97D536: fstp    [esp+508h+var_4F8]
0x97D53A: fld     [esp+508h+var_4F8]
0x97D53E: fabs
0x97D540: fstp    [esp+508h+var_4F8]
0x97D544: fld     [esp+508h+var_4F8]
0x97D548: fld     [esp+508h+var_3E8]
0x97D54F: fmul    [esp+508h+var_438]
0x97D556: fstp    [esp+508h+var_4F8]
0x97D55A: fld     [esp+508h+var_4F8]
0x97D55E: fabs
0x97D560: fstp    [esp+508h+var_4F8]
0x97D564: fadd    [esp+508h+var_4F8]
0x97D568: fld     st(2)
0x97D56A: fmul    [esp+508h+var_3F8]
0x97D571: fstp    [esp+508h+var_4F8]
0x97D575: fld     [esp+508h+var_4F8]
0x97D579: fabs
0x97D57B: fstp    [esp+508h+var_4F8]
0x97D57F: fadd    [esp+508h+var_4F8]
0x97D583: fstp    [esp+508h+var_4F8]
0x97D587: fld     [esp+508h+var_4F8]
0x97D58B: fld     dword ptr [edi+70h]
0x97D58E: fabs
0x97D590: fstp    [esp+508h+var_4F8]
0x97D594: fadd    [esp+508h+var_4F8]
0x97D598: fstp    [esp+508h+var_4D4]
0x97D59C: fld     dword ptr [ebx+4]
0x97D59F: fmul    st, st(4)
0x97D5A1: fld     dword ptr [ebx]
0x97D5A3: fmul    [esp+508h+var_428]
0x97D5AA: faddp   st(1), st
0x97D5AC: fld     dword ptr [ebx+8]
0x97D5AF: fmul    [esp+508h+var_418]
0x97D5B6: faddp   st(1), st
0x97D5B8: fstp    [esp+508h+var_4F8]
0x97D5BC: fld     [esp+508h+var_4F8]
0x97D5C0: fld     dword ptr [ebx+4]
0x97D5C3: fmul    [esp+508h+var_358]
0x97D5CA: fld     dword ptr [ebx]
0x97D5CC: fmul    [esp+508h+var_4E8]
0x97D5D0: faddp   st(1), st
0x97D5D2: fld     dword ptr [ebx+8]
0x97D5D5: fmul    [esp+508h+var_4A0]
0x97D5D9: faddp   st(1), st
0x97D5DB: fstp    [esp+508h+var_4F8]
0x97D5DF: fld     [esp+508h+var_4F8]
0x97D5E3: fmul    st, st(2)
0x97D5E5: fadd    st, st(1)
0x97D5E7: fstp    dword ptr [esp+508h+var_4D0]
0x97D5EB: fld     [esp+508h+var_4D4]
0x97D5EF: fld     st
0x97D5F1: fcom    st(2)
0x97D5F3: fnstsw  ax
0x97D5F5: test    ah, 5
0x97D5F8: jp      short loc_97D657
0x97D5FA: fstp    st(1)
0x97D5FC: fld     dword ptr [esp+508h+var_4D0]
0x97D600: fcom    st(1)
0x97D602: fnstsw  ax
0x97D604: test    ah, 41h
0x97D607: jnz     short loc_97D622
0x97D609: fstp    st(2)
0x97D60B: xor     eax, eax
0x97D60D: fstp    st(2)
0x97D60F: fstp    st(2)
0x97D611: fstp    st
0x97D613: fstp    st(1)
0x97D615: fstp    st
0x97D617: fstp    st
0x97D619: pop     edi
0x97D61A: pop     esi
0x97D61B: pop     ebx
0x97D61C: mov     esp, ebp
0x97D61E: pop     ebp
0x97D61F: retn    0Ch
0x97D622: fxch    st(1)
0x97D624: fsub    st, st(2)
0x97D626: fmul    st, st(3)
0x97D628: fxch    st(1)
0x97D62A: fsubrp  st(2), st
0x97D62C: fdivrp  st(1), st
0x97D62E: fstp    dword ptr [esp+508h+var_4D0]
0x97D632: fld     dword ptr [esp+508h+var_4D0]
0x97D636: fld     [esp+508h+var_4F0]
0x97D63A: fcomp   st(1)
0x97D63C: fnstsw  ax
0x97D63E: test    ah, 5
0x97D641: jp      short loc_97D6A6
0x97D643: mov     edx, 1
0x97D648: fstp    [esp+508h+var_4F0]
0x97D64C: mov     esi, 5
0x97D651: mov     [esp+508h+var_4EC], edx
0x97D655: jmp     short loc_97D6A8
0x97D657: fstp    st
0x97D659: fchs
0x97D65B: fcom    st(1)
0x97D65D: fnstsw  ax
0x97D65F: test    ah, 41h
0x97D662: jnz     short loc_97D6A4
0x97D664: fld     dword ptr [esp+508h+var_4D0]
0x97D668: fcom    st(1)
0x97D66A: fnstsw  ax
0x97D66C: test    ah, 5
0x97D66F: jnp     short loc_97D609
0x97D671: fxch    st(1)
0x97D673: fsub    st, st(2)
0x97D675: fmul    st, st(3)
0x97D677: fxch    st(1)
0x97D679: fsubrp  st(2), st
0x97D67B: fdivrp  st(1), st
0x97D67D: fstp    dword ptr [esp+508h+var_4D0]
0x97D681: fld     dword ptr [esp+508h+var_4D0]
0x97D685: fld     [esp+508h+var_4F0]
0x97D689: fcomp   st(1)
0x97D68B: fnstsw  ax
0x97D68D: test    ah, 5
0x97D690: jp      short loc_97D6A6
0x97D692: or      edx, 0FFFFFFFFh
0x97D695: fstp    [esp+508h+var_4F0]
0x97D699: mov     esi, 5
0x97D69E: mov     [esp+508h+var_4EC], edx
0x97D6A2: jmp     short loc_97D6A8
0x97D6A4: fstp    st(1)
0x97D6A6: fstp    st
0x97D6A8: fld     [esp+508h+var_388]
0x97D6AF: mov     eax, [esp+508h+var_474]
0x97D6B6: fmul    [esp+508h+var_3B8]
0x97D6BD: fstp    [esp+508h+var_4F8]
0x97D6C1: fld     [esp+508h+var_4F8]
0x97D6C5: fabs
0x97D6C7: fstp    [esp+508h+var_4F8]
0x97D6CB: fld     [esp+508h+var_4F8]
0x97D6CF: fld     [esp+508h+var_3E8]
0x97D6D6: fld     [esp+508h+var_338]
0x97D6DD: fmul    st, st(1)
0x97D6DF: fstp    [esp+508h+var_4F8]
0x97D6E3: fld     [esp+508h+var_4F8]
0x97D6E7: fabs
0x97D6E9: fstp    [esp+508h+var_4F8]
0x97D6ED: fld     [esp+508h+var_4F8]
0x97D6F1: faddp   st(2), st
0x97D6F3: fld     st(3)
0x97D6F5: fmul    [esp+508h+var_368]
0x97D6FC: fstp    [esp+508h+var_4F8]
0x97D700: fld     [esp+508h+var_4F8]
0x97D704: fabs
0x97D706: fstp    [esp+508h+var_4F8]
0x97D70A: fld     [esp+508h+var_4F8]
0x97D70E: faddp   st(2), st
0x97D710: fxch    st(1)
0x97D712: fstp    [esp+508h+var_4F8]
0x97D716: fld     [esp+508h+var_4F8]
0x97D71A: fld     dword ptr [edi+74h]
0x97D71D: fabs
0x97D71F: fstp    [esp+508h+var_4F8]
0x97D723: fadd    [esp+508h+var_4F8]
0x97D727: fstp    [esp+508h+var_4D4]
0x97D72B: fld     dword ptr [eax+4]
0x97D72E: fmulp   st(5), st
0x97D730: fld     dword ptr [eax]
0x97D732: fmul    [esp+508h+var_428]
0x97D739: faddp   st(5), st
0x97D73B: fld     dword ptr [eax+8]
0x97D73E: fmul    [esp+508h+var_418]
0x97D745: faddp   st(5), st
0x97D747: fxch    st(4)
0x97D749: fstp    [esp+508h+var_4F8]
0x97D74D: fld     [esp+508h+var_4F8]
0x97D751: fld     dword ptr [eax+4]
0x97D754: fmul    [esp+508h+var_358]
0x97D75B: fld     dword ptr [eax]
0x97D75D: fmul    [esp+508h+var_4E8]
0x97D761: faddp   st(1), st
0x97D763: fld     dword ptr [eax+8]
0x97D766: fmul    [esp+508h+var_4A0]
0x97D76A: faddp   st(1), st
0x97D76C: fstp    [esp+508h+var_4F8]
0x97D770: fld     [esp+508h+var_4F8]
0x97D774: fmul    st, st(2)
0x97D776: fadd    st, st(1)
0x97D778: fstp    dword ptr [esp+508h+var_4D0]
0x97D77C: fld     [esp+508h+var_4D4]
0x97D780: fld     st
0x97D782: fcom    st(2)
0x97D784: fnstsw  ax
0x97D786: test    ah, 5
0x97D789: jp      short loc_97D7D3
0x97D78B: fstp    st(1)
0x97D78D: fld     dword ptr [esp+508h+var_4D0]
0x97D791: fcom    st(1)
0x97D793: fnstsw  ax
0x97D795: test    ah, 41h
0x97D798: jz      loc_97D609
0x97D79E: fxch    st(1)
0x97D7A0: fsub    st, st(2)
0x97D7A2: fmul    st, st(3)
0x97D7A4: fxch    st(1)
0x97D7A6: fsubrp  st(2), st
0x97D7A8: fdivrp  st(1), st
0x97D7AA: fstp    dword ptr [esp+508h+var_4D0]
0x97D7AE: fld     dword ptr [esp+508h+var_4D0]
0x97D7B2: fld     [esp+508h+var_4F0]
0x97D7B6: fcomp   st(1)
0x97D7B8: fnstsw  ax
0x97D7BA: test    ah, 5
0x97D7BD: jp      short loc_97D826
0x97D7BF: mov     edx, 1
0x97D7C4: fstp    [esp+508h+var_4F0]
0x97D7C8: mov     esi, 6
0x97D7CD: mov     [esp+508h+var_4EC], edx
0x97D7D1: jmp     short loc_97D828
0x97D7D3: fstp    st
0x97D7D5: fchs
0x97D7D7: fcom    st(1)
0x97D7D9: fnstsw  ax
0x97D7DB: test    ah, 41h
0x97D7DE: jnz     short loc_97D824
0x97D7E0: fld     dword ptr [esp+508h+var_4D0]
0x97D7E4: fcom    st(1)
0x97D7E6: fnstsw  ax
0x97D7E8: test    ah, 5
0x97D7EB: jnp     loc_97D609
0x97D7F1: fxch    st(1)
0x97D7F3: fsub    st, st(2)
0x97D7F5: fmul    st, st(3)
0x97D7F7: fxch    st(1)
0x97D7F9: fsubrp  st(2), st
0x97D7FB: fdivrp  st(1), st
0x97D7FD: fstp    dword ptr [esp+508h+var_4D0]
0x97D801: fld     dword ptr [esp+508h+var_4D0]
0x97D805: fld     [esp+508h+var_4F0]
0x97D809: fcomp   st(1)
0x97D80B: fnstsw  ax
0x97D80D: test    ah, 5
0x97D810: jp      short loc_97D826
0x97D812: or      edx, 0FFFFFFFFh
0x97D815: fstp    [esp+508h+var_4F0]
0x97D819: mov     esi, 6
0x97D81E: mov     [esp+508h+var_4EC], edx
0x97D822: jmp     short loc_97D828
0x97D824: fstp    st(1)
0x97D826: fstp    st
0x97D828: fld     [esp+508h+var_3B8]
0x97D82F: fmul    [esp+508h+var_4C0]
0x97D833: fstp    [esp+508h+var_4F8]
0x97D837: fld     [esp+508h+var_4F8]
0x97D83B: fabs
0x97D83D: fstp    [esp+508h+var_4F8]
0x97D841: fld     [esp+508h+var_4F8]
0x97D845: fld     [esp+508h+var_328]
0x97D84C: fmul    [esp+508h+var_3A8]
0x97D853: fstp    [esp+508h+var_4F8]
0x97D857: fld     [esp+508h+var_4F8]
0x97D85B: fabs
0x97D85D: fstp    [esp+508h+var_4F8]
0x97D861: fadd    [esp+508h+var_4F8]
0x97D865: fstp    [esp+508h+var_4F8]
0x97D869: fld     [esp+508h+var_4F8]
0x97D86D: fld     [esp+508h+var_3D8]
0x97D874: fmul    st(5), st
0x97D876: fxch    st(5)
0x97D878: fstp    [esp+508h+var_4F8]
0x97D87C: fld     [esp+508h+var_4F8]
0x97D880: fabs
0x97D882: fstp    [esp+508h+var_4F8]
0x97D886: fld     [esp+508h+var_4F8]
0x97D88A: fld     st(3)
0x97D88C: fld     [esp+508h+var_3C8]
0x97D893: fmul    st(1), st
0x97D895: fxch    st(1)
0x97D897: fstp    [esp+508h+var_4F8]
0x97D89B: fld     [esp+508h+var_4F8]
0x97D89F: fabs
0x97D8A1: fstp    [esp+508h+var_4F8]
0x97D8A5: fld     [esp+508h+var_4F8]
0x97D8A9: faddp   st(2), st
0x97D8AB: fxch    st(1)
0x97D8AD: fstp    [esp+508h+var_4F8]
0x97D8B1: fld     [esp+508h+var_4F8]
0x97D8B5: faddp   st(2), st
0x97D8B7: fxch    st(1)
0x97D8B9: fstp    [esp+508h+var_4D4]
0x97D8BD: fld     [esp+508h+var_378]
0x97D8C4: fmul    st, st(1)
0x97D8C6: fld     st(5)
0x97D8C8: fmul    [esp+508h+var_308]
0x97D8CF: fsubp   st(1), st
0x97D8D1: fstp    [esp+508h+var_4F8]
0x97D8D5: fld     [esp+508h+var_4A4]
0x97D8D9: fst     [esp+508h+var_4E8]
0x97D8DD: fld     dword ptr [esp+508h+var_4AC+4]
0x97D8E1: fst     [esp+508h+var_4A0]
0x97D8E5: fxch    st(1)
0x97D8E7: fmulp   st(2), st
0x97D8E9: fmulp   st(5), st
0x97D8EB: fsubrp  st(4), st
0x97D8ED: fxch    st(3)
0x97D8EF: fstp    dword ptr [esp+508h+var_4D0]
0x97D8F3: fld     [esp+508h+var_4F8]
0x97D8F7: fld     [esp+508h+var_4D4]
0x97D8FB: fld     st
0x97D8FD: fcom    st(2)
0x97D8FF: fnstsw  ax
0x97D901: test    ah, 5
0x97D904: jp      short loc_97D961
0x97D906: fstp    st(1)
0x97D908: fld     dword ptr [esp+508h+var_4D0]
0x97D90C: fcom    st(1)
0x97D90E: fnstsw  ax
0x97D910: test    ah, 41h
0x97D913: jnz     short loc_97D92C
0x97D915: fstp    st(2)
0x97D917: xor     eax, eax
0x97D919: fstp    st(4)
0x97D91B: fstp    st(1)
0x97D91D: fstp    st(2)
0x97D91F: fstp    st
0x97D921: fstp    st
0x97D923: pop     edi
0x97D924: pop     esi
0x97D925: pop     ebx
0x97D926: mov     esp, ebp
0x97D928: pop     ebp
0x97D929: retn    0Ch
0x97D92C: fxch    st(1)
0x97D92E: fsub    st, st(2)
0x97D930: fmul    st, st(5)
0x97D932: fxch    st(1)
0x97D934: fsubrp  st(2), st
0x97D936: fdivrp  st(1), st
0x97D938: fstp    dword ptr [esp+508h+var_4D0]
0x97D93C: fld     dword ptr [esp+508h+var_4D0]
0x97D940: fld     [esp+508h+var_4F0]
0x97D944: fcomp   st(1)
0x97D946: fnstsw  ax
0x97D948: test    ah, 5
0x97D94B: jp      short loc_97D9B0
0x97D94D: mov     edx, 1
0x97D952: fstp    [esp+508h+var_4F0]
0x97D956: mov     esi, 7
0x97D95B: mov     [esp+508h+var_4EC], edx
0x97D95F: jmp     short loc_97D9B2
0x97D961: fstp    st
0x97D963: fchs
0x97D965: fcom    st(1)
0x97D967: fnstsw  ax
0x97D969: test    ah, 41h
0x97D96C: jnz     short loc_97D9AE
0x97D96E: fld     dword ptr [esp+508h+var_4D0]
0x97D972: fcom    st(1)
0x97D974: fnstsw  ax
0x97D976: test    ah, 5
0x97D979: jnp     short loc_97D915
0x97D97B: fxch    st(1)
0x97D97D: fsub    st, st(2)
0x97D97F: fmul    st, st(5)
0x97D981: fxch    st(1)
0x97D983: fsubrp  st(2), st
0x97D985: fdivrp  st(1), st
0x97D987: fstp    dword ptr [esp+508h+var_4D0]
0x97D98B: fld     dword ptr [esp+508h+var_4D0]
0x97D98F: fld     [esp+508h+var_4F0]
0x97D993: fcomp   st(1)
0x97D995: fnstsw  ax
0x97D997: test    ah, 5
0x97D99A: jp      short loc_97D9B0
0x97D99C: or      edx, 0FFFFFFFFh
0x97D99F: fstp    [esp+508h+var_4F0]
0x97D9A3: mov     esi, 7
0x97D9A8: mov     [esp+508h+var_4EC], edx
0x97D9AC: jmp     short loc_97D9B2
0x97D9AE: fstp    st(1)
0x97D9B0: fstp    st
0x97D9B2: fld     [esp+508h+var_3B8]
0x97D9B9: fmul    [esp+508h+var_318]
0x97D9C0: fstp    [esp+508h+var_4F8]
0x97D9C4: fld     [esp+508h+var_4F8]
0x97D9C8: fabs
0x97D9CA: fstp    [esp+508h+var_4F8]
0x97D9CE: fld     [esp+508h+var_4F8]
0x97D9D2: fld     [esp+508h+var_328]
0x97D9D9: fld     [esp+508h+var_398]
0x97D9E0: fmul    st(1), st
0x97D9E2: fxch    st(1)
0x97D9E4: fstp    [esp+508h+var_4F8]
0x97D9E8: fld     [esp+508h+var_4F8]
0x97D9EC: fabs
0x97D9EE: fstp    [esp+508h+var_4F8]
0x97D9F2: fld     [esp+508h+var_4F8]
0x97D9F6: faddp   st(2), st
0x97D9F8: fxch    st(1)
0x97D9FA: fstp    [esp+508h+var_4F8]
0x97D9FE: fld     [esp+508h+var_4F8]
0x97DA02: fld     [esp+508h+var_3E8]
0x97DA09: fmul    [esp+508h+var_3F8]
0x97DA10: fstp    [esp+508h+var_4F8]
0x97DA14: fld     [esp+508h+var_4F8]
0x97DA18: fabs
0x97DA1A: fstp    [esp+508h+var_4F8]
0x97DA1E: fld     [esp+508h+var_4F8]
0x97DA22: fld     st(3)
0x97DA24: fld     [esp+508h+var_438]
0x97DA2B: fmul    st(1), st
0x97DA2D: fxch    st(1)
0x97DA2F: fstp    [esp+508h+var_4F8]
0x97DA33: fld     [esp+508h+var_4F8]
0x97DA37: fabs
0x97DA39: fstp    [esp+508h+var_4F8]
0x97DA3D: fld     [esp+508h+var_4F8]
0x97DA41: faddp   st(2), st
0x97DA43: fxch    st(1)
0x97DA45: fstp    [esp+508h+var_4F8]
0x97DA49: fld     [esp+508h+var_4F8]
0x97DA4D: faddp   st(2), st
0x97DA4F: fxch    st(1)
0x97DA51: fstp    [esp+508h+var_4D4]
0x97DA55: fld     [esp+508h+var_378]
0x97DA5C: fmul    st, st(1)
0x97DA5E: fld     [esp+508h+var_3F8]
0x97DA65: fld     [esp+508h+var_308]
0x97DA6C: fmul    st, st(1)
0x97DA6E: fsubp   st(2), st
0x97DA70: fxch    st(1)
0x97DA72: fstp    [esp+508h+var_4F8]
0x97DA76: fld     [esp+508h+var_4E8]
0x97DA7A: fmulp   st(2), st
0x97DA7C: fmul    [esp+508h+var_4A0]
0x97DA80: fsubp   st(1), st
0x97DA82: fstp    dword ptr [esp+508h+var_4D0]
0x97DA86: fld     [esp+508h+var_4F8]
0x97DA8A: fld     [esp+508h+var_4D4]
0x97DA8E: fld     st
0x97DA90: fcom    st(2)
0x97DA92: fnstsw  ax
0x97DA94: test    ah, 5
0x97DA97: jp      short loc_97DAF6
0x97DA99: fstp    st(1)
0x97DA9B: fld     dword ptr [esp+508h+var_4D0]
0x97DA9F: fcom    st(1)
0x97DAA1: fnstsw  ax
0x97DAA3: test    ah, 41h
0x97DAA6: jnz     short loc_97DAC1
0x97DAA8: fstp    st(2)
0x97DAAA: xor     eax, eax
0x97DAAC: fstp    st(5)
0x97DAAE: fstp    st(2)
0x97DAB0: fstp    st(3)
0x97DAB2: fstp    st(1)
0x97DAB4: fstp    st(1)
0x97DAB6: fstp    st
0x97DAB8: pop     edi
0x97DAB9: pop     esi
0x97DABA: pop     ebx
0x97DABB: mov     esp, ebp
0x97DABD: pop     ebp
0x97DABE: retn    0Ch
0x97DAC1: fxch    st(1)
0x97DAC3: fsub    st, st(2)
0x97DAC5: fmul    st, st(6)
0x97DAC7: fxch    st(1)
0x97DAC9: fsubrp  st(2), st
0x97DACB: fdivrp  st(1), st
0x97DACD: fstp    dword ptr [esp+508h+var_4D0]
0x97DAD1: fld     dword ptr [esp+508h+var_4D0]
0x97DAD5: fld     [esp+508h+var_4F0]
0x97DAD9: fcomp   st(1)
0x97DADB: fnstsw  ax
0x97DADD: test    ah, 5
0x97DAE0: jp      short loc_97DB45
0x97DAE2: mov     edx, 1
0x97DAE7: fstp    [esp+508h+var_4F0]
0x97DAEB: mov     esi, 8
0x97DAF0: mov     [esp+508h+var_4EC], edx
0x97DAF4: jmp     short loc_97DB47
0x97DAF6: fstp    st
0x97DAF8: fchs
0x97DAFA: fcom    st(1)
0x97DAFC: fnstsw  ax
0x97DAFE: test    ah, 41h
0x97DB01: jnz     short loc_97DB43
0x97DB03: fld     dword ptr [esp+508h+var_4D0]
0x97DB07: fcom    st(1)
0x97DB09: fnstsw  ax
0x97DB0B: test    ah, 5
0x97DB0E: jnp     short loc_97DAA8
0x97DB10: fxch    st(1)
0x97DB12: fsub    st, st(2)
0x97DB14: fmul    st, st(6)
0x97DB16: fxch    st(1)
0x97DB18: fsubrp  st(2), st
0x97DB1A: fdivrp  st(1), st
0x97DB1C: fstp    dword ptr [esp+508h+var_4D0]
0x97DB20: fld     dword ptr [esp+508h+var_4D0]
0x97DB24: fld     [esp+508h+var_4F0]
0x97DB28: fcomp   st(1)
0x97DB2A: fnstsw  ax
0x97DB2C: test    ah, 5
0x97DB2F: jp      short loc_97DB45
0x97DB31: or      edx, 0FFFFFFFFh
0x97DB34: fstp    [esp+508h+var_4F0]
0x97DB38: mov     esi, 8
0x97DB3D: mov     [esp+508h+var_4EC], edx
0x97DB41: jmp     short loc_97DB47
0x97DB43: fstp    st(1)
0x97DB45: fstp    st
0x97DB47: fld     [esp+508h+var_318]
0x97DB4E: fmul    [esp+508h+var_3A8]
0x97DB55: fstp    [esp+508h+var_4F8]
0x97DB59: fld     [esp+508h+var_4F8]
0x97DB5D: fabs
0x97DB5F: fstp    [esp+508h+var_4F8]
0x97DB63: fld     [esp+508h+var_4F8]
0x97DB67: fld     st(1)
0x97DB69: fmul    [esp+508h+var_4C0]
0x97DB6D: fstp    [esp+508h+var_4F8]
0x97DB71: fld     [esp+508h+var_4F8]
0x97DB75: fabs
0x97DB77: fstp    [esp+508h+var_4F8]
0x97DB7B: fadd    [esp+508h+var_4F8]
0x97DB7F: fstp    [esp+508h+var_4F8]
0x97DB83: fld     [esp+508h+var_4F8]
0x97DB87: fld     [esp+508h+var_3E8]
0x97DB8E: fmul    [esp+508h+var_368]
0x97DB95: fstp    [esp+508h+var_4F8]
0x97DB99: fld     [esp+508h+var_4F8]
0x97DB9D: fabs
0x97DB9F: fstp    [esp+508h+var_4F8]
0x97DBA3: fld     [esp+508h+var_4F8]
0x97DBA7: fld     st(3)
0x97DBA9: fld     [esp+508h+var_338]
0x97DBB0: fmul    st(1), st
0x97DBB2: fxch    st(1)
0x97DBB4: fstp    [esp+508h+var_4F8]
0x97DBB8: fld     [esp+508h+var_4F8]
0x97DBBC: fabs
0x97DBBE: fstp    [esp+508h+var_4F8]
0x97DBC2: fld     [esp+508h+var_4F8]
0x97DBC6: faddp   st(2), st
0x97DBC8: fxch    st(1)
0x97DBCA: fstp    [esp+508h+var_4F8]
0x97DBCE: fld     [esp+508h+var_4F8]
0x97DBD2: faddp   st(2), st
0x97DBD4: fxch    st(1)
0x97DBD6: fstp    [esp+508h+var_4D4]
0x97DBDA: fld     [esp+508h+var_378]
0x97DBE1: fmul    st, st(1)
0x97DBE3: fld     [esp+508h+var_368]
0x97DBEA: fld     [esp+508h+var_308]
0x97DBF1: fmul    st, st(1)
0x97DBF3: fsubp   st(2), st
0x97DBF5: fxch    st(1)
0x97DBF7: fstp    [esp+508h+var_4F8]
0x97DBFB: fld     [esp+508h+var_4E8]
0x97DBFF: fmul    st, st(2)
0x97DC01: fld     [esp+508h+var_4A0]
0x97DC05: fmulp   st(2), st
0x97DC07: fsubrp  st(1), st
0x97DC09: fstp    dword ptr [esp+508h+var_4D0]
0x97DC0D: fld     [esp+508h+var_4F8]
0x97DC11: fld     [esp+508h+var_4D4]
0x97DC15: fld     st
0x97DC17: fst     [esp+508h+var_358]
0x97DC1E: fcomp   st(2)
0x97DC20: fnstsw  ax
0x97DC22: test    ah, 5
0x97DC25: jp      short loc_97DC90
0x97DC27: fstp    st
0x97DC29: fld     dword ptr [esp+508h+var_4D0]
0x97DC2D: fld     [esp+508h+var_358]
0x97DC34: fcomp   st(1)
0x97DC36: fnstsw  ax
0x97DC38: test    ah, 5
0x97DC3B: jp      short loc_97DC56
0x97DC3D: fstp    st(1)
0x97DC3F: xor     eax, eax
0x97DC41: fstp    st(5)
0x97DC43: fstp    st(2)
0x97DC45: fstp    st(1)
0x97DC47: fstp    st(1)
0x97DC49: fstp    st
0x97DC4B: fstp    st
0x97DC4D: pop     edi
0x97DC4E: pop     esi
0x97DC4F: pop     ebx
0x97DC50: mov     esp, ebp
0x97DC52: pop     ebp
0x97DC53: retn    0Ch
0x97DC56: fld     [esp+508h+var_358]
0x97DC5D: fsub    st, st(2)
0x97DC5F: fmul    st, st(7)
0x97DC61: fxch    st(1)
0x97DC63: fsubrp  st(2), st
0x97DC65: fdivrp  st(1), st
0x97DC67: fstp    dword ptr [esp+508h+var_4D0]
0x97DC6B: fld     dword ptr [esp+508h+var_4D0]
0x97DC6F: fld     [esp+508h+var_4F0]
0x97DC73: fcomp   st(1)
0x97DC75: fnstsw  ax
0x97DC77: test    ah, 5
0x97DC7A: jp      short loc_97DCEB
0x97DC7C: mov     edx, 1
0x97DC81: fstp    [esp+508h+var_4F0]
0x97DC85: mov     esi, 9
0x97DC8A: mov     [esp+508h+var_4EC], edx
0x97DC8E: jmp     short loc_97DCED
0x97DC90: fchs
0x97DC92: fst     [esp+508h+var_488]
0x97DC99: fcom    st(1)
0x97DC9B: fnstsw  ax
0x97DC9D: test    ah, 41h
0x97DCA0: jnz     short loc_97DCE9
0x97DCA2: fld     dword ptr [esp+508h+var_4D0]
0x97DCA6: fcom    st(1)
0x97DCA8: fnstsw  ax
0x97DCAA: fstp    st(1)
0x97DCAC: test    ah, 5
0x97DCAF: jnp     short loc_97DC3D
0x97DCB1: fld     [esp+508h+var_488]
0x97DCB8: fsub    st, st(2)
0x97DCBA: fmul    st, st(7)
0x97DCBC: fxch    st(1)
0x97DCBE: fsubrp  st(2), st
0x97DCC0: fdivrp  st(1), st
0x97DCC2: fstp    dword ptr [esp+508h+var_4D0]
0x97DCC6: fld     dword ptr [esp+508h+var_4D0]
0x97DCCA: fld     [esp+508h+var_4F0]
0x97DCCE: fcomp   st(1)
0x97DCD0: fnstsw  ax
0x97DCD2: test    ah, 5
0x97DCD5: jp      short loc_97DCEB
0x97DCD7: or      edx, 0FFFFFFFFh
0x97DCDA: fstp    [esp+508h+var_4F0]
0x97DCDE: mov     esi, 9
0x97DCE3: mov     [esp+508h+var_4EC], edx
0x97DCE7: jmp     short loc_97DCED
0x97DCE9: fstp    st(1)
0x97DCEB: fstp    st
0x97DCED: fld     [esp+508h+var_388]
0x97DCF4: fmul    [esp+508h+var_3D8]
0x97DCFB: fstp    [esp+508h+var_4F8]
0x97DCFF: fld     [esp+508h+var_4F8]
0x97DD03: fabs
0x97DD05: fstp    [esp+508h+var_4F8]
0x97DD09: fld     [esp+508h+var_4F8]
0x97DD0D: fld     st(3)
0x97DD0F: fmul    st, st(3)
0x97DD11: fstp    [esp+508h+var_4F8]
0x97DD15: fld     [esp+508h+var_4F8]
0x97DD19: fabs
0x97DD1B: fstp    [esp+508h+var_4F8]
0x97DD1F: fadd    [esp+508h+var_4F8]
0x97DD23: fstp    [esp+508h+var_4F8]
0x97DD27: fld     [esp+508h+var_4F8]
0x97DD2B: fxch    st(1)
0x97DD2D: fmul    [esp+508h+var_4C0]
0x97DD31: fstp    [esp+508h+var_4F8]
0x97DD35: fld     [esp+508h+var_4F8]
0x97DD39: fabs
0x97DD3B: fstp    [esp+508h+var_4F8]
0x97DD3F: fld     [esp+508h+var_4F8]
0x97DD43: fld     [esp+508h+var_438]
0x97DD4A: fmul    [esp+508h+var_328]
0x97DD51: fstp    [esp+508h+var_4F8]
0x97DD55: fld     [esp+508h+var_4F8]
0x97DD59: fabs
0x97DD5B: fstp    [esp+508h+var_4F8]
0x97DD5F: fadd    [esp+508h+var_4F8]
0x97DD63: fstp    [esp+508h+var_4F8]
0x97DD67: fadd    [esp+508h+var_4F8]
0x97DD6B: fstp    [esp+508h+var_4D4]
0x97DD6F: fld     [esp+508h+var_3D8]
0x97DD76: fld     st
0x97DD78: fmul    st, st(4)
0x97DD7A: fld     [esp+508h+var_378]
0x97DD81: fmul    st, st(3)
0x97DD83: fsubp   st(1), st
0x97DD85: fstp    [esp+508h+var_4F8]
0x97DD89: fld     dword ptr [esp+508h+var_4AC]
0x97DD8D: fmul    st(1), st
0x97DD8F: fld     [esp+508h+var_4E8]
0x97DD93: fmulp   st(3), st
0x97DD95: fxch    st(1)
0x97DD97: fsubrp  st(2), st
0x97DD99: fxch    st(1)
0x97DD9B: fstp    dword ptr [esp+508h+var_4D0]
0x97DD9F: fld     [esp+508h+var_4F8]
0x97DDA3: fld     [esp+508h+var_4D4]
0x97DDA7: fld     st
0x97DDA9: fcom    st(2)
0x97DDAB: fnstsw  ax
0x97DDAD: test    ah, 5
0x97DDB0: jp      short loc_97DE0F
0x97DDB2: fstp    st(1)
0x97DDB4: fld     dword ptr [esp+508h+var_4D0]
0x97DDB8: fcom    st(1)
0x97DDBA: fnstsw  ax
0x97DDBC: test    ah, 41h
0x97DDBF: jnz     short loc_97DDDA
0x97DDC1: fstp    st(2)
0x97DDC3: xor     eax, eax
0x97DDC5: fstp    st(5)
0x97DDC7: fstp    st(2)
0x97DDC9: fstp    st
0x97DDCB: fstp    st(1)
0x97DDCD: fstp    st(1)
0x97DDCF: fstp    st
0x97DDD1: pop     edi
0x97DDD2: pop     esi
0x97DDD3: pop     ebx
0x97DDD4: mov     esp, ebp
0x97DDD6: pop     ebp
0x97DDD7: retn    0Ch
0x97DDDA: fxch    st(1)
0x97DDDC: fsub    st, st(2)
0x97DDDE: fmul    st, st(6)
0x97DDE0: fxch    st(1)
0x97DDE2: fsubrp  st(2), st
0x97DDE4: fdivrp  st(1), st
0x97DDE6: fstp    dword ptr [esp+508h+var_4D0]
0x97DDEA: fld     dword ptr [esp+508h+var_4D0]
0x97DDEE: fld     [esp+508h+var_4F0]
0x97DDF2: fcomp   st(1)
0x97DDF4: fnstsw  ax
0x97DDF6: test    ah, 5
0x97DDF9: jp      short loc_97DE5E
0x97DDFB: mov     edx, 1
0x97DE00: fstp    [esp+508h+var_4F0]
0x97DE04: mov     esi, 0Ah
0x97DE09: mov     [esp+508h+var_4EC], edx
0x97DE0D: jmp     short loc_97DE60
0x97DE0F: fstp    st
0x97DE11: fchs
0x97DE13: fcom    st(1)
0x97DE15: fnstsw  ax
0x97DE17: test    ah, 41h
0x97DE1A: jnz     short loc_97DE5C
0x97DE1C: fld     dword ptr [esp+508h+var_4D0]
0x97DE20: fcom    st(1)
0x97DE22: fnstsw  ax
0x97DE24: test    ah, 5
0x97DE27: jnp     short loc_97DDC1
0x97DE29: fxch    st(1)
0x97DE2B: fsub    st, st(2)
0x97DE2D: fmul    st, st(6)
0x97DE2F: fxch    st(1)
0x97DE31: fsubrp  st(2), st
0x97DE33: fdivrp  st(1), st
0x97DE35: fstp    dword ptr [esp+508h+var_4D0]
0x97DE39: fld     dword ptr [esp+508h+var_4D0]
0x97DE3D: fld     [esp+508h+var_4F0]
0x97DE41: fcomp   st(1)
0x97DE43: fnstsw  ax
0x97DE45: test    ah, 5
0x97DE48: jp      short loc_97DE5E
0x97DE4A: or      edx, 0FFFFFFFFh
0x97DE4D: fstp    [esp+508h+var_4F0]
0x97DE51: mov     esi, 0Ah
0x97DE56: mov     [esp+508h+var_4EC], edx
0x97DE5A: jmp     short loc_97DE60
0x97DE5C: fstp    st(1)
0x97DE5E: fstp    st
0x97DE60: fld     [esp+508h+var_388]
0x97DE67: fmul    [esp+508h+var_3F8]
0x97DE6E: fstp    [esp+508h+var_4F8]
0x97DE72: fld     [esp+508h+var_4F8]
0x97DE76: fabs
0x97DE78: fstp    [esp+508h+var_4F8]
0x97DE7C: fld     [esp+508h+var_4F8]
0x97DE80: fld     st(2)
0x97DE82: fmul    [esp+508h+var_3A8]
0x97DE89: fstp    [esp+508h+var_4F8]
0x97DE8D: fld     [esp+508h+var_4F8]
0x97DE91: fabs
0x97DE93: fstp    [esp+508h+var_4F8]
0x97DE97: fadd    [esp+508h+var_4F8]
0x97DE9B: fstp    [esp+508h+var_4F8]
0x97DE9F: fld     [esp+508h+var_4F8]
0x97DEA3: fld     [esp+508h+var_338]
0x97DEAA: fmul    [esp+508h+var_318]
0x97DEB1: fstp    [esp+508h+var_4F8]
0x97DEB5: fld     [esp+508h+var_4F8]
0x97DEB9: fabs
0x97DEBB: fstp    [esp+508h+var_4F8]
0x97DEBF: fld     [esp+508h+var_4F8]
0x97DEC3: fld     [esp+508h+var_3C8]
0x97DECA: fmul    [esp+508h+var_328]
0x97DED1: fstp    [esp+508h+var_4F8]
0x97DED5: fld     [esp+508h+var_4F8]
0x97DED9: fabs
0x97DEDB: fstp    [esp+508h+var_4F8]
0x97DEDF: fadd    [esp+508h+var_4F8]
0x97DEE3: fstp    [esp+508h+var_4F8]
0x97DEE7: fadd    [esp+508h+var_4F8]
0x97DEEB: fstp    [esp+508h+var_4D4]
0x97DEEF: fld     [esp+508h+var_3F8]
0x97DEF6: fld     st
0x97DEF8: fmul    st, st(4)
0x97DEFA: fld     [esp+508h+var_378]
0x97DF01: fld     [esp+508h+var_3A8]
0x97DF08: fmul    st(1), st
0x97DF0A: fxch    st(2)
0x97DF0C: fsubrp  st(1), st
0x97DF0E: fstp    [esp+508h+var_4F8]
0x97DF12: fxch    st(1)
0x97DF14: fmul    st, st(2)
0x97DF16: fld     [esp+508h+var_4E8]
0x97DF1A: fmulp   st(2), st
0x97DF1C: fsubrp  st(1), st
0x97DF1E: fstp    dword ptr [esp+508h+var_4D0]
0x97DF22: fld     [esp+508h+var_4F8]
0x97DF26: fld     [esp+508h+var_4D4]
0x97DF2A: fld     st
0x97DF2C: fcom    st(2)
0x97DF2E: fnstsw  ax
0x97DF30: test    ah, 5
0x97DF33: jp      short loc_97DF7D
0x97DF35: fstp    st(1)
0x97DF37: fld     dword ptr [esp+508h+var_4D0]
0x97DF3B: fcom    st(1)
0x97DF3D: fnstsw  ax
0x97DF3F: test    ah, 41h
0x97DF42: jz      loc_97DDC1
0x97DF48: fxch    st(1)
0x97DF4A: fsub    st, st(2)
0x97DF4C: fmul    st, st(6)
0x97DF4E: fxch    st(1)
0x97DF50: fsubrp  st(2), st
0x97DF52: fdivrp  st(1), st
0x97DF54: fstp    dword ptr [esp+508h+var_4D0]
0x97DF58: fld     dword ptr [esp+508h+var_4D0]
0x97DF5C: fld     [esp+508h+var_4F0]
0x97DF60: fcomp   st(1)
0x97DF62: fnstsw  ax
0x97DF64: test    ah, 5
0x97DF67: jp      short loc_97DFD0
0x97DF69: mov     edx, 1
0x97DF6E: fstp    [esp+508h+var_4F0]
0x97DF72: mov     esi, 0Bh
0x97DF77: mov     [esp+508h+var_4EC], edx
0x97DF7B: jmp     short loc_97DFD2
0x97DF7D: fstp    st
0x97DF7F: fchs
0x97DF81: fcom    st(1)
0x97DF83: fnstsw  ax
0x97DF85: test    ah, 41h
0x97DF88: jnz     short loc_97DFCE
0x97DF8A: fld     dword ptr [esp+508h+var_4D0]
0x97DF8E: fcom    st(1)
0x97DF90: fnstsw  ax
0x97DF92: test    ah, 5
0x97DF95: jnp     loc_97DDC1
0x97DF9B: fxch    st(1)
0x97DF9D: fsub    st, st(2)
0x97DF9F: fmul    st, st(6)
0x97DFA1: fxch    st(1)
0x97DFA3: fsubrp  st(2), st
0x97DFA5: fdivrp  st(1), st
0x97DFA7: fstp    dword ptr [esp+508h+var_4D0]
0x97DFAB: fld     dword ptr [esp+508h+var_4D0]
0x97DFAF: fld     [esp+508h+var_4F0]
0x97DFB3: fcomp   st(1)
0x97DFB5: fnstsw  ax
0x97DFB7: test    ah, 5
0x97DFBA: jp      short loc_97DFD0
0x97DFBC: or      edx, 0FFFFFFFFh
0x97DFBF: fstp    [esp+508h+var_4F0]
0x97DFC3: mov     esi, 0Bh
0x97DFC8: mov     [esp+508h+var_4EC], edx
0x97DFCC: jmp     short loc_97DFD2
0x97DFCE: fstp    st(1)
0x97DFD0: fstp    st
0x97DFD2: fld     [esp+508h+var_388]
0x97DFD9: fld     [esp+508h+var_368]
0x97DFE0: fmul    st(1), st
0x97DFE2: fxch    st(1)
0x97DFE4: fstp    [esp+508h+var_4F8]
0x97DFE8: fld     [esp+508h+var_4F8]
0x97DFEC: fabs
0x97DFEE: fstp    [esp+508h+var_4F8]
0x97DFF2: fld     [esp+508h+var_4F8]
0x97DFF6: fxch    st(3)
0x97DFF8: fmul    [esp+508h+var_3B8]
0x97DFFF: fstp    [esp+508h+var_4F8]
0x97E003: fld     [esp+508h+var_4F8]
0x97E007: fabs
0x97E009: fstp    [esp+508h+var_4F8]
0x97E00D: fld     [esp+508h+var_4F8]
0x97E011: faddp   st(3), st
0x97E013: fxch    st(2)
0x97E015: fstp    [esp+508h+var_4F8]
0x97E019: fld     [esp+508h+var_4F8]
0x97E01D: fld     [esp+508h+var_438]
0x97E024: fmul    [esp+508h+var_318]
0x97E02B: fstp    [esp+508h+var_4F8]
0x97E02F: fld     [esp+508h+var_4F8]
0x97E033: fabs
0x97E035: fstp    [esp+508h+var_4F8]
0x97E039: fld     [esp+508h+var_4F8]
0x97E03D: fld     [esp+508h+var_3C8]
0x97E044: fmul    [esp+508h+var_4C0]
0x97E048: fstp    [esp+508h+var_4F8]
0x97E04C: fld     [esp+508h+var_4F8]
0x97E050: fabs
0x97E052: fstp    [esp+508h+var_4F8]
0x97E056: fadd    [esp+508h+var_4F8]
0x97E05A: fstp    [esp+508h+var_4F8]
0x97E05E: fadd    [esp+508h+var_4F8]
0x97E062: fstp    [esp+508h+var_4D4]
0x97E066: fld     st(1)
0x97E068: fmul    st, st(3)
0x97E06A: fld     [esp+508h+var_378]
0x97E071: fld     [esp+508h+var_3B8]
0x97E078: fmul    st(1), st
0x97E07A: fxch    st(2)
0x97E07C: fsubrp  st(1), st
0x97E07E: fstp    [esp+508h+var_4F8]
0x97E082: fld     st(2)
0x97E084: fmul    st, st(2)
0x97E086: fld     [esp+508h+var_4E8]
0x97E08A: fmulp   st(2), st
0x97E08C: fsubrp  st(1), st
0x97E08E: fstp    dword ptr [esp+508h+var_4D0]
0x97E092: fld     [esp+508h+var_4F8]
0x97E096: fld     [esp+508h+var_4D4]
0x97E09A: fld     st
0x97E09C: fcom    st(2)
0x97E09E: fnstsw  ax
0x97E0A0: test    ah, 5
0x97E0A3: jp      short loc_97E102
0x97E0A5: fstp    st(1)
0x97E0A7: fld     dword ptr [esp+508h+var_4D0]
0x97E0AB: fcom    st(1)
0x97E0AD: fnstsw  ax
0x97E0AF: test    ah, 41h
0x97E0B2: jnz     short loc_97E0CD
0x97E0B4: fstp    st(2)
0x97E0B6: xor     eax, eax
0x97E0B8: fstp    st(5)
0x97E0BA: fstp    st(4)
0x97E0BC: fstp    st
0x97E0BE: fstp    st(1)
0x97E0C0: fstp    st
0x97E0C2: fstp    st
0x97E0C4: pop     edi
0x97E0C5: pop     esi
0x97E0C6: pop     ebx
0x97E0C7: mov     esp, ebp
0x97E0C9: pop     ebp
0x97E0CA: retn    0Ch
0x97E0CD: fxch    st(1)
0x97E0CF: fsub    st, st(2)
0x97E0D1: fmul    st, st(6)
0x97E0D3: fxch    st(1)
0x97E0D5: fsubrp  st(2), st
0x97E0D7: fdivrp  st(1), st
0x97E0D9: fstp    dword ptr [esp+508h+var_4D0]
0x97E0DD: fld     dword ptr [esp+508h+var_4D0]
0x97E0E1: fld     [esp+508h+var_4F0]
0x97E0E5: fcomp   st(1)
0x97E0E7: fnstsw  ax
0x97E0E9: test    ah, 5
0x97E0EC: jp      short loc_97E151
0x97E0EE: mov     edx, 1
0x97E0F3: fstp    [esp+508h+var_4F0]
0x97E0F7: mov     esi, 0Ch
0x97E0FC: mov     [esp+508h+var_4EC], edx
0x97E100: jmp     short loc_97E153
0x97E102: fstp    st
0x97E104: fchs
0x97E106: fcom    st(1)
0x97E108: fnstsw  ax
0x97E10A: test    ah, 41h
0x97E10D: jnz     short loc_97E14F
0x97E10F: fld     dword ptr [esp+508h+var_4D0]
0x97E113: fcom    st(1)
0x97E115: fnstsw  ax
0x97E117: test    ah, 5
0x97E11A: jnp     short loc_97E0B4
0x97E11C: fxch    st(1)
0x97E11E: fsub    st, st(2)
0x97E120: fmul    st, st(6)
0x97E122: fxch    st(1)
0x97E124: fsubrp  st(2), st
0x97E126: fdivrp  st(1), st
0x97E128: fstp    dword ptr [esp+508h+var_4D0]
0x97E12C: fld     dword ptr [esp+508h+var_4D0]
0x97E130: fld     [esp+508h+var_4F0]
0x97E134: fcomp   st(1)
0x97E136: fnstsw  ax
0x97E138: test    ah, 5
0x97E13B: jp      short loc_97E151
0x97E13D: or      edx, 0FFFFFFFFh
0x97E140: fstp    [esp+508h+var_4F0]
0x97E144: mov     esi, 0Ch
0x97E149: mov     [esp+508h+var_4EC], edx
0x97E14D: jmp     short loc_97E153
0x97E14F: fstp    st(1)
0x97E151: fstp    st
0x97E153: fld     st(1)
0x97E155: fmul    [esp+508h+var_4C0]
0x97E159: fstp    [esp+508h+var_4F8]
0x97E15D: fld     [esp+508h+var_4F8]
0x97E161: fabs
0x97E163: fstp    [esp+508h+var_4F8]
0x97E167: fld     [esp+508h+var_4F8]
0x97E16B: fld     [esp+508h+var_3F8]
0x97E172: fmul    [esp+508h+var_328]
0x97E179: fstp    [esp+508h+var_4F8]
0x97E17D: fld     [esp+508h+var_4F8]
0x97E181: fabs
0x97E183: fstp    [esp+508h+var_4F8]
0x97E187: fadd    [esp+508h+var_4F8]
0x97E18B: fstp    [esp+508h+var_4F8]
0x97E18F: fld     [esp+508h+var_4F8]
0x97E193: fld     [esp+508h+var_388]
0x97E19A: fmul    [esp+508h+var_3C8]
0x97E1A1: fstp    [esp+508h+var_4F8]
0x97E1A5: fld     [esp+508h+var_4F8]
0x97E1A9: fabs
0x97E1AB: fstp    [esp+508h+var_4F8]
0x97E1AF: fld     [esp+508h+var_4F8]
0x97E1B3: fld     [esp+508h+var_3E8]
0x97E1BA: fld     [esp+508h+var_398]
0x97E1C1: fmul    st(1), st
0x97E1C3: fxch    st(1)
0x97E1C5: fstp    [esp+508h+var_4F8]
0x97E1C9: fld     [esp+508h+var_4F8]
0x97E1CD: fabs
0x97E1CF: fstp    [esp+508h+var_4F8]
0x97E1D3: fld     [esp+508h+var_4F8]
0x97E1D7: faddp   st(2), st
0x97E1D9: fxch    st(1)
0x97E1DB: fstp    [esp+508h+var_4F8]
0x97E1DF: fld     [esp+508h+var_4F8]
0x97E1E3: faddp   st(2), st
0x97E1E5: fxch    st(1)
0x97E1E7: fstp    [esp+508h+var_4D4]
0x97E1EB: fld     [esp+508h+var_308]
0x97E1F2: fmul    st, st(1)
0x97E1F4: fld     [esp+508h+var_3C8]
0x97E1FB: fld     st
0x97E1FD: fmul    st, st(6)
0x97E1FF: fsubp   st(2), st
0x97E201: fxch    st(1)
0x97E203: fstp    [esp+508h+var_4F8]
0x97E207: fld     [esp+508h+var_4A0]
0x97E20B: fmulp   st(2), st
0x97E20D: fmul    st, st(2)
0x97E20F: fsubp   st(1), st
0x97E211: fstp    dword ptr [esp+508h+var_4D0]
0x97E215: fld     [esp+508h+var_4F8]
0x97E219: fld     [esp+508h+var_4D4]
0x97E21D: fld     st
0x97E21F: fcom    st(2)
0x97E221: fnstsw  ax
0x97E223: test    ah, 5
0x97E226: jp      short loc_97E270
0x97E228: fstp    st(1)
0x97E22A: fld     dword ptr [esp+508h+var_4D0]
0x97E22E: fcom    st(1)
0x97E230: fnstsw  ax
0x97E232: test    ah, 41h
0x97E235: jz      loc_97E0B4
0x97E23B: fxch    st(1)
0x97E23D: fsub    st, st(2)
0x97E23F: fmul    st, st(6)
0x97E241: fxch    st(1)
0x97E243: fsubrp  st(2), st
0x97E245: fdivrp  st(1), st
0x97E247: fstp    dword ptr [esp+508h+var_4D0]
0x97E24B: fld     dword ptr [esp+508h+var_4D0]
0x97E24F: fld     [esp+508h+var_4F0]
0x97E253: fcomp   st(1)
0x97E255: fnstsw  ax
0x97E257: test    ah, 5
0x97E25A: jp      short loc_97E2C3
0x97E25C: mov     edx, 1
0x97E261: fstp    [esp+508h+var_4F0]
0x97E265: mov     esi, 0Dh
0x97E26A: mov     [esp+508h+var_4EC], edx
0x97E26E: jmp     short loc_97E2C5
0x97E270: fstp    st
0x97E272: fchs
0x97E274: fcom    st(1)
0x97E276: fnstsw  ax
0x97E278: test    ah, 41h
0x97E27B: jnz     short loc_97E2C1
0x97E27D: fld     dword ptr [esp+508h+var_4D0]
0x97E281: fcom    st(1)
0x97E283: fnstsw  ax
0x97E285: test    ah, 5
0x97E288: jnp     loc_97E0B4
0x97E28E: fxch    st(1)
0x97E290: fsub    st, st(2)
0x97E292: fmul    st, st(6)
0x97E294: fxch    st(1)
0x97E296: fsubrp  st(2), st
0x97E298: fdivrp  st(1), st
0x97E29A: fstp    dword ptr [esp+508h+var_4D0]
0x97E29E: fld     dword ptr [esp+508h+var_4D0]
0x97E2A2: fld     [esp+508h+var_4F0]
0x97E2A6: fcomp   st(1)
0x97E2A8: fnstsw  ax
0x97E2AA: test    ah, 5
0x97E2AD: jp      short loc_97E2C3
0x97E2AF: or      edx, 0FFFFFFFFh
0x97E2B2: fstp    [esp+508h+var_4F0]
0x97E2B6: mov     esi, 0Dh
0x97E2BB: mov     [esp+508h+var_4EC], edx
0x97E2BF: jmp     short loc_97E2C5
0x97E2C1: fstp    st(1)
0x97E2C3: fstp    st
0x97E2C5: fxch    st(1)
0x97E2C7: fmul    [esp+508h+var_318]
0x97E2CE: fstp    [esp+508h+var_4F8]
0x97E2D2: fld     [esp+508h+var_4F8]
0x97E2D6: fabs
0x97E2D8: fstp    [esp+508h+var_4F8]
0x97E2DC: fld     [esp+508h+var_4F8]
0x97E2E0: fld     [esp+508h+var_3D8]
0x97E2E7: fmul    [esp+508h+var_328]
0x97E2EE: fstp    [esp+508h+var_4F8]
0x97E2F2: fld     [esp+508h+var_4F8]
0x97E2F6: fabs
0x97E2F8: fstp    [esp+508h+var_4F8]
0x97E2FC: fadd    [esp+508h+var_4F8]
0x97E300: fstp    [esp+508h+var_4F8]
0x97E304: fld     [esp+508h+var_4F8]
0x97E308: fld     [esp+508h+var_388]
0x97E30F: fld     [esp+508h+var_438]
0x97E316: fmul    st(1), st
0x97E318: fxch    st(1)
0x97E31A: fstp    [esp+508h+var_4F8]
0x97E31E: fld     [esp+508h+var_4F8]
0x97E322: fabs
0x97E324: fstp    [esp+508h+var_4F8]
0x97E328: fld     [esp+508h+var_4F8]
0x97E32C: fld     [esp+508h+var_3E8]
0x97E333: fld     [esp+508h+var_3A8]
0x97E33A: fmul    st(1), st
0x97E33C: fxch    st(1)
0x97E33E: fstp    [esp+508h+var_4F8]
0x97E342: fld     [esp+508h+var_4F8]
0x97E346: fabs
0x97E348: fstp    [esp+508h+var_4F8]
0x97E34C: fld     [esp+508h+var_4F8]
0x97E350: faddp   st(2), st
0x97E352: fxch    st(1)
0x97E354: fstp    [esp+508h+var_4F8]
0x97E358: fld     [esp+508h+var_4F8]
0x97E35C: faddp   st(3), st
0x97E35E: fxch    st(2)
0x97E360: fstp    [esp+508h+var_4D4]
0x97E364: fld     [esp+508h+var_308]
0x97E36B: fmul    st, st(2)
0x97E36D: fld     st(1)
0x97E36F: fmul    st, st(5)
0x97E371: fsubp   st(1), st
0x97E373: fstp    [esp+508h+var_4F8]
0x97E377: fld     [esp+508h+var_4A0]
0x97E37B: fmulp   st(2), st
0x97E37D: fmul    st, st(2)
0x97E37F: fsubp   st(1), st
0x97E381: fstp    dword ptr [esp+508h+var_4D0]
0x97E385: fld     [esp+508h+var_4F8]
0x97E389: fld     [esp+508h+var_4D4]
0x97E38D: fld     st
0x97E38F: fcom    st(2)
0x97E391: fnstsw  ax
0x97E393: test    ah, 5
0x97E396: jp      short loc_97E3F3
0x97E398: fstp    st(1)
0x97E39A: fld     dword ptr [esp+508h+var_4D0]
0x97E39E: fcom    st(1)
0x97E3A0: fnstsw  ax
0x97E3A2: test    ah, 41h
0x97E3A5: jnz     short loc_97E3BE
0x97E3A7: fstp    st(2)
0x97E3A9: xor     eax, eax
0x97E3AB: fstp    st(4)
0x97E3AD: fstp    st(3)
0x97E3AF: fstp    st
0x97E3B1: fstp    st
0x97E3B3: fstp    st
0x97E3B5: pop     edi
0x97E3B6: pop     esi
0x97E3B7: pop     ebx
0x97E3B8: mov     esp, ebp
0x97E3BA: pop     ebp
0x97E3BB: retn    0Ch
0x97E3BE: fxch    st(1)
0x97E3C0: fsub    st, st(2)
0x97E3C2: fmul    st, st(5)
0x97E3C4: fxch    st(1)
0x97E3C6: fsubrp  st(2), st
0x97E3C8: fdivrp  st(1), st
0x97E3CA: fstp    dword ptr [esp+508h+var_4D0]
0x97E3CE: fld     dword ptr [esp+508h+var_4D0]
0x97E3D2: fld     [esp+508h+var_4F0]
0x97E3D6: fcomp   st(1)
0x97E3D8: fnstsw  ax
0x97E3DA: test    ah, 5
0x97E3DD: jp      short loc_97E442
0x97E3DF: mov     edx, 1
0x97E3E4: fstp    [esp+508h+var_4F0]
0x97E3E8: mov     esi, 0Eh
0x97E3ED: mov     [esp+508h+var_4EC], edx
0x97E3F1: jmp     short loc_97E444
0x97E3F3: fstp    st
0x97E3F5: fchs
0x97E3F7: fcom    st(1)
0x97E3F9: fnstsw  ax
0x97E3FB: test    ah, 41h
0x97E3FE: jnz     short loc_97E440
0x97E400: fld     dword ptr [esp+508h+var_4D0]
0x97E404: fcom    st(1)
0x97E406: fnstsw  ax
0x97E408: test    ah, 5
0x97E40B: jnp     short loc_97E3A7
0x97E40D: fxch    st(1)
0x97E40F: fsub    st, st(2)
0x97E411: fmul    st, st(5)
0x97E413: fxch    st(1)
0x97E415: fsubrp  st(2), st
0x97E417: fdivrp  st(1), st
0x97E419: fstp    dword ptr [esp+508h+var_4D0]
0x97E41D: fld     dword ptr [esp+508h+var_4D0]
0x97E421: fld     [esp+508h+var_4F0]
0x97E425: fcomp   st(1)
0x97E427: fnstsw  ax
0x97E429: test    ah, 5
0x97E42C: jp      short loc_97E442
0x97E42E: or      edx, 0FFFFFFFFh
0x97E431: fstp    [esp+508h+var_4F0]
0x97E435: mov     esi, 0Eh
0x97E43A: mov     [esp+508h+var_4EC], edx
0x97E43E: jmp     short loc_97E444
0x97E440: fstp    st(1)
0x97E442: fstp    st
0x97E444: fld     [esp+508h+var_3F8]
0x97E44B: fmul    [esp+508h+var_318]
0x97E452: fstp    [esp+508h+var_4F8]
0x97E456: fld     [esp+508h+var_4F8]
0x97E45A: fabs
0x97E45C: fstp    [esp+508h+var_4F8]
0x97E460: fld     [esp+508h+var_4F8]
0x97E464: fld     [esp+508h+var_3D8]
0x97E46B: fmul    [esp+508h+var_4C0]
0x97E46F: fstp    [esp+508h+var_4F8]
0x97E473: fld     [esp+508h+var_4F8]
0x97E477: fabs
0x97E479: fstp    [esp+508h+var_4F8]
0x97E47D: fadd    [esp+508h+var_4F8]
0x97E481: fstp    [esp+508h+var_4F8]
0x97E485: fld     [esp+508h+var_4F8]
0x97E489: fld     [esp+508h+var_388]
0x97E490: fld     [esp+508h+var_338]
0x97E497: fmul    st(1), st
0x97E499: fxch    st(1)
0x97E49B: fstp    [esp+508h+var_4F8]
0x97E49F: fld     [esp+508h+var_4F8]
0x97E4A3: fabs
0x97E4A5: fstp    [esp+508h+var_4F8]
0x97E4A9: fld     [esp+508h+var_4F8]
0x97E4AD: fld     [esp+508h+var_3E8]
0x97E4B4: fld     [esp+508h+var_3B8]
0x97E4BB: fmul    st(1), st
0x97E4BD: fxch    st(1)
0x97E4BF: fstp    [esp+508h+var_4F8]
0x97E4C3: fld     [esp+508h+var_4F8]
0x97E4C7: fabs
0x97E4C9: fstp    [esp+508h+var_4F8]
0x97E4CD: fld     [esp+508h+var_4F8]
0x97E4D1: faddp   st(2), st
0x97E4D3: fxch    st(1)
0x97E4D5: fstp    [esp+508h+var_4F8]
0x97E4D9: fld     [esp+508h+var_4F8]
0x97E4DD: faddp   st(3), st
0x97E4DF: fxch    st(2)
0x97E4E1: fstp    [esp+508h+var_4D4]
0x97E4E5: fld     [esp+508h+var_308]
0x97E4EC: fmul    st, st(2)
0x97E4EE: fld     st(1)
0x97E4F0: fmulp   st(5), st
0x97E4F2: fsubrp  st(4), st
0x97E4F4: fxch    st(3)
0x97E4F6: fstp    [esp+508h+var_4F8]
0x97E4FA: fld     [esp+508h+var_4A0]
0x97E4FE: fmul    st, st(1)
0x97E500: fld     st(3)
0x97E502: fmulp   st(3), st
0x97E504: fsubrp  st(2), st
0x97E506: fxch    st(1)
0x97E508: fstp    dword ptr [esp+508h+var_4D0]
0x97E50C: fld     [esp+508h+var_4F8]
0x97E510: fld     [esp+508h+var_4D4]
0x97E514: fld     st
0x97E516: fcom    st(2)
0x97E518: fnstsw  ax
0x97E51A: test    ah, 5
0x97E51D: jp      short loc_97E580
0x97E51F: fstp    st(1)
0x97E521: fld     dword ptr [esp+508h+var_4D0]
0x97E525: fcom    st(1)
0x97E527: fnstsw  ax
0x97E529: test    ah, 41h
0x97E52C: jnz     short loc_97E545
0x97E52E: fstp    st(2)
0x97E530: xor     eax, eax
0x97E532: fstp    st(4)
0x97E534: fstp    st(3)
0x97E536: fstp    st(2)
0x97E538: fstp    st
0x97E53A: fstp    st
0x97E53C: pop     edi
0x97E53D: pop     esi
0x97E53E: pop     ebx
0x97E53F: mov     esp, ebp
0x97E541: pop     ebp
0x97E542: retn    0Ch
0x97E545: fxch    st(1)
0x97E547: fsub    st, st(2)
0x97E549: fmulp   st(5), st
0x97E54B: fsubrp  st(1), st
0x97E54D: fdivp   st(3), st
0x97E54F: fxch    st(2)
0x97E551: fstp    dword ptr [esp+508h+var_4D0]
0x97E555: fld     dword ptr [esp+508h+var_4D0]
0x97E559: fld     [esp+508h+var_4F0]
0x97E55D: fcom    st(1)
0x97E55F: fnstsw  ax
0x97E561: test    ah, 5
0x97E564: jp      short loc_97E5DF
0x97E566: fstp    st
0x97E568: mov     edx, 1
0x97E56D: fstp    [esp+508h+var_4F0]
0x97E571: mov     esi, 0Fh
0x97E576: fld     [esp+508h+var_4F0]
0x97E57A: mov     [esp+508h+var_4EC], edx
0x97E57E: jmp     short loc_97E5E1
0x97E580: fstp    st
0x97E582: fchs
0x97E584: fcom    st(1)
0x97E586: fnstsw  ax
0x97E588: test    ah, 41h
0x97E58B: jnz     short loc_97E5D3
0x97E58D: fld     dword ptr [esp+508h+var_4D0]
0x97E591: fcom    st(1)
0x97E593: fnstsw  ax
0x97E595: test    ah, 5
0x97E598: jnp     short loc_97E52E
0x97E59A: fxch    st(1)
0x97E59C: fsub    st, st(2)
0x97E59E: fmulp   st(5), st
0x97E5A0: fsubrp  st(1), st
0x97E5A2: fdivp   st(3), st
0x97E5A4: fxch    st(2)
0x97E5A6: fstp    dword ptr [esp+508h+var_4D0]
0x97E5AA: fld     dword ptr [esp+508h+var_4D0]
0x97E5AE: fld     [esp+508h+var_4F0]
0x97E5B2: fcom    st(1)
0x97E5B4: fnstsw  ax
0x97E5B6: test    ah, 5
0x97E5B9: jp      short loc_97E5DF
0x97E5BB: fstp    st
0x97E5BD: or      edx, 0FFFFFFFFh
0x97E5C0: fstp    [esp+508h+var_4F0]
0x97E5C4: mov     esi, 0Fh
0x97E5C9: fld     [esp+508h+var_4F0]
0x97E5CD: mov     [esp+508h+var_4EC], edx
0x97E5D1: jmp     short loc_97E5E1
0x97E5D3: fstp    st(1)
0x97E5D5: fstp    st(3)
0x97E5D7: fstp    st(2)
0x97E5D9: fld     [esp+508h+var_4F0]
0x97E5DD: jmp     short loc_97E5E1
0x97E5DF: fstp    st(1)
0x97E5E1: mov     eax, [ebp+arg_4]
0x97E5E4: fst     dword ptr [eax]
0x97E5E6: mov     eax, [ecx+78h]
0x97E5E9: add     eax, 10h
0x97E5EC: mov     [esp+508h+var_4D4], eax
0x97E5F0: lea     eax, [esi-1]; switch 15 cases
0x97E5F3: cmp     eax, 0Eh
0x97E5F6: ja      def_97E5FC
0x97E5FC: jmp     ds:jpt_97E5FC[eax*4]; switch jump
0x97E603: fstp    st; jumptable 0097E5FC cases 1-3
0x97E605: lea     ecx, [eax+eax*2]
0x97E608: fstp    st
0x97E60A: add     ecx, ecx
0x97E60C: fstp    st
0x97E60E: add     ecx, ecx
0x97E610: fldz
0x97E612: fcom    [esp+ecx+508h+var_470]
0x97E619: fnstsw  ax
0x97E61B: test    ah, 5
0x97E61E: jp      short loc_97E635
0x97E620: mov     eax, edx
0x97E622: neg     eax
0x97E624: mov     [esp+508h+var_48C], eax
0x97E628: fild    [esp+508h+var_48C]
0x97E62C: fmul    dword ptr [edi+6Ch]
0x97E62F: fstp    dword ptr [esp+508h+var_4C0]
0x97E633: jmp     short loc_97E654
0x97E635: fcom    [esp+ecx+508h+var_470]
0x97E63C: fnstsw  ax
0x97E63E: test    ah, 41h
0x97E641: jnz     short loc_97E650
0x97E643: fild    [esp+508h+var_4EC]
0x97E647: fmul    dword ptr [edi+6Ch]
0x97E64A: fstp    dword ptr [esp+508h+var_4C0]
0x97E64E: jmp     short loc_97E654
0x97E650: fst     dword ptr [esp+508h+var_4C0]
0x97E654: fcom    [esp+ecx+508h+var_46C]
0x97E65B: fnstsw  ax
0x97E65D: test    ah, 5
0x97E660: jp      short loc_97E677
0x97E662: mov     eax, edx
0x97E664: neg     eax
0x97E666: mov     [esp+508h+var_48C], eax
0x97E66A: fild    [esp+508h+var_48C]
0x97E66E: fmul    dword ptr [edi+70h]
0x97E671: fstp    dword ptr [esp+508h+var_4C0+4]
0x97E675: jmp     short loc_97E696
0x97E677: fcom    [esp+ecx+508h+var_46C]
0x97E67E: fnstsw  ax
0x97E680: test    ah, 41h
0x97E683: jnz     short loc_97E692
0x97E685: fild    [esp+508h+var_4EC]
0x97E689: fmul    dword ptr [edi+70h]
0x97E68C: fstp    dword ptr [esp+508h+var_4C0+4]
0x97E690: jmp     short loc_97E696
0x97E692: fst     dword ptr [esp+508h+var_4C0+4]
0x97E696: fcom    [esp+ecx+508h+var_468]
0x97E69D: lea     ecx, [esp+ecx+508h+var_468]
0x97E6A4: fnstsw  ax
0x97E6A6: test    ah, 5
0x97E6A9: jp      short loc_97E6B9
0x97E6AB: neg     edx
0x97E6AD: fstp    st
0x97E6AF: mov     [esp+508h+var_48C], edx
0x97E6B3: fild    [esp+508h+var_48C]
0x97E6B7: jmp     short loc_97E6C8
0x97E6B9: fcom    dword ptr [ecx]
0x97E6BB: fnstsw  ax
0x97E6BD: test    ah, 41h
0x97E6C0: jnz     short loc_97E6CB
0x97E6C2: fstp    st
0x97E6C4: fild    [esp+508h+var_4EC]
0x97E6C8: fmul    dword ptr [edi+74h]
0x97E6CB: mov     ecx, [esp+508h+var_474]
0x97E6D2: fstp    [esp+508h+var_4B8]
0x97E6D6: fld     [esp+508h+var_4B8]
0x97E6DA: push    ecx; int
0x97E6DB: push    ecx
0x97E6DC: lea     edx, [esp+510h+var_4AC]
0x97E6E0: fstp    [esp+510h+var_510]; float
0x97E6E3: push    edx; int
0x97E6E4: call    sub_47DA10
0x97E6E9: fld     dword ptr [esp+514h+var_4C0+4]
0x97E6ED: add     esp, 0Ch
0x97E6F0: push    eax
0x97E6F1: lea     eax, [esp+50Ch+var_404]
0x97E6F8: push    eax
0x97E6F9: push    ebx; int
0x97E6FA: push    ecx
0x97E6FB: lea     ecx, [esp+518h+var_488]
0x97E702: fstp    [esp+518h+var_518]; float
0x97E705: push    ecx; int
0x97E706: call    sub_47DA10
0x97E70B: fld     dword ptr [esp+51Ch+var_4C0]
0x97E70F: add     esp, 0Ch
0x97E712: push    eax
0x97E713: mov     eax, [esp+514h+var_44C]
0x97E71A: lea     edx, [esp+514h+var_4E8]
0x97E71E: push    edx
0x97E71F: push    eax; int
0x97E720: push    ecx
0x97E721: lea     ecx, [esp+520h+var_4C0]
0x97E725: fstp    [esp+520h+var_520]; float
0x97E728: push    ecx; int
0x97E729: call    sub_47DA10
0x97E72E: fld     [esp+524h+var_4F0]
0x97E732: add     esp, 0Ch
0x97E735: push    eax
0x97E736: mov     eax, dword ptr [esp+51Ch+var_448]
0x97E73D: lea     edx, [esp+51Ch+var_4A0]
0x97E741: push    edx
0x97E742: push    eax; int
0x97E743: push    ecx
0x97E744: lea     ecx, [esp+528h+var_358]
0x97E74B: fstp    [esp+528h+var_528]; float
0x97E74E: push    ecx; int
0x97E74F: call    sub_47DA10
0x97E754: mov     ecx, [esp+52Ch+var_4F4]
0x97E758: lea     edx, [esp+52Ch+var_308]
0x97E75F: add     esp, 0Ch
0x97E762: push    eax
0x97E763: push    edx
0x97E764: call    sub_47D9B0
0x97E769: mov     ecx, eax
0x97E76B: call    sub_47D9B0
0x97E770: mov     ecx, eax
0x97E772: call    sub_47D9B0
0x97E777: mov     ecx, eax
0x97E779: call    sub_47D9B0
0x97E77E: mov     edx, [eax]
0x97E780: mov     ecx, [ebp+arg_8]
0x97E783: mov     [ecx], edx
0x97E785: mov     edx, [eax+4]
0x97E788: mov     [ecx+4], edx
0x97E78B: mov     eax, [eax+8]
0x97E78E: mov     [ecx+8], eax
0x97E791: mov     eax, 1
0x97E796: pop     edi
0x97E797: pop     esi
0x97E798: pop     ebx
0x97E799: mov     esp, ebp
0x97E79B: pop     ebp
0x97E79C: retn    0Ch
0x97E79F: fstp    st; jumptable 0097E5FC cases 4-6
0x97E7A1: fstp    st
0x97E7A3: fstp    st
0x97E7A5: fldz
0x97E7A7: fcom    [esp+esi*4+508h+var_480]
0x97E7AE: fnstsw  ax
0x97E7B0: test    ah, 5
0x97E7B3: jp      short loc_97E7C2
0x97E7B5: fild    [esp+508h+var_4EC]
0x97E7B9: fmul    dword ptr [ecx+6Ch]
0x97E7BC: fstp    dword ptr [esp+508h+var_4E8]
0x97E7C0: jmp     short loc_97E7E9
0x97E7C2: fcom    [esp+esi*4+508h+var_480]
0x97E7C9: fnstsw  ax
0x97E7CB: test    ah, 41h
0x97E7CE: jnz     short loc_97E7E5
0x97E7D0: mov     eax, edx
0x97E7D2: neg     eax
0x97E7D4: mov     [esp+508h+var_4F4], eax
0x97E7D8: fild    [esp+508h+var_4F4]
0x97E7DC: fmul    dword ptr [ecx+6Ch]
0x97E7DF: fstp    dword ptr [esp+508h+var_4E8]
0x97E7E3: jmp     short loc_97E7E9
0x97E7E5: fst     dword ptr [esp+508h+var_4E8]
0x97E7E9: fcom    [esp+esi*4+508h+var_474]
0x97E7F0: fnstsw  ax
0x97E7F2: test    ah, 5
0x97E7F5: jp      short loc_97E804
0x97E7F7: fild    [esp+508h+var_4EC]
0x97E7FB: fmul    dword ptr [ecx+70h]
0x97E7FE: fstp    dword ptr [esp+508h+var_4E8+4]
0x97E802: jmp     short loc_97E82B
0x97E804: fcom    [esp+esi*4+508h+var_474]
0x97E80B: fnstsw  ax
0x97E80D: test    ah, 41h
0x97E810: jnz     short loc_97E827
0x97E812: mov     eax, edx
0x97E814: neg     eax
0x97E816: mov     [esp+508h+var_4F4], eax
0x97E81A: fild    [esp+508h+var_4F4]
0x97E81E: fmul    dword ptr [ecx+70h]
0x97E821: fstp    dword ptr [esp+508h+var_4E8+4]
0x97E825: jmp     short loc_97E82B
0x97E827: fst     dword ptr [esp+508h+var_4E8+4]
0x97E82B: fcom    [esp+esi*4+508h+var_468]
0x97E832: lea     esi, [esp+esi*4+508h+var_468]
0x97E839: fnstsw  ax
0x97E83B: test    ah, 5
0x97E83E: jp      short loc_97E848
0x97E840: fstp    st
0x97E842: fild    [esp+508h+var_4EC]
0x97E846: jmp     short loc_97E85D
0x97E848: fcom    dword ptr [esi]
0x97E84A: fnstsw  ax
0x97E84C: test    ah, 41h
0x97E84F: jnz     short loc_97E860
0x97E851: neg     edx
0x97E853: fstp    st
0x97E855: mov     [esp+508h+var_4F4], edx
0x97E859: fild    [esp+508h+var_4F4]
0x97E85D: fmul    dword ptr [ecx+74h]
0x97E860: mov     esi, [esp+508h+var_4B0]
0x97E864: fstp    [esp+508h+var_4E0]
0x97E868: fld     [esp+508h+var_4E0]
0x97E86C: lea     eax, [esi+18h]
0x97E86F: push    eax; int
0x97E870: push    ecx
0x97E871: lea     ecx, [esp+510h+var_3E8]
0x97E878: fstp    [esp+510h+var_510]; float
0x97E87B: push    ecx; int
0x97E87C: call    sub_47DA10
0x97E881: fld     dword ptr [esp+514h+var_4E8+4]
0x97E885: add     esp, 0Ch
0x97E888: push    eax
0x97E889: lea     edx, [esp+50Ch+var_378]
0x97E890: push    edx
0x97E891: lea     eax, [esi+0Ch]
0x97E894: push    eax; int
0x97E895: push    ecx
0x97E896: lea     eax, [esp+518h+var_388]
0x97E89D: fstp    [esp+518h+var_518]; float
0x97E8A0: push    eax; int
0x97E8A1: call    sub_47DA10
0x97E8A6: fld     dword ptr [esp+51Ch+var_4E8]
0x97E8AA: add     esp, 0Ch
0x97E8AD: push    eax
0x97E8AE: lea     ecx, [esp+514h+var_318]
0x97E8B5: push    ecx
0x97E8B6: push    esi; int
0x97E8B7: push    ecx
0x97E8B8: lea     edx, [esp+520h+var_338]
0x97E8BF: fstp    [esp+520h+var_520]; float
0x97E8C2: push    edx; int
0x97E8C3: call    sub_47DA10
0x97E8C8: fld     [esp+524h+var_4F0]
0x97E8CC: mov     ecx, [esp+524h+var_4D4]
0x97E8D0: add     esp, 0Ch
0x97E8D3: push    eax
0x97E8D4: lea     eax, [esp+51Ch+var_348]
0x97E8DB: push    eax
0x97E8DC: push    ecx; int
0x97E8DD: push    ecx
0x97E8DE: lea     edx, [esp+528h+var_328]
0x97E8E5: fstp    [esp+528h+var_528]; float
0x97E8E8: push    edx; int
0x97E8E9: call    sub_47DA10
0x97E8EE: mov     ecx, [esp+52Ch+var_48C]
0x97E8F5: add     esp, 0Ch
0x97E8F8: push    eax
0x97E8F9: lea     eax, [esp+524h+var_368]
0x97E900: push    eax
0x97E901: jmp     loc_97E764
0x97E906: fstp    st(1); jumptable 0097E5FC case 7
0x97E908: fstp    st(1)
0x97E90A: fldz
0x97E90C: fld     [esp+508h+var_458]
0x97E913: fcom    st(1)
0x97E915: fnstsw  ax
0x97E917: test    ah, 41h
0x97E91A: jnz     short loc_97E933
0x97E91C: mov     eax, edx
0x97E91E: fstp    st
0x97E920: neg     eax
0x97E922: mov     [esp+508h+var_4F4], eax
0x97E926: fild    [esp+508h+var_4F4]
0x97E92A: fmul    dword ptr [ecx+70h]
0x97E92D: fstp    dword ptr [esp+508h+var_4E8+4]
0x97E931: jmp     short loc_97E94D
0x97E933: fcomp   st(1)
0x97E935: fnstsw  ax
0x97E937: test    ah, 5
0x97E93A: jp      short loc_97E949
0x97E93C: fild    [esp+508h+var_4EC]
0x97E940: fmul    dword ptr [ecx+70h]
0x97E943: fstp    dword ptr [esp+508h+var_4E8+4]
0x97E947: jmp     short loc_97E94D
0x97E949: fst     dword ptr [esp+508h+var_4E8+4]
0x97E94D: fld     [esp+508h+var_464]
0x97E954: fcom    st(1)
0x97E956: fnstsw  ax
0x97E958: test    ah, 41h
0x97E95B: jnz     short loc_97E96C
0x97E95D: fstp    st
0x97E95F: fild    [esp+508h+var_4EC]
0x97E963: fmul    dword ptr [ecx+74h]
0x97E966: fstp    [esp+508h+var_4E0]
0x97E96A: jmp     short loc_97E98E
0x97E96C: fcomp   st(1)
0x97E96E: fnstsw  ax
0x97E970: test    ah, 5
0x97E973: jp      short loc_97E98A
0x97E975: mov     eax, edx
0x97E977: neg     eax
0x97E979: mov     [esp+508h+var_4F4], eax
0x97E97D: fild    [esp+508h+var_4F4]
0x97E981: fmul    dword ptr [ecx+74h]
0x97E984: fstp    [esp+508h+var_4E0]
0x97E988: jmp     short loc_97E98E
0x97E98A: fst     [esp+508h+var_4E0]
0x97E98E: fld     [esp+508h+var_468]
0x97E995: fcom    st(1)
0x97E997: fnstsw  ax
0x97E999: test    ah, 41h
0x97E99C: jnz     short loc_97E9B5
0x97E99E: mov     ecx, edx
0x97E9A0: fstp    st
0x97E9A2: neg     ecx
0x97E9A4: mov     [esp+508h+var_4F4], ecx
0x97E9A8: fild    [esp+508h+var_4F4]
0x97E9AC: fmul    dword ptr [edi+70h]
0x97E9AF: fstp    dword ptr [esp+508h+var_4C0+4]
0x97E9B3: jmp     short loc_97E9CF
0x97E9B5: fcomp   st(1)
0x97E9B7: fnstsw  ax
0x97E9B9: test    ah, 5
0x97E9BC: jp      short loc_97E9CB
0x97E9BE: fild    [esp+508h+var_4EC]
0x97E9C2: fmul    dword ptr [edi+70h]
0x97E9C5: fstp    dword ptr [esp+508h+var_4C0+4]
0x97E9C9: jmp     short loc_97E9CF
0x97E9CB: fst     dword ptr [esp+508h+var_4C0+4]
0x97E9CF: fld     [esp+508h+var_46C]
0x97E9D6: fcom    st(1)
0x97E9D8: fnstsw  ax
0x97E9DA: test    ah, 41h
0x97E9DD: jnz     short loc_97E9EE
0x97E9DF: fstp    st
0x97E9E1: fild    [esp+508h+var_4EC]
0x97E9E5: fmul    dword ptr [edi+74h]
0x97E9E8: fstp    [esp+508h+var_4B8]
0x97E9EC: jmp     short loc_97EA0E
0x97E9EE: fcomp   st(1)
0x97E9F0: fnstsw  ax
0x97E9F2: test    ah, 5
0x97E9F5: jp      short loc_97EA0A
0x97E9F7: neg     edx
0x97E9F9: mov     [esp+508h+var_4F4], edx
0x97E9FD: fild    [esp+508h+var_4F4]
0x97EA01: fmul    dword ptr [edi+74h]
0x97EA04: fstp    [esp+508h+var_4B8]
0x97EA08: jmp     short loc_97EA0E
0x97EA0A: fst     [esp+508h+var_4B8]
0x97EA0E: fld     [esp+508h+var_398]
0x97EA15: fmul    st, st
0x97EA17: fld1
0x97EA19: fsubrp  st(1), st
0x97EA1B: fstp    [esp+508h+var_4F8]
0x97EA1F: fld     [esp+508h+var_4F8]
0x97EA23: fst     [esp+508h+var_448]
0x97EA2A: fabs
0x97EA2C: fstp    [esp+508h+var_4F4]
0x97EA30: fld     [esp+508h+var_4F4]
0x97EA34: fcomp   dword ptr ds:0A372CCh
0x97EA3A: fnstsw  ax
0x97EA3C: test    ah, 41h
0x97EA3F: jnz     loc_97EB2B
0x97EA45: lea     edx, [esp+508h+var_404]
0x97EA4C: fstp    st
0x97EA4E: push    edx; int
0x97EA4F: push    ecx
0x97EA50: lea     eax, [esp+510h+var_438]
0x97EA57: fstp    [esp+510h+var_510]; float
0x97EA5A: push    eax; int
0x97EA5B: call    sub_47DA10
0x97EA60: fld     dword ptr [eax]
0x97EA62: fadd    [esp+514h+var_428]
0x97EA69: add     esp, 0Ch
0x97EA6C: fstp    dword ptr [esp+508h+var_4AC]
0x97EA70: mov     ecx, dword ptr [esp+508h+var_4AC]
0x97EA74: fld     dword ptr [eax+4]
0x97EA77: fadd    [esp+508h+var_348]
0x97EA7E: fstp    dword ptr [esp+508h+var_4AC+4]
0x97EA82: mov     edx, dword ptr [esp+508h+var_4AC+4]
0x97EA86: fld     dword ptr [eax+8]
0x97EA89: mov     dword ptr [esp+508h+var_4A0], ecx
0x97EA8D: fadd    [esp+508h+var_418]
0x97EA94: lea     ecx, [esp+508h+var_4A0]
0x97EA98: push    ecx
0x97EA99: mov     ecx, [esp+50Ch+var_44C]
0x97EAA0: fstp    [esp+50Ch+var_4A4]
0x97EAA4: mov     eax, [esp+50Ch+var_4A4]
0x97EAA8: fld     [esp+50Ch+var_4E0]
0x97EAAC: mov     dword ptr [esp+50Ch+var_4A0+4], edx
0x97EAB0: fmul    [esp+50Ch+var_3D8]
0x97EAB7: mov     [esp+50Ch+var_498], eax
0x97EABB: fld     dword ptr [esp+50Ch+var_4E8+4]
0x97EABF: fmul    [esp+50Ch+var_3C8]
0x97EAC6: faddp   st(1), st
0x97EAC8: fstp    [esp+50Ch+var_488]
0x97EACF: call    sub_47D9E0
0x97EAD4: fsubr   [esp+508h+var_488]
0x97EADB: mov     esi, [esp+508h+var_4B0]
0x97EADF: lea     edx, [esp+508h+var_4A0]
0x97EAE3: push    edx
0x97EAE4: fstp    [esp+50Ch+var_4F4]
0x97EAE8: mov     ecx, esi
0x97EAEA: fld     [esp+50Ch+var_4F4]
0x97EAEE: fmul    [esp+50Ch+var_398]
0x97EAF5: fstp    [esp+50Ch+var_488]
0x97EAFC: call    sub_47D9E0
0x97EB01: fadd    [esp+508h+var_488]
0x97EB08: fld     dword ptr [esp+508h+var_4C0+4]
0x97EB0C: fmul    [esp+508h+var_3A8]
0x97EB13: faddp   st(1), st
0x97EB15: fld     [esp+508h+var_4B8]
0x97EB19: fmul    [esp+508h+var_3B8]
0x97EB20: faddp   st(1), st
0x97EB22: fdiv    [esp+508h+var_448]
0x97EB29: jmp     short loc_97EB31
0x97EB2B: mov     esi, [esp+508h+var_4B0]
0x97EB2F: fstp    st(1)
0x97EB31: lea     eax, [esi+18h]
0x97EB34: fstp    dword ptr [esp+508h+var_4E8]
0x97EB38: fld     [esp+508h+var_4E0]
0x97EB3C: push    eax; int
0x97EB3D: push    ecx
0x97EB3E: lea     eax, [esp+510h+var_398]
0x97EB45: fstp    [esp+510h+var_510]; float
0x97EB48: push    eax; int
0x97EB49: call    sub_47DA10
0x97EB4E: fld     dword ptr [esp+514h+var_4E8+4]
0x97EB52: add     esp, 0Ch
0x97EB55: push    eax
0x97EB56: lea     ecx, [esp+50Ch+var_3D8]
0x97EB5D: push    ecx
0x97EB5E: lea     eax, [esi+0Ch]
0x97EB61: push    eax; int
0x97EB62: push    ecx
0x97EB63: lea     edx, [esp+518h+var_3B8]
0x97EB6A: fstp    [esp+518h+var_518]; float
0x97EB6D: push    edx; int
0x97EB6E: call    sub_47DA10
0x97EB73: fld     dword ptr [esp+51Ch+var_4E8]
0x97EB77: add     esp, 0Ch
0x97EB7A: push    eax
0x97EB7B: lea     eax, [esp+514h+var_3A8]
0x97EB82: push    eax
0x97EB83: push    esi; int
0x97EB84: push    ecx
0x97EB85: lea     ecx, [esp+520h+var_3C8]
0x97EB8C: fstp    [esp+520h+var_520]; float
0x97EB8F: push    ecx; int
0x97EB90: call    sub_47DA10
0x97EB95: fld     [esp+524h+var_4F0]
0x97EB99: add     esp, 0Ch
0x97EB9C: push    eax
0x97EB9D: mov     eax, [esp+51Ch+var_4D4]
0x97EBA1: lea     edx, [esp+51Ch+var_3F8]
0x97EBA8: push    edx
0x97EBA9: push    eax; int
0x97EBAA: push    ecx
0x97EBAB: lea     ecx, [esp+528h+var_418]
0x97EBB2: fstp    [esp+528h+var_528]; float
0x97EBB5: push    ecx; int
0x97EBB6: call    sub_47DA10
0x97EBBB: mov     ecx, [esp+52Ch+var_48C]
0x97EBC2: lea     edx, [esp+52Ch+var_428]
0x97EBC9: jmp     loc_97E75F
0x97EBCE: fstp    st(1); jumptable 0097E5FC case 8
0x97EBD0: fstp    st(1)
0x97EBD2: fldz
0x97EBD4: fld     [esp+508h+var_454]
0x97EBDB: fcom    st(1)
0x97EBDD: fnstsw  ax
0x97EBDF: test    ah, 41h
0x97EBE2: jnz     short loc_97EBFB
0x97EBE4: mov     eax, edx
0x97EBE6: fstp    st
0x97EBE8: neg     eax
0x97EBEA: mov     [esp+508h+var_4F4], eax
0x97EBEE: fild    [esp+508h+var_4F4]
0x97EBF2: fmul    dword ptr [ecx+70h]
0x97EBF5: fstp    dword ptr [esp+508h+var_4E8+4]
0x97EBF9: jmp     short loc_97EC15
0x97EBFB: fcomp   st(1)
0x97EBFD: fnstsw  ax
0x97EBFF: test    ah, 5
0x97EC02: jp      short loc_97EC11
0x97EC04: fild    [esp+508h+var_4EC]
0x97EC08: fmul    dword ptr [ecx+70h]
0x97EC0B: fstp    dword ptr [esp+508h+var_4E8+4]
0x97EC0F: jmp     short loc_97EC15
0x97EC11: fst     dword ptr [esp+508h+var_4E8+4]
0x97EC15: fld     [esp+508h+var_460]
0x97EC1C: fcom    st(1)
0x97EC1E: fnstsw  ax
0x97EC20: test    ah, 41h
0x97EC23: jnz     short loc_97EC34
0x97EC25: fstp    st
0x97EC27: fild    [esp+508h+var_4EC]
0x97EC2B: fmul    dword ptr [ecx+74h]
0x97EC2E: fstp    [esp+508h+var_4E0]
0x97EC32: jmp     short loc_97EC56
0x97EC34: fcomp   st(1)
0x97EC36: fnstsw  ax
0x97EC38: test    ah, 5
0x97EC3B: jp      short loc_97EC52
0x97EC3D: mov     eax, edx
0x97EC3F: neg     eax
0x97EC41: mov     [esp+508h+var_4F4], eax
0x97EC45: fild    [esp+508h+var_4F4]
0x97EC49: fmul    dword ptr [ecx+74h]
0x97EC4C: fstp    [esp+508h+var_4E0]
0x97EC50: jmp     short loc_97EC56
0x97EC52: fst     [esp+508h+var_4E0]
0x97EC56: fld     [esp+508h+var_468]
0x97EC5D: fcom    st(1)
0x97EC5F: fnstsw  ax
0x97EC61: test    ah, 41h
0x97EC64: jnz     short loc_97EC75
0x97EC66: fstp    st
0x97EC68: fild    [esp+508h+var_4EC]
0x97EC6C: fmul    dword ptr [edi+6Ch]
0x97EC6F: fstp    dword ptr [esp+508h+var_4C0]
0x97EC73: jmp     short loc_97EC97
0x97EC75: fcomp   st(1)
0x97EC77: fnstsw  ax
0x97EC79: test    ah, 5
0x97EC7C: jp      short loc_97EC93
0x97EC7E: mov     ecx, edx
0x97EC80: neg     ecx
0x97EC82: mov     [esp+508h+var_4F4], ecx
0x97EC86: fild    [esp+508h+var_4F4]
0x97EC8A: fmul    dword ptr [edi+6Ch]
0x97EC8D: fstp    dword ptr [esp+508h+var_4C0]
0x97EC91: jmp     short loc_97EC97
0x97EC93: fst     dword ptr [esp+508h+var_4C0]
0x97EC97: fld     [esp+508h+var_470]
0x97EC9E: fcom    st(1)
0x97ECA0: fnstsw  ax
0x97ECA2: test    ah, 41h
0x97ECA5: jnz     short loc_97ECBC
0x97ECA7: neg     edx
0x97ECA9: fstp    st
0x97ECAB: mov     [esp+508h+var_4F4], edx
0x97ECAF: fild    [esp+508h+var_4F4]
0x97ECB3: fmul    dword ptr [edi+74h]
0x97ECB6: fstp    [esp+508h+var_4B8]
0x97ECBA: jmp     short loc_97ECD6
0x97ECBC: fcomp   st(1)
0x97ECBE: fnstsw  ax
0x97ECC0: test    ah, 5
0x97ECC3: jp      short loc_97ECD2
0x97ECC5: fild    [esp+508h+var_4EC]
0x97ECC9: fmul    dword ptr [edi+74h]
0x97ECCC: fstp    [esp+508h+var_4B8]
0x97ECD0: jmp     short loc_97ECD6
0x97ECD2: fst     [esp+508h+var_4B8]
0x97ECD6: fld     [esp+508h+var_3A8]
0x97ECDD: fmul    st, st
0x97ECDF: fld1
0x97ECE1: fsubrp  st(1), st
0x97ECE3: fstp    [esp+508h+var_4F8]
0x97ECE7: fld     [esp+508h+var_4F8]
0x97ECEB: fst     [esp+508h+var_448]
0x97ECF2: fabs
0x97ECF4: fstp    [esp+508h+var_4F4]
0x97ECF8: fld     [esp+508h+var_4F4]
0x97ECFC: fcomp   dword ptr ds:0A372CCh
0x97ED02: fnstsw  ax
0x97ED04: test    ah, 41h
0x97ED07: jnz     loc_97EDEB
0x97ED0D: lea     edx, [esp+508h+var_404]
0x97ED14: fstp    st
0x97ED16: push    edx; int
0x97ED17: push    ecx
0x97ED18: lea     eax, [esp+510h+var_4D0]
0x97ED1C: fstp    [esp+510h+var_510]; float
0x97ED1F: push    eax; int
0x97ED20: call    sub_47DA10
0x97ED25: fld     dword ptr [eax]
0x97ED27: fadd    [esp+514h+var_428]
0x97ED2E: add     esp, 0Ch
0x97ED31: fstp    dword ptr [esp+508h+var_4AC]
0x97ED35: mov     ecx, dword ptr [esp+508h+var_4AC]
0x97ED39: fld     dword ptr [eax+4]
0x97ED3C: fadd    [esp+508h+var_348]
0x97ED43: fstp    dword ptr [esp+508h+var_4AC+4]
0x97ED47: mov     edx, dword ptr [esp+508h+var_4AC+4]
0x97ED4B: fld     dword ptr [eax+8]
0x97ED4E: mov     dword ptr [esp+508h+var_4A0], ecx
0x97ED52: fadd    [esp+508h+var_418]
0x97ED59: lea     ecx, [esp+508h+var_4A0]
0x97ED5D: push    ecx
0x97ED5E: mov     ecx, ebx
0x97ED60: fstp    [esp+50Ch+var_4A4]
0x97ED64: mov     eax, [esp+50Ch+var_4A4]
0x97ED68: fld     [esp+50Ch+var_4E0]
0x97ED6C: mov     dword ptr [esp+50Ch+var_4A0+4], edx
0x97ED70: fmul    [esp+50Ch+var_3F8]
0x97ED77: mov     [esp+50Ch+var_498], eax
0x97ED7B: fld     dword ptr [esp+50Ch+var_4E8+4]
0x97ED7F: fmul    [esp+50Ch+var_438]
0x97ED86: faddp   st(1), st
0x97ED88: fstp    [esp+50Ch+var_488]
0x97ED8F: call    sub_47D9E0
0x97ED94: fsubr   [esp+508h+var_488]
0x97ED9B: mov     esi, [esp+508h+var_4B0]
0x97ED9F: lea     edx, [esp+508h+var_4A0]
0x97EDA3: push    edx
0x97EDA4: fstp    [esp+50Ch+var_4F4]
0x97EDA8: mov     ecx, esi
0x97EDAA: fld     [esp+50Ch+var_4F4]
0x97EDAE: fmul    [esp+50Ch+var_3A8]
0x97EDB5: fstp    [esp+50Ch+var_488]
0x97EDBC: call    sub_47D9E0
0x97EDC1: fadd    [esp+508h+var_488]
0x97EDC8: fld     dword ptr [esp+508h+var_4C0]
0x97EDCC: fmul    [esp+508h+var_398]
0x97EDD3: faddp   st(1), st
0x97EDD5: fld     [esp+508h+var_4B8]
0x97EDD9: fmul    [esp+508h+var_3B8]
0x97EDE0: faddp   st(1), st
0x97EDE2: fdiv    [esp+508h+var_448]
0x97EDE9: jmp     short loc_97EDF1
0x97EDEB: mov     esi, [esp+508h+var_4B0]
0x97EDEF: fstp    st(1)
0x97EDF1: lea     eax, [esi+18h]
0x97EDF4: fstp    dword ptr [esp+508h+var_4E8]
0x97EDF8: fld     [esp+508h+var_4E0]
0x97EDFC: push    eax; int
0x97EDFD: push    ecx
0x97EDFE: lea     eax, [esp+510h+var_448]
0x97EE05: fstp    [esp+510h+var_510]; float
0x97EE08: push    eax; int
0x97EE09: call    sub_47DA10
0x97EE0E: fld     dword ptr [esp+514h+var_4E8+4]
0x97EE12: add     esp, 0Ch
0x97EE15: push    eax
0x97EE16: lea     ecx, [esp+50Ch+var_258]
0x97EE1D: push    ecx
0x97EE1E: lea     eax, [esi+0Ch]
0x97EE21: push    eax; int
0x97EE22: push    ecx
0x97EE23: lea     edx, [esp+518h+var_C]
0x97EE2A: fstp    [esp+518h+var_518]; float
0x97EE2D: push    edx; int
0x97EE2E: call    sub_47DA10
0x97EE33: fld     dword ptr [esp+51Ch+var_4E8]
0x97EE37: add     esp, 0Ch
0x97EE3A: push    eax
0x97EE3B: lea     eax, [esp+514h+var_C0]
0x97EE42: push    eax
0x97EE43: push    esi; int
0x97EE44: push    ecx
0x97EE45: lea     ecx, [esp+520h+var_2D0]
0x97EE4C: fstp    [esp+520h+var_520]; float
0x97EE4F: push    ecx; int
0x97EE50: call    sub_47DA10
0x97EE55: fld     [esp+524h+var_4F0]
0x97EE59: add     esp, 0Ch
0x97EE5C: push    eax
0x97EE5D: mov     eax, [esp+51Ch+var_4D4]
0x97EE61: lea     edx, [esp+51Ch+var_168]
0x97EE68: push    edx
0x97EE69: push    eax; int
0x97EE6A: push    ecx
0x97EE6B: lea     ecx, [esp+528h+var_2B8]
0x97EE72: fstp    [esp+528h+var_528]; float
0x97EE75: push    ecx; int
0x97EE76: call    sub_47DA10
0x97EE7B: mov     ecx, [esp+52Ch+var_48C]
0x97EE82: lea     edx, [esp+52Ch+var_60]
0x97EE89: jmp     loc_97E75F
0x97EE8E: fstp    st(1); jumptable 0097E5FC case 9
0x97EE90: fldz
0x97EE92: fld     [esp+508h+var_450]
0x97EE99: fcom    st(1)
0x97EE9B: fnstsw  ax
0x97EE9D: test    ah, 41h
0x97EEA0: jnz     short loc_97EEB9
0x97EEA2: mov     eax, edx
0x97EEA4: fstp    st
0x97EEA6: neg     eax
0x97EEA8: mov     [esp+508h+var_4F4], eax
0x97EEAC: fild    [esp+508h+var_4F4]
0x97EEB0: fmul    dword ptr [ecx+70h]
0x97EEB3: fstp    dword ptr [esp+508h+var_4E8+4]
0x97EEB7: jmp     short loc_97EED3
0x97EEB9: fcomp   st(1)
0x97EEBB: fnstsw  ax
0x97EEBD: test    ah, 5
0x97EEC0: jp      short loc_97EECF
0x97EEC2: fild    [esp+508h+var_4EC]
0x97EEC6: fmul    dword ptr [ecx+70h]
0x97EEC9: fstp    dword ptr [esp+508h+var_4E8+4]
0x97EECD: jmp     short loc_97EED3
0x97EECF: fst     dword ptr [esp+508h+var_4E8+4]
0x97EED3: fld     [esp+508h+var_45C]
0x97EEDA: fcom    st(1)
0x97EEDC: fnstsw  ax
0x97EEDE: test    ah, 41h
0x97EEE1: jnz     short loc_97EEF2
0x97EEE3: fstp    st
0x97EEE5: fild    [esp+508h+var_4EC]
0x97EEE9: fmul    dword ptr [ecx+74h]
0x97EEEC: fstp    [esp+508h+var_4E0]
0x97EEF0: jmp     short loc_97EF14
0x97EEF2: fcomp   st(1)
0x97EEF4: fnstsw  ax
0x97EEF6: test    ah, 5
0x97EEF9: jp      short loc_97EF10
0x97EEFB: mov     eax, edx
0x97EEFD: neg     eax
0x97EEFF: mov     [esp+508h+var_4F4], eax
0x97EF03: fild    [esp+508h+var_4F4]
0x97EF07: fmul    dword ptr [ecx+74h]
0x97EF0A: fstp    [esp+508h+var_4E0]
0x97EF0E: jmp     short loc_97EF14
0x97EF10: fst     [esp+508h+var_4E0]
0x97EF14: fld     [esp+508h+var_46C]
0x97EF1B: fcom    st(1)
0x97EF1D: fnstsw  ax
0x97EF1F: test    ah, 41h
0x97EF22: jnz     short loc_97EF3B
0x97EF24: mov     ecx, edx
0x97EF26: fstp    st
0x97EF28: neg     ecx
0x97EF2A: mov     [esp+508h+var_4F4], ecx
0x97EF2E: fild    [esp+508h+var_4F4]
0x97EF32: fmul    dword ptr [edi+6Ch]
0x97EF35: fstp    dword ptr [esp+508h+var_4C0]
0x97EF39: jmp     short loc_97EF55
0x97EF3B: fcomp   st(1)
0x97EF3D: fnstsw  ax
0x97EF3F: test    ah, 5
0x97EF42: jp      short loc_97EF51
0x97EF44: fild    [esp+508h+var_4EC]
0x97EF48: fmul    dword ptr [edi+6Ch]
0x97EF4B: fstp    dword ptr [esp+508h+var_4C0]
0x97EF4F: jmp     short loc_97EF55
0x97EF51: fst     dword ptr [esp+508h+var_4C0]
0x97EF55: fld     [esp+508h+var_470]
0x97EF5C: fcom    st(1)
0x97EF5E: fnstsw  ax
0x97EF60: test    ah, 41h
0x97EF63: jnz     short loc_97EF74
0x97EF65: fstp    st
0x97EF67: fild    [esp+508h+var_4EC]
0x97EF6B: fmul    dword ptr [edi+70h]
0x97EF6E: fstp    dword ptr [esp+508h+var_4C0+4]
0x97EF72: jmp     short loc_97EF94
0x97EF74: fcomp   st(1)
0x97EF76: fnstsw  ax
0x97EF78: test    ah, 5
0x97EF7B: jp      short loc_97EF90
0x97EF7D: neg     edx
0x97EF7F: mov     [esp+508h+var_4F4], edx
0x97EF83: fild    [esp+508h+var_4F4]
0x97EF87: fmul    dword ptr [edi+70h]
0x97EF8A: fstp    dword ptr [esp+508h+var_4C0+4]
0x97EF8E: jmp     short loc_97EF94
0x97EF90: fst     dword ptr [esp+508h+var_4C0+4]
0x97EF94: fld     st(2)
0x97EF96: fmulp   st(3), st
0x97EF98: fld1
0x97EF9A: fsubrp  st(3), st
0x97EF9C: fxch    st(2)
0x97EF9E: fstp    [esp+508h+var_4F8]
0x97EFA2: fld     [esp+508h+var_4F8]
0x97EFA6: fst     [esp+508h+var_448]
0x97EFAD: fabs
0x97EFAF: fstp    [esp+508h+var_4F4]
0x97EFB3: fld     [esp+508h+var_4F4]
0x97EFB7: fcomp   dword ptr ds:0A372CCh
0x97EFBD: fnstsw  ax
0x97EFBF: test    ah, 41h
0x97EFC2: jnz     loc_97F0AE
0x97EFC8: lea     edx, [esp+508h+var_404]
0x97EFCF: fstp    st(1)
0x97EFD1: push    edx; int
0x97EFD2: push    ecx
0x97EFD3: lea     eax, [esp+510h+var_438]
0x97EFDA: fstp    [esp+510h+var_510]; float
0x97EFDD: push    eax; int
0x97EFDE: call    sub_47DA10
0x97EFE3: fld     dword ptr [eax]
0x97EFE5: fadd    [esp+514h+var_428]
0x97EFEC: add     esp, 0Ch
0x97EFEF: fstp    dword ptr [esp+508h+var_4AC]
0x97EFF3: mov     ecx, dword ptr [esp+508h+var_4AC]
0x97EFF7: fld     dword ptr [eax+4]
0x97EFFA: fadd    [esp+508h+var_348]
0x97F001: fstp    dword ptr [esp+508h+var_4AC+4]
0x97F005: mov     edx, dword ptr [esp+508h+var_4AC+4]
0x97F009: fld     dword ptr [eax+8]
0x97F00C: mov     dword ptr [esp+508h+var_4A0], ecx
0x97F010: fadd    [esp+508h+var_418]
0x97F017: lea     ecx, [esp+508h+var_4A0]
0x97F01B: push    ecx
0x97F01C: mov     ecx, [esp+50Ch+var_474]
0x97F023: fstp    [esp+50Ch+var_4A4]
0x97F027: mov     eax, [esp+50Ch+var_4A4]
0x97F02B: fld     dword ptr [esp+50Ch+var_4E8+4]
0x97F02F: mov     dword ptr [esp+50Ch+var_4A0+4], edx
0x97F033: fmul    [esp+50Ch+var_338]
0x97F03A: mov     [esp+50Ch+var_498], eax
0x97F03E: fld     [esp+50Ch+var_4E0]
0x97F042: fmul    [esp+50Ch+var_368]
0x97F049: faddp   st(1), st
0x97F04B: fstp    [esp+50Ch+var_488]
0x97F052: call    sub_47D9E0
0x97F057: fsubr   [esp+508h+var_488]
0x97F05E: mov     esi, [esp+508h+var_4B0]
0x97F062: lea     edx, [esp+508h+var_4A0]
0x97F066: push    edx
0x97F067: fstp    [esp+50Ch+var_4F4]
0x97F06B: mov     ecx, esi
0x97F06D: fld     [esp+50Ch+var_4F4]
0x97F071: fmul    [esp+50Ch+var_3B8]
0x97F078: fstp    [esp+50Ch+var_488]
0x97F07F: call    sub_47D9E0
0x97F084: fadd    [esp+508h+var_488]
0x97F08B: fld     dword ptr [esp+508h+var_4C0]
0x97F08F: fmul    [esp+508h+var_398]
0x97F096: faddp   st(1), st
0x97F098: fld     dword ptr [esp+508h+var_4C0+4]
0x97F09C: fmul    [esp+508h+var_3A8]
0x97F0A3: faddp   st(1), st
0x97F0A5: fdiv    [esp+508h+var_448]
0x97F0AC: jmp     short loc_97F0B4
0x97F0AE: mov     esi, [esp+508h+var_4B0]
0x97F0B2: fstp    st
0x97F0B4: lea     eax, [esi+18h]
0x97F0B7: fstp    dword ptr [esp+508h+var_4E8]
0x97F0BB: fld     [esp+508h+var_4E0]
0x97F0BF: push    eax; int
0x97F0C0: push    ecx
0x97F0C1: lea     eax, [esp+510h+var_2A0]
0x97F0C8: fstp    [esp+510h+var_510]; float
0x97F0CB: push    eax; int
0x97F0CC: call    sub_47DA10
0x97F0D1: fld     dword ptr [esp+514h+var_4E8+4]
0x97F0D5: add     esp, 0Ch
0x97F0D8: push    eax
0x97F0D9: lea     ecx, [esp+50Ch+var_150]
0x97F0E0: push    ecx
0x97F0E1: lea     eax, [esi+0Ch]
0x97F0E4: push    eax; int
0x97F0E5: push    ecx
0x97F0E6: lea     edx, [esp+518h+var_288]
0x97F0ED: fstp    [esp+518h+var_518]; float
0x97F0F0: push    edx; int
0x97F0F1: call    sub_47DA10
0x97F0F6: fld     dword ptr [esp+51Ch+var_4E8]
0x97F0FA: add     esp, 0Ch
0x97F0FD: push    eax
0x97F0FE: lea     eax, [esp+514h+var_A8]
0x97F105: push    eax
0x97F106: push    esi; int
0x97F107: push    ecx
0x97F108: lea     ecx, [esp+520h+var_270]
0x97F10F: fstp    [esp+520h+var_520]; float
0x97F112: push    ecx; int
0x97F113: call    sub_47DA10
0x97F118: fld     [esp+524h+var_4F0]
0x97F11C: add     esp, 0Ch
0x97F11F: push    eax
0x97F120: mov     eax, [esp+51Ch+var_4D4]
0x97F124: lea     edx, [esp+51Ch+var_138]
0x97F12B: push    edx
0x97F12C: push    eax; int
0x97F12D: push    ecx
0x97F12E: lea     ecx, [esp+528h+var_2F4]
0x97F135: fstp    [esp+528h+var_528]; float
0x97F138: push    ecx; int
0x97F139: call    sub_47DA10
0x97F13E: mov     ecx, [esp+52Ch+var_48C]
0x97F145: lea     edx, [esp+52Ch+var_30]
0x97F14C: jmp     loc_97E75F
0x97F151: fstp    st(1); jumptable 0097E5FC case 10
0x97F153: fstp    st(1)
0x97F155: fldz
0x97F157: fld     [esp+508h+var_458]
0x97F15E: fcom    st(1)
0x97F160: fnstsw  ax
0x97F162: test    ah, 41h
0x97F165: jnz     short loc_97F176
0x97F167: fstp    st
0x97F169: fild    [esp+508h+var_4EC]
0x97F16D: fmul    dword ptr [ecx+6Ch]
0x97F170: fstp    dword ptr [esp+508h+var_4E8]
0x97F174: jmp     short loc_97F198
0x97F176: fcomp   st(1)
0x97F178: fnstsw  ax
0x97F17A: test    ah, 5
0x97F17D: jp      short loc_97F194
0x97F17F: mov     eax, edx
0x97F181: neg     eax
0x97F183: mov     [esp+508h+var_4F4], eax
0x97F187: fild    [esp+508h+var_4F4]
0x97F18B: fmul    dword ptr [ecx+6Ch]
0x97F18E: fstp    dword ptr [esp+508h+var_4E8]
0x97F192: jmp     short loc_97F198
0x97F194: fst     dword ptr [esp+508h+var_4E8]
0x97F198: fld     [esp+508h+var_470]
0x97F19F: fcom    st(1)
0x97F1A1: fnstsw  ax
0x97F1A3: test    ah, 41h
0x97F1A6: jnz     short loc_97F1BF
0x97F1A8: mov     eax, edx
0x97F1AA: fstp    st
0x97F1AC: neg     eax
0x97F1AE: mov     [esp+508h+var_4F4], eax
0x97F1B2: fild    [esp+508h+var_4F4]
0x97F1B6: fmul    dword ptr [ecx+74h]
0x97F1B9: fstp    [esp+508h+var_4E0]
0x97F1BD: jmp     short loc_97F1D9
0x97F1BF: fcomp   st(1)
0x97F1C1: fnstsw  ax
0x97F1C3: test    ah, 5
0x97F1C6: jp      short loc_97F1D5
0x97F1C8: fild    [esp+508h+var_4EC]
0x97F1CC: fmul    dword ptr [ecx+74h]
0x97F1CF: fstp    [esp+508h+var_4E0]
0x97F1D3: jmp     short loc_97F1D9
0x97F1D5: fst     [esp+508h+var_4E0]
0x97F1D9: fld     [esp+508h+var_45C]
0x97F1E0: fcom    st(1)
0x97F1E2: fnstsw  ax
0x97F1E4: test    ah, 41h
0x97F1E7: jnz     short loc_97F200
0x97F1E9: mov     ecx, edx
0x97F1EB: fstp    st
0x97F1ED: neg     ecx
0x97F1EF: mov     [esp+508h+var_4F4], ecx
0x97F1F3: fild    [esp+508h+var_4F4]
0x97F1F7: fmul    dword ptr [edi+70h]
0x97F1FA: fstp    dword ptr [esp+508h+var_4C0+4]
0x97F1FE: jmp     short loc_97F21A
0x97F200: fcomp   st(1)
0x97F202: fnstsw  ax
0x97F204: test    ah, 5
0x97F207: jp      short loc_97F216
0x97F209: fild    [esp+508h+var_4EC]
0x97F20D: fmul    dword ptr [edi+70h]
0x97F210: fstp    dword ptr [esp+508h+var_4C0+4]
0x97F214: jmp     short loc_97F21A
0x97F216: fst     dword ptr [esp+508h+var_4C0+4]
0x97F21A: fld     [esp+508h+var_460]
0x97F221: fcom    st(1)
0x97F223: fnstsw  ax
0x97F225: test    ah, 41h
0x97F228: jnz     short loc_97F239
0x97F22A: fstp    st
0x97F22C: fild    [esp+508h+var_4EC]
0x97F230: fmul    dword ptr [edi+74h]
0x97F233: fstp    [esp+508h+var_4B8]
0x97F237: jmp     short loc_97F259
0x97F239: fcomp   st(1)
0x97F23B: fnstsw  ax
0x97F23D: test    ah, 5
0x97F240: jp      short loc_97F255
0x97F242: neg     edx
0x97F244: mov     [esp+508h+var_4F4], edx
0x97F248: fild    [esp+508h+var_4F4]
0x97F24C: fmul    dword ptr [edi+74h]
0x97F24F: fstp    [esp+508h+var_4B8]
0x97F253: jmp     short loc_97F259
0x97F255: fst     [esp+508h+var_4B8]
0x97F259: fld     [esp+508h+var_3C8]
0x97F260: fmul    st, st
0x97F262: fld1
0x97F264: fsubrp  st(1), st
0x97F266: fstp    [esp+508h+var_4F8]
0x97F26A: fld     [esp+508h+var_4F8]
0x97F26E: fst     [esp+508h+var_448]
0x97F275: fabs
0x97F277: fstp    [esp+508h+var_4F4]
0x97F27B: fld     [esp+508h+var_4F4]
0x97F27F: fcomp   dword ptr ds:0A372CCh
0x97F285: fnstsw  ax
0x97F287: test    ah, 41h
0x97F28A: jnz     loc_97F374
0x97F290: lea     edx, [esp+508h+var_404]
0x97F297: fstp    st
0x97F299: push    edx; int
0x97F29A: push    ecx
0x97F29B: lea     eax, [esp+510h+var_4D0]
0x97F29F: fstp    [esp+510h+var_510]; float
0x97F2A2: push    eax; int
0x97F2A3: call    sub_47DA10
0x97F2A8: fld     dword ptr [eax]
0x97F2AA: fadd    [esp+514h+var_428]
0x97F2B1: add     esp, 0Ch
0x97F2B4: fstp    dword ptr [esp+508h+var_4AC]
0x97F2B8: mov     ecx, dword ptr [esp+508h+var_4AC]
0x97F2BC: fld     dword ptr [eax+4]
0x97F2BF: fadd    [esp+508h+var_348]
0x97F2C6: fstp    dword ptr [esp+508h+var_4AC+4]
0x97F2CA: mov     edx, dword ptr [esp+508h+var_4AC+4]
0x97F2CE: fld     dword ptr [eax+8]
0x97F2D1: mov     dword ptr [esp+508h+var_4A0], ecx
0x97F2D5: fadd    [esp+508h+var_418]
0x97F2DC: lea     ecx, [esp+508h+var_4A0]
0x97F2E0: push    ecx
0x97F2E1: mov     ecx, [esp+50Ch+var_44C]
0x97F2E8: fstp    [esp+50Ch+var_4A4]
0x97F2EC: mov     eax, [esp+50Ch+var_4A4]
0x97F2F0: fld     [esp+50Ch+var_4E0]
0x97F2F4: mov     dword ptr [esp+50Ch+var_4A0+4], edx
0x97F2F8: fmul    [esp+50Ch+var_3D8]
0x97F2FF: mov     [esp+50Ch+var_498], eax
0x97F303: fld     dword ptr [esp+50Ch+var_4E8]
0x97F307: fmul    [esp+50Ch+var_398]
0x97F30E: faddp   st(1), st
0x97F310: fstp    [esp+50Ch+var_488]
0x97F317: call    sub_47D9E0
0x97F31C: fsubr   [esp+508h+var_488]
0x97F323: mov     esi, [esp+508h+var_4B0]
0x97F327: lea     edx, [esp+508h+var_4A0]
0x97F32B: push    edx
0x97F32C: fstp    [esp+50Ch+var_4F4]
0x97F330: lea     ecx, [esi+0Ch]
0x97F333: fld     [esp+50Ch+var_4F4]
0x97F337: fmul    [esp+50Ch+var_3C8]
0x97F33E: fstp    [esp+50Ch+var_488]
0x97F345: call    sub_47D9E0
0x97F34A: fadd    [esp+508h+var_488]
0x97F351: fld     dword ptr [esp+508h+var_4C0+4]
0x97F355: fmul    [esp+508h+var_438]
0x97F35C: faddp   st(1), st
0x97F35E: fld     [esp+508h+var_4B8]
0x97F362: fmul    [esp+508h+var_338]
0x97F369: faddp   st(1), st
0x97F36B: fdiv    [esp+508h+var_448]
0x97F372: jmp     short loc_97F37A
0x97F374: mov     esi, [esp+508h+var_4B0]
0x97F378: fstp    st(1)
0x97F37A: lea     eax, [esi+18h]
0x97F37D: fstp    dword ptr [esp+508h+var_4E8+4]
0x97F381: fld     [esp+508h+var_4E0]
0x97F385: push    eax; int
0x97F386: push    ecx
0x97F387: lea     eax, [esp+510h+var_240]
0x97F38E: fstp    [esp+510h+var_510]; float
0x97F391: push    eax; int
0x97F392: call    sub_47DA10
0x97F397: fld     dword ptr [esp+514h+var_4E8+4]
0x97F39B: add     esp, 0Ch
0x97F39E: push    eax
0x97F39F: lea     ecx, [esp+50Ch+var_120]
0x97F3A6: push    ecx
0x97F3A7: lea     eax, [esi+0Ch]
0x97F3AA: push    eax; int
0x97F3AB: push    ecx
0x97F3AC: lea     edx, [esp+518h+var_228]
0x97F3B3: fstp    [esp+518h+var_518]; float
0x97F3B6: push    edx; int
0x97F3B7: call    sub_47DA10
0x97F3BC: fld     dword ptr [esp+51Ch+var_4E8]
0x97F3C0: add     esp, 0Ch
0x97F3C3: push    eax
0x97F3C4: lea     eax, [esp+514h+var_90]
0x97F3CB: push    eax
0x97F3CC: push    esi; int
0x97F3CD: push    ecx
0x97F3CE: lea     ecx, [esp+520h+var_210]
0x97F3D5: fstp    [esp+520h+var_520]; float
0x97F3D8: push    ecx; int
0x97F3D9: call    sub_47DA10
0x97F3DE: fld     [esp+524h+var_4F0]
0x97F3E2: add     esp, 0Ch
0x97F3E5: push    eax
0x97F3E6: mov     eax, [esp+51Ch+var_4D4]
0x97F3EA: lea     edx, [esp+51Ch+var_108]
0x97F3F1: push    edx
0x97F3F2: push    eax; int
0x97F3F3: push    ecx
0x97F3F4: lea     ecx, [esp+528h+var_1F8]
0x97F3FB: fstp    [esp+528h+var_528]; float
0x97F3FE: push    ecx; int
0x97F3FF: call    sub_47DA10
0x97F404: mov     ecx, [esp+52Ch+var_48C]
0x97F40B: lea     edx, [esp+52Ch+var_48]
0x97F412: jmp     loc_97E75F
0x97F417: fstp    st(1); jumptable 0097E5FC case 11
0x97F419: fstp    st(1)
0x97F41B: fldz
0x97F41D: fld     [esp+508h+var_454]
0x97F424: fcom    st(1)
0x97F426: fnstsw  ax
0x97F428: test    ah, 41h
0x97F42B: jnz     short loc_97F43C
0x97F42D: fstp    st
0x97F42F: fild    [esp+508h+var_4EC]
0x97F433: fmul    dword ptr [ecx+6Ch]
0x97F436: fstp    dword ptr [esp+508h+var_4E8]
0x97F43A: jmp     short loc_97F45E
0x97F43C: fcomp   st(1)
0x97F43E: fnstsw  ax
0x97F440: test    ah, 5
0x97F443: jp      short loc_97F45A
0x97F445: mov     eax, edx
0x97F447: neg     eax
0x97F449: mov     [esp+508h+var_4F4], eax
0x97F44D: fild    [esp+508h+var_4F4]
0x97F451: fmul    dword ptr [ecx+6Ch]
0x97F454: fstp    dword ptr [esp+508h+var_4E8]
0x97F458: jmp     short loc_97F45E
0x97F45A: fst     dword ptr [esp+508h+var_4E8]
0x97F45E: fld     [esp+508h+var_46C]
0x97F465: fcom    st(1)
0x97F467: fnstsw  ax
0x97F469: test    ah, 41h
0x97F46C: jnz     short loc_97F485
0x97F46E: mov     eax, edx
0x97F470: fstp    st
0x97F472: neg     eax
0x97F474: mov     [esp+508h+var_4F4], eax
0x97F478: fild    [esp+508h+var_4F4]
0x97F47C: fmul    dword ptr [ecx+74h]
0x97F47F: fstp    [esp+508h+var_4E0]
0x97F483: jmp     short loc_97F49F
0x97F485: fcomp   st(1)
0x97F487: fnstsw  ax
0x97F489: test    ah, 5
0x97F48C: jp      short loc_97F49B
0x97F48E: fild    [esp+508h+var_4EC]
0x97F492: fmul    dword ptr [ecx+74h]
0x97F495: fstp    [esp+508h+var_4E0]
0x97F499: jmp     short loc_97F49F
0x97F49B: fst     [esp+508h+var_4E0]
0x97F49F: fld     [esp+508h+var_45C]
0x97F4A6: fcom    st(1)
0x97F4A8: fnstsw  ax
0x97F4AA: test    ah, 41h
0x97F4AD: jnz     short loc_97F4BE
0x97F4AF: fstp    st
0x97F4B1: fild    [esp+508h+var_4EC]
0x97F4B5: fmul    dword ptr [edi+6Ch]
0x97F4B8: fstp    dword ptr [esp+508h+var_4C0]
0x97F4BC: jmp     short loc_97F4E0
0x97F4BE: fcomp   st(1)
0x97F4C0: fnstsw  ax
0x97F4C2: test    ah, 5
0x97F4C5: jp      short loc_97F4DC
0x97F4C7: mov     ecx, edx
0x97F4C9: neg     ecx
0x97F4CB: mov     [esp+508h+var_4F4], ecx
0x97F4CF: fild    [esp+508h+var_4F4]
0x97F4D3: fmul    dword ptr [edi+6Ch]
0x97F4D6: fstp    dword ptr [esp+508h+var_4C0]
0x97F4DA: jmp     short loc_97F4E0
0x97F4DC: fst     dword ptr [esp+508h+var_4C0]
0x97F4E0: fld     [esp+508h+var_464]
0x97F4E7: fcom    st(1)
0x97F4E9: fnstsw  ax
0x97F4EB: test    ah, 41h
0x97F4EE: jnz     short loc_97F505
0x97F4F0: neg     edx
0x97F4F2: fstp    st
0x97F4F4: mov     [esp+508h+var_4F4], edx
0x97F4F8: fild    [esp+508h+var_4F4]
0x97F4FC: fmul    dword ptr [edi+74h]
0x97F4FF: fstp    [esp+508h+var_4B8]
0x97F503: jmp     short loc_97F51F
0x97F505: fcomp   st(1)
0x97F507: fnstsw  ax
0x97F509: test    ah, 5
0x97F50C: jp      short loc_97F51B
0x97F50E: fild    [esp+508h+var_4EC]
0x97F512: fmul    dword ptr [edi+74h]
0x97F515: fstp    [esp+508h+var_4B8]
0x97F519: jmp     short loc_97F51F
0x97F51B: fst     [esp+508h+var_4B8]
0x97F51F: fld     [esp+508h+var_438]
0x97F526: fmul    st, st
0x97F528: fld1
0x97F52A: fsubrp  st(1), st
0x97F52C: fstp    [esp+508h+var_4F8]
0x97F530: fld     [esp+508h+var_4F8]
0x97F534: fst     [esp+508h+var_448]
0x97F53B: fabs
0x97F53D: fstp    [esp+508h+var_4F4]
0x97F541: fld     [esp+508h+var_4F4]
0x97F545: fcomp   dword ptr ds:0A372CCh
0x97F54B: fnstsw  ax
0x97F54D: test    ah, 41h
0x97F550: jnz     loc_97F635
0x97F556: lea     edx, [esp+508h+var_404]
0x97F55D: fstp    st
0x97F55F: push    edx; int
0x97F560: push    ecx
0x97F561: lea     eax, [esp+510h+var_4D0]
0x97F565: fstp    [esp+510h+var_510]; float
0x97F568: push    eax; int
0x97F569: call    sub_47DA10
0x97F56E: fld     dword ptr [eax]
0x97F570: fadd    [esp+514h+var_428]
0x97F577: add     esp, 0Ch
0x97F57A: fstp    dword ptr [esp+508h+var_4AC]
0x97F57E: mov     ecx, dword ptr [esp+508h+var_4AC]
0x97F582: fld     dword ptr [eax+4]
0x97F585: fadd    [esp+508h+var_348]
0x97F58C: fstp    dword ptr [esp+508h+var_4AC+4]
0x97F590: mov     edx, dword ptr [esp+508h+var_4AC+4]
0x97F594: fld     dword ptr [eax+8]
0x97F597: mov     dword ptr [esp+508h+var_4A0], ecx
0x97F59B: fadd    [esp+508h+var_418]
0x97F5A2: lea     ecx, [esp+508h+var_4A0]
0x97F5A6: push    ecx
0x97F5A7: mov     ecx, ebx
0x97F5A9: fstp    [esp+50Ch+var_4A4]
0x97F5AD: mov     eax, [esp+50Ch+var_4A4]
0x97F5B1: fld     [esp+50Ch+var_4E0]
0x97F5B5: mov     dword ptr [esp+50Ch+var_4A0+4], edx
0x97F5B9: fmul    [esp+50Ch+var_3F8]
0x97F5C0: mov     [esp+50Ch+var_498], eax
0x97F5C4: fld     dword ptr [esp+50Ch+var_4E8]
0x97F5C8: fmul    [esp+50Ch+var_3A8]
0x97F5CF: faddp   st(1), st
0x97F5D1: fstp    [esp+50Ch+var_488]
0x97F5D8: call    sub_47D9E0
0x97F5DD: fsubr   [esp+508h+var_488]
0x97F5E4: mov     esi, [esp+508h+var_4B0]
0x97F5E8: lea     edx, [esp+508h+var_4A0]
0x97F5EC: push    edx
0x97F5ED: fstp    [esp+50Ch+var_4F4]
0x97F5F1: lea     ecx, [esi+0Ch]
0x97F5F4: fld     [esp+50Ch+var_4F4]
0x97F5F8: fmul    [esp+50Ch+var_438]
0x97F5FF: fstp    [esp+50Ch+var_488]
0x97F606: call    sub_47D9E0
0x97F60B: fadd    [esp+508h+var_488]
0x97F612: fld     dword ptr [esp+508h+var_4C0]
0x97F616: fmul    [esp+508h+var_3C8]
0x97F61D: faddp   st(1), st
0x97F61F: fld     [esp+508h+var_4B8]
0x97F623: fmul    [esp+508h+var_338]
0x97F62A: faddp   st(1), st
0x97F62C: fdiv    [esp+508h+var_448]
0x97F633: jmp     short loc_97F63B
0x97F635: mov     esi, [esp+508h+var_4B0]
0x97F639: fstp    st(1)
0x97F63B: lea     eax, [esi+18h]
0x97F63E: fstp    dword ptr [esp+508h+var_4E8+4]
0x97F642: fld     [esp+508h+var_4E0]
0x97F646: push    eax; int
0x97F647: push    ecx
0x97F648: lea     eax, [esp+510h+var_1E0]
0x97F64F: fstp    [esp+510h+var_510]; float
0x97F652: push    eax; int
0x97F653: call    sub_47DA10
0x97F658: fld     dword ptr [esp+514h+var_4E8+4]
0x97F65C: add     esp, 0Ch
0x97F65F: push    eax
0x97F660: lea     ecx, [esp+50Ch+var_F0]
0x97F667: push    ecx
0x97F668: lea     eax, [esi+0Ch]
0x97F66B: push    eax; int
0x97F66C: push    ecx
0x97F66D: lea     edx, [esp+518h+var_1C8]
0x97F674: fstp    [esp+518h+var_518]; float
0x97F677: push    edx; int
0x97F678: call    sub_47DA10
0x97F67D: fld     dword ptr [esp+51Ch+var_4E8]
0x97F681: add     esp, 0Ch
0x97F684: push    eax
0x97F685: lea     eax, [esp+514h+var_78]
0x97F68C: push    eax
0x97F68D: push    esi; int
0x97F68E: push    ecx
0x97F68F: lea     ecx, [esp+520h+var_1B0]
0x97F696: fstp    [esp+520h+var_520]; float
0x97F699: push    ecx; int
0x97F69A: call    sub_47DA10
0x97F69F: fld     [esp+524h+var_4F0]
0x97F6A3: add     esp, 0Ch
0x97F6A6: push    eax
0x97F6A7: mov     eax, [esp+51Ch+var_4D4]
0x97F6AB: lea     edx, [esp+51Ch+var_D8]
0x97F6B2: push    edx
0x97F6B3: push    eax; int
0x97F6B4: push    ecx
0x97F6B5: lea     ecx, [esp+528h+var_198]
0x97F6BC: fstp    [esp+528h+var_528]; float
0x97F6BF: push    ecx; int
0x97F6C0: call    sub_47DA10
0x97F6C5: mov     ecx, [esp+52Ch+var_48C]
0x97F6CC: lea     edx, [esp+52Ch+var_18]
0x97F6D3: jmp     loc_97E75F
0x97F6D8: fstp    st(2); jumptable 0097E5FC case 12
0x97F6DA: fldz
0x97F6DC: fld     [esp+508h+var_450]
0x97F6E3: fcom    st(1)
0x97F6E5: fnstsw  ax
0x97F6E7: test    ah, 41h
0x97F6EA: jnz     short loc_97F6FB
0x97F6EC: fstp    st
0x97F6EE: fild    [esp+508h+var_4EC]
0x97F6F2: fmul    dword ptr [ecx+6Ch]
0x97F6F5: fstp    dword ptr [esp+508h+var_4E8]
0x97F6F9: jmp     short loc_97F71D
0x97F6FB: fcomp   st(1)
0x97F6FD: fnstsw  ax
0x97F6FF: test    ah, 5
0x97F702: jp      short loc_97F719
0x97F704: mov     eax, edx
0x97F706: neg     eax
0x97F708: mov     [esp+508h+var_4F4], eax
0x97F70C: fild    [esp+508h+var_4F4]
0x97F710: fmul    dword ptr [ecx+6Ch]
0x97F713: fstp    dword ptr [esp+508h+var_4E8]
0x97F717: jmp     short loc_97F71D
0x97F719: fst     dword ptr [esp+508h+var_4E8]
0x97F71D: fld     [esp+508h+var_468]
0x97F724: fcom    st(1)
0x97F726: fnstsw  ax
0x97F728: test    ah, 41h
0x97F72B: jnz     short loc_97F744
0x97F72D: mov     eax, edx
0x97F72F: fstp    st
0x97F731: neg     eax
0x97F733: mov     [esp+508h+var_4F4], eax
0x97F737: fild    [esp+508h+var_4F4]
0x97F73B: fmul    dword ptr [ecx+74h]
0x97F73E: fstp    [esp+508h+var_4E0]
0x97F742: jmp     short loc_97F75E
0x97F744: fcomp   st(1)
0x97F746: fnstsw  ax
0x97F748: test    ah, 5
0x97F74B: jp      short loc_97F75A
0x97F74D: fild    [esp+508h+var_4EC]
0x97F751: fmul    dword ptr [ecx+74h]
0x97F754: fstp    [esp+508h+var_4E0]
0x97F758: jmp     short loc_97F75E
0x97F75A: fst     [esp+508h+var_4E0]
0x97F75E: fld     [esp+508h+var_460]
0x97F765: fcom    st(1)
0x97F767: fnstsw  ax
0x97F769: test    ah, 41h
0x97F76C: jnz     short loc_97F785
0x97F76E: mov     ecx, edx
0x97F770: fstp    st
0x97F772: neg     ecx
0x97F774: mov     [esp+508h+var_4F4], ecx
0x97F778: fild    [esp+508h+var_4F4]
0x97F77C: fmul    dword ptr [edi+6Ch]
0x97F77F: fstp    dword ptr [esp+508h+var_4C0]
0x97F783: jmp     short loc_97F79F
0x97F785: fcomp   st(1)
0x97F787: fnstsw  ax
0x97F789: test    ah, 5
0x97F78C: jp      short loc_97F79B
0x97F78E: fild    [esp+508h+var_4EC]
0x97F792: fmul    dword ptr [edi+6Ch]
0x97F795: fstp    dword ptr [esp+508h+var_4C0]
0x97F799: jmp     short loc_97F79F
0x97F79B: fst     dword ptr [esp+508h+var_4C0]
0x97F79F: fld     [esp+508h+var_464]
0x97F7A6: fcom    st(1)
0x97F7A8: fnstsw  ax
0x97F7AA: test    ah, 41h
0x97F7AD: jnz     short loc_97F7BE
0x97F7AF: fstp    st
0x97F7B1: fild    [esp+508h+var_4EC]
0x97F7B5: fmul    dword ptr [edi+70h]
0x97F7B8: fstp    dword ptr [esp+508h+var_4C0+4]
0x97F7BC: jmp     short loc_97F7DE
0x97F7BE: fcomp   st(1)
0x97F7C0: fnstsw  ax
0x97F7C2: test    ah, 5
0x97F7C5: jp      short loc_97F7DA
0x97F7C7: neg     edx
0x97F7C9: mov     [esp+508h+var_4F4], edx
0x97F7CD: fild    [esp+508h+var_4F4]
0x97F7D1: fmul    dword ptr [edi+70h]
0x97F7D4: fstp    dword ptr [esp+508h+var_4C0+4]
0x97F7D8: jmp     short loc_97F7DE
0x97F7DA: fst     dword ptr [esp+508h+var_4C0+4]
0x97F7DE: fld     st(1)
0x97F7E0: fmulp   st(2), st
0x97F7E2: fld1
0x97F7E4: fsubrp  st(2), st
0x97F7E6: fxch    st(1)
0x97F7E8: fstp    [esp+508h+var_4F8]
0x97F7EC: fld     [esp+508h+var_4F8]
0x97F7F0: fst     [esp+508h+var_448]
0x97F7F7: fabs
0x97F7F9: fstp    [esp+508h+var_4F4]
0x97F7FD: fld     [esp+508h+var_4F4]
0x97F801: fcomp   dword ptr ds:0A372CCh
0x97F807: fnstsw  ax
0x97F809: test    ah, 41h
0x97F80C: jnz     loc_97F8F6
0x97F812: lea     edx, [esp+508h+var_404]
0x97F819: fstp    st
0x97F81B: push    edx; int
0x97F81C: push    ecx
0x97F81D: lea     eax, [esp+510h+var_4D0]
0x97F821: fstp    [esp+510h+var_510]; float
0x97F824: push    eax; int
0x97F825: call    sub_47DA10
0x97F82A: fld     dword ptr [eax]
0x97F82C: fadd    [esp+514h+var_428]
0x97F833: add     esp, 0Ch
0x97F836: fstp    dword ptr [esp+508h+var_4AC]
0x97F83A: mov     ecx, dword ptr [esp+508h+var_4AC]
0x97F83E: fld     dword ptr [eax+4]
0x97F841: fadd    [esp+508h+var_348]
0x97F848: fstp    dword ptr [esp+508h+var_4AC+4]
0x97F84C: mov     edx, dword ptr [esp+508h+var_4AC+4]
0x97F850: fld     dword ptr [eax+8]
0x97F853: mov     dword ptr [esp+508h+var_4A0], ecx
0x97F857: fadd    [esp+508h+var_418]
0x97F85E: lea     ecx, [esp+508h+var_4A0]
0x97F862: push    ecx
0x97F863: mov     ecx, [esp+50Ch+var_474]
0x97F86A: fstp    [esp+50Ch+var_4A4]
0x97F86E: mov     eax, [esp+50Ch+var_4A4]
0x97F872: fld     dword ptr [esp+50Ch+var_4E8]
0x97F876: mov     dword ptr [esp+50Ch+var_4A0+4], edx
0x97F87A: fmul    [esp+50Ch+var_3B8]
0x97F881: mov     [esp+50Ch+var_498], eax
0x97F885: fld     [esp+50Ch+var_4E0]
0x97F889: fmul    [esp+50Ch+var_368]
0x97F890: faddp   st(1), st
0x97F892: fstp    [esp+50Ch+var_488]
0x97F899: call    sub_47D9E0
0x97F89E: fsubr   [esp+508h+var_488]
0x97F8A5: mov     esi, [esp+508h+var_4B0]
0x97F8A9: lea     edx, [esp+508h+var_4A0]
0x97F8AD: push    edx
0x97F8AE: fstp    [esp+50Ch+var_4F4]
0x97F8B2: lea     ecx, [esi+0Ch]
0x97F8B5: fld     [esp+50Ch+var_4F4]
0x97F8B9: fmul    [esp+50Ch+var_338]
0x97F8C0: fstp    [esp+50Ch+var_488]
0x97F8C7: call    sub_47D9E0
0x97F8CC: fadd    [esp+508h+var_488]
0x97F8D3: fld     dword ptr [esp+508h+var_4C0]
0x97F8D7: fmul    [esp+508h+var_3C8]
0x97F8DE: faddp   st(1), st
0x97F8E0: fld     dword ptr [esp+508h+var_4C0+4]
0x97F8E4: fmul    [esp+508h+var_438]
0x97F8EB: faddp   st(1), st
0x97F8ED: fdiv    [esp+508h+var_448]
0x97F8F4: jmp     short loc_97F8FC
0x97F8F6: mov     esi, [esp+508h+var_4B0]
0x97F8FA: fstp    st(1)
0x97F8FC: lea     eax, [esi+18h]
0x97F8FF: fstp    dword ptr [esp+508h+var_4E8+4]
0x97F903: fld     [esp+508h+var_4E0]
0x97F907: push    eax; int
0x97F908: push    ecx
0x97F909: lea     eax, [esp+510h+var_180]
0x97F910: fstp    [esp+510h+var_510]; float
0x97F913: push    eax; int
0x97F914: call    sub_47DA10
0x97F919: fld     dword ptr [esp+514h+var_4E8+4]
0x97F91D: add     esp, 0Ch
0x97F920: push    eax
0x97F921: lea     ecx, [esp+50Ch+var_2E8]
0x97F928: push    ecx
0x97F929: lea     eax, [esi+0Ch]
0x97F92C: push    eax; int
0x97F92D: push    ecx
0x97F92E: lea     edx, [esp+518h+var_2DC]
0x97F935: fstp    [esp+518h+var_518]; float
0x97F938: push    edx; int
0x97F939: call    sub_47DA10
0x97F93E: fld     dword ptr [esp+51Ch+var_4E8]
0x97F942: add     esp, 0Ch
0x97F945: push    eax
0x97F946: lea     eax, [esp+514h+var_2C4]
0x97F94D: push    eax
0x97F94E: push    esi; int
0x97F94F: push    ecx
0x97F950: lea     ecx, [esp+520h+var_2AC]
0x97F957: fstp    [esp+520h+var_520]; float
0x97F95A: push    ecx; int
0x97F95B: call    sub_47DA10
0x97F960: fld     [esp+524h+var_4F0]
0x97F964: add     esp, 0Ch
0x97F967: push    eax
0x97F968: mov     eax, [esp+51Ch+var_4D4]
0x97F96C: lea     edx, [esp+51Ch+var_294]
0x97F973: push    edx
0x97F974: push    eax; int
0x97F975: push    ecx
0x97F976: lea     ecx, [esp+528h+var_27C]
0x97F97D: fstp    [esp+528h+var_528]; float
0x97F980: push    ecx; int
0x97F981: call    sub_47DA10
0x97F986: mov     ecx, [esp+52Ch+var_48C]
0x97F98D: lea     edx, [esp+52Ch+var_264]
0x97F994: jmp     loc_97E75F
0x97F999: fstp    st(1); jumptable 0097E5FC case 13
0x97F99B: fstp    st(1)
0x97F99D: fldz
0x97F99F: fld     [esp+508h+var_464]
0x97F9A6: fcom    st(1)
0x97F9A8: fnstsw  ax
0x97F9AA: test    ah, 41h
0x97F9AD: jnz     short loc_97F9C6
0x97F9AF: mov     eax, edx
0x97F9B1: fstp    st
0x97F9B3: neg     eax
0x97F9B5: mov     [esp+508h+var_4F4], eax
0x97F9B9: fild    [esp+508h+var_4F4]
0x97F9BD: fmul    dword ptr [ecx+6Ch]
0x97F9C0: fstp    dword ptr [esp+508h+var_4E8]
0x97F9C4: jmp     short loc_97F9E0
0x97F9C6: fcomp   st(1)
0x97F9C8: fnstsw  ax
0x97F9CA: test    ah, 5
0x97F9CD: jp      short loc_97F9DC
0x97F9CF: fild    [esp+508h+var_4EC]
0x97F9D3: fmul    dword ptr [ecx+6Ch]
0x97F9D6: fstp    dword ptr [esp+508h+var_4E8]
0x97F9DA: jmp     short loc_97F9E0
0x97F9DC: fst     dword ptr [esp+508h+var_4E8]
0x97F9E0: fld     [esp+508h+var_470]
0x97F9E7: fcom    st(1)
0x97F9E9: fnstsw  ax
0x97F9EB: test    ah, 41h
0x97F9EE: jnz     short loc_97F9FF
0x97F9F0: fstp    st
0x97F9F2: fild    [esp+508h+var_4EC]
0x97F9F6: fmul    dword ptr [ecx+70h]
0x97F9F9: fstp    dword ptr [esp+508h+var_4E8+4]
0x97F9FD: jmp     short loc_97FA21
0x97F9FF: fcomp   st(1)
0x97FA01: fnstsw  ax
0x97FA03: test    ah, 5
0x97FA06: jp      short loc_97FA1D
0x97FA08: mov     eax, edx
0x97FA0A: neg     eax
0x97FA0C: mov     [esp+508h+var_4F4], eax
0x97FA10: fild    [esp+508h+var_4F4]
0x97FA14: fmul    dword ptr [ecx+70h]
0x97FA17: fstp    dword ptr [esp+508h+var_4E8+4]
0x97FA1B: jmp     short loc_97FA21
0x97FA1D: fst     dword ptr [esp+508h+var_4E8+4]
0x97FA21: fld     [esp+508h+var_450]
0x97FA28: fcom    st(1)
0x97FA2A: fnstsw  ax
0x97FA2C: test    ah, 41h
0x97FA2F: jnz     short loc_97FA48
0x97FA31: mov     ecx, edx
0x97FA33: fstp    st
0x97FA35: neg     ecx
0x97FA37: mov     [esp+508h+var_4F4], ecx
0x97FA3B: fild    [esp+508h+var_4F4]
0x97FA3F: fmul    dword ptr [edi+70h]
0x97FA42: fstp    dword ptr [esp+508h+var_4C0+4]
0x97FA46: jmp     short loc_97FA62
0x97FA48: fcomp   st(1)
0x97FA4A: fnstsw  ax
0x97FA4C: test    ah, 5
0x97FA4F: jp      short loc_97FA5E
0x97FA51: fild    [esp+508h+var_4EC]
0x97FA55: fmul    dword ptr [edi+70h]
0x97FA58: fstp    dword ptr [esp+508h+var_4C0+4]
0x97FA5C: jmp     short loc_97FA62
0x97FA5E: fst     dword ptr [esp+508h+var_4C0+4]
0x97FA62: fld     [esp+508h+var_454]
0x97FA69: fcom    st(1)
0x97FA6B: fnstsw  ax
0x97FA6D: test    ah, 41h
0x97FA70: jnz     short loc_97FA81
0x97FA72: fstp    st
0x97FA74: fild    [esp+508h+var_4EC]
0x97FA78: fmul    dword ptr [edi+74h]
0x97FA7B: fstp    [esp+508h+var_4B8]
0x97FA7F: jmp     short loc_97FAA1
0x97FA81: fcomp   st(1)
0x97FA83: fnstsw  ax
0x97FA85: test    ah, 5
0x97FA88: jp      short loc_97FA9D
0x97FA8A: neg     edx
0x97FA8C: mov     [esp+508h+var_4F4], edx
0x97FA90: fild    [esp+508h+var_4F4]
0x97FA94: fmul    dword ptr [edi+74h]
0x97FA97: fstp    [esp+508h+var_4B8]
0x97FA9B: jmp     short loc_97FAA1
0x97FA9D: fst     [esp+508h+var_4B8]
0x97FAA1: fld     [esp+508h+var_3D8]
0x97FAA8: fmul    st, st
0x97FAAA: fld1
0x97FAAC: fsubrp  st(1), st
0x97FAAE: fstp    [esp+508h+var_4F8]
0x97FAB2: fld     [esp+508h+var_4F8]
0x97FAB6: fst     [esp+508h+var_448]
0x97FABD: fabs
0x97FABF: fstp    [esp+508h+var_4F4]
0x97FAC3: fld     [esp+508h+var_4F4]
0x97FAC7: fcomp   dword ptr ds:0A372CCh
0x97FACD: fnstsw  ax
0x97FACF: test    ah, 41h
0x97FAD2: jnz     loc_97FBBF
0x97FAD8: lea     edx, [esp+508h+var_404]
0x97FADF: fstp    st
0x97FAE1: push    edx; int
0x97FAE2: push    ecx
0x97FAE3: lea     eax, [esp+510h+var_438]
0x97FAEA: fstp    [esp+510h+var_510]; float
0x97FAED: push    eax; int
0x97FAEE: call    sub_47DA10
0x97FAF3: fld     dword ptr [eax]
0x97FAF5: fadd    [esp+514h+var_428]
0x97FAFC: add     esp, 0Ch
0x97FAFF: fstp    dword ptr [esp+508h+var_4AC]
0x97FB03: mov     ecx, dword ptr [esp+508h+var_4AC]
0x97FB07: fld     dword ptr [eax+4]
0x97FB0A: fadd    [esp+508h+var_348]
0x97FB11: fstp    dword ptr [esp+508h+var_4AC+4]
0x97FB15: mov     edx, dword ptr [esp+508h+var_4AC+4]
0x97FB19: fld     dword ptr [eax+8]
0x97FB1C: mov     dword ptr [esp+508h+var_4A0], ecx
0x97FB20: fadd    [esp+508h+var_418]
0x97FB27: lea     ecx, [esp+508h+var_4A0]
0x97FB2B: push    ecx
0x97FB2C: mov     ecx, [esp+50Ch+var_44C]
0x97FB33: fstp    [esp+50Ch+var_4A4]
0x97FB37: mov     eax, [esp+50Ch+var_4A4]
0x97FB3B: fld     dword ptr [esp+50Ch+var_4E8+4]
0x97FB3F: mov     dword ptr [esp+50Ch+var_4A0+4], edx
0x97FB43: fmul    [esp+50Ch+var_3C8]
0x97FB4A: mov     [esp+50Ch+var_498], eax
0x97FB4E: fld     dword ptr [esp+50Ch+var_4E8]
0x97FB52: fmul    [esp+50Ch+var_398]
0x97FB59: faddp   st(1), st
0x97FB5B: fstp    [esp+50Ch+var_488]
0x97FB62: call    sub_47D9E0
0x97FB67: fsubr   [esp+508h+var_488]
0x97FB6E: mov     esi, [esp+508h+var_4B0]
0x97FB72: lea     edx, [esp+508h+var_4A0]
0x97FB76: push    edx
0x97FB77: fstp    [esp+50Ch+var_4F4]
0x97FB7B: lea     ecx, [esi+18h]
0x97FB7E: fld     [esp+50Ch+var_4F4]
0x97FB82: fmul    [esp+50Ch+var_3D8]
0x97FB89: fstp    [esp+50Ch+var_488]
0x97FB90: call    sub_47D9E0
0x97FB95: fadd    [esp+508h+var_488]
0x97FB9C: fld     dword ptr [esp+508h+var_4C0+4]
0x97FBA0: fmul    [esp+508h+var_3F8]
0x97FBA7: faddp   st(1), st
0x97FBA9: fld     [esp+508h+var_4B8]
0x97FBAD: fmul    [esp+508h+var_368]
0x97FBB4: faddp   st(1), st
0x97FBB6: fdiv    [esp+508h+var_448]
0x97FBBD: jmp     short loc_97FBC5
0x97FBBF: mov     esi, [esp+508h+var_4B0]
0x97FBC3: fstp    st(1)
0x97FBC5: lea     eax, [esi+18h]
0x97FBC8: fstp    [esp+508h+var_4E0]
0x97FBCC: fld     [esp+508h+var_4E0]
0x97FBD0: push    eax; int
0x97FBD1: push    ecx
0x97FBD2: lea     eax, [esp+510h+var_24C]
0x97FBD9: fstp    [esp+510h+var_510]; float
0x97FBDC: push    eax; int
0x97FBDD: call    sub_47DA10
0x97FBE2: fld     dword ptr [esp+514h+var_4E8+4]
0x97FBE6: add     esp, 0Ch
0x97FBE9: push    eax
0x97FBEA: lea     ecx, [esp+50Ch+var_234]
0x97FBF1: push    ecx
0x97FBF2: lea     eax, [esi+0Ch]
0x97FBF5: push    eax; int
0x97FBF6: push    ecx
0x97FBF7: lea     edx, [esp+518h+var_21C]
0x97FBFE: fstp    [esp+518h+var_518]; float
0x97FC01: push    edx; int
0x97FC02: call    sub_47DA10
0x97FC07: fld     dword ptr [esp+51Ch+var_4E8]
0x97FC0B: add     esp, 0Ch
0x97FC0E: push    eax
0x97FC0F: lea     eax, [esp+514h+var_204]
0x97FC16: push    eax
0x97FC17: push    esi; int
0x97FC18: push    ecx
0x97FC19: lea     ecx, [esp+520h+var_1EC]
0x97FC20: fstp    [esp+520h+var_520]; float
0x97FC23: push    ecx; int
0x97FC24: call    sub_47DA10
0x97FC29: fld     [esp+524h+var_4F0]
0x97FC2D: add     esp, 0Ch
0x97FC30: push    eax
0x97FC31: mov     eax, [esp+51Ch+var_4D4]
0x97FC35: lea     edx, [esp+51Ch+var_1D4]
0x97FC3C: push    edx
0x97FC3D: push    eax; int
0x97FC3E: push    ecx
0x97FC3F: lea     ecx, [esp+528h+var_1BC]
0x97FC46: fstp    [esp+528h+var_528]; float
0x97FC49: push    ecx; int
0x97FC4A: call    sub_47DA10
0x97FC4F: mov     ecx, [esp+52Ch+var_48C]
0x97FC56: lea     edx, [esp+52Ch+var_1A4]
0x97FC5D: jmp     loc_97E75F
0x97FC62: fstp    st(1); jumptable 0097E5FC case 14
0x97FC64: fstp    st(1)
0x97FC66: fldz
0x97FC68: fld     [esp+508h+var_460]
0x97FC6F: fcom    st(1)
0x97FC71: fnstsw  ax
0x97FC73: test    ah, 41h
0x97FC76: jnz     short loc_97FC8F
0x97FC78: mov     eax, edx
0x97FC7A: fstp    st
0x97FC7C: neg     eax
0x97FC7E: mov     [esp+508h+var_4F4], eax
0x97FC82: fild    [esp+508h+var_4F4]
0x97FC86: fmul    dword ptr [ecx+6Ch]
0x97FC89: fstp    dword ptr [esp+508h+var_4E8]
0x97FC8D: jmp     short loc_97FCA9
0x97FC8F: fcomp   st(1)
0x97FC91: fnstsw  ax
0x97FC93: test    ah, 5
0x97FC96: jp      short loc_97FCA5
0x97FC98: fild    [esp+508h+var_4EC]
0x97FC9C: fmul    dword ptr [ecx+6Ch]
0x97FC9F: fstp    dword ptr [esp+508h+var_4E8]
0x97FCA3: jmp     short loc_97FCA9
0x97FCA5: fst     dword ptr [esp+508h+var_4E8]
0x97FCA9: fld     [esp+508h+var_46C]
0x97FCB0: fcom    st(1)
0x97FCB2: fnstsw  ax
0x97FCB4: test    ah, 41h
0x97FCB7: jnz     short loc_97FCC8
0x97FCB9: fstp    st
0x97FCBB: fild    [esp+508h+var_4EC]
0x97FCBF: fmul    dword ptr [ecx+70h]
0x97FCC2: fstp    dword ptr [esp+508h+var_4E8+4]
0x97FCC6: jmp     short loc_97FCEA
0x97FCC8: fcomp   st(1)
0x97FCCA: fnstsw  ax
0x97FCCC: test    ah, 5
0x97FCCF: jp      short loc_97FCE6
0x97FCD1: mov     eax, edx
0x97FCD3: neg     eax
0x97FCD5: mov     [esp+508h+var_4F4], eax
0x97FCD9: fild    [esp+508h+var_4F4]
0x97FCDD: fmul    dword ptr [ecx+70h]
0x97FCE0: fstp    dword ptr [esp+508h+var_4E8+4]
0x97FCE4: jmp     short loc_97FCEA
0x97FCE6: fst     dword ptr [esp+508h+var_4E8+4]
0x97FCEA: fld     [esp+508h+var_450]
0x97FCF1: fcom    st(1)
0x97FCF3: fnstsw  ax
0x97FCF5: test    ah, 41h
0x97FCF8: jnz     short loc_97FD09
0x97FCFA: fstp    st
0x97FCFC: fild    [esp+508h+var_4EC]
0x97FD00: fmul    dword ptr [edi+6Ch]
0x97FD03: fstp    dword ptr [esp+508h+var_4C0]
0x97FD07: jmp     short loc_97FD2B
0x97FD09: fcomp   st(1)
0x97FD0B: fnstsw  ax
0x97FD0D: test    ah, 5
0x97FD10: jp      short loc_97FD27
0x97FD12: mov     ecx, edx
0x97FD14: neg     ecx
0x97FD16: mov     [esp+508h+var_4F4], ecx
0x97FD1A: fild    [esp+508h+var_4F4]
0x97FD1E: fmul    dword ptr [edi+6Ch]
0x97FD21: fstp    dword ptr [esp+508h+var_4C0]
0x97FD25: jmp     short loc_97FD2B
0x97FD27: fst     dword ptr [esp+508h+var_4C0]
0x97FD2B: fld     [esp+508h+var_458]
0x97FD32: fcom    st(1)
0x97FD34: fnstsw  ax
0x97FD36: test    ah, 41h
0x97FD39: jnz     short loc_97FD50
0x97FD3B: neg     edx
0x97FD3D: fstp    st
0x97FD3F: mov     [esp+508h+var_4F4], edx
0x97FD43: fild    [esp+508h+var_4F4]
0x97FD47: fmul    dword ptr [edi+74h]
0x97FD4A: fstp    [esp+508h+var_4B8]
0x97FD4E: jmp     short loc_97FD6A
0x97FD50: fcomp   st(1)
0x97FD52: fnstsw  ax
0x97FD54: test    ah, 5
0x97FD57: jp      short loc_97FD66
0x97FD59: fild    [esp+508h+var_4EC]
0x97FD5D: fmul    dword ptr [edi+74h]
0x97FD60: fstp    [esp+508h+var_4B8]
0x97FD64: jmp     short loc_97FD6A
0x97FD66: fst     [esp+508h+var_4B8]
0x97FD6A: fld     [esp+508h+var_3F8]
0x97FD71: fmul    st, st
0x97FD73: fld1
0x97FD75: fsubrp  st(1), st
0x97FD77: fstp    [esp+508h+var_4F8]
0x97FD7B: fld     [esp+508h+var_4F8]
0x97FD7F: fst     [esp+508h+var_448]
0x97FD86: fabs
0x97FD88: fstp    [esp+508h+var_4F4]
0x97FD8C: fld     [esp+508h+var_4F4]
0x97FD90: fcomp   dword ptr ds:0A372CCh
0x97FD96: fnstsw  ax
0x97FD98: test    ah, 41h
0x97FD9B: jnz     loc_97FE80
0x97FDA1: lea     edx, [esp+508h+var_404]
0x97FDA8: fstp    st
0x97FDAA: push    edx; int
0x97FDAB: push    ecx
0x97FDAC: lea     eax, [esp+510h+var_4D0]
0x97FDB0: fstp    [esp+510h+var_510]; float
0x97FDB3: push    eax; int
0x97FDB4: call    sub_47DA10
0x97FDB9: fld     dword ptr [eax]
0x97FDBB: fadd    [esp+514h+var_428]
0x97FDC2: add     esp, 0Ch
0x97FDC5: fstp    dword ptr [esp+508h+var_4AC]
0x97FDC9: mov     ecx, dword ptr [esp+508h+var_4AC]
0x97FDCD: fld     dword ptr [eax+4]
0x97FDD0: fadd    [esp+508h+var_348]
0x97FDD7: fstp    dword ptr [esp+508h+var_4AC+4]
0x97FDDB: mov     edx, dword ptr [esp+508h+var_4AC+4]
0x97FDDF: fld     dword ptr [eax+8]
0x97FDE2: mov     dword ptr [esp+508h+var_4A0], ecx
0x97FDE6: fadd    [esp+508h+var_418]
0x97FDED: lea     ecx, [esp+508h+var_4A0]
0x97FDF1: push    ecx
0x97FDF2: mov     ecx, ebx
0x97FDF4: fstp    [esp+50Ch+var_4A4]
0x97FDF8: mov     eax, [esp+50Ch+var_4A4]
0x97FDFC: fld     dword ptr [esp+50Ch+var_4E8+4]
0x97FE00: mov     dword ptr [esp+50Ch+var_4A0+4], edx
0x97FE04: fmul    [esp+50Ch+var_438]
0x97FE0B: mov     [esp+50Ch+var_498], eax
0x97FE0F: fld     dword ptr [esp+50Ch+var_4E8]
0x97FE13: fmul    [esp+50Ch+var_3A8]
0x97FE1A: faddp   st(1), st
0x97FE1C: fstp    [esp+50Ch+var_488]
0x97FE23: call    sub_47D9E0
0x97FE28: fsubr   [esp+508h+var_488]
0x97FE2F: mov     esi, [esp+508h+var_4B0]
0x97FE33: lea     edx, [esp+508h+var_4A0]
0x97FE37: push    edx
0x97FE38: fstp    [esp+50Ch+var_4F4]
0x97FE3C: lea     ecx, [esi+18h]
0x97FE3F: fld     [esp+50Ch+var_4F4]
0x97FE43: fmul    [esp+50Ch+var_3F8]
0x97FE4A: fstp    [esp+50Ch+var_488]
0x97FE51: call    sub_47D9E0
0x97FE56: fadd    [esp+508h+var_488]
0x97FE5D: fld     dword ptr [esp+508h+var_4C0]
0x97FE61: fmul    [esp+508h+var_3D8]
0x97FE68: faddp   st(1), st
0x97FE6A: fld     [esp+508h+var_4B8]
0x97FE6E: fmul    [esp+508h+var_368]
0x97FE75: faddp   st(1), st
0x97FE77: fdiv    [esp+508h+var_448]
0x97FE7E: jmp     short loc_97FE86
0x97FE80: mov     esi, [esp+508h+var_4B0]
0x97FE84: fstp    st(1)
0x97FE86: lea     eax, [esi+18h]
0x97FE89: fstp    [esp+508h+var_4E0]
0x97FE8D: fld     [esp+508h+var_4E0]
0x97FE91: push    eax; int
0x97FE92: push    ecx
0x97FE93: lea     eax, [esp+510h+var_18C]
0x97FE9A: fstp    [esp+510h+var_510]; float
0x97FE9D: push    eax; int
0x97FE9E: call    sub_47DA10
0x97FEA3: fld     dword ptr [esp+514h+var_4E8+4]
0x97FEA7: add     esp, 0Ch
0x97FEAA: push    eax
0x97FEAB: lea     ecx, [esp+50Ch+var_174]
0x97FEB2: push    ecx
0x97FEB3: lea     eax, [esi+0Ch]
0x97FEB6: push    eax; int
0x97FEB7: push    ecx
0x97FEB8: lea     edx, [esp+518h+var_15C]
0x97FEBF: fstp    [esp+518h+var_518]; float
0x97FEC2: push    edx; int
0x97FEC3: call    sub_47DA10
0x97FEC8: fld     dword ptr [esp+51Ch+var_4E8]
0x97FECC: add     esp, 0Ch
0x97FECF: push    eax
0x97FED0: lea     eax, [esp+514h+var_144]
0x97FED7: push    eax
0x97FED8: push    esi; int
0x97FED9: push    ecx
0x97FEDA: lea     ecx, [esp+520h+var_12C]
0x97FEE1: fstp    [esp+520h+var_520]; float
0x97FEE4: push    ecx; int
0x97FEE5: call    sub_47DA10
0x97FEEA: fld     [esp+524h+var_4F0]
0x97FEEE: add     esp, 0Ch
0x97FEF1: push    eax
0x97FEF2: mov     eax, [esp+51Ch+var_4D4]
0x97FEF6: lea     edx, [esp+51Ch+var_114]
0x97FEFD: push    edx
0x97FEFE: push    eax; int
0x97FEFF: push    ecx
0x97FF00: lea     ecx, [esp+528h+var_FC]
0x97FF07: fstp    [esp+528h+var_528]; float
0x97FF0A: push    ecx; int
0x97FF0B: call    sub_47DA10
0x97FF10: mov     ecx, [esp+52Ch+var_48C]
0x97FF17: lea     edx, [esp+52Ch+var_E4]
0x97FF1E: jmp     loc_97E75F
0x97FF23: fstp    st(1); jumptable 0097E5FC case 15
0x97FF25: fstp    st(1)
0x97FF27: fldz
0x97FF29: fld     [esp+508h+var_45C]
0x97FF30: fcom    st(1)
0x97FF32: fnstsw  ax
0x97FF34: test    ah, 41h
0x97FF37: jnz     short loc_97FF50
0x97FF39: mov     eax, edx
0x97FF3B: fstp    st
0x97FF3D: neg     eax
0x97FF3F: mov     [esp+508h+var_4F4], eax
0x97FF43: fild    [esp+508h+var_4F4]
0x97FF47: fmul    dword ptr [ecx+6Ch]
0x97FF4A: fstp    dword ptr [esp+508h+var_4E8]
0x97FF4E: jmp     short loc_97FF6A
0x97FF50: fcomp   st(1)
0x97FF52: fnstsw  ax
0x97FF54: test    ah, 5
0x97FF57: jp      short loc_97FF66
0x97FF59: fild    [esp+508h+var_4EC]
0x97FF5D: fmul    dword ptr [ecx+6Ch]
0x97FF60: fstp    dword ptr [esp+508h+var_4E8]
0x97FF64: jmp     short loc_97FF6A
0x97FF66: fst     dword ptr [esp+508h+var_4E8]
0x97FF6A: fld     [esp+508h+var_468]
0x97FF71: fcom    st(1)
0x97FF73: fnstsw  ax
0x97FF75: test    ah, 41h
0x97FF78: jnz     short loc_97FF89
0x97FF7A: fstp    st
0x97FF7C: fild    [esp+508h+var_4EC]
0x97FF80: fmul    dword ptr [ecx+70h]
0x97FF83: fstp    dword ptr [esp+508h+var_4E8+4]
0x97FF87: jmp     short loc_97FFAB
0x97FF89: fcomp   st(1)
0x97FF8B: fnstsw  ax
0x97FF8D: test    ah, 5
0x97FF90: jp      short loc_97FFA7
0x97FF92: mov     eax, edx
0x97FF94: neg     eax
0x97FF96: mov     [esp+508h+var_4F4], eax
0x97FF9A: fild    [esp+508h+var_4F4]
0x97FF9E: fmul    dword ptr [ecx+70h]
0x97FFA1: fstp    dword ptr [esp+508h+var_4E8+4]
0x97FFA5: jmp     short loc_97FFAB
0x97FFA7: fst     dword ptr [esp+508h+var_4E8+4]
0x97FFAB: fld     [esp+508h+var_454]
0x97FFB2: fcom    st(1)
0x97FFB4: fnstsw  ax
0x97FFB6: test    ah, 41h
0x97FFB9: jnz     short loc_97FFD2
0x97FFBB: mov     ecx, edx
0x97FFBD: fstp    st
0x97FFBF: neg     ecx
0x97FFC1: mov     [esp+508h+var_4F4], ecx
0x97FFC5: fild    [esp+508h+var_4F4]
0x97FFC9: fmul    dword ptr [edi+6Ch]
0x97FFCC: fstp    dword ptr [esp+508h+var_4C0]
0x97FFD0: jmp     short loc_97FFEC
0x97FFD2: fcomp   st(1)
0x97FFD4: fnstsw  ax
0x97FFD6: test    ah, 5
0x97FFD9: jp      short loc_97FFE8
0x97FFDB: fild    [esp+508h+var_4EC]
0x97FFDF: fmul    dword ptr [edi+6Ch]
0x97FFE2: fstp    dword ptr [esp+508h+var_4C0]
0x97FFE6: jmp     short loc_97FFEC
0x97FFE8: fst     dword ptr [esp+508h+var_4C0]
0x97FFEC: fld     [esp+508h+var_458]
0x97FFF3: fcom    st(1)
0x97FFF5: fnstsw  ax
0x97FFF7: test    ah, 41h
0x97FFFA: jnz     short loc_98000B
0x97FFFC: fstp    st
0x97FFFE: fild    [esp+508h+var_4EC]
0x980002: fmul    dword ptr [edi+70h]
0x980005: fstp    dword ptr [esp+508h+var_4C0+4]
0x980009: jmp     short loc_98002B
0x98000B: fcomp   st(1)
0x98000D: fnstsw  ax
0x98000F: test    ah, 5
0x980012: jp      short loc_980027
0x980014: neg     edx
0x980016: mov     [esp+508h+var_4F4], edx
0x98001A: fild    [esp+508h+var_4F4]
0x98001E: fmul    dword ptr [edi+70h]
0x980021: fstp    dword ptr [esp+508h+var_4C0+4]
0x980025: jmp     short loc_98002B
0x980027: fst     dword ptr [esp+508h+var_4C0+4]
0x98002B: fld     [esp+508h+var_368]
0x980032: fmul    st, st
0x980034: fld1
0x980036: fsubrp  st(1), st
0x980038: fstp    [esp+508h+var_4F8]
0x98003C: fld     [esp+508h+var_4F8]
0x980040: fst     [esp+508h+var_448]
0x980047: fabs
0x980049: fstp    [esp+508h+var_4F4]
0x98004D: fld     [esp+508h+var_4F4]
0x980051: fcomp   dword ptr ds:0A372CCh
0x980057: fnstsw  ax
0x980059: test    ah, 41h
0x98005C: jnz     loc_980149
0x980062: lea     edx, [esp+508h+var_404]
0x980069: fstp    st
0x98006B: push    edx; int
0x98006C: push    ecx
0x98006D: lea     eax, [esp+510h+var_438]
0x980074: fstp    [esp+510h+var_510]; float
0x980077: push    eax; int
0x980078: call    sub_47DA10
0x98007D: fld     dword ptr [eax]
0x98007F: fadd    [esp+514h+var_428]
0x980086: add     esp, 0Ch
0x980089: fstp    dword ptr [esp+508h+var_4AC]
0x98008D: mov     ecx, dword ptr [esp+508h+var_4AC]
0x980091: fld     dword ptr [eax+4]
0x980094: fadd    [esp+508h+var_348]
0x98009B: fstp    dword ptr [esp+508h+var_4AC+4]
0x98009F: mov     edx, dword ptr [esp+508h+var_4AC+4]
0x9800A3: fld     dword ptr [eax+8]
0x9800A6: mov     dword ptr [esp+508h+var_4A0], ecx
0x9800AA: fadd    [esp+508h+var_418]
0x9800B1: lea     ecx, [esp+508h+var_4A0]
0x9800B5: push    ecx
0x9800B6: mov     ecx, [esp+50Ch+var_474]
0x9800BD: fstp    [esp+50Ch+var_4A4]
0x9800C1: mov     eax, [esp+50Ch+var_4A4]
0x9800C5: fld     dword ptr [esp+50Ch+var_4E8+4]
0x9800C9: mov     dword ptr [esp+50Ch+var_4A0+4], edx
0x9800CD: fmul    [esp+50Ch+var_338]
0x9800D4: mov     [esp+50Ch+var_498], eax
0x9800D8: fld     dword ptr [esp+50Ch+var_4E8]
0x9800DC: fmul    [esp+50Ch+var_3B8]
0x9800E3: faddp   st(1), st
0x9800E5: fstp    [esp+50Ch+var_488]
0x9800EC: call    sub_47D9E0
0x9800F1: fsubr   [esp+508h+var_488]
0x9800F8: mov     esi, [esp+508h+var_4B0]
0x9800FC: lea     edx, [esp+508h+var_4A0]
0x980100: push    edx
0x980101: fstp    [esp+50Ch+var_4F4]
0x980105: lea     ecx, [esi+18h]
0x980108: fld     [esp+50Ch+var_4F4]
0x98010C: fmul    [esp+50Ch+var_368]
0x980113: fstp    [esp+50Ch+var_488]
0x98011A: call    sub_47D9E0
0x98011F: fadd    [esp+508h+var_488]
0x980126: fld     dword ptr [esp+508h+var_4C0]
0x98012A: fmul    [esp+508h+var_3D8]
0x980131: faddp   st(1), st
0x980133: fld     dword ptr [esp+508h+var_4C0+4]
0x980137: fmul    [esp+508h+var_3F8]
0x98013E: faddp   st(1), st
0x980140: fdiv    [esp+508h+var_448]
0x980147: jmp     short loc_98014F
0x980149: mov     esi, [esp+508h+var_4B0]
0x98014D: fstp    st(1)
0x98014F: lea     eax, [esi+18h]
0x980152: fstp    [esp+508h+var_4E0]
0x980156: fld     [esp+508h+var_4E0]
0x98015A: push    eax; int
0x98015B: push    ecx
0x98015C: lea     eax, [esp+510h+var_CC]
0x980163: fstp    [esp+510h+var_510]; float
0x980166: push    eax; int
0x980167: call    sub_47DA10
0x98016C: fld     dword ptr [esp+514h+var_4E8+4]
0x980170: add     esp, 0Ch
0x980173: push    eax
0x980174: lea     ecx, [esp+50Ch+var_B4]
0x98017B: push    ecx
0x98017C: lea     eax, [esi+0Ch]
0x98017F: push    eax; int
0x980180: push    ecx
0x980181: lea     edx, [esp+518h+var_9C]
0x980188: fstp    [esp+518h+var_518]; float
0x98018B: push    edx; int
0x98018C: call    sub_47DA10
0x980191: fld     dword ptr [esp+51Ch+var_4E8]
0x980195: add     esp, 0Ch
0x980198: push    eax
0x980199: lea     eax, [esp+514h+var_84]
0x9801A0: push    eax
0x9801A1: push    esi; int
0x9801A2: push    ecx
0x9801A3: lea     ecx, [esp+520h+var_6C]
0x9801AA: fstp    [esp+520h+var_520]; float
0x9801AD: push    ecx; int
0x9801AE: call    sub_47DA10
0x9801B3: fld     [esp+524h+var_4F0]
0x9801B7: add     esp, 0Ch
0x9801BA: push    eax
0x9801BB: mov     eax, [esp+51Ch+var_4D4]
0x9801BF: lea     edx, [esp+51Ch+var_54]
0x9801C6: push    edx
0x9801C7: push    eax; int
0x9801C8: push    ecx
0x9801C9: lea     ecx, [esp+528h+var_3C]
0x9801D0: fstp    [esp+528h+var_528]; float
0x9801D3: push    ecx; int
0x9801D4: call    sub_47DA10
0x9801D9: mov     ecx, [esp+52Ch+var_48C]
0x9801E0: lea     edx, [esp+52Ch+var_24]
0x9801E7: jmp     loc_97E75F
