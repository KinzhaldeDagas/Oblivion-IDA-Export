0x909C40: push    ebp
0x909C41: mov     ebp, esp
0x909C43: and     esp, 0FFFFFFF0h
0x909C46: sub     esp, 0E4h
0x909C4C: mov     ecx, ds:0BA9DE4h
0x909C52: push    ebx
0x909C53: mov     ebx, large fs:2Ch
0x909C5A: mov     eax, [ebx+ecx*4]
0x909C5D: mov     edx, [eax+1A4h]
0x909C63: push    esi
0x909C64: cmp     edx, [eax+1A8h]
0x909C6A: push    edi
0x909C6B: jnb     short loc_909C91
0x909C6D: mov     esi, eax
0x909C6F: mov     ecx, [esi+1A4h]
0x909C75: mov     dword ptr [ecx], offset aTtmultisphere; "TtMultiSphere"
0x909C7B: rdtsc
0x909C7D: mov     [esp+0F0h+var_D8], eax
0x909C81: mov     eax, [esp+0F0h+var_D8]
0x909C85: mov     [ecx+4], eax
0x909C88: add     ecx, 0Ch
0x909C8B: mov     [esi+1A4h], ecx
0x909C91: mov     esi, [ebp+arg_0]
0x909C94: mov     ecx, [esi+8]
0x909C97: mov     edi, [esi]
0x909C99: push    ecx
0x909C9A: lea     ecx, [esp+0F4h+var_B0]
0x909C9E: mov     [esp+0F4h+var_D4], edi
0x909CA2: call    sub_903FA0
0x909CA7: push    0
0x909CA9: lea     ecx, [esp+0F4h+var_C0]
0x909CAD: call    sub_8ED410
0x909CB2: mov     eax, [ebp+arg_4]
0x909CB5: mov     ecx, [eax]
0x909CB7: lea     edx, [esp+0F0h+var_B0]
0x909CBB: mov     [esp+0F0h+var_C4], esi
0x909CBF: mov     [esp+0F0h+var_C8], edx
0x909CC3: mov     edx, [ecx]
0x909CC5: call    dword ptr [edx+8]
0x909CC8: mov     [esp+0F0h+var_D8], eax
0x909CCC: mov     eax, [edi+0Ch]
0x909CCF: xor     esi, esi
0x909CD1: test    eax, eax
0x909CD3: jle     loc_909D8F
0x909CD9: mov     ebx, [ebp+arg_8]
0x909CDC: add     edi, 10h
0x909CDF: nop
0x909CE0: movaps  xmm0, xmmword ptr [edi]
0x909CE3: movaps  xmm2, [esp+0F0h+var_90]
0x909CE8: movaps  xmm3, [esp+0F0h+var_A0]
0x909CED: mov     eax, [ebp+arg_0]
0x909CF0: mov     ecx, [eax+8]
0x909CF3: movaps  xmm1, xmm0
0x909CF6: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x909CFA: mulps   xmm2, xmm1
0x909CFD: movaps  xmm1, xmm0
0x909D00: shufps  xmm1, xmm0, 55h ; 'U'
0x909D04: mulps   xmm3, xmm1
0x909D07: movaps  xmm1, xmm0
0x909D0A: shufps  xmm1, xmm0, 0
0x909D0E: movaps  xmm0, [esp+0F0h+var_B0]
0x909D13: mulps   xmm0, xmm1
0x909D16: movaps  xmm1, xmmword ptr [ecx+30h]
0x909D1A: addps   xmm0, xmm3
0x909D1D: addps   xmm0, xmm2
0x909D20: addps   xmm1, xmm0
0x909D23: movaps  [esp+0F0h+var_80], xmm1
0x909D28: mov     edx, [edi+0Ch]
0x909D2B: lea     eax, [esp+0F0h+var_C0]
0x909D2F: lea     ecx, [esp+0F0h+var_C0]
0x909D33: mov     [esp+0F0h+var_B4], edx
0x909D37: mov     [esp+0F0h+var_D0], eax
0x909D3B: mov     [esp+0F0h+var_CC], esi
0x909D3F: call    __RTC_NumErrors_1
0x909D44: mov     ecx, [ebx]
0x909D46: mov     edx, [esp+0F0h+var_D8]
0x909D4A: shl     eax, 5
0x909D4D: add     eax, ecx
0x909D4F: movzx   eax, byte ptr [eax+edx+190h]
0x909D57: mov     edx, [ebp+arg_10]
0x909D5A: push    edx
0x909D5B: mov     edx, [ebp+arg_C]
0x909D5E: push    edx
0x909D5F: mov     edx, [ebp+arg_4]
0x909D62: push    ebx
0x909D63: push    edx
0x909D64: add     eax, 7Bh ; '{'
0x909D67: lea     edx, [esp+100h+var_D0]
0x909D6B: lea     eax, [eax+eax*4]
0x909D6E: push    edx
0x909D6F: call    dword ptr [ecx+eax*4]
0x909D72: mov     eax, [esp+104h+var_D4]
0x909D76: mov     ecx, [eax+0Ch]
0x909D79: add     esp, 14h
0x909D7C: inc     esi
0x909D7D: add     edi, 10h
0x909D80: cmp     esi, ecx
0x909D82: jl      loc_909CE0
0x909D88: mov     ebx, large fs:2Ch
0x909D8F: mov     ecx, ds:0BA9DE4h
0x909D95: mov     eax, [ebx+ecx*4]
0x909D98: mov     edx, [eax+1A4h]
0x909D9E: cmp     edx, [eax+1A8h]
0x909DA4: jnb     short loc_909DCA
0x909DA6: mov     esi, eax
0x909DA8: mov     ecx, [esi+1A4h]
0x909DAE: mov     dword ptr [ecx], offset aEt; "Et"
0x909DB4: rdtsc
0x909DB6: mov     [esp+0F0h+var_D4], eax
0x909DBA: mov     eax, [esp+0F0h+var_D4]
0x909DBE: mov     [ecx+4], eax
0x909DC1: add     ecx, 0Ch
0x909DC4: mov     [esi+1A4h], ecx
0x909DCA: pop     edi
0x909DCB: pop     esi
0x909DCC: pop     ebx
0x909DCD: mov     esp, ebp
0x909DCF: pop     ebp
0x909DD0: retn
