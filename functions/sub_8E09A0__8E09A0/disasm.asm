0x8E09A0: mov     ecx, [ecx+8]
0x8E09A3: push    ebx
0x8E09A4: push    esi
0x8E09A5: mov     esi, [esp+8+arg_0]
0x8E09A9: mov     edx, [esi]
0x8E09AB: movsx   eax, byte ptr [edx+5]
0x8E09AF: mov     esi, [esi+4]
0x8E09B2: add     eax, edx
0x8E09B4: movsx   edx, byte ptr [esi+5]
0x8E09B8: movzx   ebx, word ptr [edx+esi+1Ah]
0x8E09BD: add     edx, esi
0x8E09BF: mov     esi, [ecx+74h]
0x8E09C2: movzx   ecx, word ptr [eax+1Ah]
0x8E09C6: push    edi
0x8E09C7: mov     edi, [esi]
0x8E09C9: add     ebx, edi
0x8E09CB: mov     cl, [ebx+ecx*8+19D4h]
0x8E09D2: test    cl, cl
0x8E09D4: jz      short loc_8E09F1
0x8E09D6: movsx   ecx, cl
0x8E09D9: imul    ecx, 3Ch ; '<'
0x8E09DC: mov     cl, [ecx+edi+1A24h]
0x8E09E3: push    esi
0x8E09E4: push    edx
0x8E09E5: push    eax
0x8E09E6: mov     [esi+0Ch], cl
0x8E09E9: call    sub_8E7850
0x8E09EE: add     esp, 0Ch
0x8E09F1: pop     edi
0x8E09F2: pop     esi
0x8E09F3: pop     ebx
0x8E09F4: retn    4
