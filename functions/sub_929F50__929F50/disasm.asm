0x929F50: push    ebp
0x929F51: mov     ebp, esp
0x929F53: and     esp, 0FFFFFFF0h
0x929F56: sub     esp, 84h
0x929F5C: push    ebx
0x929F5D: mov     ebx, [ebp+arg_8]
0x929F60: mov     eax, 7F7FFFFFh
0x929F65: mov     [ebx], eax
0x929F67: mov     [ebx+4], eax
0x929F6A: mov     [ebx+8], eax
0x929F6D: push    esi
0x929F6E: xor     esi, esi
0x929F70: mov     [ebx+0Ch], esi
0x929F73: mov     eax, 0FF7FFFFFh
0x929F78: mov     [ebx+10h], eax
0x929F7B: mov     [ebx+14h], eax
0x929F7E: mov     [ebx+18h], eax
0x929F81: mov     [ebx+1Ch], esi
0x929F84: cmp     [ecx+28h], esi
0x929F87: push    edi
0x929F88: mov     [esp+90h+var_78], ecx
0x929F8C: mov     [esp+90h+var_64], esi
0x929F90: jle     loc_92A14F
0x929F96: mov     [esp+90h+var_6C], esi
0x929F9A: lea     ebx, [ebx+0]
0x929FA0: mov     eax, [ecx+24h]
0x929FA3: mov     edi, [esp+90h+var_6C]
0x929FA7: mov     edx, [eax+edi+18h]
0x929FAB: add     eax, edi
0x929FAD: cmp     edx, esi
0x929FAF: mov     [esp+90h+var_68], eax
0x929FB3: mov     [esp+90h+var_70], esi
0x929FB7: jle     loc_92A130
0x929FBD: jmp     short loc_929FC7
0x929FBF: mov     esi, [esp+90h+var_70]
0x929FC3: mov     eax, [esp+90h+var_68]
0x929FC7: mov     edx, [eax+14h]
0x929FCA: mov     edi, [eax+0Ch]
0x929FCD: imul    edx, esi
0x929FD0: mov     cl, [eax+10h]
0x929FD3: add     edx, edi
0x929FD5: mov     edi, [eax]
0x929FD7: cmp     cl, 1
0x929FDA: mov     ecx, [eax+4]
0x929FDD: mov     [esp+90h+var_74], edi
0x929FE1: jnz     short loc_929FFA
0x929FE3: movzx   eax, word ptr [edx]
0x929FE6: movzx   esi, word ptr [edx+2]
0x929FEA: imul    eax, ecx
0x929FED: imul    esi, ecx
0x929FF0: add     eax, edi
0x929FF2: add     esi, edi
0x929FF4: movzx   edi, word ptr [edx+4]
0x929FF8: jmp     short loc_92A00C
0x929FFA: mov     eax, [edx]
0x929FFC: mov     esi, [edx+4]
0x929FFF: imul    eax, ecx
0x92A002: imul    esi, ecx
0x92A005: add     eax, edi
0x92A007: add     esi, edi
0x92A009: mov     edi, [edx+8]
0x92A00C: fld     dword ptr [eax]
0x92A00E: imul    edi, ecx
0x92A011: add     edi, [esp+90h+var_74]
0x92A015: mov     ecx, [esp+90h+var_78]
0x92A019: mov     [esp+90h+var_54], 0
0x92A021: fmul    dword ptr [ecx+10h]
0x92A024: fstp    [esp+90h+var_60]
0x92A028: fld     dword ptr [ecx+14h]
0x92A02B: fmul    dword ptr [eax+4]
0x92A02E: fstp    [esp+90h+var_5C]
0x92A032: fld     dword ptr [ecx+18h]
0x92A035: mov     ecx, [ebp+arg_0]
0x92A038: fmul    dword ptr [eax+8]
0x92A03B: lea     eax, [esp+90h+var_60]
0x92A03F: push    eax
0x92A040: push    ecx
0x92A041: lea     ecx, [esp+98h+var_30]
0x92A045: fstp    [esp+98h+var_58]
0x92A049: call    sub_88FCC0
0x92A04E: movaps  xmm0, [esp+90h+var_30]
0x92A053: movaps  xmm1, xmmword ptr [ebx]
0x92A056: mov     eax, [esp+90h+var_78]
0x92A05A: minps   xmm1, xmm0
0x92A05D: movaps  xmmword ptr [ebx], xmm1
0x92A060: movaps  xmm1, xmmword ptr [ebx+10h]
0x92A064: maxps   xmm1, xmm0
0x92A067: movaps  xmmword ptr [ebx+10h], xmm1
0x92A06B: fld     dword ptr [esi]
0x92A06D: fmul    dword ptr [eax+10h]
0x92A070: lea     edx, [esp+90h+var_50]
0x92A074: push    edx
0x92A075: lea     ecx, [esp+94h+var_20]
0x92A079: fstp    [esp+94h+var_50]
0x92A07D: mov     [esp+94h+var_44], 0
0x92A085: fld     dword ptr [eax+14h]
0x92A088: fmul    dword ptr [esi+4]
0x92A08B: fstp    [esp+94h+var_4C]
0x92A08F: fld     dword ptr [eax+18h]
0x92A092: fmul    dword ptr [esi+8]
0x92A095: mov     esi, [ebp+arg_0]
0x92A098: push    esi
0x92A099: fstp    [esp+98h+var_48]
0x92A09D: call    sub_88FCC0
0x92A0A2: movaps  xmm0, [esp+90h+var_20]
0x92A0A7: movaps  xmm1, xmmword ptr [ebx]
0x92A0AA: mov     eax, [esp+90h+var_78]
0x92A0AE: minps   xmm1, xmm0
0x92A0B1: movaps  xmmword ptr [ebx], xmm1
0x92A0B4: movaps  xmm1, xmmword ptr [ebx+10h]
0x92A0B8: maxps   xmm1, xmm0
0x92A0BB: movaps  xmmword ptr [ebx+10h], xmm1
0x92A0BF: fld     dword ptr [edi]
0x92A0C1: fmul    dword ptr [eax+10h]
0x92A0C4: lea     ecx, [esp+90h+var_10]
0x92A0CB: mov     [esp+90h+var_34], 0
0x92A0D3: fstp    [esp+90h+var_40]
0x92A0D7: fld     dword ptr [edi+4]
0x92A0DA: fmul    dword ptr [eax+14h]
0x92A0DD: fstp    [esp+90h+var_3C]
0x92A0E1: fld     dword ptr [edi+8]
0x92A0E4: fmul    dword ptr [eax+18h]
0x92A0E7: lea     eax, [esp+90h+var_40]
0x92A0EB: push    eax
0x92A0EC: push    esi
0x92A0ED: fstp    [esp+98h+var_38]
0x92A0F1: call    sub_88FCC0
0x92A0F6: movaps  xmm0, [esp+90h+var_10]
0x92A0FE: movaps  xmm1, xmmword ptr [ebx]
0x92A101: mov     eax, [esp+90h+var_70]
0x92A105: mov     ecx, [esp+90h+var_68]
0x92A109: minps   xmm1, xmm0
0x92A10C: movaps  xmmword ptr [ebx], xmm1
0x92A10F: movaps  xmm1, xmmword ptr [ebx+10h]
0x92A113: maxps   xmm1, xmm0
0x92A116: movaps  xmmword ptr [ebx+10h], xmm1
0x92A11A: mov     edx, [ecx+18h]
0x92A11D: inc     eax
0x92A11E: cmp     eax, edx
0x92A120: mov     [esp+90h+var_70], eax
0x92A124: jl      loc_929FBF
0x92A12A: mov     ecx, [esp+90h+var_78]
0x92A12E: xor     esi, esi
0x92A130: mov     eax, [esp+90h+var_64]
0x92A134: mov     edi, [esp+90h+var_6C]
0x92A138: mov     edx, [ecx+28h]
0x92A13B: inc     eax
0x92A13C: add     edi, 30h ; '0'
0x92A13F: cmp     eax, edx
0x92A141: mov     [esp+90h+var_64], eax
0x92A145: mov     [esp+90h+var_6C], edi
0x92A149: jl      loc_929FA0
0x92A14F: fld     [ebp+arg_4]
0x92A152: movaps  xmm1, xmmword ptr [ebx]
0x92A155: fadd    dword ptr [ecx+30h]
0x92A158: pop     edi
0x92A159: pop     esi
0x92A15A: fstp    [esp+88h+var_64]
0x92A15E: movss   xmm0, [esp+88h+var_64]
0x92A164: shufps  xmm0, xmm0, 0
0x92A168: subps   xmm1, xmm0
0x92A16B: movaps  xmmword ptr [ebx], xmm1
0x92A16E: movaps  xmm1, xmmword ptr [ebx+10h]
0x92A172: addps   xmm1, xmm0
0x92A175: movaps  xmmword ptr [ebx+10h], xmm1
0x92A179: pop     ebx
0x92A17A: mov     esp, ebp
0x92A17C: pop     ebp
0x92A17D: retn    0Ch
