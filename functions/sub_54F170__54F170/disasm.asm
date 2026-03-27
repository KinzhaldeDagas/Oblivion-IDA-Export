0x54F170: push    ebp
0x54F171: mov     ebp, esp
0x54F173: and     esp, 0FFFFFFF8h
0x54F176: sub     esp, 14h
0x54F179: push    ebx
0x54F17A: mov     ebx, [ebp+arg_4]
0x54F17D: test    ebx, ebx
0x54F17F: push    esi
0x54F180: push    edi
0x54F181: mov     esi, ecx
0x54F183: jz      short loc_54F198
0x54F185: mov     eax, [ebx]
0x54F187: mov     edx, [eax+40h]
0x54F18A: mov     ecx, ebx
0x54F18C: call    edx
0x54F18E: test    al, al
0x54F190: jz      short loc_54F198
0x54F192: mov     [esp+20h+var_10], ebx
0x54F196: jmp     short loc_54F1A4
0x54F198: mov     [esp+20h+var_10], 0
0x54F1A0: mov     ebx, [esp+20h+var_10]
0x54F1A4: fldz
0x54F1A6: fcomp   [ebp+arg_0]
0x54F1A9: fnstsw  ax
0x54F1AB: test    ah, 1
0x54F1AE: jz      loc_54F31F
0x54F1B4: test    ebx, ebx
0x54F1B6: jz      loc_54F31F
0x54F1BC: mov     eax, [ebx]
0x54F1BE: mov     edx, [eax+4]
0x54F1C1: mov     ecx, ebx
0x54F1C3: call    edx
0x54F1C5: mov     edi, eax
0x54F1C7: mov     eax, [esi]
0x54F1C9: mov     edx, [eax+4]
0x54F1CC: mov     ecx, esi
0x54F1CE: call    edx
0x54F1D0: cmp     edi, eax
0x54F1D2: jnz     loc_54F31F
0x54F1D8: mov     eax, [ebx]
0x54F1DA: mov     edx, [eax+50h]
0x54F1DD: mov     ecx, ebx
0x54F1DF: call    edx
0x54F1E1: mov     edi, eax
0x54F1E3: mov     eax, [esi]
0x54F1E5: mov     edx, [eax+50h]
0x54F1E8: mov     ecx, esi
0x54F1EA: call    edx
0x54F1EC: cmp     edi, eax
0x54F1EE: jnz     loc_54F31F
0x54F1F4: mov     eax, [esi]
0x54F1F6: mov     edx, [eax+2Ch]
0x54F1F9: push    ebx
0x54F1FA: mov     ecx, esi
0x54F1FC: call    edx
0x54F1FE: test    al, al
0x54F200: jz      loc_54F31F
0x54F206: mov     ecx, [ebp+arg_4]
0x54F209: mov     eax, [ecx]
0x54F20B: mov     edx, [eax+30h]
0x54F20E: call    edx
0x54F210: fstp    dword ptr [esp+20h+var_C]
0x54F214: call    sub_54E9B0
0x54F219: fmul    dword ptr [esp+20h+var_C]
0x54F21D: fstp    [esp+20h+var_C+4]
0x54F221: call    sub_54E980
0x54F226: fadd    [esp+20h+var_C+4]
0x54F22A: mov     eax, [esi]
0x54F22C: mov     edx, [eax+50h]
0x54F22F: mov     ecx, esi
0x54F231: fmul    [ebp+arg_0]
0x54F234: xor     edi, edi
0x54F236: fstp    dword ptr [esp+20h+var_C]
0x54F23A: call    edx
0x54F23C: test    eax, eax
0x54F23E: jbe     loc_54F314
0x54F244: mov     eax, [esi]
0x54F246: mov     edx, [eax+54h]
0x54F249: push    edi
0x54F24A: mov     ecx, esi
0x54F24C: call    edx
0x54F24E: test    al, al
0x54F250: jz      loc_54F300
0x54F256: mov     eax, [ebx]
0x54F258: mov     edx, [eax+48h]
0x54F25B: push    edi
0x54F25C: mov     ecx, ebx
0x54F25E: call    edx
0x54F260: fstp    [esp+20h+var_C+4]
0x54F264: mov     eax, [esi]
0x54F266: mov     edx, [eax+48h]
0x54F269: push    edi
0x54F26A: mov     ecx, esi
0x54F26C: call    edx
0x54F26E: fsubr   [esp+20h+var_C+4]
0x54F272: fstp    dword ptr [esp+20h+var_C+4]
0x54F276: fld     dword ptr [esp+20h+var_C+4]
0x54F27A: fld     st
0x54F27C: fabs
0x54F27E: fstp    dword ptr [esp+20h+var_C+4]
0x54F282: fld     dword ptr [esp+20h+var_C+4]
0x54F286: fld     dword ptr [esp+20h+var_C]
0x54F28A: fcompp
0x54F28C: fnstsw  ax
0x54F28E: test    ah, 41h
0x54F291: jnz     short loc_54F2AA
0x54F293: mov     ecx, [esp+20h+var_10]
0x54F297: fstp    st
0x54F299: mov     eax, [ecx]
0x54F29B: mov     ebx, [esi]
0x54F29D: mov     edx, [eax+48h]
0x54F2A0: push    edi
0x54F2A1: add     ebx, 4Ch ; 'L'
0x54F2A4: call    edx
0x54F2A6: mov     eax, [ebx]
0x54F2A8: jmp     short loc_54F2F3
0x54F2AA: fldz
0x54F2AC: fcom    st(1)
0x54F2AE: fnstsw  ax
0x54F2B0: test    ah, 41h
0x54F2B3: jnz     short loc_54F2D1
0x54F2B5: mov     ebx, [esi]
0x54F2B7: fstp    st
0x54F2B9: mov     edx, [ebx+48h]
0x54F2BC: fstp    st
0x54F2BE: push    edi
0x54F2BF: mov     ecx, esi
0x54F2C1: call    edx
0x54F2C3: fsub    dword ptr [esp+20h+var_C]
0x54F2C7: fstp    dword ptr [esp+20h+var_C+4]
0x54F2CB: fld     dword ptr [esp+20h+var_C+4]
0x54F2CF: jmp     short loc_54F2F0
0x54F2D1: fcompp
0x54F2D3: fnstsw  ax
0x54F2D5: test    ah, 5
0x54F2D8: jp      short loc_54F300
0x54F2DA: mov     ebx, [esi]
0x54F2DC: mov     edx, [ebx+48h]
0x54F2DF: push    edi
0x54F2E0: mov     ecx, esi
0x54F2E2: call    edx
0x54F2E4: fadd    dword ptr [esp+20h+var_C]
0x54F2E8: fstp    dword ptr [esp+20h+var_C+4]
0x54F2EC: fld     dword ptr [esp+20h+var_C+4]
0x54F2F0: mov     eax, [ebx+4Ch]
0x54F2F3: push    ecx
0x54F2F4: fstp    [esp+24h+var_24]
0x54F2F7: push    edi
0x54F2F8: mov     ecx, esi
0x54F2FA: call    eax
0x54F2FC: mov     ebx, [esp+20h+var_10]
0x54F300: mov     edx, [esi]
0x54F302: mov     eax, [edx+50h]
0x54F305: mov     ecx, esi
0x54F307: add     edi, 1
0x54F30A: call    eax
0x54F30C: cmp     edi, eax
0x54F30E: jb      loc_54F244
0x54F314: mov     al, 1
0x54F316: pop     edi
0x54F317: pop     esi
0x54F318: pop     ebx
0x54F319: mov     esp, ebp
0x54F31B: pop     ebp
0x54F31C: retn    8
0x54F31F: pop     edi
0x54F320: pop     esi
0x54F321: xor     al, al
0x54F323: pop     ebx
0x54F324: mov     esp, ebp
0x54F326: pop     ebp
0x54F327: retn    8
