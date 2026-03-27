0x8E85E0: push    ecx
0x8E85E1: push    ebx
0x8E85E2: push    ebp
0x8E85E3: mov     ebp, [esp+0Ch+arg_0]
0x8E85E7: mov     eax, [ebp+21Ch]
0x8E85ED: push    esi
0x8E85EE: push    edi
0x8E85EF: push    1
0x8E85F1: lea     ecx, [esp+18h+arg_0]
0x8E85F5: push    ecx
0x8E85F6: push    4
0x8E85F8: lea     edx, [esp+20h+var_4]
0x8E85FC: push    edx
0x8E85FD: xor     edi, edi
0x8E85FF: mov     [esp+24h+var_4], edi
0x8E8603: push    eax
0x8E8604: mov     eax, [eax+4]
0x8E8607: mov     [esp+28h+arg_0], 4
0x8E860F: call    eax
0x8E8611: mov     esi, [esp+28h+arg_4]
0x8E8615: mov     eax, [esi+8]
0x8E8618: add     esp, 14h
0x8E861B: test    eax, eax
0x8E861D: js      short loc_8E8653
0x8E861F: mov     ecx, ds:0BA9DE4h
0x8E8625: mov     edx, large fs:2Ch
0x8E862C: mov     ecx, [edx+ecx*4]
0x8E862F: mov     ecx, [ecx+19Ch]
0x8E8635: cmp     ecx, edi
0x8E8637: jnz     short loc_8E863F
0x8E8639: mov     ecx, ds:0BA7D9Ch
0x8E863F: mov     edx, [esi]
0x8E8641: and     eax, 3FFFFFFFh
0x8E8646: add     eax, eax
0x8E8648: push    14h
0x8E864A: add     eax, eax
0x8E864C: push    eax
0x8E864D: push    edx
0x8E864E: call    sub_8A75D0
0x8E8653: mov     eax, [esi+8]
0x8E8656: mov     ecx, [esp+14h+var_4]
0x8E865A: and     eax, 0C0000000h
0x8E865F: or      eax, 80000000h
0x8E8664: mov     [esi+8], eax
0x8E8667: and     eax, 3FFFFFFFh
0x8E866C: cmp     eax, ecx
0x8E866E: mov     [esi], edi
0x8E8670: mov     [esi+4], edi
0x8E8673: mov     ebx, ecx
0x8E8675: jge     short loc_8E868F
0x8E8677: add     eax, eax
0x8E8679: cmp     ecx, eax
0x8E867B: jge     short loc_8E867F
0x8E867D: mov     ecx, eax
0x8E867F: push    4
0x8E8681: push    ecx
0x8E8682: push    esi
0x8E8683: call    sub_8A6E40
0x8E8688: mov     ecx, [esp+20h+var_4]
0x8E868C: add     esp, 0Ch
0x8E868F: cmp     ecx, edi
0x8E8691: mov     [esi+4], ebx
0x8E8694: lea     ebx, ds:0[ecx*4]
0x8E869B: jle     short loc_8E86CF
0x8E869D: lea     ecx, [ecx+0]
0x8E86A0: mov     edx, [esi]
0x8E86A2: mov     eax, [ebp+21Ch]
0x8E86A8: push    1
0x8E86AA: lea     ecx, [esp+18h+arg_0]
0x8E86AE: push    ecx
0x8E86AF: lea     ecx, [edx+edi*4]
0x8E86B2: mov     edx, [eax+4]
0x8E86B5: push    4
0x8E86B7: push    ecx
0x8E86B8: push    eax
0x8E86B9: mov     [esp+28h+arg_0], 4
0x8E86C1: call    edx
0x8E86C3: add     edi, 1
0x8E86C6: add     esp, 14h
0x8E86C9: cmp     edi, [esp+14h+var_4]
0x8E86CD: jl      short loc_8E86A0
0x8E86CF: pop     edi
0x8E86D0: pop     esi
0x8E86D1: pop     ebp
0x8E86D2: mov     eax, ebx
0x8E86D4: pop     ebx
0x8E86D5: pop     ecx
0x8E86D6: retn
