0x903FA0: mov     edx, [esp+arg_0]
0x903FA4: movaps  xmm0, xmmword ptr [edx]
0x903FA7: mov     eax, ecx
0x903FA9: movaps  xmmword ptr [eax], xmm0
0x903FAC: movaps  xmm0, xmmword ptr [edx+10h]
0x903FB0: movaps  xmmword ptr [eax+10h], xmm0
0x903FB4: movaps  xmm0, xmmword ptr [edx+20h]
0x903FB8: push    esi
0x903FB9: movaps  xmmword ptr [eax+20h], xmm0
0x903FBD: movaps  xmm0, xmmword ptr [edx+30h]
0x903FC1: movaps  xmmword ptr [eax+30h], xmm0
0x903FC5: push    edi
0x903FC6: lea     esi, [edx+40h]
0x903FC9: lea     edi, [eax+40h]
0x903FCC: mov     ecx, 14h
0x903FD1: rep movsd
0x903FD3: lea     ecx, [edx+90h]
0x903FD9: mov     edi, [ecx]
0x903FDB: lea     esi, [eax+90h]
0x903FE1: mov     [esi], edi
0x903FE3: mov     edi, [ecx+4]
0x903FE6: mov     [esi+4], edi
0x903FE9: mov     edi, [ecx+8]
0x903FEC: mov     [esi+8], edi
0x903FEF: mov     ecx, [ecx+0Ch]
0x903FF2: mov     [esi+0Ch], ecx
0x903FF5: mov     ecx, [edx+0A0h]
0x903FFB: mov     [eax+0A0h], ecx
0x904001: mov     ecx, [edx+0A4h]
0x904007: mov     [eax+0A4h], ecx
0x90400D: mov     ecx, [edx+0A8h]
0x904013: mov     [eax+0A8h], ecx
0x904019: mov     cx, [edx+0ACh]
0x904020: mov     [eax+0ACh], cx
0x904027: mov     dx, [edx+0AEh]
0x90402E: pop     edi
0x90402F: mov     [eax+0AEh], dx
0x904036: pop     esi
0x904037: retn    4
