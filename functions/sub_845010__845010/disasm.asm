0x845010: push    0FFFFFFFFh
0x845012: push    offset SEH_851CA0
0x845017: mov     eax, large fs:0
0x84501D: push    eax
0x84501E: push    ecx
0x84501F: push    ebx
0x845020: push    ebp
0x845021: push    esi
0x845022: push    edi
0x845023: mov     eax, ds:0B30AACh
0x845028: xor     eax, esp
0x84502A: push    eax
0x84502B: lea     eax, [esp+24h+var_C]
0x84502F: mov     large fs:0, eax
0x845035: mov     esi, ecx
0x845037: mov     ecx, [esp+24h+arg_0]
0x84503B: mov     eax, [esi]
0x84503D: mov     edx, [eax+0BCh]
0x845043: mov     edi, ds:0B45BB8h
0x845049: push    0
0x84504B: push    0
0x84504D: push    ecx
0x84504E: mov     ecx, esi
0x845050: call    edx
0x845052: mov     ebx, [esp+24h+arg_C]
0x845056: mov     eax, [ebx+1Ch]
0x845059: shr     eax, 1Ch
0x84505C: movzx   eax, ax
0x84505F: push    eax
0x845060: call    GetShadowSceneNode
0x845065: add     esp, 4
0x845068: test    eax, eax
0x84506A: jz      short loc_845092
0x84506C: cmp     byte ptr ds:0B430ADh, 0
0x845073: jz      short loc_845086
0x845075: mov     ecx, [eax+120h]; this
0x84507B: call    BSRenderedTexture__GetInnerTexture
0x845080: mov     [esp+24h+arg_0], eax
0x845084: jmp     short loc_84509C
0x845086: mov     ecx, ds:0B430F4h
0x84508C: mov     [esp+24h+arg_0], ecx
0x845090: jmp     short loc_84509C
0x845092: mov     edx, ds:0B430F4h
0x845098: mov     [esp+24h+arg_0], edx
0x84509C: cmp     byte ptr ds:0B42CE3h, 0
0x8450A3: jnz     short loc_8450B7
0x8450A5: fld     dword ptr [ebx+0A4h]
0x8450AB: fmul    dword ptr ds:0B464A4h
0x8450B1: fstp    dword ptr ds:0B464A4h
0x8450B7: mov     eax, [edi+24h]
0x8450BA: mov     ebp, [eax]
0x8450BC: push    0
0x8450BE: push    ebx
0x8450BF: mov     ecx, esi
0x8450C1: call    sub_848FD0
0x8450C6: mov     ebx, [ebp+4]
0x8450C9: cmp     ebx, eax
0x8450CB: mov     [esp+24h+var_10], eax
0x8450CF: jz      short loc_845106
0x8450D1: test    ebx, ebx
0x8450D3: jz      short loc_8450F5
0x8450D5: lea     ecx, [ebx+4]
0x8450D8: push    ecx; lpAddend
0x8450D9: call    dword ptr ds:0A2807Ch
0x8450DF: test    eax, eax
0x8450E1: jnz     short loc_8450F1
0x8450E3: test    ebx, ebx
0x8450E5: jz      short loc_8450F1
0x8450E7: mov     edx, [ebx]
0x8450E9: mov     eax, [edx]
0x8450EB: push    1
0x8450ED: mov     ecx, ebx
0x8450EF: call    eax
0x8450F1: mov     eax, [esp+24h+var_10]
0x8450F5: test    eax, eax
0x8450F7: mov     [ebp+4], eax
0x8450FA: jz      short loc_845106
0x8450FC: add     eax, 4
0x8450FF: push    eax; lpAddend
0x845100: call    dword ptr ds:0A28078h
0x845106: mov     ecx, [esp+24h+arg_C]
0x84510A: push    ecx
0x84510B: push    ebp
0x84510C: mov     ecx, esi
0x84510E: call    sub_848FA0
0x845113: mov     edx, [edi+24h]
0x845116: mov     ebp, [edx+4]
0x845119: mov     ebx, [ebp+4]
0x84511C: mov     eax, [esp+24h+arg_0]
0x845120: cmp     ebx, eax
0x845122: jz      short loc_845159
0x845124: test    ebx, ebx
0x845126: jz      short loc_845148
0x845128: lea     eax, [ebx+4]
0x84512B: push    eax; lpAddend
0x84512C: call    dword ptr ds:0A2807Ch
0x845132: test    eax, eax
0x845134: jnz     short loc_845144
0x845136: test    ebx, ebx
0x845138: jz      short loc_845144
0x84513A: mov     edx, [ebx]
0x84513C: mov     eax, [edx]
0x84513E: push    1
0x845140: mov     ecx, ebx
0x845142: call    eax
0x845144: mov     eax, [esp+24h+arg_0]
0x845148: test    eax, eax
0x84514A: mov     [ebp+4], eax
0x84514D: jz      short loc_845159
0x84514F: add     eax, 4
0x845152: push    eax; lpAddend
0x845153: call    dword ptr ds:0A28078h
0x845159: mov     ebx, 1
0x84515E: add     [edi+60h], ebx
0x845161: mov     [esp+24h+arg_C], edi
0x845165: mov     edx, [esi+38h]
0x845168: lea     ecx, [esp+24h+arg_C]
0x84516C: push    ecx
0x84516D: push    edx
0x84516E: lea     ecx, [esi+40h]
0x845171: mov     [esp+2Ch+var_4], 0
0x845179: call    sub_76CE40
0x84517E: or      eax, 0FFFFFFFFh
0x845181: add     [edi+60h], eax
0x845184: mov     [esp+24h+var_4], eax
0x845188: jnz     short loc_845191
0x84518A: mov     ecx, edi
0x84518C: call    sub_7604D0
0x845191: add     [esi+38h], ebx
0x845194: mov     ecx, [esp+24h+var_C]
0x845198: mov     large fs:0, ecx
0x84519F: pop     ecx
0x8451A0: pop     edi
0x8451A1: pop     esi
0x8451A2: pop     ebp
0x8451A3: pop     ebx
0x8451A4: add     esp, 10h
0x8451A7: retn    10h
