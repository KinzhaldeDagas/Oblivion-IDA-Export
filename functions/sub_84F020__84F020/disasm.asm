0x84F020: push    0FFFFFFFFh
0x84F022: push    offset SEH_851CA0
0x84F027: mov     eax, large fs:0
0x84F02D: push    eax
0x84F02E: push    ecx
0x84F02F: push    ebx
0x84F030: push    ebp
0x84F031: push    esi
0x84F032: push    edi
0x84F033: mov     eax, ds:0B30AACh
0x84F038: xor     eax, esp
0x84F03A: push    eax
0x84F03B: lea     eax, [esp+24h+var_C]
0x84F03F: mov     large fs:0, eax
0x84F045: mov     ebx, ecx
0x84F047: mov     esi, ds:0B459B0h
0x84F04D: mov     eax, [esi+24h]
0x84F050: mov     ecx, [esp+24h+arg_C]
0x84F054: mov     edi, [eax]
0x84F056: mov     edx, [ecx]
0x84F058: mov     eax, [edx+88h]
0x84F05E: push    0
0x84F060: mov     [esp+28h+var_10], edi
0x84F064: call    eax
0x84F066: mov     edi, [edi+4]
0x84F069: mov     ebp, eax
0x84F06B: cmp     edi, ebp
0x84F06D: jz      short loc_84F0A6
0x84F06F: test    edi, edi
0x84F071: jz      short loc_84F08F
0x84F073: lea     ecx, [edi+4]
0x84F076: push    ecx; lpAddend
0x84F077: call    dword ptr ds:0A2807Ch
0x84F07D: test    eax, eax
0x84F07F: jnz     short loc_84F08F
0x84F081: test    edi, edi
0x84F083: jz      short loc_84F08F
0x84F085: mov     edx, [edi]
0x84F087: mov     eax, [edx]
0x84F089: push    1
0x84F08B: mov     ecx, edi
0x84F08D: call    eax
0x84F08F: test    ebp, ebp
0x84F091: mov     edi, [esp+24h+var_10]
0x84F095: mov     [edi+4], ebp
0x84F098: jz      short loc_84F0AA
0x84F09A: add     ebp, 4
0x84F09D: push    ebp; lpAddend
0x84F09E: call    dword ptr ds:0A28078h
0x84F0A4: jmp     short loc_84F0AA
0x84F0A6: mov     edi, [esp+24h+var_10]
0x84F0AA: test    edi, edi
0x84F0AC: jz      short loc_84F0CA
0x84F0AE: cmp     byte ptr ds:0B42CDDh, 0
0x84F0B5: jz      short loc_84F0CA
0x84F0B7: mov     ecx, [esp+24h+arg_C]
0x84F0BB: mov     edx, [ecx]
0x84F0BD: mov     eax, [edx+78h]
0x84F0C0: call    eax
0x84F0C2: push    eax
0x84F0C3: mov     ecx, edi
0x84F0C5: call    sub_7715E0
0x84F0CA: mov     edi, 1
0x84F0CF: add     [esi+60h], edi
0x84F0D2: mov     [esp+24h+arg_C], esi
0x84F0D6: mov     edx, [ebx+38h]
0x84F0D9: lea     ecx, [esp+24h+arg_C]
0x84F0DD: push    ecx
0x84F0DE: push    edx
0x84F0DF: lea     ecx, [ebx+40h]
0x84F0E2: mov     [esp+2Ch+var_4], 0
0x84F0EA: call    sub_76CE40
0x84F0EF: or      eax, 0FFFFFFFFh
0x84F0F2: add     [esi+60h], eax
0x84F0F5: mov     [esp+24h+var_4], eax
0x84F0F9: jnz     short loc_84F102
0x84F0FB: mov     ecx, esi
0x84F0FD: call    sub_7604D0
0x84F102: add     [ebx+38h], edi
0x84F105: mov     ecx, dword ptr [esp+24h+var_C]
0x84F109: mov     large fs:0, ecx
0x84F110: pop     ecx
0x84F111: pop     edi
0x84F112: pop     esi
0x84F113: pop     ebp
0x84F114: pop     ebx
0x84F115: add     esp, 10h
0x84F118: retn    10h
