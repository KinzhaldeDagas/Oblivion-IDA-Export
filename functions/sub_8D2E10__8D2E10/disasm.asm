0x8D2E10: mov     edx, [esp+arg_0]
0x8D2E14: mov     eax, ecx
0x8D2E16: mov     ecx, [edx]
0x8D2E18: mov     [eax], ecx
0x8D2E1A: mov     ecx, [edx+4]
0x8D2E1D: mov     [eax+4], ecx
0x8D2E20: mov     ecx, [edx+8]
0x8D2E23: mov     [eax+8], ecx
0x8D2E26: mov     ecx, [edx+0Ch]
0x8D2E29: mov     [eax+0Ch], ecx
0x8D2E2C: movaps  xmm0, xmmword ptr [edx+10h]
0x8D2E30: push    esi
0x8D2E31: movaps  xmmword ptr [eax+10h], xmm0
0x8D2E35: movaps  xmm0, xmmword ptr [edx+20h]
0x8D2E39: push    edi
0x8D2E3A: movaps  xmmword ptr [eax+20h], xmm0
0x8D2E3E: mov     ecx, [edx+30h]
0x8D2E41: mov     [eax+30h], ecx
0x8D2E44: lea     esi, [edx+34h]
0x8D2E47: lea     edi, [eax+34h]
0x8D2E4A: mov     ecx, 8
0x8D2E4F: rep movsd
0x8D2E51: lea     esi, [edx+54h]
0x8D2E54: lea     edi, [eax+54h]
0x8D2E57: mov     ecx, 8
0x8D2E5C: rep movsd
0x8D2E5E: lea     esi, [edx+74h]
0x8D2E61: lea     edi, [eax+74h]
0x8D2E64: mov     ecx, 8
0x8D2E69: rep movsd
0x8D2E6B: lea     esi, [edx+94h]
0x8D2E71: lea     edi, [eax+94h]
0x8D2E77: mov     ecx, 8
0x8D2E7C: rep movsd
0x8D2E7E: lea     esi, [edx+0B4h]
0x8D2E84: lea     edi, [eax+0B4h]
0x8D2E8A: mov     ecx, 8
0x8D2E8F: rep movsd
0x8D2E91: lea     esi, [edx+0D4h]
0x8D2E97: lea     edi, [eax+0D4h]
0x8D2E9D: mov     ecx, 8
0x8D2EA2: rep movsd
0x8D2EA4: mov     ecx, [edx+0F4h]
0x8D2EAA: mov     [eax+0F4h], ecx
0x8D2EB0: mov     ecx, [edx+0F8h]
0x8D2EB6: mov     [eax+0F8h], ecx
0x8D2EBC: mov     ecx, [edx+0FCh]
0x8D2EC2: mov     [eax+0FCh], ecx
0x8D2EC8: mov     edx, [edx+100h]
0x8D2ECE: pop     edi
0x8D2ECF: mov     [eax+100h], edx
0x8D2ED5: pop     esi
0x8D2ED6: retn    4
