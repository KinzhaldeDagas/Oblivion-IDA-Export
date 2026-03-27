0x95F210: sub     esp, 18h
0x95F213: push    ebp
0x95F214: mov     ebp, [esp+1Ch+arg_C]
0x95F218: fld     dword ptr [ebp+4]
0x95F21B: push    esi
0x95F21C: mov     esi, [esp+20h+arg_4]
0x95F220: fmul    dword ptr [esi+8]
0x95F223: fld     dword ptr [esi+4]
0x95F226: fmul    dword ptr [ebp+0]
0x95F229: faddp   st(1), st
0x95F22B: fld     dword ptr [ebp+8]
0x95F22E: fmul    dword ptr [esi+0Ch]
0x95F231: faddp   st(1), st
0x95F233: fstp    [esp+20h+arg_4]
0x95F237: fld     [esp+20h+arg_4]
0x95F23B: fsub    dword ptr [esi+10h]
0x95F23E: fstp    [esp+20h+arg_4]
0x95F242: fldz
0x95F244: fld     [esp+20h+arg_4]
0x95F248: fcom    st(1)
0x95F24A: fnstsw  ax
0x95F24C: test    ah, 1
0x95F24F: jnz     short loc_95F2C4
0x95F251: cmp     [esp+20h+arg_24], 0
0x95F256: fstp    st
0x95F258: mov     eax, [esp+20h+arg_1C]
0x95F25C: fstp    dword ptr [eax]
0x95F25E: mov     ecx, [ebp+0]
0x95F261: mov     eax, [esp+20h+arg_20]
0x95F265: mov     [eax], ecx
0x95F267: mov     edx, [ebp+4]
0x95F26A: mov     [eax+4], edx
0x95F26D: mov     ecx, [ebp+8]
0x95F270: mov     [eax+8], ecx
0x95F273: jz      short loc_95F2BC
0x95F275: mov     edx, [esi+4]
0x95F278: mov     eax, [esp+20h+arg_2C]
0x95F27C: mov     [eax], edx
0x95F27E: mov     ecx, [esi+8]
0x95F281: mov     [eax+4], ecx
0x95F284: mov     edx, [esi+0Ch]
0x95F287: mov     [eax+8], edx
0x95F28A: fld     dword ptr [eax]
0x95F28C: fchs
0x95F28E: fstp    [esp+20h+var_18]
0x95F292: mov     ecx, [esp+20h+var_18]
0x95F296: fld     dword ptr [eax+4]
0x95F299: fchs
0x95F29B: fstp    [esp+20h+var_14]
0x95F29F: mov     edx, [esp+20h+var_14]
0x95F2A3: fld     dword ptr [eax+8]
0x95F2A6: mov     eax, [esp+20h+arg_28]
0x95F2AA: fchs
0x95F2AC: mov     [eax], ecx
0x95F2AE: fstp    [esp+20h+var_10]
0x95F2B2: mov     ecx, [esp+20h+var_10]
0x95F2B6: mov     [eax+4], edx
0x95F2B9: mov     [eax+8], ecx
0x95F2BC: pop     esi
0x95F2BD: mov     al, 1
0x95F2BF: pop     ebp
0x95F2C0: add     esp, 18h
0x95F2C3: retn
0x95F2C4: push    ebx
0x95F2C5: mov     ebx, [esp+24h+arg_10]
0x95F2C9: fld     dword ptr [ebx+4]
0x95F2CC: fmul    dword ptr [esi+8]
0x95F2CF: fld     dword ptr [esi+4]
0x95F2D2: fmul    dword ptr [ebx]
0x95F2D4: faddp   st(1), st
0x95F2D6: fld     dword ptr [ebx+8]
0x95F2D9: fmul    dword ptr [esi+0Ch]
0x95F2DC: faddp   st(1), st
0x95F2DE: fstp    [esp+24h+arg_4]
0x95F2E2: fld     [esp+24h+arg_4]
0x95F2E6: fsub    dword ptr [esi+10h]
0x95F2E9: fstp    [esp+24h+arg_4]
0x95F2ED: fld     [esp+24h+arg_4]
0x95F2F1: fcom    st(2)
0x95F2F3: fnstsw  ax
0x95F2F5: test    ah, 1
0x95F2F8: jnz     short loc_95F36F
0x95F2FA: cmp     [esp+24h+arg_24], 0
0x95F2FF: fstp    st(1)
0x95F301: mov     edx, [esp+24h+arg_1C]
0x95F305: fstp    st
0x95F307: mov     eax, [esp+24h+arg_20]
0x95F30B: fstp    dword ptr [edx]
0x95F30D: mov     ecx, [ebx]
0x95F30F: mov     [eax], ecx
0x95F311: mov     edx, [ebx+4]
0x95F314: mov     [eax+4], edx
0x95F317: mov     ecx, [ebx+8]
0x95F31A: mov     [eax+8], ecx
0x95F31D: jz      short loc_95F366
0x95F31F: mov     edx, [esi+4]
0x95F322: mov     eax, [esp+24h+arg_2C]
0x95F326: mov     [eax], edx
0x95F328: mov     ecx, [esi+8]
0x95F32B: mov     [eax+4], ecx
0x95F32E: mov     edx, [esi+0Ch]
0x95F331: mov     [eax+8], edx
0x95F334: fld     dword ptr [eax]
0x95F336: fchs
0x95F338: fstp    [esp+24h+var_18]
0x95F33C: mov     ecx, [esp+24h+var_18]
0x95F340: fld     dword ptr [eax+4]
0x95F343: fchs
0x95F345: fstp    [esp+24h+var_14]
0x95F349: mov     edx, [esp+24h+var_14]
0x95F34D: fld     dword ptr [eax+8]
0x95F350: mov     eax, [esp+24h+arg_28]
0x95F354: fchs
0x95F356: mov     [eax], ecx
0x95F358: fstp    [esp+24h+var_10]
0x95F35C: mov     ecx, [esp+24h+var_10]
0x95F360: mov     [eax+4], edx
0x95F363: mov     [eax+8], ecx
0x95F366: pop     ebx
0x95F367: pop     esi
0x95F368: mov     al, 1
0x95F36A: pop     ebp
0x95F36B: add     esp, 18h
0x95F36E: retn
0x95F36F: push    edi
0x95F370: mov     edi, [esp+28h+arg_14]
0x95F374: fld     dword ptr [edi+4]
0x95F377: fmul    dword ptr [esi+8]
0x95F37A: fld     dword ptr [edi]
0x95F37C: fmul    dword ptr [esi+4]
0x95F37F: faddp   st(1), st
0x95F381: fld     dword ptr [edi+8]
0x95F384: fmul    dword ptr [esi+0Ch]
0x95F387: faddp   st(1), st
0x95F389: fstp    [esp+28h+arg_4]
0x95F38D: fld     [esp+28h+arg_4]
0x95F391: fsub    dword ptr [esi+10h]
0x95F394: fstp    [esp+28h+arg_4]
0x95F398: fld     [esp+28h+arg_4]
0x95F39C: fcom    st(3)
0x95F39E: fnstsw  ax
0x95F3A0: test    ah, 1
0x95F3A3: jnz     short loc_95F421
0x95F3A5: cmp     [esp+28h+arg_24], 0
0x95F3AA: fstp    st
0x95F3AC: mov     edx, [esp+28h+arg_1C]
0x95F3B0: fstp    st(1)
0x95F3B2: mov     eax, [esp+28h+arg_20]
0x95F3B6: fstp    st
0x95F3B8: fstp    dword ptr [edx]
0x95F3BA: mov     ecx, [edi]
0x95F3BC: mov     [eax], ecx
0x95F3BE: mov     edx, [edi+4]
0x95F3C1: mov     [eax+4], edx
0x95F3C4: mov     ecx, [edi+8]
0x95F3C7: mov     [eax+8], ecx
0x95F3CA: jz      loc_95F5AC
0x95F3D0: mov     edx, [esi+4]
0x95F3D3: mov     eax, [esp+28h+arg_2C]
0x95F3D7: mov     [eax], edx
0x95F3D9: mov     ecx, [esi+8]
0x95F3DC: mov     [eax+4], ecx
0x95F3DF: mov     edx, [esi+0Ch]
0x95F3E2: mov     [eax+8], edx
0x95F3E5: fld     dword ptr [eax]
0x95F3E7: fchs
0x95F3E9: pop     edi
0x95F3EA: fstp    [esp+24h+var_18]
0x95F3EE: mov     ecx, [esp+24h+var_18]
0x95F3F2: fld     dword ptr [eax+4]
0x95F3F5: pop     ebx
0x95F3F6: fchs
0x95F3F8: pop     esi
0x95F3F9: fstp    [esp+1Ch+var_14]
0x95F3FD: mov     edx, [esp+1Ch+var_14]
0x95F401: fld     dword ptr [eax+8]
0x95F404: mov     eax, [esp+1Ch+arg_28]
0x95F408: mov     [eax], ecx
0x95F40A: fchs
0x95F40C: fstp    [esp+1Ch+var_10]
0x95F410: mov     ecx, [esp+1Ch+var_10]
0x95F414: mov     [eax+4], edx
0x95F417: mov     [eax+8], ecx
0x95F41A: mov     al, 1
0x95F41C: pop     ebp
0x95F41D: add     esp, 18h
0x95F420: retn
0x95F421: mov     ecx, [esp+28h+arg_18]
0x95F425: mov     eax, [esp+28h+arg_8]
0x95F429: fld     dword ptr [ecx]
0x95F42B: fsub    dword ptr [eax]
0x95F42D: fstp    [esp+28h+var_18]
0x95F431: fld     dword ptr [ecx+4]
0x95F434: fsub    dword ptr [eax+4]
0x95F437: fstp    [esp+28h+var_14]
0x95F43B: fld     dword ptr [ecx+8]
0x95F43E: fsub    dword ptr [eax+8]
0x95F441: fstp    [esp+28h+var_10]
0x95F445: fld     dword ptr [esi+8]
0x95F448: fmul    [esp+28h+var_14]
0x95F44C: fld     dword ptr [esi+4]
0x95F44F: fmul    [esp+28h+var_18]
0x95F453: faddp   st(1), st
0x95F455: fld     dword ptr [esi+0Ch]
0x95F458: fmul    [esp+28h+var_10]
0x95F45C: faddp   st(1), st
0x95F45E: fstp    [esp+28h+arg_4]
0x95F462: fld     [esp+28h+arg_4]
0x95F466: fcom    st(4)
0x95F468: fnstsw  ax
0x95F46A: fstp    st(4)
0x95F46C: test    ah, 41h
0x95F46F: jnp     short loc_95F4A0
0x95F471: fld     [esp+28h+arg_0]
0x95F475: fld     st
0x95F477: fchs
0x95F479: fmul    st, st(5)
0x95F47B: fstp    [esp+28h+arg_4]
0x95F47F: fld     [esp+28h+arg_4]
0x95F483: fcom    st(4)
0x95F485: fnstsw  ax
0x95F487: test    ah, 41h
0x95F48A: jnp     short loc_95F4B2
0x95F48C: fcom    st(3)
0x95F48E: fnstsw  ax
0x95F490: test    ah, 41h
0x95F493: jnp     short loc_95F4B2
0x95F495: fcomp   st(2)
0x95F497: fnstsw  ax
0x95F499: test    ah, 41h
0x95F49C: jnp     short loc_95F4B4
0x95F49E: fstp    st(4)
0x95F4A0: fstp    st(3)
0x95F4A2: pop     edi
0x95F4A3: fstp    st(2)
0x95F4A5: pop     ebx
0x95F4A6: fstp    st
0x95F4A8: pop     esi
0x95F4A9: fstp    st
0x95F4AB: xor     al, al
0x95F4AD: pop     ebp
0x95F4AE: add     esp, 18h
0x95F4B1: retn
0x95F4B2: fstp    st
0x95F4B4: mov     edx, [esp+28h+arg_1C]
0x95F4B8: fxch    st(3)
0x95F4BA: fcom    st(2)
0x95F4BC: push    ecx; int
0x95F4BD: push    ecx
0x95F4BE: fnstsw  ax
0x95F4C0: test    ah, 1
0x95F4C3: jnz     short loc_95F4F4
0x95F4C5: fstp    st(2)
0x95F4C7: fcom    st(1)
0x95F4C9: fnstsw  ax
0x95F4CB: test    ah, 41h
0x95F4CE: jp      short loc_95F523
0x95F4D0: fstp    st
0x95F4D2: lea     eax, [esp+30h+var_18]
0x95F4D6: fchs
0x95F4D8: fdivrp  st(2), st
0x95F4DA: fxch    st(1)
0x95F4DC: fstp    dword ptr [edx]
0x95F4DE: fstp    [esp+30h+var_30]; float
0x95F4E1: push    eax; int
0x95F4E2: call    sub_47DA10
0x95F4E7: add     esp, 0Ch
0x95F4EA: lea     ecx, [esp+28h+var_C]
0x95F4EE: push    eax
0x95F4EF: push    ecx
0x95F4F0: mov     ecx, ebp
0x95F4F2: jmp     short loc_95F545
0x95F4F4: fstp    st
0x95F4F6: fcom    st(1)
0x95F4F8: fnstsw  ax
0x95F4FA: test    ah, 41h
0x95F4FD: jp      short loc_95F523
0x95F4FF: fstp    st
0x95F501: lea     eax, [esp+30h+var_C]
0x95F505: fchs
0x95F507: fdivrp  st(2), st
0x95F509: fxch    st(1)
0x95F50B: fstp    dword ptr [edx]
0x95F50D: fstp    [esp+30h+var_30]; float
0x95F510: push    eax; int
0x95F511: call    sub_47DA10
0x95F516: add     esp, 0Ch
0x95F519: lea     ecx, [esp+28h+var_18]
0x95F51D: push    eax
0x95F51E: push    ecx
0x95F51F: mov     ecx, ebx
0x95F521: jmp     short loc_95F545
0x95F523: fstp    st(1)
0x95F525: lea     eax, [esp+30h+var_C]
0x95F529: fchs
0x95F52B: fdivrp  st(2), st
0x95F52D: fxch    st(1)
0x95F52F: fstp    dword ptr [edx]
0x95F531: fstp    [esp+30h+var_30]; float
0x95F534: push    eax; int
0x95F535: call    sub_47DA10
0x95F53A: add     esp, 0Ch
0x95F53D: lea     ecx, [esp+28h+var_18]
0x95F541: push    eax
0x95F542: push    ecx
0x95F543: mov     ecx, edi
0x95F545: call    sub_47D9B0
0x95F54A: cmp     [esp+28h+arg_24], 0
0x95F54F: mov     edx, [eax]
0x95F551: mov     ecx, [esp+28h+arg_20]
0x95F555: mov     [ecx], edx
0x95F557: mov     edx, [eax+4]
0x95F55A: mov     [ecx+4], edx
0x95F55D: mov     eax, [eax+8]
0x95F560: mov     [ecx+8], eax
0x95F563: jz      short loc_95F5AC
0x95F565: mov     ecx, [esi+4]
0x95F568: mov     eax, [esp+28h+arg_2C]
0x95F56C: mov     [eax], ecx
0x95F56E: mov     edx, [esi+8]
0x95F571: mov     [eax+4], edx
0x95F574: mov     ecx, [esi+0Ch]
0x95F577: mov     [eax+8], ecx
0x95F57A: fld     dword ptr [eax]
0x95F57C: fchs
0x95F57E: fstp    [esp+28h+var_18]
0x95F582: mov     edx, [esp+28h+var_18]
0x95F586: fld     dword ptr [eax+4]
0x95F589: fchs
0x95F58B: fstp    [esp+28h+var_14]
0x95F58F: mov     ecx, [esp+28h+var_14]
0x95F593: fld     dword ptr [eax+8]
0x95F596: mov     eax, [esp+28h+arg_28]
0x95F59A: fchs
0x95F59C: mov     [eax], edx
0x95F59E: fstp    [esp+28h+var_10]
0x95F5A2: mov     edx, [esp+28h+var_10]
0x95F5A6: mov     [eax+4], ecx
0x95F5A9: mov     [eax+8], edx
0x95F5AC: pop     edi
0x95F5AD: pop     ebx
0x95F5AE: pop     esi
0x95F5AF: mov     al, 1
0x95F5B1: pop     ebp
0x95F5B2: add     esp, 18h
0x95F5B5: retn
