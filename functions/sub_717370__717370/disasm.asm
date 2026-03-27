0x717370: push    ebp
0x717371: mov     ebp, esp
0x717373: sub     esp, 8
0x717376: mov     eax, [ebp+arg_C]
0x717379: mov     [ebp+var_4], eax
0x71737C: mov     [ebp+var_8], 0
0x717383: jmp     short loc_7173A0
0x717385: mov     ecx, [ebp+var_8]
0x717388: add     ecx, 1
0x71738B: mov     [ebp+var_8], ecx
0x71738E: mov     edx, [ebp+arg_4]
0x717391: add     edx, 0Ch
0x717394: mov     [ebp+arg_4], edx
0x717397: mov     eax, [ebp+arg_8]
0x71739A: add     eax, 0Ch
0x71739D: mov     [ebp+arg_8], eax
0x7173A0: movzx   ecx, [ebp+arg_0]
0x7173A4: cmp     [ebp+var_8], ecx
0x7173A7: jnb     loc_717437
0x7173AD: mov     edx, [ebp+var_4]
0x7173B0: fld     dword ptr [edx]
0x7173B2: mov     eax, [ebp+arg_4]
0x7173B5: fmul    dword ptr [eax]
0x7173B7: mov     ecx, [ebp+arg_4]
0x7173BA: fld     dword ptr [ecx+4]
0x7173BD: mov     edx, [ebp+var_4]
0x7173C0: fmul    dword ptr [edx+4]
0x7173C3: faddp   st(1), st
0x7173C5: mov     eax, [ebp+arg_4]
0x7173C8: fld     dword ptr [eax+8]
0x7173CB: mov     ecx, [ebp+var_4]
0x7173CE: fmul    dword ptr [ecx+8]
0x7173D1: faddp   st(1), st
0x7173D3: mov     edx, [ebp+arg_8]
0x7173D6: fstp    dword ptr [edx]
0x7173D8: mov     eax, [ebp+var_4]
0x7173DB: fld     dword ptr [eax+0Ch]
0x7173DE: mov     ecx, [ebp+arg_4]
0x7173E1: fmul    dword ptr [ecx]
0x7173E3: mov     edx, [ebp+arg_4]
0x7173E6: fld     dword ptr [edx+4]
0x7173E9: mov     eax, [ebp+var_4]
0x7173EC: fmul    dword ptr [eax+10h]
0x7173EF: faddp   st(1), st
0x7173F1: mov     ecx, [ebp+arg_4]
0x7173F4: fld     dword ptr [ecx+8]
0x7173F7: mov     edx, [ebp+var_4]
0x7173FA: fmul    dword ptr [edx+14h]
0x7173FD: faddp   st(1), st
0x7173FF: mov     eax, [ebp+arg_8]
0x717402: fstp    dword ptr [eax+4]
0x717405: mov     ecx, [ebp+var_4]
0x717408: fld     dword ptr [ecx+18h]
0x71740B: mov     edx, [ebp+arg_4]
0x71740E: fmul    dword ptr [edx]
0x717410: mov     eax, [ebp+arg_4]
0x717413: fld     dword ptr [eax+4]
0x717416: mov     ecx, [ebp+var_4]
0x717419: fmul    dword ptr [ecx+1Ch]
0x71741C: faddp   st(1), st
0x71741E: mov     edx, [ebp+arg_4]
0x717421: fld     dword ptr [edx+8]
0x717424: mov     eax, [ebp+var_4]
0x717427: fmul    dword ptr [eax+20h]
0x71742A: faddp   st(1), st
0x71742C: mov     ecx, [ebp+arg_8]
0x71742F: fstp    dword ptr [ecx+8]
0x717432: jmp     loc_717385
0x717437: mov     esp, ebp
0x717439: pop     ebp
0x71743A: retn
