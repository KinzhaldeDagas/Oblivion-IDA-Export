0x89F150: push    ebp
0x89F151: mov     ebp, esp
0x89F153: and     esp, 0FFFFFFF0h
0x89F156: sub     esp, 74h
0x89F159: mov     eax, ds:0B30AACh
0x89F15E: xor     eax, esp
0x89F160: mov     [esp+74h+var_4], eax
0x89F164: push    ebx
0x89F165: mov     ebx, [ecx+10h]
0x89F168: test    ebx, ebx
0x89F16A: push    esi
0x89F16B: push    edi
0x89F16C: jz      loc_89F27E
0x89F172: cmp     dword ptr [ebx+8], 0
0x89F176: jz      loc_89F27E
0x89F17C: call    sub_452A60
0x89F181: test    eax, eax
0x89F183: jz      loc_89F27E
0x89F189: lea     esi, [eax+64h]
0x89F18C: mov     ecx, 0Dh
0x89F191: lea     edi, [esp+80h+var_74]
0x89F195: rep movsd
0x89F197: mov     ecx, [ebx+8]
0x89F19A: test    ecx, ecx
0x89F19C: jz      short loc_89F1AA
0x89F19E: mov     eax, [ecx]
0x89F1A0: mov     eax, [eax+14h]
0x89F1A3: lea     edx, [esp+80h+var_30]
0x89F1A7: push    edx
0x89F1A8: call    eax
0x89F1AA: fld     [esp+80h+var_50]
0x89F1AE: movaps  xmm2, [esp+80h+var_30]
0x89F1B3: fld     qword ptr ds:0A39088h
0x89F1B9: movss   xmm1, dword ptr ds:0A3D65Ch
0x89F1C1: fmul    st(1), st
0x89F1C3: xorps   xmm0, xmm0
0x89F1C6: fxch    st(1)
0x89F1C8: movss   xmm0, xmm1
0x89F1CC: movaps  xmm1, [esp+80h+anonymous_0]
0x89F1D1: fstp    [esp+80h+var_44+4]
0x89F1D5: subps   xmm1, xmm2
0x89F1D8: fld     [esp+80h+var_4C]
0x89F1DC: movss   xmm2, dword ptr ds:0A30634h
0x89F1E4: fmul    st, st(1)
0x89F1E6: shufps  xmm0, xmm0, 0
0x89F1EA: mulps   xmm0, xmm1
0x89F1ED: xorps   xmm1, xmm1
0x89F1F0: fstp    [esp+80h+var_44+8]
0x89F1F4: movss   xmm1, xmm2
0x89F1F8: movaps  xmm2, xmm1
0x89F1FB: fmul    [esp+80h+var_48]
0x89F1FF: shufps  xmm2, xmm1, 0
0x89F203: mulps   xmm2, xmm0
0x89F206: push    offset stru_BA7B00; lpCriticalSection
0x89F20B: fstp    [esp+84h+var_44+0Ch]
0x89F20F: movaps  xmm1, xmmword ptr [esp+84h+var_44+4]
0x89F214: addps   xmm2, xmm1
0x89F217: addps   xmm1, xmm0
0x89F21A: movaps  [esp+84h+var_30], xmm2
0x89F21F: movaps  [esp+84h+anonymous_0], xmm1
0x89F224: call    dword ptr ds:0A2806Ch
0x89F22A: call    dword ptr ds:0A2808Ch
0x89F230: mov     edi, 1
0x89F235: add     ds:0BA7B7Ch, edi
0x89F23B: mov     ds:0BA7B78h, eax
0x89F240: mov     esi, [ebx+8]
0x89F243: test    esi, esi
0x89F245: jz      short loc_89F261
0x89F247: mov     ecx, ebx
0x89F249: call    sub_89F570
0x89F24E: lea     ecx, [esp+80h+var_30]
0x89F252: push    ecx
0x89F253: mov     ecx, esi
0x89F255: call    sub_8CD9D0
0x89F25A: mov     ecx, ebx
0x89F25C: call    sub_89F570
0x89F261: sub     ds:0BA7B7Ch, edi
0x89F267: jnz     short loc_89F273
0x89F269: mov     dword ptr ds:0BA7B78h, 0
0x89F273: push    offset stru_BA7B00; lpCriticalSection
0x89F278: call    dword ptr ds:0A28074h
0x89F27E: mov     ecx, [esp+80h+var_4]
0x89F282: pop     edi
0x89F283: pop     esi
0x89F284: pop     ebx
0x89F285: xor     ecx, esp
0x89F287: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89F28C: mov     esp, ebp
0x89F28E: pop     ebp
0x89F28F: retn
