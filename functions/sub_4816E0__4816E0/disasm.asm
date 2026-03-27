0x4816E0: mov     eax, ds:0B350D8h
0x4816E5: mov     ecx, [esp+arg_0]
0x4816E9: sub     esp, 14h
0x4816EC: push    edi
0x4816ED: push    0
0x4816EF: push    eax
0x4816F0: push    ecx
0x4816F1: or      edi, 0FFFFFFFFh
0x4816F4: call    sub_47F340
0x4816F9: add     esp, 0Ch
0x4816FC: test    eax, eax
0x4816FE: jz      loc_4817FC
0x481704: push    esi
0x481705: mov     esi, [eax+3Ch]
0x481708: test    esi, esi
0x48170A: jz      loc_4817FB
0x481710: mov     edx, [esi+5Ch]
0x481713: push    ebp
0x481714: mov     ebp, [edx]
0x481716: add     ebp, [esi+50h]
0x481719: jz      loc_4817FA
0x48171F: push    ebx
0x481720: mov     ebx, [esp+24h+arg_8]
0x481724: test    ebx, ebx
0x481726: jz      loc_4817F9
0x48172C: mov     eax, [ebx]
0x48172E: mov     edx, [eax+4Ch]
0x481731: push    0
0x481733: push    0
0x481735: lea     ecx, [esp+2Ch+var_8]
0x481739: push    ecx
0x48173A: push    0
0x48173C: push    ebx
0x48173D: call    edx
0x48173F: test    eax, eax
0x481741: jl      loc_4817F9
0x481747: mov     edx, [esp+24h+arg_4]
0x48174B: mov     esi, [esi+64h]
0x48174E: mov     edi, [esp+24h+var_4]
0x481752: xor     ecx, ecx
0x481754: test    edx, edx
0x481756: mov     [esp+24h+var_10], esi
0x48175A: jle     loc_4817DE
0x481760: mov     eax, esi
0x481762: imul    eax, edx
0x481765: lea     esi, [ebp+2]
0x481768: mov     [esp+24h+var_C], eax
0x48176C: mov     [esp+24h+var_14], esi
0x481770: xor     ebp, ebp
0x481772: mov     edx, [esp+24h+var_8]
0x481776: movzx   ebx, byte ptr [esi-2]
0x48177A: imul    edx, ecx
0x48177D: lea     eax, ds:0[ebp*4]
0x481784: add     edx, eax
0x481786: mov     [edx+edi], bl
0x481789: mov     edx, [esp+24h+var_8]
0x48178D: movzx   ebx, byte ptr [esi-1]
0x481791: imul    edx, ecx
0x481794: add     edx, eax
0x481796: mov     [edx+edi+1], bl
0x48179A: mov     edx, [esp+24h+var_8]
0x48179E: movzx   ebx, byte ptr [esi]
0x4817A1: imul    edx, ecx
0x4817A4: add     esi, [esp+24h+var_10]
0x4817A8: add     edx, eax
0x4817AA: mov     [edx+edi+2], bl
0x4817AE: mov     edx, [esp+24h+var_8]
0x4817B2: imul    edx, ecx
0x4817B5: add     edx, eax
0x4817B7: mov     eax, [esp+24h+arg_4]
0x4817BB: add     ebp, 1
0x4817BE: cmp     ebp, eax
0x4817C0: mov     byte ptr [edx+edi+3], 0
0x4817C5: jl      short loc_481772
0x4817C7: mov     esi, [esp+24h+var_14]
0x4817CB: add     esi, [esp+24h+var_C]
0x4817CF: add     ecx, 1
0x4817D2: cmp     ecx, eax
0x4817D4: mov     [esp+24h+var_14], esi
0x4817D8: jl      short loc_481770
0x4817DA: mov     ebx, [esp+24h+arg_8]
0x4817DE: mov     eax, [ebx]
0x4817E0: mov     ecx, [eax+50h]
0x4817E3: push    0
0x4817E5: push    ebx
0x4817E6: call    ecx
0x4817E8: mov     edx, [esp+24h+arg_C]
0x4817EC: push    0
0x4817EE: push    ebx
0x4817EF: push    4
0x4817F1: push    edx
0x4817F2: call    D3DXSaveTextureToFileA_0
0x4817F7: mov     edi, eax
0x4817F9: pop     ebx
0x4817FA: pop     ebp
0x4817FB: pop     esi
0x4817FC: xor     eax, eax
0x4817FE: test    edi, edi
0x481800: setnl   al
0x481803: pop     edi
0x481804: add     esp, 14h
0x481807: retn
