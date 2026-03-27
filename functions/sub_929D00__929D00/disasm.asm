0x929D00: mov     eax, [esp+arg_0]
0x929D04: push    esi
0x929D05: mov     esi, ecx
0x929D07: push    edi
0x929D08: mov     edi, [esi+20h]
0x929D0B: mov     ecx, edi
0x929D0D: or      edx, 0FFFFFFFFh
0x929D10: shr     edx, cl
0x929D12: mov     ecx, 20h ; ' '
0x929D17: sub     ecx, edi
0x929D19: mov     edi, [esi+24h]
0x929D1C: and     edx, eax
0x929D1E: shr     eax, cl
0x929D20: lea     eax, [eax+eax*2]
0x929D23: shl     eax, 4
0x929D26: mov     cl, [eax+edi+11h]
0x929D2A: add     eax, edi
0x929D2C: pop     edi
0x929D2D: cmp     cl, 1
0x929D30: mov     ecx, [eax+20h]
0x929D33: pop     esi
0x929D34: jnz     short loc_929D4F
0x929D36: imul    ecx, edx
0x929D39: mov     edx, [eax+1Ch]
0x929D3C: movzx   ecx, byte ptr [ecx+edx]
0x929D40: mov     edx, [eax+28h]
0x929D43: mov     eax, [eax+24h]
0x929D46: imul    edx, ecx
0x929D49: mov     eax, [edx+eax]
0x929D4C: retn    4
0x929D4F: imul    ecx, edx
0x929D52: mov     edx, [eax+1Ch]
0x929D55: movzx   ecx, word ptr [ecx+edx]
0x929D59: mov     edx, [eax+28h]
0x929D5C: mov     eax, [eax+24h]
0x929D5F: imul    edx, ecx
0x929D62: mov     eax, [edx+eax]
0x929D65: retn    4
