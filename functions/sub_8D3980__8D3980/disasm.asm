0x8D3980: mov     eax, [esp+arg_8]
0x8D3984: mov     ecx, [eax]
0x8D3986: movzx   edx, byte ptr [ecx+18h]
0x8D398A: push    esi
0x8D398B: mov     esi, [esp+4+arg_10]
0x8D398F: xor     ecx, ecx
0x8D3991: test    esi, esi
0x8D3993: jle     short loc_8D39CE
0x8D3995: movsx   edx, dl
0x8D3998: imul    edx, 3Ch ; '<'
0x8D399B: push    edi
0x8D399C: mov     edi, [esp+8+arg_14]
0x8D39A0: mov     edi, [edi]
0x8D39A2: fld     dword ptr [edx+edi+1A44h]
0x8D39A9: mov     edx, [esp+8+arg_C]
0x8D39AD: fmul    dword ptr [eax+8]
0x8D39B0: pop     edi
0x8D39B1: fstp    [esp+4+arg_8]
0x8D39B5: fld     dword ptr [edx+ecx*4]
0x8D39B8: fabs
0x8D39BA: fmul    [esp+4+arg_4]
0x8D39BE: fcomp   [esp+4+arg_8]
0x8D39C2: fnstsw  ax
0x8D39C4: test    ah, 41h
0x8D39C7: jz      short loc_8D39D7
0x8D39C9: inc     ecx
0x8D39CA: cmp     ecx, esi
0x8D39CC: jl      short loc_8D39B5
0x8D39CE: mov     eax, [esp+4+arg_0]
0x8D39D2: mov     byte ptr [eax], 1
0x8D39D5: pop     esi
0x8D39D6: retn
0x8D39D7: mov     eax, [esp+4+arg_0]
0x8D39DB: mov     byte ptr [eax], 0
0x8D39DE: pop     esi
0x8D39DF: retn
