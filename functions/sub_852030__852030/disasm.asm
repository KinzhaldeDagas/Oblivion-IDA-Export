0x852030: push    0FFFFFFFFh
0x852032: push    offset SEH_852030
0x852037: mov     eax, large fs:0
0x85203D: push    eax
0x85203E: push    ecx
0x85203F: push    ebx
0x852040: push    esi
0x852041: push    edi
0x852042: mov     eax, ds:0B30AACh
0x852047: xor     eax, esp
0x852049: push    eax
0x85204A: lea     eax, [esp+20h+var_C]
0x85204E: mov     large fs:0, eax
0x852054: mov     esi, ecx
0x852056: mov     edi, ds:0B455A0h
0x85205C: test    edi, edi
0x85205E: mov     [esp+20h+var_10], edi
0x852062: mov     ebx, 1
0x852067: jz      short loc_85206C
0x852069: add     [edi+60h], ebx
0x85206C: mov     ecx, [esi+38h]
0x85206F: lea     eax, [esp+20h+var_10]
0x852073: push    eax
0x852074: push    ecx
0x852075: lea     ecx, [esi+40h]
0x852078: mov     [esp+28h+var_4], 0
0x852080: call    sub_76CE40
0x852085: or      eax, 0FFFFFFFFh
0x852088: test    edi, edi
0x85208A: mov     [esp+20h+var_4], eax
0x85208E: jz      short loc_85209C
0x852090: add     [edi+60h], eax
0x852093: jnz     short loc_85209C
0x852095: mov     ecx, edi
0x852097: call    sub_7604D0
0x85209C: add     [esi+38h], ebx
0x85209F: mov     ecx, [esp+20h+var_C]
0x8520A3: mov     large fs:0, ecx
0x8520AA: pop     ecx
0x8520AB: pop     edi
0x8520AC: pop     esi
0x8520AD: pop     ebx
0x8520AE: add     esp, 10h
0x8520B1: retn    10h
