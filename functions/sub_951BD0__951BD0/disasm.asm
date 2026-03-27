0x951BD0: mov     eax, [esp+arg_0]
0x951BD4: mov     edx, [esp+arg_8]
0x951BD8: push    esi
0x951BD9: mov     esi, ecx
0x951BDB: mov     ecx, [esp+4+arg_4]
0x951BDF: mov     dword ptr [esi+8], 4
0x951BE6: movaps  xmm0, xmmword ptr [eax]
0x951BE9: movaps  xmmword ptr [esi+30h], xmm0
0x951BED: movaps  xmm0, xmmword ptr [ecx]
0x951BF0: movaps  xmmword ptr [esi+40h], xmm0
0x951BF4: movaps  xmm0, xmmword ptr [edx]
0x951BF7: movaps  xmmword ptr [esi+20h], xmm0
0x951BFB: push    edi
0x951BFC: xor     edi, edi
0x951BFE: mov     [esi+50h], edi
0x951C01: movaps  xmm0, xmmword ptr [eax+10h]
0x951C05: movaps  xmmword ptr [esi+70h], xmm0
0x951C09: movaps  xmm0, xmmword ptr [ecx+10h]
0x951C0D: movaps  xmmword ptr [esi+80h], xmm0
0x951C14: movaps  xmm0, xmmword ptr [edx+10h]
0x951C18: movaps  xmmword ptr [esi+60h], xmm0
0x951C1C: mov     [esi+90h], edi
0x951C22: movaps  xmm0, xmmword ptr [eax+20h]
0x951C26: movaps  xmmword ptr [esi+0B0h], xmm0
0x951C2D: movaps  xmm0, xmmword ptr [ecx+20h]
0x951C31: movaps  xmmword ptr [esi+0C0h], xmm0
0x951C38: movaps  xmm0, xmmword ptr [edx+20h]
0x951C3C: movaps  xmmword ptr [esi+0A0h], xmm0
0x951C43: mov     [esi+0D0h], edi
0x951C49: movaps  xmm0, xmmword ptr [eax+30h]
0x951C4D: movaps  xmmword ptr [esi+0F0h], xmm0
0x951C54: movaps  xmm0, xmmword ptr [ecx+30h]
0x951C58: movaps  xmmword ptr [esi+100h], xmm0
0x951C5F: movaps  xmm0, xmmword ptr [edx+30h]
0x951C63: mov     ecx, esi
0x951C65: movaps  xmmword ptr [esi+0E0h], xmm0
0x951C6C: mov     [esi+110h], edi
0x951C72: call    sub_959480
0x951C77: mov     [esi+0Ch], edi
0x951C7A: pop     edi
0x951C7B: pop     esi
0x951C7C: retn    0Ch
