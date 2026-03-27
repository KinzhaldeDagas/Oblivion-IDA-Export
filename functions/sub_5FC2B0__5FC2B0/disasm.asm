0x5FC2B0: push    ebp
0x5FC2B1: mov     ebp, ecx
0x5FC2B3: mov     eax, [ebp+0]
0x5FC2B6: mov     edx, [eax+170h]
0x5FC2BC: call    edx
0x5FC2BE: cmp     byte ptr [eax+4], 24h ; '$'
0x5FC2C2: jnz     short loc_5FC2CA
0x5FC2C4: xor     al, al
0x5FC2C6: pop     ebp
0x5FC2C7: retn    4
0x5FC2CA: push    ebx
0x5FC2CB: push    esi
0x5FC2CC: mov     esi, [esp+0Ch+arg_0]
0x5FC2D0: mov     ecx, esi
0x5FC2D2: call    sub_5E4A80
0x5FC2D7: mov     ebx, eax
0x5FC2D9: test    ebx, ebx
0x5FC2DB: jz      short loc_5FC335
0x5FC2DD: mov     ecx, [ebp+58h]
0x5FC2E0: test    ecx, ecx
0x5FC2E2: jz      short loc_5FC33D
0x5FC2E4: mov     eax, [ecx]
0x5FC2E6: mov     edx, [eax+0ECh]
0x5FC2EC: push    1
0x5FC2EE: call    edx
0x5FC2F0: test    eax, eax
0x5FC2F2: jnz     short loc_5FC307
0x5FC2F4: mov     ecx, [ebp+58h]
0x5FC2F7: mov     eax, [ecx]
0x5FC2F9: mov     edx, [eax+0F8h]
0x5FC2FF: push    1
0x5FC301: call    edx
0x5FC303: test    eax, eax
0x5FC305: jz      short loc_5FC33D
0x5FC307: push    0Fh
0x5FC309: mov     ecx, ebp
0x5FC30B: call    Actor_GetBaseCalcAVi
0x5FC310: push    eax
0x5FC311: call    Calc_MasteryFromSkill
0x5FC316: add     esp, 4
0x5FC319: cmp     eax, 4
0x5FC31C: jl      short loc_5FC335
0x5FC31E: mov     ecx, [ebp+58h]
0x5FC321: test    ecx, ecx
0x5FC323: jz      short loc_5FC335
0x5FC325: mov     eax, [ecx]
0x5FC327: mov     edx, [eax+0F8h]
0x5FC32D: push    1
0x5FC32F: call    edx
0x5FC331: test    eax, eax
0x5FC333: jnz     short loc_5FC354
0x5FC335: pop     esi
0x5FC336: pop     ebx
0x5FC337: xor     al, al
0x5FC339: pop     ebp
0x5FC33A: retn    4
0x5FC33D: push    11h
0x5FC33F: mov     ecx, ebp
0x5FC341: call    Actor_GetBaseCalcAVi
0x5FC346: push    eax
0x5FC347: call    Calc_MasteryFromSkill
0x5FC34C: add     esp, 4
0x5FC34F: cmp     eax, 4
0x5FC352: jl      short loc_5FC335
0x5FC354: push    0; Seed
0x5FC356: call    GetRandomLargeInteger?
0x5FC35B: cdq
0x5FC35C: mov     ecx, 64h ; 'd'
0x5FC361: idiv    ecx
0x5FC363: add     esp, 4
0x5FC366: cmp     edx, ds:0B37230h
0x5FC36C: jg      short loc_5FC335
0x5FC36E: mov     eax, [ebx+8]
0x5FC371: push    edi
0x5FC372: xor     edi, edi
0x5FC374: test    eax, eax
0x5FC376: jz      short loc_5FC3A1
0x5FC378: cmp     byte ptr [eax+4], 21h ; '!'
0x5FC37C: jnz     short loc_5FC3A1
0x5FC37E: mov     edi, eax
0x5FC380: mov     edx, [edi]
0x5FC382: mov     eax, [edx+78h]
0x5FC385: mov     ecx, edi
0x5FC387: call    eax
0x5FC389: test    al, al
0x5FC38B: jnz     short loc_5FC398
0x5FC38D: mov     ecx, ebp
0x5FC38F: call    Actor_IsWeaponOut
0x5FC394: test    al, al
0x5FC396: jnz     short loc_5FC3A1
0x5FC398: pop     edi
0x5FC399: pop     esi
0x5FC39A: pop     ebx
0x5FC39B: xor     al, al
0x5FC39D: pop     ebp
0x5FC39E: retn    4
0x5FC3A1: mov     ecx, [ebx]
0x5FC3A3: mov     eax, [ecx]
0x5FC3A5: mov     edx, [esi]
0x5FC3A7: push    0
0x5FC3A9: push    0
0x5FC3AB: push    1
0x5FC3AD: push    eax
0x5FC3AE: mov     eax, [edx+2C8h]
0x5FC3B4: push    edi
0x5FC3B5: mov     ecx, esi
0x5FC3B7: call    eax
0x5FC3B9: push    eax
0x5FC3BA: push    esi
0x5FC3BB: call    sub_4DC000
0x5FC3C0: add     esp, 8
0x5FC3C3: mov     ecx, esi
0x5FC3C5: call    Actor_GetCurrentAction
0x5FC3CA: test    eax, eax
0x5FC3CC: jl      short loc_5FC406
0x5FC3CE: cmp     eax, 5
0x5FC3D1: jle     short loc_5FC3FB
0x5FC3D3: cmp     eax, 6
0x5FC3D6: jnz     short loc_5FC406
0x5FC3D8: test    edi, edi
0x5FC3DA: jz      short loc_5FC406
0x5FC3DC: mov     ecx, [esi+58h]
0x5FC3DF: mov     edx, [ecx]
0x5FC3E1: mov     eax, [edx+0F8h]
0x5FC3E7: push    1
0x5FC3E9: call    eax
0x5FC3EB: test    eax, eax
0x5FC3ED: jnz     short loc_5FC406
0x5FC3EF: push    eax; float
0x5FC3F0: mov     ecx, esi
0x5FC3F2: call    sub_5F4AE0
0x5FC3F7: test    al, al
0x5FC3F9: jnz     short loc_5FC406
0x5FC3FB: push    0
0x5FC3FD: push    0FFFFFFFFh
0x5FC3FF: mov     ecx, esi
0x5FC401: call    HighPRocess_DoAction?????
0x5FC406: mov     edx, [esi]
0x5FC408: mov     eax, [edx+330h]
0x5FC40E: mov     ecx, esi
0x5FC410: call    eax
0x5FC412: test    eax, eax
0x5FC414: jz      short loc_5FC42A
0x5FC416: mov     edx, [esi]
0x5FC418: mov     eax, [edx+330h]
0x5FC41E: push    ebp
0x5FC41F: mov     ecx, esi
0x5FC421: call    eax
0x5FC423: mov     ecx, eax
0x5FC425: call    sub_61DD10
0x5FC42A: pop     edi
0x5FC42B: pop     esi
0x5FC42C: pop     ebx
0x5FC42D: mov     al, 1
0x5FC42F: pop     ebp
0x5FC430: retn    4
