0x798690: push    ebx
0x798691: push    esi
0x798692: mov     esi, ecx
0x798694: xor     ebx, ebx
0x798696: cmp     [esi+2Ch], ebx
0x798699: jz      loc_7987C7
0x79869F: movzx   eax, word ptr [esi+28h]
0x7986A3: cmp     ax, bx
0x7986A6: jz      loc_7987C7
0x7986AC: push    ebp
0x7986AD: xor     ebp, ebp
0x7986AF: cmp     ax, bx
0x7986B2: jbe     loc_7987C6
0x7986B8: push    edi
0x7986B9: xor     edi, edi
0x7986BB: jmp     short loc_7986C0
0x7986BD: align 10h
0x7986C0: mov     eax, [esi+2Ch]
0x7986C3: mov     ecx, [edi+eax+10h]
0x7986C7: push    ecx
0x7986C8: call    FormHeapFree
0x7986CD: mov     edx, [esi+2Ch]
0x7986D0: mov     eax, [edi+edx+14h]
0x7986D4: push    eax
0x7986D5: call    FormHeapFree
0x7986DA: mov     ecx, [esi+2Ch]
0x7986DD: mov     edx, [edi+ecx+18h]
0x7986E1: push    edx
0x7986E2: call    FormHeapFree
0x7986E7: mov     eax, [esi+2Ch]
0x7986EA: mov     ecx, [edi+eax+24h]
0x7986EE: push    ecx
0x7986EF: call    FormHeapFree
0x7986F4: mov     edx, [esi+2Ch]
0x7986F7: mov     eax, [edi+edx+28h]
0x7986FB: push    eax
0x7986FC: call    FormHeapFree
0x798701: mov     ecx, [esi+2Ch]
0x798704: mov     edx, [edi+ecx+2Ch]
0x798708: push    edx
0x798709: call    FormHeapFree
0x79870E: mov     eax, [esi+2Ch]
0x798711: mov     ecx, [edi+eax+30h]
0x798715: push    ecx
0x798716: call    FormHeapFree
0x79871B: mov     edx, [esi+2Ch]
0x79871E: mov     eax, [edi+edx+1Ch]
0x798722: push    eax
0x798723: call    FormHeapFree
0x798728: mov     ecx, [esi+2Ch]
0x79872B: mov     edx, [edi+ecx+20h]
0x79872F: push    edx
0x798730: call    FormHeapFree
0x798735: mov     eax, [esi+2Ch]
0x798738: mov     ecx, [edi+eax+34h]
0x79873C: push    ecx
0x79873D: call    FormHeapFree
0x798742: mov     edx, [esi+2Ch]
0x798745: mov     eax, [edi+edx+38h]
0x798749: push    eax
0x79874A: call    FormHeapFree
0x79874F: mov     ecx, [esi+2Ch]
0x798752: mov     [edi+ecx+10h], ebx
0x798756: mov     edx, [esi+2Ch]
0x798759: mov     [edi+edx+14h], ebx
0x79875D: mov     eax, [esi+2Ch]
0x798760: mov     [edi+eax+18h], ebx
0x798764: mov     ecx, [esi+2Ch]
0x798767: mov     [edi+ecx+24h], ebx
0x79876B: mov     edx, [esi+2Ch]
0x79876E: mov     [edi+edx+28h], ebx
0x798772: mov     eax, [esi+2Ch]
0x798775: mov     [edi+eax+2Ch], ebx
0x798779: mov     ecx, [esi+2Ch]
0x79877C: mov     [edi+ecx+30h], ebx
0x798780: mov     edx, [esi+2Ch]
0x798783: mov     [edi+edx+1Ch], ebx
0x798787: mov     eax, [esi+2Ch]
0x79878A: mov     [edi+eax+20h], ebx
0x79878E: mov     ecx, [esi+2Ch]
0x798791: mov     [edi+ecx+34h], ebx
0x798795: mov     edx, [esi+2Ch]
0x798798: mov     [edi+edx+38h], ebx
0x79879C: mov     eax, [esi+2Ch]
0x79879F: mov     ecx, [edi+eax+40h]
0x7987A3: push    ecx
0x7987A4: call    FormHeapFree
0x7987A9: mov     edx, [esi+2Ch]
0x7987AC: mov     [edi+edx+40h], ebx
0x7987B0: movzx   eax, word ptr [esi+28h]
0x7987B4: add     ebp, 1
0x7987B7: add     esp, 30h
0x7987BA: add     edi, 44h ; 'D'
0x7987BD: cmp     ebp, eax
0x7987BF: jl      loc_7986C0
0x7987C5: pop     edi
0x7987C6: pop     ebp
0x7987C7: pop     esi
0x7987C8: pop     ebx
0x7987C9: retn
