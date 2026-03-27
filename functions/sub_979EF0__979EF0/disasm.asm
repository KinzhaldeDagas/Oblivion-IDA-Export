0x979EF0: sub     esp, 0B8h
0x979EF6: mov     eax, [esp+0B8h+arg_1C]
0x979EFD: mov     edx, [esp+0B8h+arg_18]
0x979F04: push    ebx
0x979F05: mov     ebx, [esp+0BCh+arg_8]
0x979F0C: push    ebp
0x979F0D: mov     ebp, [esp+0C0h+arg_4]
0x979F14: push    esi
0x979F15: push    edi
0x979F16: push    eax
0x979F17: mov     eax, [esp+0CCh+arg_14]
0x979F1E: push    edx
0x979F1F: mov     edx, [esp+0D0h+arg_10]
0x979F26: push    eax
0x979F27: mov     eax, [esp+0D4h+arg_C]
0x979F2E: push    edx
0x979F2F: push    eax
0x979F30: push    ebx
0x979F31: push    ebp
0x979F32: lea     edx, [esp+0E4h+var_58]
0x979F39: push    edx
0x979F3A: mov     [esp+0E8h+var_70], ecx
0x979F3E: lea     edi, [ecx+4]
0x979F41: lea     esi, [ecx+10h]
0x979F44: call    sub_9794D0
0x979F49: push    esi
0x979F4A: lea     eax, [esp+0CCh+var_64]
0x979F4E: push    eax
0x979F4F: lea     ecx, [esp+0D0h+var_58]
0x979F53: call    sub_711AE0
0x979F58: fldz
0x979F5A: mov     eax, [esp+0C8h+arg_14]
0x979F61: fst     [esp+0C8h+var_AC]
0x979F65: movzx   ecx, ax
0x979F68: fst     [esp+0C8h+var_A8]
0x979F6C: movzx   eax, ax
0x979F6F: fst     [esp+0C8h+var_A4]
0x979F73: fst     [esp+0C8h+var_A0]
0x979F77: fst     [esp+0C8h+var_9C]
0x979F7B: cmp     eax, [esp+0C8h+arg_18]
0x979F82: fstp    [esp+0C8h+var_98]
0x979F86: mov     [esp+0C8h+var_6C], ecx
0x979F8A: jg      loc_97A2BA
0x979F90: mov     edx, [esp+0C8h+arg_1C]
0x979F97: mov     eax, [edx+eax*4]
0x979F9A: lea     eax, [eax+eax*2]
0x979F9D: movzx   ecx, word ptr [ebp+eax*2+0]
0x979FA2: lea     ecx, [ecx+ecx*2]
0x979FA5: lea     ecx, [ebx+ecx*4]
0x979FA8: movzx   edx, word ptr [ebp+eax*2+2]
0x979FAD: fld     dword ptr [ecx]
0x979FAF: fsub    dword ptr [edi]
0x979FB1: add     eax, 1
0x979FB4: movzx   eax, word ptr [ebp+eax*2+2]
0x979FB9: fstp    [esp+0C8h+var_7C]
0x979FBD: fld     dword ptr [ecx+4]
0x979FC0: lea     eax, [eax+eax*2]
0x979FC3: fsub    dword ptr [edi+4]
0x979FC6: lea     eax, [ebx+eax*4]
0x979FC9: mov     [esp+0C8h+var_68], eax
0x979FCD: lea     edx, [edx+edx*2]
0x979FD0: fstp    [esp+0C8h+var_78]
0x979FD4: lea     edx, [ebx+edx*4]
0x979FD7: fld     dword ptr [ecx+8]
0x979FDA: fsub    dword ptr [edi+8]
0x979FDD: fstp    [esp+0C8h+var_74]
0x979FE1: fld     dword ptr [esi]
0x979FE3: fld     [esp+0C8h+var_7C]
0x979FE7: fld     st
0x979FE9: fmulp   st(2), st
0x979FEB: fld     [esp+0C8h+var_78]
0x979FEF: fld     st
0x979FF1: fmul    dword ptr [esi+4]
0x979FF4: faddp   st(3), st
0x979FF6: fld     [esp+0C8h+var_74]
0x979FFA: fld     st
0x979FFC: fmul    dword ptr [esi+8]
0x979FFF: faddp   st(4), st
0x97A001: fxch    st(3)
0x97A003: fstp    [esp+0C8h+var_94]
0x97A007: fld     dword ptr [esi+10h]
0x97A00A: fmul    st, st(1)
0x97A00C: fld     dword ptr [esi+0Ch]
0x97A00F: fmul    st, st(3)
0x97A011: faddp   st(1), st
0x97A013: fld     dword ptr [esi+14h]
0x97A016: fmul    st, st(4)
0x97A018: faddp   st(1), st
0x97A01A: fstp    [esp+0C8h+var_90]
0x97A01E: fmul    dword ptr [esi+1Ch]
0x97A021: fld     dword ptr [esi+18h]
0x97A024: fmulp   st(2), st
0x97A026: faddp   st(1), st
0x97A028: fld     dword ptr [esi+20h]
0x97A02B: fmulp   st(2), st
0x97A02D: faddp   st(1), st
0x97A02F: fstp    [esp+0C8h+var_8C]
0x97A033: fld     [esp+0C8h+var_94]
0x97A037: fld     [esp+0C8h+var_AC]
0x97A03B: fcomp   st(1)
0x97A03D: fnstsw  ax
0x97A03F: test    ah, 41h
0x97A042: jnz     short loc_97A04A
0x97A044: fstp    [esp+0C8h+var_AC]
0x97A048: jmp     short loc_97A05F
0x97A04A: fld     [esp+0C8h+var_A0]
0x97A04E: fcomp   st(1)
0x97A050: fnstsw  ax
0x97A052: test    ah, 5
0x97A055: jp      short loc_97A05D
0x97A057: fstp    [esp+0C8h+var_A0]
0x97A05B: jmp     short loc_97A05F
0x97A05D: fstp    st
0x97A05F: fld     [esp+0C8h+var_90]
0x97A063: fld     [esp+0C8h+var_A8]
0x97A067: fcomp   st(1)
0x97A069: fnstsw  ax
0x97A06B: test    ah, 41h
0x97A06E: jnz     short loc_97A076
0x97A070: fstp    [esp+0C8h+var_A8]
0x97A074: jmp     short loc_97A08B
0x97A076: fld     [esp+0C8h+var_9C]
0x97A07A: fcomp   st(1)
0x97A07C: fnstsw  ax
0x97A07E: test    ah, 5
0x97A081: jp      short loc_97A089
0x97A083: fstp    [esp+0C8h+var_9C]
0x97A087: jmp     short loc_97A08B
0x97A089: fstp    st
0x97A08B: fld     [esp+0C8h+var_8C]
0x97A08F: fld     [esp+0C8h+var_A4]
0x97A093: fcomp   st(1)
0x97A095: fnstsw  ax
0x97A097: test    ah, 41h
0x97A09A: jnz     short loc_97A0A2
0x97A09C: fstp    [esp+0C8h+var_A4]
0x97A0A0: jmp     short loc_97A0B7
0x97A0A2: fld     [esp+0C8h+var_98]
0x97A0A6: fcomp   st(1)
0x97A0A8: fnstsw  ax
0x97A0AA: test    ah, 5
0x97A0AD: jp      short loc_97A0B5
0x97A0AF: fstp    [esp+0C8h+var_98]
0x97A0B3: jmp     short loc_97A0B7
0x97A0B5: fstp    st
0x97A0B7: fld     dword ptr [edx]
0x97A0B9: fsub    dword ptr [edi]
0x97A0BB: fstp    [esp+0C8h+var_88]
0x97A0BF: fld     dword ptr [edx+4]
0x97A0C2: fsub    dword ptr [edi+4]
0x97A0C5: fstp    [esp+0C8h+var_84]
0x97A0C9: fld     dword ptr [edx+8]
0x97A0CC: fsub    dword ptr [edi+8]
0x97A0CF: fstp    [esp+0C8h+var_80]
0x97A0D3: fld     dword ptr [esi]
0x97A0D5: fld     [esp+0C8h+var_88]
0x97A0D9: fld     st
0x97A0DB: fmulp   st(2), st
0x97A0DD: fld     [esp+0C8h+var_84]
0x97A0E1: fld     st
0x97A0E3: fmul    dword ptr [esi+4]
0x97A0E6: faddp   st(3), st
0x97A0E8: fld     [esp+0C8h+var_80]
0x97A0EC: fld     st
0x97A0EE: fmul    dword ptr [esi+8]
0x97A0F1: faddp   st(4), st
0x97A0F3: fxch    st(3)
0x97A0F5: fstp    [esp+0C8h+var_94]
0x97A0F9: fld     dword ptr [esi+10h]
0x97A0FC: fmul    st, st(1)
0x97A0FE: fld     dword ptr [esi+0Ch]
0x97A101: fmul    st, st(3)
0x97A103: faddp   st(1), st
0x97A105: fld     dword ptr [esi+14h]
0x97A108: fmul    st, st(4)
0x97A10A: faddp   st(1), st
0x97A10C: fstp    [esp+0C8h+var_90]
0x97A110: fmul    dword ptr [esi+1Ch]
0x97A113: fld     dword ptr [esi+18h]
0x97A116: fmulp   st(2), st
0x97A118: faddp   st(1), st
0x97A11A: fld     dword ptr [esi+20h]
0x97A11D: fmulp   st(2), st
0x97A11F: faddp   st(1), st
0x97A121: fstp    [esp+0C8h+var_8C]
0x97A125: fld     [esp+0C8h+var_94]
0x97A129: fld     [esp+0C8h+var_AC]
0x97A12D: fcomp   st(1)
0x97A12F: fnstsw  ax
0x97A131: test    ah, 41h
0x97A134: jnz     short loc_97A13C
0x97A136: fstp    [esp+0C8h+var_AC]
0x97A13A: jmp     short loc_97A151
0x97A13C: fld     [esp+0C8h+var_A0]
0x97A140: fcomp   st(1)
0x97A142: fnstsw  ax
0x97A144: test    ah, 5
0x97A147: jp      short loc_97A14F
0x97A149: fstp    [esp+0C8h+var_A0]
0x97A14D: jmp     short loc_97A151
0x97A14F: fstp    st
0x97A151: fld     [esp+0C8h+var_90]
0x97A155: fld     [esp+0C8h+var_A8]
0x97A159: fcomp   st(1)
0x97A15B: fnstsw  ax
0x97A15D: test    ah, 41h
0x97A160: jnz     short loc_97A168
0x97A162: fstp    [esp+0C8h+var_A8]
0x97A166: jmp     short loc_97A17D
0x97A168: fld     [esp+0C8h+var_9C]
0x97A16C: fcomp   st(1)
0x97A16E: fnstsw  ax
0x97A170: test    ah, 5
0x97A173: jp      short loc_97A17B
0x97A175: fstp    [esp+0C8h+var_9C]
0x97A179: jmp     short loc_97A17D
0x97A17B: fstp    st
0x97A17D: fld     [esp+0C8h+var_8C]
0x97A181: fld     [esp+0C8h+var_A4]
0x97A185: fcomp   st(1)
0x97A187: fnstsw  ax
0x97A189: test    ah, 41h
0x97A18C: jnz     short loc_97A194
0x97A18E: fstp    [esp+0C8h+var_A4]
0x97A192: jmp     short loc_97A1A9
0x97A194: fld     [esp+0C8h+var_98]
0x97A198: fcomp   st(1)
0x97A19A: fnstsw  ax
0x97A19C: test    ah, 5
0x97A19F: jp      short loc_97A1A7
0x97A1A1: fstp    [esp+0C8h+var_98]
0x97A1A5: jmp     short loc_97A1A9
0x97A1A7: fstp    st
0x97A1A9: mov     eax, [esp+0C8h+var_68]
0x97A1AD: fld     dword ptr [eax]
0x97A1AF: fsub    dword ptr [edi]
0x97A1B1: fstp    [esp+0C8h+var_B8]
0x97A1B5: fld     dword ptr [eax+4]
0x97A1B8: fsub    dword ptr [edi+4]
0x97A1BB: fstp    [esp+0C8h+var_B4]
0x97A1BF: fld     dword ptr [eax+8]
0x97A1C2: fsub    dword ptr [edi+8]
0x97A1C5: fstp    [esp+0C8h+var_B0]
0x97A1C9: fld     dword ptr [esi]
0x97A1CB: fld     [esp+0C8h+var_B8]
0x97A1CF: fld     st
0x97A1D1: fmulp   st(2), st
0x97A1D3: fld     [esp+0C8h+var_B4]
0x97A1D7: fld     st
0x97A1D9: fmul    dword ptr [esi+4]
0x97A1DC: faddp   st(3), st
0x97A1DE: fld     [esp+0C8h+var_B0]
0x97A1E2: fld     st
0x97A1E4: fmul    dword ptr [esi+8]
0x97A1E7: faddp   st(4), st
0x97A1E9: fxch    st(3)
0x97A1EB: fstp    [esp+0C8h+var_94]
0x97A1EF: fld     dword ptr [esi+10h]
0x97A1F2: fmul    st, st(1)
0x97A1F4: fld     dword ptr [esi+0Ch]
0x97A1F7: fmul    st, st(3)
0x97A1F9: faddp   st(1), st
0x97A1FB: fld     dword ptr [esi+14h]
0x97A1FE: fmul    st, st(4)
0x97A200: faddp   st(1), st
0x97A202: fstp    [esp+0C8h+var_90]
0x97A206: fmul    dword ptr [esi+1Ch]
0x97A209: fld     dword ptr [esi+18h]
0x97A20C: fmulp   st(2), st
0x97A20E: faddp   st(1), st
0x97A210: fld     dword ptr [esi+20h]
0x97A213: fmulp   st(2), st
0x97A215: faddp   st(1), st
0x97A217: fstp    [esp+0C8h+var_8C]
0x97A21B: fld     [esp+0C8h+var_94]
0x97A21F: fld     [esp+0C8h+var_AC]
0x97A223: fcomp   st(1)
0x97A225: fnstsw  ax
0x97A227: test    ah, 41h
0x97A22A: jnz     short loc_97A232
0x97A22C: fstp    [esp+0C8h+var_AC]
0x97A230: jmp     short loc_97A247
0x97A232: fld     [esp+0C8h+var_A0]
0x97A236: fcomp   st(1)
0x97A238: fnstsw  ax
0x97A23A: test    ah, 5
0x97A23D: jp      short loc_97A245
0x97A23F: fstp    [esp+0C8h+var_A0]
0x97A243: jmp     short loc_97A247
0x97A245: fstp    st
0x97A247: fld     [esp+0C8h+var_90]
0x97A24B: fld     [esp+0C8h+var_A8]
0x97A24F: fcomp   st(1)
0x97A251: fnstsw  ax
0x97A253: test    ah, 41h
0x97A256: jnz     short loc_97A25E
0x97A258: fstp    [esp+0C8h+var_A8]
0x97A25C: jmp     short loc_97A273
0x97A25E: fld     [esp+0C8h+var_9C]
0x97A262: fcomp   st(1)
0x97A264: fnstsw  ax
0x97A266: test    ah, 5
0x97A269: jp      short loc_97A271
0x97A26B: fstp    [esp+0C8h+var_9C]
0x97A26F: jmp     short loc_97A273
0x97A271: fstp    st
0x97A273: fld     [esp+0C8h+var_8C]
0x97A277: fld     [esp+0C8h+var_A4]
0x97A27B: fcomp   st(1)
0x97A27D: fnstsw  ax
0x97A27F: test    ah, 41h
0x97A282: jnz     short loc_97A28A
0x97A284: fstp    [esp+0C8h+var_A4]
0x97A288: jmp     short loc_97A29F
0x97A28A: fld     [esp+0C8h+var_98]
0x97A28E: fcomp   st(1)
0x97A290: fnstsw  ax
0x97A292: test    ah, 5
0x97A295: jp      short loc_97A29D
0x97A297: fstp    [esp+0C8h+var_98]
0x97A29B: jmp     short loc_97A29F
0x97A29D: fstp    st
0x97A29F: mov     eax, [esp+0C8h+var_6C]
0x97A2A3: add     eax, 1
0x97A2A6: mov     [esp+0C8h+var_6C], eax
0x97A2AA: movzx   eax, ax
0x97A2AD: cmp     eax, [esp+0C8h+arg_18]
0x97A2B4: jle     loc_979F90
0x97A2BA: fld     [esp+0C8h+var_A0]
0x97A2BE: mov     ebx, [esp+0C8h+var_70]
0x97A2C2: fld     st
0x97A2C4: fld     [esp+0C8h+var_AC]
0x97A2C8: fld     st
0x97A2CA: fsubp   st(2), st
0x97A2CC: fxch    st(1)
0x97A2CE: fstp    [esp+0C8h+var_B8]
0x97A2D2: fld     [esp+0C8h+var_9C]
0x97A2D6: fld     st
0x97A2D8: fld     [esp+0C8h+var_A8]
0x97A2DC: fld     st
0x97A2DE: fsubp   st(2), st
0x97A2E0: fxch    st(1)
0x97A2E2: fstp    [esp+0C8h+var_B4]
0x97A2E6: fld     [esp+0C8h+var_98]
0x97A2EA: fld     st
0x97A2EC: fld     [esp+0C8h+var_A4]
0x97A2F0: fld     st
0x97A2F2: fsubp   st(2), st
0x97A2F4: fxch    st(1)
0x97A2F6: fstp    [esp+0C8h+var_B0]
0x97A2FA: fld     [esp+0C8h+var_B8]
0x97A2FE: fld     qword ptr ds:0A2FAA0h
0x97A304: fmul    st(1), st
0x97A306: fxch    st(1)
0x97A308: fstp    [esp+0C8h+var_88]
0x97A30C: fld     [esp+0C8h+var_B4]
0x97A310: fmul    st, st(1)
0x97A312: fstp    [esp+0C8h+var_84]
0x97A316: fld     [esp+0C8h+var_B0]
0x97A31A: fmul    st, st(1)
0x97A31C: fstp    [esp+0C8h+var_80]
0x97A320: fld     [esp+0C8h+var_88]
0x97A324: fstp    dword ptr [ebx+34h]
0x97A327: fld     [esp+0C8h+var_84]
0x97A32B: fstp    dword ptr [ebx+38h]
0x97A32E: fld     [esp+0C8h+var_80]
0x97A332: fstp    dword ptr [ebx+3Ch]
0x97A335: fxch    st(6)
0x97A337: faddp   st(5), st
0x97A339: fxch    st(4)
0x97A33B: fstp    [esp+0C8h+var_B8]
0x97A33F: fxch    st(2)
0x97A341: faddp   st(1), st
0x97A343: fstp    [esp+0C8h+var_B4]
0x97A347: faddp   st(1), st
0x97A349: fstp    [esp+0C8h+var_B0]
0x97A34D: fld     [esp+0C8h+var_B8]
0x97A351: fmul    st, st(1)
0x97A353: fstp    [esp+0C8h+var_7C]
0x97A357: fld     [esp+0C8h+var_B4]
0x97A35B: fmul    st, st(1)
0x97A35D: fstp    [esp+0C8h+var_78]
0x97A361: fmul    [esp+0C8h+var_B0]
0x97A365: fstp    [esp+0C8h+var_70]
0x97A369: fld     dword ptr [esi+18h]
0x97A36C: fld     [esp+0C8h+var_70]
0x97A370: fld     st
0x97A372: fmulp   st(2), st
0x97A374: fxch    st(1)
0x97A376: fstp    [esp+0C8h+var_AC]
0x97A37A: fld     dword ptr [esi+1Ch]
0x97A37D: fmul    st, st(1)
0x97A37F: fstp    [esp+0C8h+var_A8]
0x97A383: fmul    dword ptr [esi+20h]
0x97A386: fstp    [esp+0C8h+var_A4]
0x97A38A: fld     dword ptr [esi+0Ch]
0x97A38D: fld     [esp+0C8h+var_78]
0x97A391: fld     st
0x97A393: fmulp   st(2), st
0x97A395: fxch    st(1)
0x97A397: fstp    [esp+0C8h+var_88]
0x97A39B: fld     dword ptr [esi+10h]
0x97A39E: fmul    st, st(1)
0x97A3A0: fstp    [esp+0C8h+var_84]
0x97A3A4: fmul    dword ptr [esi+14h]
0x97A3A7: fstp    [esp+0C8h+var_80]
0x97A3AB: fld     dword ptr [esi]
0x97A3AD: fld     [esp+0C8h+var_7C]
0x97A3B1: fld     st
0x97A3B3: fmulp   st(2), st
0x97A3B5: lea     ecx, [esp+0C8h+var_34]
0x97A3BC: fxch    st(1)
0x97A3BE: fstp    [esp+0C8h+var_B8]
0x97A3C2: fld     dword ptr [esi+4]
0x97A3C5: fmul    st, st(1)
0x97A3C7: fstp    [esp+0C8h+var_B4]
0x97A3CB: fmul    dword ptr [esi+8]
0x97A3CE: fstp    [esp+0C8h+var_B0]
0x97A3D2: fld     [esp+0C8h+var_B8]
0x97A3D6: fadd    [esp+0C8h+var_88]
0x97A3DA: fstp    [esp+0C8h+var_7C]
0x97A3DE: fld     [esp+0C8h+var_B4]
0x97A3E2: fadd    [esp+0C8h+var_84]
0x97A3E6: fstp    [esp+0C8h+var_78]
0x97A3EA: fld     [esp+0C8h+var_B0]
0x97A3EE: fadd    [esp+0C8h+var_80]
0x97A3F2: fstp    [esp+0C8h+var_74]
0x97A3F6: fld     [esp+0C8h+var_7C]
0x97A3FA: fadd    [esp+0C8h+var_AC]
0x97A3FE: fstp    [esp+0C8h+var_B8]
0x97A402: fld     [esp+0C8h+var_78]
0x97A406: fadd    [esp+0C8h+var_A8]
0x97A40A: fstp    [esp+0C8h+var_B4]
0x97A40E: fld     [esp+0C8h+var_74]
0x97A412: fadd    [esp+0C8h+var_A4]
0x97A416: fstp    [esp+0C8h+var_B0]
0x97A41A: fld     [esp+0C8h+var_B8]
0x97A41E: fadd    dword ptr [edi]
0x97A420: fstp    dword ptr [edi]
0x97A422: fld     [esp+0C8h+var_B4]
0x97A426: fadd    dword ptr [edi+4]
0x97A429: fstp    dword ptr [edi+4]
0x97A42C: fld     dword ptr [edi+8]
0x97A42F: fadd    [esp+0C8h+var_B0]
0x97A433: fstp    dword ptr [edi+8]
0x97A436: call    sub_718A50
0x97A43B: lea     ecx, [esp+0C8h+var_34]
0x97A442: push    ecx
0x97A443: mov     ecx, edi
0x97A445: call    sub_97AEC0
0x97A44A: mov     edx, [esp+0C8h+arg_0]
0x97A451: pop     edi
0x97A452: pop     esi
0x97A453: pop     ebp
0x97A454: mov     [ebx+7Ch], edx
0x97A457: pop     ebx
0x97A458: add     esp, 0B8h
0x97A45E: retn    20h ; ' '
