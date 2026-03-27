0x530590: push    edi
0x530591: mov     edi, ecx
0x530593: mov     ecx, [esp+4+arg_0]
0x530597: test    ecx, ecx
0x530599: jz      short loc_530616
0x53059B: cmp     word ptr [edi+20h], 0FFFFh
0x5305A1: jz      short loc_530616
0x5305A3: push    ebx
0x5305A4: push    esi
0x5305A5: push    edi
0x5305A6: call    sub_52F520
0x5305AB: mov     esi, eax
0x5305AD: movzx   eax, word ptr [edi+20h]
0x5305B1: mov     ebx, [esi+8]
0x5305B4: add     esi, 4
0x5305B7: cmp     [ebx+eax*4], edi
0x5305BA: jnz     short loc_5305C6
0x5305BC: push    eax
0x5305BD: mov     ecx, esi
0x5305BF: call    sub_5304C0
0x5305C4: jmp     short loc_530604
0x5305C6: mov     ecx, [esi+0Ch]
0x5305C9: xor     eax, eax
0x5305CB: test    ecx, ecx
0x5305CD: jle     short loc_530604
0x5305CF: mov     edx, ebx
0x5305D1: cmp     [edx], edi
0x5305D3: jz      short loc_5305E1
0x5305D5: add     eax, 1
0x5305D8: add     edx, 4
0x5305DB: cmp     eax, ecx
0x5305DD: jl      short loc_5305D1
0x5305DF: jmp     short loc_530604
0x5305E1: cmp     eax, ecx
0x5305E3: jnb     short loc_530604
0x5305E5: mov     ecx, [ebx+eax*4]
0x5305E8: test    ecx, ecx
0x5305EA: mov     dword ptr [ebx+eax*4], 0
0x5305F1: jz      short loc_5305F7
0x5305F3: add     dword ptr [esi+10h], 0FFFFFFFFh
0x5305F7: mov     ecx, [esi+0Ch]
0x5305FA: add     ecx, 0FFFFFFFFh
0x5305FD: cmp     eax, ecx
0x5305FF: jnz     short loc_530604
0x530601: mov     [esi+0Ch], ecx
0x530604: mov     ecx, esi
0x530606: call    sub_5A56F0
0x53060B: push    esi
0x53060C: call    sub_52EFE0
0x530611: add     esp, 4
0x530614: pop     esi
0x530615: pop     ebx
0x530616: pop     edi
0x530617: retn    4
