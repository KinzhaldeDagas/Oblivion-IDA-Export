0x9573A0: push    ecx
0x9573A1: push    ebx
0x9573A2: push    ebp
0x9573A3: push    esi
0x9573A4: mov     esi, ecx
0x9573A6: mov     edx, [esi+1Ch]
0x9573A9: push    edi
0x9573AA: mov     edi, [esi+18h]
0x9573AD: mov     eax, [edi]
0x9573AF: dec     edx
0x9573B0: mov     ecx, edi
0x9573B2: mov     [esp+14h+var_4], edi
0x9573B6: mov     [esi+18h], eax
0x9573B9: mov     [esi+1Ch], edx
0x9573BC: call    sub_956980
0x9573C1: mov     ecx, [esp+14h+arg_0]
0x9573C5: mov     ebp, [esp+14h+arg_4]
0x9573C9: mov     byte ptr [edi+4], 1
0x9573CD: mov     [edi], ecx
0x9573CF: mov     edx, [ebp+0]
0x9573D2: push    edi
0x9573D3: push    ebp
0x9573D4: mov     ecx, esi
0x9573D6: mov     [edi+0B8h], edx
0x9573DC: call    sub_956DD0
0x9573E1: xor     ebx, ebx
0x9573E3: add     edi, 0Ch
0x9573E6: mov     ecx, [esi+28h]
0x9573E9: mov     eax, [ecx]
0x9573EB: lea     edx, [edi+4]
0x9573EE: push    edx
0x9573EF: mov     edx, [ebp+4]
0x9573F2: push    edi
0x9573F3: push    edx
0x9573F4: mov     edx, [ebp+0]
0x9573F7: push    edx
0x9573F8: mov     edx, [esi+34h]
0x9573FB: add     edx, ebx
0x9573FD: push    edx
0x9573FE: call    dword ptr [eax+14h]
0x957401: add     ebx, 20h ; ' '
0x957404: add     edi, 8
0x957407: cmp     ebx, 60h ; '`'
0x95740A: jl      short loc_9573E6
0x95740C: mov     eax, [esp+14h+var_4]
0x957410: pop     edi
0x957411: pop     esi
0x957412: pop     ebp
0x957413: pop     ebx
0x957414: pop     ecx
0x957415: retn    8
