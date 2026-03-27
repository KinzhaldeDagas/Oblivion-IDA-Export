0x47F1A0: push    0FFFFFFFFh
0x47F1A2: push    offset SEH_47F1A0
0x47F1A7: mov     eax, large fs:0
0x47F1AD: push    eax
0x47F1AE: sub     esp, 10h
0x47F1B1: push    ebx
0x47F1B2: push    ebp
0x47F1B3: push    esi
0x47F1B4: push    edi
0x47F1B5: mov     eax, ds:0B30AACh
0x47F1BA: xor     eax, esp
0x47F1BC: push    eax
0x47F1BD: lea     eax, [esp+30h+var_C]
0x47F1C1: mov     large fs:0, eax
0x47F1C7: push    30h ; '0'; Size
0x47F1C9: call    FormHeapAlloc
0x47F1CE: push    40h ; '@'; Size
0x47F1D0: mov     esi, eax
0x47F1D2: call    FormHeapAlloc
0x47F1D7: mov     edi, eax
0x47F1D9: add     esp, 8
0x47F1DC: mov     [esp+30h+var_1C], edi
0x47F1E0: test    edi, edi
0x47F1E2: mov     [esp+30h+var_4], 0
0x47F1EA: jz      short loc_47F1FF
0x47F1EC: push    offset sub_47EA50
0x47F1F1: push    4
0x47F1F3: push    10h
0x47F1F5: push    edi
0x47F1F6: call    sub_401080
0x47F1FB: mov     ebx, edi
0x47F1FD: jmp     short loc_47F201
0x47F1FF: xor     ebx, ebx
0x47F201: push    4; Size
0x47F203: mov     [esp+34h+var_4], 0FFFFFFFFh
0x47F20B: call    FormHeapAlloc
0x47F210: fld     [esp+34h+arg_0]
0x47F214: fld     st
0x47F216: mov     edi, eax
0x47F218: fchs
0x47F21A: add     esp, 4
0x47F21D: fstp    [esp+30h+arg_0]
0x47F221: fld     [esp+30h+arg_0]
0x47F225: fst     [esp+30h+var_18]
0x47F229: mov     eax, [esp+30h+var_18]
0x47F22D: fst     [esp+30h+var_14]
0x47F231: mov     ecx, [esp+30h+var_14]
0x47F235: fldz
0x47F237: mov     [esi], eax
0x47F239: fst     [esp+30h+var_10]
0x47F23D: mov     [esi+4], ecx
0x47F240: mov     edx, [esp+30h+var_10]
0x47F244: fxch    st(1)
0x47F246: fst     [esp+30h+var_18]
0x47F24A: mov     [esi+8], edx
0x47F24D: mov     eax, [esp+30h+var_18]
0x47F251: fxch    st(2)
0x47F253: fst     [esp+30h+var_14]
0x47F257: mov     [esi+0Ch], eax
0x47F25A: mov     ecx, [esp+30h+var_14]
0x47F25E: fxch    st(1)
0x47F260: fst     [esp+30h+var_10]
0x47F264: mov     [esi+10h], ecx
0x47F267: mov     edx, [esp+30h+var_10]
0x47F26B: fxch    st(1)
0x47F26D: fst     [esp+30h+var_18]
0x47F271: mov     [esi+14h], edx
0x47F274: mov     eax, [esp+30h+var_18]
0x47F278: fst     [esp+30h+var_14]
0x47F27C: mov     ecx, [esp+30h+var_14]
0x47F280: fxch    st(1)
0x47F282: fst     [esp+30h+var_10]
0x47F286: mov     [esi+18h], eax
0x47F289: mov     edx, [esp+30h+var_10]
0x47F28D: fxch    st(1)
0x47F28F: fstp    [esp+30h+var_18]
0x47F293: mov     [esi+1Ch], ecx
0x47F296: mov     eax, [esp+30h+var_18]
0x47F29A: fxch    st(1)
0x47F29C: fstp    [esp+30h+var_14]
0x47F2A0: mov     [esi+20h], edx
0x47F2A3: mov     ecx, [esp+30h+var_14]
0x47F2A7: mov     [esi+24h], eax
0x47F2AA: fstp    [esp+30h+var_10]
0x47F2AE: mov     edx, [esp+30h+var_10]
0x47F2B2: mov     [esi+28h], ecx
0x47F2B5: mov     ecx, [esp+30h+arg_4]
0x47F2B9: mov     [esi+2Ch], edx
0x47F2BC: xor     edx, edx
0x47F2BE: mov     eax, ebx
0x47F2C0: mov     ebp, [ecx]
0x47F2C2: mov     [eax], ebp
0x47F2C4: mov     ebp, [ecx+4]
0x47F2C7: mov     [eax+4], ebp
0x47F2CA: mov     ebp, [ecx+8]
0x47F2CD: mov     [eax+8], ebp
0x47F2D0: mov     ebp, [ecx+0Ch]
0x47F2D3: mov     [eax+0Ch], ebp
0x47F2D6: mov     byte ptr [edx+edi], 1
0x47F2DA: add     edx, 1
0x47F2DD: add     eax, 10h
0x47F2E0: cmp     edx, 4
0x47F2E3: jl      short loc_47F2C0
0x47F2E5: push    0C0h ; 'À'; Size
0x47F2EA: call    FormHeapAlloc
0x47F2EF: add     esp, 4
0x47F2F2: mov     [esp+30h+arg_0], eax
0x47F2F6: test    eax, eax
0x47F2F8: mov     [esp+30h+var_4], 1
0x47F300: jz      short loc_47F328
0x47F302: push    edi
0x47F303: push    0
0x47F305: push    0
0x47F307: push    0
0x47F309: push    ebx
0x47F30A: push    esi
0x47F30B: push    4
0x47F30D: mov     ecx, eax
0x47F30F: call    sub_7177E0
0x47F314: mov     ecx, [esp+30h+var_C]
0x47F318: mov     large fs:0, ecx
0x47F31F: pop     ecx
0x47F320: pop     edi
0x47F321: pop     esi
0x47F322: pop     ebp
0x47F323: pop     ebx
0x47F324: add     esp, 1Ch
0x47F327: retn
0x47F328: xor     eax, eax
0x47F32A: mov     ecx, [esp+30h+var_C]
0x47F32E: mov     large fs:0, ecx
0x47F335: pop     ecx
0x47F336: pop     edi
0x47F337: pop     esi
0x47F338: pop     ebp
0x47F339: pop     ebx
0x47F33A: add     esp, 1Ch
0x47F33D: retn
