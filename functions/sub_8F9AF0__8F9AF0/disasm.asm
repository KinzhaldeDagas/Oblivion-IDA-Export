0x8F9AF0: push    ebp
0x8F9AF1: mov     ebp, esp
0x8F9AF3: and     esp, 0FFFFFFF0h
0x8F9AF6: sub     esp, 0C4h
0x8F9AFC: mov     edx, ds:0BA9DE4h
0x8F9B02: push    ebx
0x8F9B03: mov     [esp+0C8h+var_B8], ecx
0x8F9B07: mov     ecx, large fs:2Ch
0x8F9B0E: mov     eax, [ecx+edx*4]
0x8F9B11: push    esi
0x8F9B12: mov     esi, [eax+1A4h]
0x8F9B18: push    edi
0x8F9B19: cmp     esi, [eax+1A8h]
0x8F9B1F: jnb     short loc_8F9B45
0x8F9B21: mov     edi, eax
0x8F9B23: mov     esi, [edi+1A4h]
0x8F9B29: mov     dword ptr [esi], offset aTtcapstriangle; "TtCapsTriangle"
0x8F9B2F: rdtsc
0x8F9B31: mov     [esp+0D0h+var_B4], eax
0x8F9B35: mov     eax, [esp+0D0h+var_B4]
0x8F9B39: mov     [esi+4], eax
0x8F9B3C: add     esi, 0Ch
0x8F9B3F: mov     [edi+1A4h], esi
0x8F9B45: mov     eax, [ebp+arg_0]
0x8F9B48: mov     ecx, [eax]
0x8F9B4A: mov     eax, [eax+8]
0x8F9B4D: movaps  xmm1, xmmword ptr [eax]
0x8F9B50: movaps  xmm2, xmmword ptr [eax+10h]
0x8F9B54: movaps  xmm3, xmmword ptr [eax+20h]
0x8F9B58: movaps  xmm4, xmmword ptr [eax+30h]
0x8F9B5C: mov     ebx, [ebp+arg_4]
0x8F9B5F: mov     edi, [ebx]
0x8F9B61: lea     edx, [ecx+10h]
0x8F9B64: lea     eax, [esp+0D0h+var_50]
0x8F9B6B: sub     eax, edx
0x8F9B6D: mov     esi, 2
0x8F9B72: movaps  xmm0, xmmword ptr [edx]
0x8F9B75: movaps  xmm5, xmm0
0x8F9B78: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F9B7C: movaps  xmm6, xmm3
0x8F9B7F: mulps   xmm6, xmm5
0x8F9B82: movaps  xmm5, xmm0
0x8F9B85: shufps  xmm5, xmm0, 55h ; 'U'
0x8F9B89: movaps  xmm7, xmm2
0x8F9B8C: mulps   xmm7, xmm5
0x8F9B8F: movaps  xmm5, xmm0
0x8F9B92: shufps  xmm5, xmm0, 0
0x8F9B96: movaps  xmm0, xmm1
0x8F9B99: mulps   xmm0, xmm5
0x8F9B9C: addps   xmm6, xmm4
0x8F9B9F: addps   xmm0, xmm7
0x8F9BA2: addps   xmm0, xmm6
0x8F9BA5: movaps  xmmword ptr [eax+edx], xmm0
0x8F9BA9: add     edx, 10h
0x8F9BAC: dec     esi
0x8F9BAD: jnz     short loc_8F9B72
0x8F9BAF: mov     edx, [ebx+8]
0x8F9BB2: movaps  xmm1, xmmword ptr [edx]
0x8F9BB5: movaps  xmm2, xmmword ptr [edx+10h]
0x8F9BB9: movaps  xmm3, xmmword ptr [edx+20h]
0x8F9BBD: movaps  xmm4, xmmword ptr [edx+30h]
0x8F9BC1: lea     eax, [edi+10h]
0x8F9BC4: lea     edx, [esp+0D0h+var_30]
0x8F9BCB: sub     edx, eax
0x8F9BCD: mov     esi, 3
0x8F9BD2: movaps  xmm0, xmmword ptr [eax]
0x8F9BD5: movaps  xmm5, xmm0
0x8F9BD8: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F9BDC: movaps  xmm6, xmm3
0x8F9BDF: mulps   xmm6, xmm5
0x8F9BE2: movaps  xmm5, xmm0
0x8F9BE5: shufps  xmm5, xmm0, 55h ; 'U'
0x8F9BE9: movaps  xmm7, xmm2
0x8F9BEC: mulps   xmm7, xmm5
0x8F9BEF: movaps  xmm5, xmm0
0x8F9BF2: shufps  xmm5, xmm0, 0
0x8F9BF6: movaps  xmm0, xmm1
0x8F9BF9: mulps   xmm0, xmm5
0x8F9BFC: addps   xmm6, xmm4
0x8F9BFF: addps   xmm0, xmm7
0x8F9C02: addps   xmm0, xmm6
0x8F9C05: movaps  xmmword ptr [edx+eax], xmm0
0x8F9C09: add     eax, 10h
0x8F9C0C: dec     esi
0x8F9C0D: jnz     short loc_8F9BD2
0x8F9C0F: mov     eax, [ebp+arg_8]
0x8F9C12: mov     ecx, [ecx+0Ch]
0x8F9C15: lea     edx, [esp+0D0h+var_B0]
0x8F9C19: push    edx; int
0x8F9C1A: mov     edx, [eax+8]
0x8F9C1D: mov     eax, [esp+0D4h+var_B8]
0x8F9C21: push    0; int
0x8F9C23: push    edx; float
0x8F9C24: mov     edx, [edi+0Ch]
0x8F9C27: add     eax, 14h
0x8F9C2A: push    eax; int
0x8F9C2B: push    edx; float
0x8F9C2C: lea     eax, [esp+0E4h+var_30]
0x8F9C33: push    eax; int
0x8F9C34: push    ecx; float
0x8F9C35: lea     edx, [esp+0ECh+var_50]
0x8F9C3C: push    edx; int
0x8F9C3D: call    sub_8D0CA0
0x8F9C42: fld     [esp+0F0h+var_94]
0x8F9C46: fcomp   dword ptr ds:0A2FAA8h
0x8F9C4C: add     esp, 20h
0x8F9C4F: fnstsw  ax
0x8F9C51: test    ah, 5
0x8F9C54: jnp     short loc_8F9C67
0x8F9C56: fld     [esp+0D0h+var_74]
0x8F9C5A: fcomp   dword ptr ds:0A2FAA8h
0x8F9C60: fnstsw  ax
0x8F9C62: test    ah, 5
0x8F9C65: jp      short loc_8F9C74
0x8F9C67: mov     ecx, [ebp+arg_C]
0x8F9C6A: mov     edx, [ebp+arg_0]
0x8F9C6D: mov     eax, [ecx]
0x8F9C6F: push    ebx
0x8F9C70: push    edx
0x8F9C71: call    dword ptr [eax+4]
0x8F9C74: mov     ecx, large fs:2Ch
0x8F9C7B: mov     edx, ds:0BA9DE4h
0x8F9C81: mov     eax, [ecx+edx*4]
0x8F9C84: mov     esi, [eax+1A4h]
0x8F9C8A: cmp     esi, [eax+1A8h]
0x8F9C90: jnb     short loc_8F9CB6
0x8F9C92: mov     esi, eax
0x8F9C94: mov     ecx, [esi+1A4h]
0x8F9C9A: mov     dword ptr [ecx], offset aEt; "Et"
0x8F9CA0: rdtsc
0x8F9CA2: mov     [esp+0D0h+var_B8], eax
0x8F9CA6: mov     eax, [esp+0D0h+var_B8]
0x8F9CAA: mov     [ecx+4], eax
0x8F9CAD: add     ecx, 0Ch
0x8F9CB0: mov     [esi+1A4h], ecx
0x8F9CB6: pop     edi
0x8F9CB7: pop     esi
0x8F9CB8: pop     ebx
0x8F9CB9: mov     esp, ebp
0x8F9CBB: pop     ebp
0x8F9CBC: retn    10h
