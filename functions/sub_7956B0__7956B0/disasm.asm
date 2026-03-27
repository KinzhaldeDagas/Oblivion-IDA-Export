0x7956B0: push    ebp
0x7956B1: push    esi
0x7956B2: xor     ebp, ebp
0x7956B4: push    edi
0x7956B5: mov     edi, [esp+0Ch+arg_0]
0x7956B9: cmp     edi, ebp
0x7956BB: mov     esi, ecx
0x7956BD: mov     [esi+4], ebp
0x7956C0: mov     [esi+8], ebp
0x7956C3: mov     [esi+0Ch], ebp
0x7956C6: jz      short loc_795714
0x7956C8: cmp     edi, 0FFFFFFFFh
0x7956CB: jbe     short loc_7956D2
0x7956CD: call    sub_790B90
0x7956D2: push    ebx
0x7956D3: lea     ebx, ds:0[edi*4]
0x7956DA: push    ebx; Size
0x7956DB: call    FormHeapAlloc
0x7956E0: lea     ecx, [ebx+eax]
0x7956E3: add     esp, 4
0x7956E6: cmp     edi, ebp
0x7956E8: mov     [esi+0Ch], ecx
0x7956EB: mov     [esi+4], eax
0x7956EE: mov     [esi+8], eax
0x7956F1: mov     ecx, edi
0x7956F3: mov     edx, eax
0x7956F5: jbe     short loc_79570E
0x7956F7: mov     edi, [esp+10h+arg_4]
0x7956FB: jmp     short loc_795700
0x7956FD: align 10h
0x795700: mov     ebp, [edi]
0x795702: mov     [edx], ebp
0x795704: sub     ecx, 1
0x795707: add     edx, 4
0x79570A: test    ecx, ecx
0x79570C: ja      short loc_795700
0x79570E: add     ebx, eax
0x795710: mov     [esi+8], ebx
0x795713: pop     ebx
0x795714: pop     edi
0x795715: pop     esi
0x795716: pop     ebp
0x795717: retn    8
