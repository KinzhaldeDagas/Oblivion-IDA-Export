0x56ABB0: push    esi
0x56ABB1: mov     eax, ecx
0x56ABB3: mov     ecx, [esp+4+arg_0]
0x56ABB7: mov     edx, 18h
0x56ABBC: push    edi
0x56ABBD: lea     ecx, [ecx+0]
0x56ABC0: mov     esi, [ecx]
0x56ABC2: cmp     esi, [eax]
0x56ABC4: jnz     short loc_56ABD8
0x56ABC6: sub     edx, 4
0x56ABC9: add     eax, 4
0x56ABCC: add     ecx, 4
0x56ABCF: cmp     edx, 4
0x56ABD2: jnb     short loc_56ABC0
0x56ABD4: test    edx, edx
0x56ABD6: jz      short loc_56AC3D
0x56ABD8: movzx   esi, byte ptr [ecx]
0x56ABDB: movzx   edi, byte ptr [eax]
0x56ABDE: sub     esi, edi
0x56ABE0: jnz     short loc_56AC27
0x56ABE2: sub     edx, 1
0x56ABE5: add     eax, 1
0x56ABE8: add     ecx, 1
0x56ABEB: test    edx, edx
0x56ABED: jz      short loc_56AC3D
0x56ABEF: movzx   esi, byte ptr [ecx]
0x56ABF2: movzx   edi, byte ptr [eax]
0x56ABF5: sub     esi, edi
0x56ABF7: jnz     short loc_56AC27
0x56ABF9: sub     edx, 1
0x56ABFC: add     eax, 1
0x56ABFF: add     ecx, 1
0x56AC02: test    edx, edx
0x56AC04: jz      short loc_56AC3D
0x56AC06: movzx   esi, byte ptr [ecx]
0x56AC09: movzx   edi, byte ptr [eax]
0x56AC0C: sub     esi, edi
0x56AC0E: jnz     short loc_56AC27
0x56AC10: sub     edx, 1
0x56AC13: add     eax, 1
0x56AC16: add     ecx, 1
0x56AC19: test    edx, edx
0x56AC1B: jz      short loc_56AC3D
0x56AC1D: movzx   esi, byte ptr [ecx]
0x56AC20: movzx   eax, byte ptr [eax]
0x56AC23: sub     esi, eax
0x56AC25: jz      short loc_56AC3D
0x56AC27: test    esi, esi
0x56AC29: mov     eax, 1
0x56AC2E: jg      short loc_56AC3F
0x56AC30: or      eax, 0FFFFFFFFh
0x56AC33: test    eax, eax
0x56AC35: pop     edi
0x56AC36: setnz   al
0x56AC39: pop     esi
0x56AC3A: retn    4
0x56AC3D: xor     eax, eax
0x56AC3F: test    eax, eax
0x56AC41: pop     edi
0x56AC42: setnz   al
0x56AC45: pop     esi
0x56AC46: retn    4
