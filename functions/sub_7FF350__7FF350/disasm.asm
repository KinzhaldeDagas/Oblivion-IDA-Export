0x7FF350: push    0FFFFFFFFh
0x7FF352: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x7FF357: mov     eax, large fs:0
0x7FF35D: push    eax
0x7FF35E: push    ecx
0x7FF35F: push    ebp
0x7FF360: push    esi
0x7FF361: push    edi
0x7FF362: mov     eax, ds:0B30AACh
0x7FF367: xor     eax, esp
0x7FF369: push    eax
0x7FF36A: lea     eax, [esp+20h+var_C]
0x7FF36E: mov     large fs:0, eax
0x7FF374: mov     edi, [esp+20h+arg_0]
0x7FF378: push    4
0x7FF37A: mov     ecx, edi
0x7FF37C: call    NiNode_GetNiPropertyByID
0x7FF381: test    eax, eax
0x7FF383: mov     ebp, ds:0A2807Ch
0x7FF389: jz      short loc_7FF3D6
0x7FF38B: mov     edx, [eax]
0x7FF38D: mov     ecx, eax
0x7FF38F: mov     eax, [edx+54h]
0x7FF392: call    eax
0x7FF394: xor     ecx, ecx
0x7FF396: cmp     eax, 0Ah
0x7FF399: setz    cl
0x7FF39C: mov     eax, ecx
0x7FF39E: test    eax, eax
0x7FF3A0: jnz     loc_7FF47B
0x7FF3A6: push    4
0x7FF3A8: lea     edx, [esp+24h+arg_0]
0x7FF3AC: push    edx
0x7FF3AD: mov     ecx, edi
0x7FF3AF: call    sub_708560
0x7FF3B4: mov     eax, [esp+20h+arg_0]
0x7FF3B8: test    eax, eax
0x7FF3BA: jz      short loc_7FF3D6
0x7FF3BC: mov     esi, eax
0x7FF3BE: add     eax, 4
0x7FF3C1: push    eax; lpAddend
0x7FF3C2: call    ebp ; InterlockedDecrement
0x7FF3C4: test    eax, eax
0x7FF3C6: jnz     short loc_7FF3D6
0x7FF3C8: test    esi, esi
0x7FF3CA: jz      short loc_7FF3D6
0x7FF3CC: mov     eax, [esi]
0x7FF3CE: mov     edx, [eax]
0x7FF3D0: push    1
0x7FF3D2: mov     ecx, esi
0x7FF3D4: call    edx
0x7FF3D6: push    108h; Size
0x7FF3DB: call    FormHeapAlloc
0x7FF3E0: add     esp, 4
0x7FF3E3: mov     [esp+20h+var_10], eax
0x7FF3E7: test    eax, eax
0x7FF3E9: mov     [esp+20h+var_4], 0
0x7FF3F1: jz      short loc_7FF3FE
0x7FF3F3: mov     ecx, eax
0x7FF3F5: call    sub_863430
0x7FF3FA: mov     esi, eax
0x7FF3FC: jmp     short loc_7FF400
0x7FF3FE: xor     esi, esi
0x7FF400: push    esi; a2
0x7FF401: mov     ecx, edi; this
0x7FF403: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7FF40B: call    sub_405680
0x7FF410: mov     eax, [esi]
0x7FF412: mov     edx, [eax+58h]
0x7FF415: push    edi
0x7FF416: mov     ecx, esi
0x7FF418: call    edx
0x7FF41A: test    al, al
0x7FF41C: jnz     short loc_7FF469
0x7FF41E: push    esi
0x7FF41F: mov     ecx, edi
0x7FF421: call    sub_4A1220
0x7FF426: mov     esi, [edi+0BCh]
0x7FF42C: test    esi, esi
0x7FF42E: jz      short loc_7FF452
0x7FF430: lea     eax, [esi+4]
0x7FF433: push    eax; lpAddend
0x7FF434: call    ebp ; InterlockedDecrement
0x7FF436: test    eax, eax
0x7FF438: jnz     short loc_7FF448
0x7FF43A: test    esi, esi
0x7FF43C: jz      short loc_7FF448
0x7FF43E: mov     edx, [esi]
0x7FF440: mov     eax, [edx]
0x7FF442: push    1
0x7FF444: mov     ecx, esi
0x7FF446: call    eax
0x7FF448: mov     dword ptr [edi+0BCh], 0
0x7FF452: xor     al, al
0x7FF454: mov     ecx, dword ptr [esp+20h+var_C]
0x7FF458: mov     large fs:0, ecx
0x7FF45F: pop     ecx
0x7FF460: pop     edi
0x7FF461: pop     esi
0x7FF462: pop     ebp
0x7FF463: add     esp, 10h
0x7FF466: retn    4
0x7FF469: mov     edx, [esi]
0x7FF46B: mov     eax, [edx+8Ch]
0x7FF471: push    0
0x7FF473: mov     ecx, esi
0x7FF475: call    eax
0x7FF477: test    eax, eax
0x7FF479: jz      short loc_7FF452
0x7FF47B: mov     al, 1
0x7FF47D: mov     ecx, dword ptr [esp+20h+var_C]
0x7FF481: mov     large fs:0, ecx
0x7FF488: pop     ecx
0x7FF489: pop     edi
0x7FF48A: pop     esi
0x7FF48B: pop     ebp
0x7FF48C: add     esp, 10h
0x7FF48F: retn    4
