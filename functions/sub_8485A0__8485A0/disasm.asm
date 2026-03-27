0x8485A0: push    0FFFFFFFFh
0x8485A2: push    offset SEH_851CA0
0x8485A7: mov     eax, large fs:0
0x8485AD: push    eax
0x8485AE: push    ecx
0x8485AF: push    ebx
0x8485B0: push    ebp
0x8485B1: push    esi
0x8485B2: push    edi
0x8485B3: mov     eax, ds:0B30AACh
0x8485B8: xor     eax, esp
0x8485BA: push    eax
0x8485BB: lea     eax, [esp+24h+var_C]
0x8485BF: mov     large fs:0, eax
0x8485C5: mov     edi, ecx
0x8485C7: mov     esi, ds:0B45B28h
0x8485CD: mov     ecx, [esp+24h+arg_C]
0x8485D1: mov     eax, [esi+24h]
0x8485D4: mov     ebp, [eax]
0x8485D6: push    0
0x8485D8: push    ecx
0x8485D9: mov     ecx, edi
0x8485DB: call    sub_848FD0
0x8485E0: mov     ebx, [ebp+4]
0x8485E3: cmp     ebx, eax
0x8485E5: mov     [esp+24h+var_10], eax
0x8485E9: jz      short loc_848620
0x8485EB: test    ebx, ebx
0x8485ED: jz      short loc_84860F
0x8485EF: lea     edx, [ebx+4]
0x8485F2: push    edx; lpAddend
0x8485F3: call    dword ptr ds:0A2807Ch
0x8485F9: test    eax, eax
0x8485FB: jnz     short loc_84860B
0x8485FD: test    ebx, ebx
0x8485FF: jz      short loc_84860B
0x848601: mov     eax, [ebx]
0x848603: mov     edx, [eax]
0x848605: push    1
0x848607: mov     ecx, ebx
0x848609: call    edx
0x84860B: mov     eax, [esp+24h+var_10]
0x84860F: test    eax, eax
0x848611: mov     [ebp+4], eax
0x848614: jz      short loc_848620
0x848616: add     eax, 4
0x848619: push    eax; lpAddend
0x84861A: call    dword ptr ds:0A28078h
0x848620: mov     eax, [esp+24h+arg_C]
0x848624: push    eax
0x848625: push    ebp
0x848626: mov     ecx, edi
0x848628: call    sub_848FA0
0x84862D: mov     ebx, 1
0x848632: add     [esi+60h], ebx
0x848635: mov     [esp+24h+arg_C], esi
0x848639: mov     edx, [edi+38h]
0x84863C: lea     ecx, [esp+24h+arg_C]
0x848640: push    ecx
0x848641: push    edx
0x848642: lea     ecx, [edi+40h]
0x848645: mov     [esp+2Ch+var_4], 0
0x84864D: call    sub_76CE40
0x848652: or      eax, 0FFFFFFFFh
0x848655: add     [esi+60h], eax
0x848658: mov     [esp+24h+var_4], eax
0x84865C: jnz     short loc_848665
0x84865E: mov     ecx, esi
0x848660: call    sub_7604D0
0x848665: add     [edi+38h], ebx
0x848668: mov     ecx, dword ptr [esp+24h+var_C]
0x84866C: mov     large fs:0, ecx
0x848673: pop     ecx
0x848674: pop     edi
0x848675: pop     esi
0x848676: pop     ebp
0x848677: pop     ebx
0x848678: add     esp, 10h
0x84867B: retn    10h
