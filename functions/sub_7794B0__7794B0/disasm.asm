0x7794B0: sub     esp, 0Ch
0x7794B3: push    ebp
0x7794B4: push    esi
0x7794B5: mov     esi, [esp+14h+arg_0]
0x7794B9: test    esi, esi
0x7794BB: mov     ebp, ecx
0x7794BD: jnz     short loc_7794C9
0x7794BF: pop     esi
0x7794C0: xor     eax, eax
0x7794C2: pop     ebp
0x7794C3: add     esp, 0Ch
0x7794C6: retn    8
0x7794C9: mov     eax, [esi]
0x7794CB: mov     edx, [eax+4Ch]
0x7794CE: push    ebx
0x7794CF: push    edi
0x7794D0: mov     ecx, esi
0x7794D2: call    edx
0x7794D4: mov     [ebp+54h], eax
0x7794D7: mov     eax, [esi]
0x7794D9: mov     edx, [eax+50h]
0x7794DC: mov     ecx, esi
0x7794DE: call    edx
0x7794E0: mov     [ebp+58h], eax
0x7794E3: mov     dword ptr [ebp+5Ch], 1
0x7794EA: mov     eax, [esi+18h]
0x7794ED: mov     ecx, [esi+1Ch]
0x7794F0: mov     edx, [esi+20h]
0x7794F3: mov     [esp+10h], eax
0x7794F7: mov     eax, [ebp+8]
0x7794FA: add     eax, 6F4h
0x7794FF: push    eax
0x779500: lea     eax, [esp+14h]
0x779504: push    eax
0x779505: mov     [esp+18h+arg_0], ecx
0x779509: mov     [esp+18h+arg_4], edx
0x77950D: call    sub_773960
0x779512: mov     ebx, eax
0x779514: lea     edi, [ebp+0Ch]
0x779517: mov     ecx, 11h
0x77951C: mov     esi, ebx
0x77951E: rep movsd
0x779520: mov     ecx, [ebp+8]
0x779523: mov     edi, [ebx+0Ch]
0x779526: mov     esi, [ecx+280h]
0x77952C: add     esp, 8
0x77952F: cmp     [esp+10h+arg_10], 0
0x779534: mov     [esp+10h+arg_C], 0
0x77953C: push    0
0x77953E: jz      short loc_779576
0x779540: mov     ecx, [ebp+58h]
0x779543: mov     edx, [esi]
0x779545: lea     eax, [esp+14h+arg_C]
0x779549: push    eax
0x77954A: mov     eax, [ebp+54h]
0x77954D: push    0
0x77954F: push    edi
0x779550: push    200h
0x779555: push    1
0x779557: push    ecx
0x779558: mov     ecx, [edx+5Ch]
0x77955B: push    eax
0x77955C: push    esi
0x77955D: call    ecx
0x77955F: test    eax, eax
0x779561: jl      short loc_779596
0x779563: mov     edx, [esp+1Ch+arg_0]
0x779567: pop     edi
0x779568: mov     eax, ebx
0x77956A: pop     ebx
0x77956B: pop     esi
0x77956C: mov     [ebp+50h], edx
0x77956F: pop     ebp
0x779570: add     esp, 0Ch
0x779573: retn    8
0x779576: mov     edx, [ebp+58h]
0x779579: mov     eax, [esi]
0x77957B: lea     ecx, [esp+14h+arg_C]
0x77957F: push    ecx
0x779580: mov     ecx, [ebp+54h]
0x779583: push    0
0x779585: push    edi
0x779586: push    0
0x779588: push    1
0x77958A: push    edx
0x77958B: mov     edx, [eax+5Ch]
0x77958E: push    ecx
0x77958F: push    esi
0x779590: call    edx
0x779592: test    eax, eax
0x779594: jge     short loc_7795BD
0x779596: push    eax
0x779597: call    sub_7736F0
0x77959C: push    eax
0x77959D: push    offset aNidx9dynamicte; "NiDX9DynamicTextureData::CreateSurf> Fa"...
0x7795A2: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7795A7: add     esp, 0Ch
0x7795AA: pop     edi
0x7795AB: pop     ebx
0x7795AC: pop     esi
0x7795AD: mov     dword ptr [ebp+50h], 0
0x7795B4: xor     eax, eax
0x7795B6: pop     ebp
0x7795B7: add     esp, 0Ch
0x7795BA: retn    8
0x7795BD: mov     eax, [esp+1Ch+arg_0]
0x7795C1: push    0
0x7795C3: lea     edx, [esp+20h+arg_0]
0x7795C7: push    edx
0x7795C8: mov     edx, [ebp+54h]
0x7795CB: push    2
0x7795CD: push    edi
0x7795CE: push    0
0x7795D0: mov     [ebp+50h], eax
0x7795D3: mov     eax, [ebp+58h]
0x7795D6: push    1
0x7795D8: push    eax
0x7795D9: mov     [esp+38h+arg_0], 0
0x7795E1: mov     ecx, [esi]
0x7795E3: mov     eax, [ecx+5Ch]
0x7795E6: push    edx
0x7795E7: push    esi
0x7795E8: call    eax
0x7795EA: test    eax, eax
0x7795EC: jge     short loc_779615
0x7795EE: push    eax
0x7795EF: call    sub_7736F0
0x7795F4: push    eax
0x7795F5: push    offset aNidx9dynamicte; "NiDX9DynamicTextureData::CreateSurf> Fa"...
0x7795FA: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7795FF: add     esp, 0Ch
0x779602: pop     edi
0x779603: pop     ebx
0x779604: pop     esi
0x779605: mov     dword ptr [ebp+60h], 0
0x77960C: xor     eax, eax
0x77960E: pop     ebp
0x77960F: add     esp, 0Ch
0x779612: retn    8
0x779615: mov     ecx, [esp+1Ch+arg_0]
0x779619: pop     edi
0x77961A: mov     eax, ebx
0x77961C: pop     ebx
0x77961D: pop     esi
0x77961E: mov     [ebp+60h], ecx
0x779621: pop     ebp
0x779622: add     esp, 0Ch
0x779625: retn    8
