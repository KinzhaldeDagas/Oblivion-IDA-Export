0x717280: push    ebp
0x717281: mov     ebp, esp
0x717283: sub     esp, 8
0x717286: mov     eax, [ebp+arg_C]
0x717289: mov     [ebp+var_4], eax
0x71728C: mov     [ebp+var_8], 0
0x717293: jmp     short loc_7172B0
0x717295: mov     ecx, [ebp+var_8]
0x717298: add     ecx, 1
0x71729B: mov     [ebp+var_8], ecx
0x71729E: mov     edx, [ebp+arg_4]
0x7172A1: add     edx, 0Ch
0x7172A4: mov     [ebp+arg_4], edx
0x7172A7: mov     eax, [ebp+arg_8]
0x7172AA: add     eax, 0Ch
0x7172AD: mov     [ebp+arg_8], eax
0x7172B0: movzx   ecx, [ebp+arg_0]
0x7172B4: cmp     [ebp+var_8], ecx
0x7172B7: jnb     loc_71736B
0x7172BD: mov     edx, [ebp+var_4]
0x7172C0: fld     dword ptr [edx]
0x7172C2: mov     eax, [ebp+arg_4]
0x7172C5: fmul    dword ptr [eax]
0x7172C7: mov     ecx, [ebp+arg_4]
0x7172CA: fld     dword ptr [ecx+4]
0x7172CD: mov     edx, [ebp+var_4]
0x7172D0: fmul    dword ptr [edx+4]
0x7172D3: faddp   st(1), st
0x7172D5: mov     eax, [ebp+arg_4]
0x7172D8: fld     dword ptr [eax+8]
0x7172DB: mov     ecx, [ebp+var_4]
0x7172DE: fmul    dword ptr [ecx+8]
0x7172E1: faddp   st(1), st
0x7172E3: mov     edx, [ebp+arg_C]
0x7172E6: fmul    dword ptr [edx+30h]
0x7172E9: mov     eax, [ebp+arg_C]
0x7172EC: fadd    dword ptr [eax+24h]
0x7172EF: mov     ecx, [ebp+arg_8]
0x7172F2: fstp    dword ptr [ecx]
0x7172F4: mov     edx, [ebp+var_4]
0x7172F7: fld     dword ptr [edx+0Ch]
0x7172FA: mov     eax, [ebp+arg_4]
0x7172FD: fmul    dword ptr [eax]
0x7172FF: mov     ecx, [ebp+arg_4]
0x717302: fld     dword ptr [ecx+4]
0x717305: mov     edx, [ebp+var_4]
0x717308: fmul    dword ptr [edx+10h]
0x71730B: faddp   st(1), st
0x71730D: mov     eax, [ebp+arg_4]
0x717310: fld     dword ptr [eax+8]
0x717313: mov     ecx, [ebp+var_4]
0x717316: fmul    dword ptr [ecx+14h]
0x717319: faddp   st(1), st
0x71731B: mov     edx, [ebp+arg_C]
0x71731E: fmul    dword ptr [edx+30h]
0x717321: mov     eax, [ebp+arg_C]
0x717324: fadd    dword ptr [eax+28h]
0x717327: mov     ecx, [ebp+arg_8]
0x71732A: fstp    dword ptr [ecx+4]
0x71732D: mov     edx, [ebp+var_4]
0x717330: fld     dword ptr [edx+18h]
0x717333: mov     eax, [ebp+arg_4]
0x717336: fmul    dword ptr [eax]
0x717338: mov     ecx, [ebp+arg_4]
0x71733B: fld     dword ptr [ecx+4]
0x71733E: mov     edx, [ebp+var_4]
0x717341: fmul    dword ptr [edx+1Ch]
0x717344: faddp   st(1), st
0x717346: mov     eax, [ebp+arg_4]
0x717349: fld     dword ptr [eax+8]
0x71734C: mov     ecx, [ebp+var_4]
0x71734F: fmul    dword ptr [ecx+20h]
0x717352: faddp   st(1), st
0x717354: mov     edx, [ebp+arg_C]
0x717357: fmul    dword ptr [edx+30h]
0x71735A: mov     eax, [ebp+arg_C]
0x71735D: fadd    dword ptr [eax+2Ch]
0x717360: mov     ecx, [ebp+arg_8]
0x717363: fstp    dword ptr [ecx+8]
0x717366: jmp     loc_717295
0x71736B: mov     esp, ebp
0x71736D: pop     ebp
0x71736E: retn
