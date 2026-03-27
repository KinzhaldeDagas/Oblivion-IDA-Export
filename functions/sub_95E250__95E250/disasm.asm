0x95E250: sub     esp, 24h
0x95E253: mov     edx, [esp+24h+arg_C]
0x95E257: mov     ecx, [esp+24h+arg_4]
0x95E25B: fld     dword ptr [edx+8]
0x95E25E: fmul    dword ptr [ecx+8]
0x95E261: fld     dword ptr [ecx+4]
0x95E264: fmul    dword ptr [edx+4]
0x95E267: faddp   st(1), st
0x95E269: fld     dword ptr [edx+0Ch]
0x95E26C: fmul    dword ptr [ecx+0Ch]
0x95E26F: faddp   st(1), st
0x95E271: fstp    [esp+24h+arg_4]
0x95E275: fld     [esp+24h+arg_4]
0x95E279: fsub    dword ptr [ecx+10h]
0x95E27C: fstp    [esp+24h+arg_4]
0x95E280: fld     dword ptr [edx+10h]
0x95E283: fchs
0x95E285: fstp    [esp+24h+arg_C]
0x95E289: fld     [esp+24h+arg_4]
0x95E28D: fld     [esp+24h+arg_C]
0x95E291: fcom    st(1)
0x95E293: fnstsw  ax
0x95E295: test    ah, 41h
0x95E298: jp      loc_95E34C
0x95E29E: cmp     [esp+24h+arg_1C], 0
0x95E2A3: fstp    st
0x95E2A5: fldz
0x95E2A7: mov     eax, [esp+24h+arg_14]
0x95E2AB: fstp    dword ptr [eax]
0x95E2AD: fld     dword ptr [ecx+4]
0x95E2B0: mov     eax, [esp+24h+arg_18]
0x95E2B4: fmul    st, st(1)
0x95E2B6: fstp    [esp+24h+var_24]
0x95E2B9: fld     dword ptr [ecx+8]
0x95E2BC: fmul    st, st(1)
0x95E2BE: fstp    [esp+24h+var_20]
0x95E2C2: fmul    dword ptr [ecx+0Ch]
0x95E2C5: fstp    [esp+24h+var_1C]
0x95E2C9: fld     dword ptr [edx+4]
0x95E2CC: fsub    [esp+24h+var_24]
0x95E2CF: fstp    [esp+24h+var_18]
0x95E2D3: fld     dword ptr [edx+8]
0x95E2D6: fsub    [esp+24h+var_20]
0x95E2DA: fstp    [esp+24h+var_14]
0x95E2DE: fld     dword ptr [edx+0Ch]
0x95E2E1: mov     edx, [esp+24h+var_18]
0x95E2E5: fsub    [esp+24h+var_1C]
0x95E2E9: mov     [eax], edx
0x95E2EB: mov     edx, [esp+24h+var_14]
0x95E2EF: mov     [eax+4], edx
0x95E2F2: fstp    [esp+24h+var_10]
0x95E2F6: mov     edx, [esp+24h+var_10]
0x95E2FA: mov     [eax+8], edx
0x95E2FD: jz      short loc_95E346
0x95E2FF: mov     edx, [ecx+4]
0x95E302: mov     eax, [esp+24h+arg_24]
0x95E306: mov     [eax], edx
0x95E308: mov     edx, [ecx+8]
0x95E30B: mov     [eax+4], edx
0x95E30E: mov     ecx, [ecx+0Ch]
0x95E311: mov     [eax+8], ecx
0x95E314: fld     dword ptr [eax]
0x95E316: fchs
0x95E318: fstp    [esp+24h+var_18]
0x95E31C: mov     edx, [esp+24h+var_18]
0x95E320: fld     dword ptr [eax+4]
0x95E323: fchs
0x95E325: fstp    [esp+24h+var_14]
0x95E329: mov     ecx, [esp+24h+var_14]
0x95E32D: fld     dword ptr [eax+8]
0x95E330: mov     eax, [esp+24h+arg_20]
0x95E334: fchs
0x95E336: mov     [eax], edx
0x95E338: fstp    [esp+24h+var_10]
0x95E33C: mov     edx, [esp+24h+var_10]
0x95E340: mov     [eax+4], ecx
0x95E343: mov     [eax+8], edx
0x95E346: mov     al, 1
0x95E348: add     esp, 24h
0x95E34B: retn
0x95E34C: mov     eax, [esp+24h+arg_8]
0x95E350: push    esi
0x95E351: mov     esi, [esp+28h+arg_10]
0x95E355: fld     dword ptr [esi]
0x95E357: fsub    dword ptr [eax]
0x95E359: fstp    [esp+28h+var_18]
0x95E35D: fld     dword ptr [esi+4]
0x95E360: fsub    dword ptr [eax+4]
0x95E363: fstp    [esp+28h+var_14]
0x95E367: fld     dword ptr [esi+8]
0x95E36A: fsub    dword ptr [eax+8]
0x95E36D: fstp    [esp+28h+var_10]
0x95E371: fld     dword ptr [ecx+4]
0x95E374: fmul    [esp+28h+var_18]
0x95E378: fld     dword ptr [ecx+8]
0x95E37B: fmul    [esp+28h+var_14]
0x95E37F: faddp   st(1), st
0x95E381: fld     dword ptr [ecx+0Ch]
0x95E384: fmul    [esp+28h+var_10]
0x95E388: faddp   st(1), st
0x95E38A: fstp    [esp+28h+arg_4]
0x95E38E: fldz
0x95E390: fld     [esp+28h+arg_4]
0x95E394: fcom    st(1)
0x95E396: fnstsw  ax
0x95E398: fstp    st(1)
0x95E39A: test    ah, 41h
0x95E39D: jp      short loc_95E3AC
0x95E39F: fstp    st(2)
0x95E3A1: fstp    st(1)
0x95E3A3: xor     al, al
0x95E3A5: fstp    st
0x95E3A7: pop     esi
0x95E3A8: add     esp, 24h
0x95E3AB: retn
0x95E3AC: fld     st
0x95E3AE: fmul    [esp+28h+arg_0]
0x95E3B2: fadd    st, st(3)
0x95E3B4: fcomp   st(2)
0x95E3B6: fnstsw  ax
0x95E3B8: fstp    st(1)
0x95E3BA: test    ah, 1
0x95E3BD: jnz     short loc_95E3A1
0x95E3BF: cmp     [esp+28h+arg_1C], 0
0x95E3C4: fld     dword ptr [edx+10h]
0x95E3C7: faddp   st(2), st
0x95E3C9: mov     eax, [esp+28h+arg_24]
0x95E3CD: push    edi
0x95E3CE: mov     edi, [esp+2Ch+arg_14]
0x95E3D2: fdivp   st(1), st
0x95E3D4: fchs
0x95E3D6: fstp    dword ptr [edi]
0x95E3D8: jz      short loc_95E41F
0x95E3DA: push    ebx
0x95E3DB: mov     ebx, [ecx+4]
0x95E3DE: mov     [eax], ebx
0x95E3E0: mov     ebx, [ecx+8]
0x95E3E3: mov     [eax+4], ebx
0x95E3E6: mov     ecx, [ecx+0Ch]
0x95E3E9: mov     [eax+8], ecx
0x95E3EC: fld     dword ptr [eax]
0x95E3EE: mov     ecx, [esp+30h+arg_20]
0x95E3F2: fchs
0x95E3F4: fstp    [esp+30h+var_18]
0x95E3F8: mov     ebx, [esp+30h+var_18]
0x95E3FC: fld     dword ptr [eax+4]
0x95E3FF: fchs
0x95E401: fstp    [esp+30h+var_14]
0x95E405: fld     dword ptr [eax+8]
0x95E408: mov     [ecx], ebx
0x95E40A: mov     ebx, [esp+30h+var_14]
0x95E40E: fchs
0x95E410: mov     [ecx+4], ebx
0x95E413: fstp    [esp+30h+var_10]
0x95E417: mov     ebx, [esp+30h+var_10]
0x95E41B: mov     [ecx+8], ebx
0x95E41E: pop     ebx
0x95E41F: fld     dword ptr [edx+10h]
0x95E422: fstp    [esp+2Ch+arg_4]
0x95E426: fld     [esp+2Ch+arg_4]
0x95E42A: fld     st
0x95E42C: fmul    dword ptr [eax]
0x95E42E: fstp    [esp+2Ch+var_C]
0x95E432: fld     dword ptr [eax+4]
0x95E435: fmul    st, st(1)
0x95E437: fstp    [esp+2Ch+var_8]
0x95E43B: fmul    dword ptr [eax+8]
0x95E43E: mov     eax, [esp+2Ch+arg_18]
0x95E442: fstp    [esp+2Ch+var_4]
0x95E446: fld     dword ptr [edi]
0x95E448: pop     edi
0x95E449: fstp    [esp+28h+arg_4]
0x95E44D: fld     dword ptr [esi]
0x95E44F: fld     [esp+28h+arg_4]
0x95E453: fld     st
0x95E455: fmulp   st(2), st
0x95E457: fxch    st(1)
0x95E459: fstp    [esp+28h+var_18]
0x95E45D: fld     st
0x95E45F: fmul    dword ptr [esi+4]
0x95E462: fstp    [esp+28h+var_14]
0x95E466: fmul    dword ptr [esi+8]
0x95E469: pop     esi
0x95E46A: fstp    [esp+24h+var_10]
0x95E46E: fld     [esp+24h+var_18]
0x95E472: fadd    dword ptr [edx+4]
0x95E475: fstp    [esp+24h+var_24]
0x95E478: fld     dword ptr [edx+8]
0x95E47B: fadd    [esp+24h+var_14]
0x95E47F: fstp    [esp+24h+var_20]
0x95E483: fld     dword ptr [edx+0Ch]
0x95E486: fadd    [esp+24h+var_10]
0x95E48A: fstp    [esp+24h+var_1C]
0x95E48E: fld     [esp+24h+var_24]
0x95E491: fadd    [esp+24h+var_C]
0x95E495: fstp    [esp+24h+var_18]
0x95E499: mov     edx, [esp+24h+var_18]
0x95E49D: fld     [esp+24h+var_20]
0x95E4A1: mov     [eax], edx
0x95E4A3: fadd    [esp+24h+var_8]
0x95E4A7: fstp    [esp+24h+var_14]
0x95E4AB: mov     ecx, [esp+24h+var_14]
0x95E4AF: fld     [esp+24h+var_1C]
0x95E4B3: mov     [eax+4], ecx
0x95E4B6: fadd    [esp+24h+var_4]
0x95E4BA: fstp    [esp+24h+var_10]
0x95E4BE: mov     edx, [esp+24h+var_10]
0x95E4C2: mov     [eax+8], edx
0x95E4C5: mov     al, 1
0x95E4C7: add     esp, 24h
0x95E4CA: retn
