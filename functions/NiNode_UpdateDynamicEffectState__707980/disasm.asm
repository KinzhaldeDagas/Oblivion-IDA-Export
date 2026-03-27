0x707980: push    0FFFFFFFFh
0x707982: push    offset BSTextureManager_FetchShadowMap_SEH
0x707987: mov     eax, large fs:0
0x70798D: push    eax
0x70798E: sub     esp, 8
0x707991: push    ebp
0x707992: push    esi
0x707993: push    edi
0x707994: mov     eax, ds:0B30AACh
0x707999: xor     eax, esp
0x70799B: push    eax
0x70799C: lea     eax, [esp+24h+var_C]
0x7079A0: mov     large fs:0, eax
0x7079A6: mov     edi, ecx
0x7079A8: xor     esi, esi
0x7079AA: mov     [esp+24h+var_14], esi
0x7079AE: mov     ecx, [edi+1Ch]
0x7079B1: test    ecx, ecx
0x7079B3: mov     ebp, ds:0A2807Ch
0x7079B9: mov     [esp+24h+var_4], esi
0x7079BD: jz      short loc_707A01
0x7079BF: lea     eax, [esp+24h+var_10]
0x7079C3: push    eax
0x7079C4: call    sub_70B400
0x7079C9: push    eax
0x7079CA: lea     ecx, [esp+28h+var_14]
0x7079CE: mov     byte ptr [esp+28h+var_4], 1
0x7079D3: call    sub_55E2A0
0x7079D8: mov     esi, [esp+24h+var_10]
0x7079DC: test    esi, esi
0x7079DE: mov     byte ptr [esp+24h+var_4], 0
0x7079E3: jz      short loc_7079FD
0x7079E5: lea     ecx, [esi+4]
0x7079E8: push    ecx; lpAddend
0x7079E9: call    ebp ; InterlockedDecrement
0x7079EB: test    eax, eax
0x7079ED: jnz     short loc_7079FD
0x7079EF: test    esi, esi
0x7079F1: jz      short loc_7079FD
0x7079F3: mov     edx, [esi]
0x7079F5: mov     eax, [edx]
0x7079F7: push    1
0x7079F9: mov     ecx, esi
0x7079FB: call    eax
0x7079FD: mov     esi, [esp+24h+var_14]
0x707A01: mov     edx, [edi]
0x707A03: mov     eax, [edx+70h]
0x707A06: push    esi
0x707A07: mov     ecx, edi
0x707A09: call    eax
0x707A0B: test    esi, esi
0x707A0D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x707A15: jz      short loc_707A2B
0x707A17: lea     ecx, [esi+4]
0x707A1A: push    ecx; lpAddend
0x707A1B: call    ebp ; InterlockedDecrement
0x707A1D: test    eax, eax
0x707A1F: jnz     short loc_707A2B
0x707A21: mov     edx, [esi]
0x707A23: mov     eax, [edx]
0x707A25: push    1
0x707A27: mov     ecx, esi
0x707A29: call    eax
0x707A2B: mov     ecx, [esp+24h+var_C]
0x707A2F: mov     large fs:0, ecx
0x707A36: pop     ecx
0x707A37: pop     edi
0x707A38: pop     esi
0x707A39: pop     ebp
0x707A3A: add     esp, 14h
0x707A3D: retn
