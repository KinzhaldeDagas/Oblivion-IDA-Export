0x5403D0: push    0FFFFFFFFh
0x5403D2: push    offset SEH_798CC0
0x5403D7: mov     eax, large fs:0
0x5403DD: push    eax
0x5403DE: sub     esp, 0Ch
0x5403E1: push    ebx
0x5403E2: push    ebp
0x5403E3: push    esi
0x5403E4: push    edi
0x5403E5: mov     eax, ds:0B30AACh
0x5403EA: xor     eax, esp
0x5403EC: push    eax
0x5403ED: lea     eax, [esp+2Ch+var_C]
0x5403F1: mov     large fs:0, eax
0x5403F7: mov     [esp+2Ch+var_14], ecx
0x5403FB: mov     edi, [esp+2Ch+arg_0]
0x5403FF: xor     ebx, ebx
0x540401: cmp     edi, ebx
0x540403: jz      loc_540503
0x540409: lea     eax, [edi+108h]
0x54040F: cmp     eax, ebx
0x540411: mov     [esp+2Ch+var_18], eax
0x540415: jz      loc_540503
0x54041B: mov     eax, [esp+2Ch+var_18]
0x54041F: mov     ebp, [eax]
0x540421: cmp     ebp, ebx
0x540423: jz      loc_540503
0x540429: cmp     ds:0B11DE4h, bl
0x54042F: jnz     short loc_54043B
0x540431: cmp     dword ptr [ebp+4], 1
0x540435: jz      loc_5404F0
0x54043B: mov     ecx, ds:0B33398h
0x540441: mov     edx, [ebp+0]
0x540444: mov     ecx, [ecx+24h]
0x540447: push    ebx
0x540448: push    21h ; '!'
0x54044A: push    edx
0x54044B: call    OSGLobals_PlaySound
0x540450: mov     esi, eax
0x540452: cmp     esi, ebx
0x540454: jnz     short loc_54049E
0x540456: mov     eax, ds:0B33398h
0x54045B: mov     edx, [ebp+0]
0x54045E: mov     ecx, [eax+24h]
0x540461: push    edx
0x540462: call    sub_6ACA40
0x540467: test    al, al
0x540469: jz      short loc_54049A
0x54046B: push    4; Size
0x54046D: call    FormHeapAlloc
0x540472: add     esp, 4
0x540475: mov     [esp+2Ch+var_10], eax
0x540479: cmp     eax, ebx
0x54047B: mov     [esp+2Ch+var_4], ebx
0x54047F: jz      short loc_54048E
0x540481: mov     ecx, [ebp+0]
0x540484: push    ecx
0x540485: mov     ecx, eax
0x540487: call    unknown_libname_1
0x54048C: jmp     short loc_540490
0x54048E: xor     eax, eax
0x540490: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x540498: mov     esi, eax
0x54049A: cmp     esi, ebx
0x54049C: jz      short loc_5404F0
0x54049E: mov     eax, [esp+2Ch+var_14]
0x5404A2: mov     ecx, [eax+0E0h]
0x5404A8: xor     dl, dl
0x5404AA: lea     ebx, [ebx+0]
0x5404B0: cmp     ecx, ebx
0x5404B2: jz      short loc_540519
0x5404B4: mov     eax, [ecx]
0x5404B6: cmp     eax, ebx
0x5404B8: jz      short loc_540519
0x5404BA: mov     edx, [eax]
0x5404BC: mov     edx, [edx]
0x5404BE: cmp     edx, [esi]
0x5404C0: jnz     short loc_5404D3
0x5404C2: cmp     [eax+4], edi
0x5404C5: jnz     short loc_5404D3
0x5404C7: mov     eax, [eax+8]
0x5404CA: cmp     eax, [ebp+4]
0x5404CD: jnz     short loc_5404D3
0x5404CF: mov     dl, 1
0x5404D1: jmp     short loc_5404D5
0x5404D3: xor     dl, dl
0x5404D5: cmp     dl, bl
0x5404D7: mov     ecx, [ecx+4]
0x5404DA: jz      short loc_5404B0
0x5404DC: cmp     esi, ebx
0x5404DE: jz      short loc_5404F0
0x5404E0: mov     ecx, esi; this
0x5404E2: call    sub_6B73E0
0x5404E7: push    esi
0x5404E8: call    FormHeapFree
0x5404ED: add     esp, 4
0x5404F0: mov     edx, [esp+2Ch+var_18]
0x5404F4: mov     eax, [edx+4]
0x5404F7: cmp     eax, ebx
0x5404F9: mov     [esp+2Ch+var_18], eax
0x5404FD: jnz     loc_54041B
0x540503: mov     ecx, [esp+2Ch+var_C]
0x540507: mov     large fs:0, ecx
0x54050E: pop     ecx
0x54050F: pop     edi
0x540510: pop     esi
0x540511: pop     ebp
0x540512: pop     ebx
0x540513: add     esp, 18h
0x540516: retn    4
0x540519: cmp     dl, bl
0x54051B: jnz     short loc_5404DC
0x54051D: push    10h; Size
0x54051F: call    FormHeapAlloc
0x540524: add     esp, 4
0x540527: cmp     eax, ebx
0x540529: jz      short loc_54053D
0x54052B: mov     ecx, [ebp+4]
0x54052E: mov     [eax+4], edi
0x540531: mov     [eax], esi
0x540533: mov     [eax+8], ecx
0x540536: mov     [eax+0Ch], ebx
0x540539: mov     edi, eax
0x54053B: jmp     short loc_54053F
0x54053D: xor     edi, edi
0x54053F: cmp     edi, ebx
0x540541: mov     ecx, [esp+2Ch+var_14]
0x540545: mov     esi, [ecx+0E0h]
0x54054B: jz      short loc_540575
0x54054D: cmp     [esi], ebx
0x54054F: jz      short loc_540573
0x540551: push    8; Size
0x540553: call    FormHeapAlloc
0x540558: add     esp, 4
0x54055B: cmp     eax, ebx
0x54055D: jz      short loc_540568
0x54055F: mov     edx, [esi]
0x540561: mov     [eax], edx
0x540563: mov     [eax+4], ebx
0x540566: jmp     short loc_54056A
0x540568: xor     eax, eax
0x54056A: mov     ecx, [esi+4]
0x54056D: mov     [eax+4], ecx
0x540570: mov     [esi+4], eax
0x540573: mov     [esi], edi
0x540575: cmp     dword ptr [ebp+4], 3
0x540579: mov     edi, [esp+2Ch+arg_0]
0x54057D: jnz     loc_5404F0
0x540583: add     byte ptr ds:0B365C0h, 1
0x54058A: jmp     loc_5404F0
