0x8CBBB0: push    edi
0x8CBBB1: mov     edi, [esp+4+arg_4]
0x8CBBB5: mov     byte ptr [edi+28h], 0
0x8CBBB9: cmp     word ptr [edi+22h], 0FFFFh
0x8CBBBF: jnz     short loc_8CBBF8
0x8CBBC1: mov     eax, [esp+4+arg_0]
0x8CBBC5: mov     cx, [eax+54h]
0x8CBBC9: push    esi
0x8CBBCA: lea     esi, [eax+50h]
0x8CBBCD: mov     [edi+22h], cx
0x8CBBD1: mov     edx, [esi+8]
0x8CBBD4: mov     eax, [esi+4]
0x8CBBD7: and     edx, 3FFFFFFFh
0x8CBBDD: cmp     eax, edx
0x8CBBDF: jnz     short loc_8CBBEC
0x8CBBE1: push    4
0x8CBBE3: push    esi
0x8CBBE4: call    sub_8A6EE0
0x8CBBE9: add     esp, 8
0x8CBBEC: mov     eax, [esi+4]
0x8CBBEF: mov     ecx, [esi]
0x8CBBF1: mov     [ecx+eax*4], edi
0x8CBBF4: inc     dword ptr [esi+4]
0x8CBBF7: pop     esi
0x8CBBF8: pop     edi
0x8CBBF9: retn
