0x850440: push    0FFFFFFFFh
0x850442: push    offset SEH_850270
0x850447: mov     eax, large fs:0
0x85044D: push    eax
0x85044E: sub     esp, 8
0x850451: push    ebx
0x850452: push    ebp
0x850453: push    esi
0x850454: push    edi
0x850455: mov     eax, ds:0B30AACh
0x85045A: xor     eax, esp
0x85045C: push    eax
0x85045D: lea     eax, [esp+28h+var_C]
0x850461: mov     large fs:0, eax
0x850467: mov     [esp+28h+var_10], ecx
0x85046B: mov     ebp, [esp+28h+arg_C]
0x85046F: mov     eax, [ebp+1Ch]
0x850472: mov     edi, ds:0B45BACh
0x850478: shr     eax, 1Ch
0x85047B: movzx   eax, ax
0x85047E: push    eax
0x85047F: call    GetShadowSceneNode
0x850484: add     esp, 4
0x850487: test    eax, eax
0x850489: jz      short loc_8504B1
0x85048B: cmp     byte ptr ds:0B430ADh, 0
0x850492: jz      short loc_8504A5
0x850494: mov     ecx, [eax+120h]; this
0x85049A: call    BSRenderedTexture__GetInnerTexture
0x85049F: mov     [esp+28h+arg_C], eax
0x8504A3: jmp     short loc_8504BB
0x8504A5: mov     ecx, ds:0B430F4h
0x8504AB: mov     [esp+28h+arg_C], ecx
0x8504AF: jmp     short loc_8504BB
0x8504B1: mov     edx, ds:0B430F4h
0x8504B7: mov     [esp+28h+arg_C], edx
0x8504BB: fld     dword ptr [ebp+0A4h]
0x8504C1: push    0
0x8504C3: fmul    dword ptr ds:0B464A4h
0x8504C9: mov     ecx, ebp
0x8504CB: fstp    dword ptr ds:0B464A4h
0x8504D1: mov     eax, [edi+24h]
0x8504D4: mov     esi, [eax]
0x8504D6: mov     edx, [ebp+0]
0x8504D9: mov     eax, [edx+8Ch]
0x8504DF: mov     [esp+2Ch+var_14], esi
0x8504E3: call    eax
0x8504E5: test    eax, eax
0x8504E7: jz      short loc_8504FC
0x8504E9: mov     edx, [ebp+0]
0x8504EC: mov     eax, [edx+8Ch]
0x8504F2: push    0
0x8504F4: mov     ecx, ebp
0x8504F6: call    eax
0x8504F8: mov     ebx, eax
0x8504FA: jmp     short loc_850511
0x8504FC: test    dword ptr [ebp+1Ch], 80h
0x850503: mov     ebx, ds:0B430F0h
0x850509: ja      short loc_850511
0x85050B: mov     ebx, ds:0B430DCh
0x850511: mov     esi, [esi+4]
0x850514: cmp     esi, ebx
0x850516: jz      short loc_85054F
0x850518: test    esi, esi
0x85051A: jz      short loc_850538
0x85051C: lea     ecx, [esi+4]
0x85051F: push    ecx; lpAddend
0x850520: call    dword ptr ds:0A2807Ch
0x850526: test    eax, eax
0x850528: jnz     short loc_850538
0x85052A: test    esi, esi
0x85052C: jz      short loc_850538
0x85052E: mov     edx, [esi]
0x850530: mov     eax, [edx]
0x850532: push    1
0x850534: mov     ecx, esi
0x850536: call    eax
0x850538: test    ebx, ebx
0x85053A: mov     esi, [esp+28h+var_14]
0x85053E: mov     [esi+4], ebx
0x850541: jz      short loc_850553
0x850543: add     ebx, 4
0x850546: push    ebx; lpAddend
0x850547: call    dword ptr ds:0A28078h
0x85054D: jmp     short loc_850553
0x85054F: mov     esi, [esp+28h+var_14]
0x850553: test    esi, esi
0x850555: jz      short loc_850572
0x850557: cmp     byte ptr ds:0B42CDDh, 0
0x85055E: jz      short loc_850572
0x850560: mov     edx, [ebp+0]
0x850563: mov     eax, [edx+78h]
0x850566: mov     ecx, ebp
0x850568: call    eax
0x85056A: push    eax
0x85056B: mov     ecx, esi
0x85056D: call    sub_7715E0
0x850572: mov     ecx, [edi+24h]
0x850575: mov     ebp, [ecx+0Ch]
0x850578: mov     esi, [ebp+4]
0x85057B: mov     ebx, [esp+28h+arg_C]
0x85057F: cmp     esi, ebx
0x850581: jz      short loc_8505B4
0x850583: test    esi, esi
0x850585: jz      short loc_8505A3
0x850587: lea     edx, [esi+4]
0x85058A: push    edx; lpAddend
0x85058B: call    dword ptr ds:0A2807Ch
0x850591: test    eax, eax
0x850593: jnz     short loc_8505A3
0x850595: test    esi, esi
0x850597: jz      short loc_8505A3
0x850599: mov     eax, [esi]
0x85059B: mov     edx, [eax]
0x85059D: push    1
0x85059F: mov     ecx, esi
0x8505A1: call    edx
0x8505A3: test    ebx, ebx
0x8505A5: mov     [ebp+4], ebx
0x8505A8: jz      short loc_8505B4
0x8505AA: add     ebx, 4
0x8505AD: push    ebx; lpAddend
0x8505AE: call    dword ptr ds:0A28078h
0x8505B4: mov     ebx, 1
0x8505B9: add     [edi+60h], ebx
0x8505BC: mov     [esp+28h+arg_C], edi
0x8505C0: mov     esi, [esp+28h+var_10]
0x8505C4: mov     ecx, [esi+38h]
0x8505C7: lea     eax, [esp+28h+arg_C]
0x8505CB: push    eax
0x8505CC: push    ecx
0x8505CD: lea     ecx, [esi+40h]
0x8505D0: mov     [esp+30h+var_4], 0
0x8505D8: call    sub_76CE40
0x8505DD: or      eax, 0FFFFFFFFh
0x8505E0: add     [edi+60h], eax
0x8505E3: mov     [esp+28h+var_4], eax
0x8505E7: jnz     short loc_8505F0
0x8505E9: mov     ecx, edi
0x8505EB: call    sub_7604D0
0x8505F0: add     [esi+38h], ebx
0x8505F3: mov     ecx, [esp+28h+var_C]
0x8505F7: mov     large fs:0, ecx
0x8505FE: pop     ecx
0x8505FF: pop     edi
0x850600: pop     esi
0x850601: pop     ebp
0x850602: pop     ebx
0x850603: add     esp, 14h
0x850606: retn    10h
