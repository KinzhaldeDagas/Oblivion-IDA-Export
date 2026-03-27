0x6BE6B0: sub     esp, 0Ch
0x6BE6B3: mov     eax, [esp+0Ch+arg_0]
0x6BE6B7: mov     edx, [esp+0Ch+arg_4]
0x6BE6BB: push    ebx
0x6BE6BC: push    ebp
0x6BE6BD: lea     ecx, [eax+30h]
0x6BE6C0: mov     [esp+14h+arg_0], ecx
0x6BE6C4: push    esi
0x6BE6C5: mov     ecx, eax
0x6BE6C7: push    edi
0x6BE6C8: sub     ecx, edx
0x6BE6CA: lea     edi, [edx+20h]
0x6BE6CD: sub     edx, eax
0x6BE6CF: lea     ebp, [eax+2Ch]
0x6BE6D2: mov     [esp+1Ch+arg_4], ecx
0x6BE6D6: mov     [esp+1Ch+var_8], edx
0x6BE6DA: mov     [esp+1Ch+var_C], 3
0x6BE6E2: mov     edx, [edi-0Ch]
0x6BE6E5: mov     [ecx+edi-0Ch], edx
0x6BE6E9: mov     eax, [edi]
0x6BE6EB: mov     [ecx+edi], eax
0x6BE6EE: mov     ebx, [edi-0Ch]
0x6BE6F1: test    ebx, ebx
0x6BE6F3: jz      short loc_6BE74F
0x6BE6F5: mov     ecx, [edi]
0x6BE6F7: mov     eax, ds:0B3D358h[ecx*4]
0x6BE6FE: push    ebx
0x6BE6FF: call    eax ; dword_B3D358
0x6BE701: mov     edx, [esp+20h+arg_0]
0x6BE705: mov     [edx], eax
0x6BE707: mov     eax, [edi]
0x6BE709: mov     ecx, ds:0B3D530h[eax*4]
0x6BE710: add     esp, 4
0x6BE713: xor     esi, esi
0x6BE715: test    ebx, ebx
0x6BE717: mov     [esp+1Ch+var_4], ecx
0x6BE71B: jbe     short loc_6BE74B
0x6BE71D: lea     ecx, [ecx+0]
0x6BE720: mov     edx, [esp+1Ch+var_8]
0x6BE724: movzx   eax, byte ptr [edx+ebp]
0x6BE728: movzx   ecx, byte ptr [ebp+0]
0x6BE72C: imul    eax, esi
0x6BE72F: add     eax, [edi+10h]
0x6BE732: imul    ecx, esi
0x6BE735: mov     edx, [esp+1Ch+arg_0]
0x6BE739: add     ecx, [edx]
0x6BE73B: push    eax
0x6BE73C: push    ecx
0x6BE73D: call    [esp+24h+var_4]
0x6BE741: add     esi, 1
0x6BE744: add     esp, 8
0x6BE747: cmp     esi, ebx
0x6BE749: jb      short loc_6BE720
0x6BE74B: mov     ecx, [esp+1Ch+arg_4]
0x6BE74F: add     [esp+1Ch+arg_0], 4
0x6BE754: add     edi, 4
0x6BE757: add     ebp, 1
0x6BE75A: sub     [esp+1Ch+var_C], 1
0x6BE75F: jnz     short loc_6BE6E2
0x6BE761: pop     edi
0x6BE762: pop     esi
0x6BE763: pop     ebp
0x6BE764: pop     ebx
0x6BE765: add     esp, 0Ch
0x6BE768: retn
