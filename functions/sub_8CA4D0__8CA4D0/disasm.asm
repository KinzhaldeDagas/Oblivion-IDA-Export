0x8CA4D0: push    esi
0x8CA4D1: push    edi
0x8CA4D2: mov     edi, ecx
0x8CA4D4: mov     eax, [edi+38h]
0x8CA4D7: mov     ecx, [edi+34h]
0x8CA4DA: lea     esi, [edi+30h]
0x8CA4DD: and     eax, 3FFFFFFFh
0x8CA4E2: cmp     ecx, eax
0x8CA4E4: jnz     short loc_8CA4F1
0x8CA4E6: push    4
0x8CA4E8: push    esi
0x8CA4E9: call    sub_8A6EE0
0x8CA4EE: add     esp, 8
0x8CA4F1: mov     ecx, [esi+4]
0x8CA4F4: mov     edx, [esi]
0x8CA4F6: mov     eax, [esp+8+arg_0]
0x8CA4FA: mov     [edx+ecx*4], eax
0x8CA4FD: inc     dword ptr [esi+4]
0x8CA500: mov     ecx, [edi+44h]
0x8CA503: mov     eax, [edi+40h]
0x8CA506: lea     esi, [edi+3Ch]
0x8CA509: and     ecx, 3FFFFFFFh
0x8CA50F: cmp     eax, ecx
0x8CA511: jnz     short loc_8CA51E
0x8CA513: push    4
0x8CA515: push    esi
0x8CA516: call    sub_8A6EE0
0x8CA51B: add     esp, 8
0x8CA51E: mov     edx, [esi+4]
0x8CA521: mov     eax, [esi]
0x8CA523: mov     ecx, [esp+8+arg_4]
0x8CA527: mov     [eax+edx*4], ecx
0x8CA52A: mov     eax, [esi+4]
0x8CA52D: inc     eax
0x8CA52E: pop     edi
0x8CA52F: mov     [esi+4], eax
0x8CA532: pop     esi
0x8CA533: retn    8
