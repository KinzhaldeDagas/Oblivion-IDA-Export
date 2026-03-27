0x7974F0: push    0FFFFFFFFh
0x7974F2: push    offset SEH_7974F0
0x7974F7: mov     eax, large fs:0
0x7974FD: push    eax
0x7974FE: sub     esp, 10h
0x797501: push    esi
0x797502: push    edi
0x797503: mov     eax, ds:0B30AACh
0x797508: xor     eax, esp
0x79750A: push    eax
0x79750B: lea     eax, [esp+28h+var_C]
0x79750F: mov     large fs:0, eax
0x797515: mov     esi, ecx
0x797517: xor     edi, edi
0x797519: mov     [esp+28h+var_18], edi
0x79751D: mov     [esp+28h+var_14], edi
0x797521: mov     [esp+28h+var_10], edi
0x797525: mov     ecx, [esp+28h+arg_0]
0x797529: lea     eax, [esp+28h+var_1C]
0x79752D: push    eax; int
0x79752E: push    ecx; char *
0x79752F: mov     ecx, esi
0x797531: mov     [esp+30h+var_4], edi
0x797535: call    sub_796E60
0x79753A: mov     eax, [esp+28h+var_18]
0x79753E: cmp     eax, edi
0x797540: jz      short loc_79754B
0x797542: push    eax
0x797543: call    FormHeapFree
0x797548: add     esp, 4
0x79754B: mov     eax, esi
0x79754D: mov     ecx, [esp+28h+var_C]
0x797551: mov     large fs:0, ecx
0x797558: pop     ecx
0x797559: pop     edi
0x79755A: pop     esi
0x79755B: add     esp, 1Ch
0x79755E: retn    4
