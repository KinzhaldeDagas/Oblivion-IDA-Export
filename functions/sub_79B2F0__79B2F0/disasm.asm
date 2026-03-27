0x79B2F0: push    esi
0x79B2F1: push    edi
0x79B2F2: mov     edi, [esp+8+arg_0]
0x79B2F6: mov     esi, ecx
0x79B2F8: cmp     esi, edi
0x79B2FA: jz      loc_79B40E
0x79B300: push    ebx
0x79B301: mov     ebx, [edi+4]
0x79B304: test    ebx, ebx
0x79B306: push    ebp
0x79B307: jz      short loc_79B315
0x79B309: mov     ebp, [edi+8]
0x79B30C: mov     edx, ebp
0x79B30E: sub     edx, ebx
0x79B310: sar     edx, 2
0x79B313: jnz     short loc_79B323
0x79B315: call    sub_784A70
0x79B31A: pop     ebp
0x79B31B: pop     ebx
0x79B31C: pop     edi
0x79B31D: mov     eax, esi
0x79B31F: pop     esi
0x79B320: retn    4
0x79B323: mov     eax, [esi+4]
0x79B326: test    eax, eax
0x79B328: jnz     short loc_79B32E
0x79B32A: xor     ecx, ecx
0x79B32C: jmp     short loc_79B336
0x79B32E: mov     ecx, [esi+8]
0x79B331: sub     ecx, eax
0x79B333: sar     ecx, 2
0x79B336: cmp     edx, ecx
0x79B338: ja      short loc_79B37A
0x79B33A: push    eax; Dst
0x79B33B: push    ebp; int
0x79B33C: push    ebx; Src
0x79B33D: call    sub_790420
0x79B342: mov     eax, [edi+4]
0x79B345: add     esp, 0Ch
0x79B348: test    eax, eax
0x79B34A: jnz     short loc_79B360
0x79B34C: mov     eax, [esi+4]
0x79B34F: pop     ebp
0x79B350: xor     edi, edi
0x79B352: lea     ecx, [eax+edi*4]
0x79B355: pop     ebx
0x79B356: pop     edi
0x79B357: mov     [esi+8], ecx
0x79B35A: mov     eax, esi
0x79B35C: pop     esi
0x79B35D: retn    4
0x79B360: mov     edi, [edi+8]
0x79B363: sub     edi, eax
0x79B365: mov     eax, [esi+4]
0x79B368: pop     ebp
0x79B369: sar     edi, 2
0x79B36C: lea     ecx, [eax+edi*4]
0x79B36F: pop     ebx
0x79B370: pop     edi
0x79B371: mov     [esi+8], ecx
0x79B374: mov     eax, esi
0x79B376: pop     esi
0x79B377: retn    4
0x79B37A: test    eax, eax
0x79B37C: jnz     short loc_79B382
0x79B37E: xor     ecx, ecx
0x79B380: jmp     short loc_79B38A
0x79B382: mov     ecx, [esi+0Ch]
0x79B385: sub     ecx, eax
0x79B387: sar     ecx, 2
0x79B38A: cmp     edx, ecx
0x79B38C: ja      short loc_79B3CA
0x79B38E: test    eax, eax
0x79B390: jnz     short loc_79B396
0x79B392: xor     ecx, ecx
0x79B394: jmp     short loc_79B39E
0x79B396: mov     ecx, [esi+8]
0x79B399: sub     ecx, eax
0x79B39B: sar     ecx, 2
0x79B39E: mov     edx, ebx
0x79B3A0: push    eax; Dst
0x79B3A1: lea     ebx, [edx+ecx*4]
0x79B3A4: push    ebx; int
0x79B3A5: push    edx; Src
0x79B3A6: call    sub_790420
0x79B3AB: mov     edx, [esi+8]
0x79B3AE: mov     eax, [edi+8]
0x79B3B1: add     esp, 0Ch
0x79B3B4: push    edx; Dst
0x79B3B5: push    eax; int
0x79B3B6: push    ebx; Src
0x79B3B7: mov     ecx, esi
0x79B3B9: call    sub_7A25C0
0x79B3BE: pop     ebp
0x79B3BF: pop     ebx
0x79B3C0: mov     [esi+8], eax
0x79B3C3: pop     edi
0x79B3C4: mov     eax, esi
0x79B3C6: pop     esi
0x79B3C7: retn    4
0x79B3CA: test    eax, eax
0x79B3CC: jz      short loc_79B3D7
0x79B3CE: push    eax
0x79B3CF: call    FormHeapFree
0x79B3D4: add     esp, 4
0x79B3D7: mov     ecx, [edi+4]
0x79B3DA: test    ecx, ecx
0x79B3DC: jnz     short loc_79B3E2
0x79B3DE: xor     eax, eax
0x79B3E0: jmp     short loc_79B3EA
0x79B3E2: mov     eax, [edi+8]
0x79B3E5: sub     eax, ecx
0x79B3E7: sar     eax, 2
0x79B3EA: push    eax; char *
0x79B3EB: mov     ecx, esi
0x79B3ED: call    sub_790E40
0x79B3F2: test    al, al
0x79B3F4: jz      short loc_79B40C
0x79B3F6: mov     ecx, [esi+4]
0x79B3F9: mov     edx, [edi+8]
0x79B3FC: mov     eax, [edi+4]
0x79B3FF: push    ecx; Dst
0x79B400: push    edx; int
0x79B401: push    eax; Src
0x79B402: mov     ecx, esi
0x79B404: call    sub_7A25C0
0x79B409: mov     [esi+8], eax
0x79B40C: pop     ebp
0x79B40D: pop     ebx
0x79B40E: pop     edi
0x79B40F: mov     eax, esi
0x79B411: pop     esi
0x79B412: retn    4
