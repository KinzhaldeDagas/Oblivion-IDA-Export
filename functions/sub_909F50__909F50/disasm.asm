0x909F50: push    ebp
0x909F51: mov     ebp, esp
0x909F53: and     esp, 0FFFFFFF0h
0x909F56: sub     esp, 0E4h
0x909F5C: mov     ecx, ds:0BA9DE4h
0x909F62: push    ebx
0x909F63: mov     ebx, large fs:2Ch
0x909F6A: mov     eax, [ebx+ecx*4]
0x909F6D: mov     edx, [eax+1A4h]
0x909F73: push    esi
0x909F74: cmp     edx, [eax+1A8h]
0x909F7A: push    edi
0x909F7B: jnb     short loc_909FA1
0x909F7D: mov     esi, eax
0x909F7F: mov     ecx, [esi+1A4h]
0x909F85: mov     dword ptr [ecx], offset aTtmultisphere; "TtMultiSphere"
0x909F8B: rdtsc
0x909F8D: mov     [esp+0F0h+var_D8], eax
0x909F91: mov     eax, [esp+0F0h+var_D8]
0x909F95: mov     [ecx+4], eax
0x909F98: add     ecx, 0Ch
0x909F9B: mov     [esi+1A4h], ecx
0x909FA1: mov     edi, [ebp+arg_0]
0x909FA4: mov     ecx, [edi+8]
0x909FA7: mov     esi, [edi]
0x909FA9: push    ecx
0x909FAA: lea     ecx, [esp+0F4h+var_B0]
0x909FAE: mov     [esp+0F4h+var_D4], esi
0x909FB2: call    sub_903FA0
0x909FB7: push    0
0x909FB9: lea     ecx, [esp+0F4h+var_C0]
0x909FBD: call    sub_8ED410
0x909FC2: mov     eax, [ebp+arg_4]
0x909FC5: mov     ecx, [eax]
0x909FC7: lea     edx, [esp+0F0h+var_B0]
0x909FCB: mov     [esp+0F0h+var_C4], edi
0x909FCF: mov     [esp+0F0h+var_C8], edx
0x909FD3: mov     edx, [ecx]
0x909FD5: call    dword ptr [edx+8]
0x909FD8: mov     [esp+0F0h+var_D8], eax
0x909FDC: mov     eax, [esi+0Ch]
0x909FDF: xor     edi, edi
0x909FE1: test    eax, eax
0x909FE3: jle     loc_90A0A6
0x909FE9: mov     ebx, [ebp+arg_8]
0x909FEC: add     esi, 10h
0x909FEF: nop
0x909FF0: movaps  xmm0, xmmword ptr [esi]
0x909FF3: movaps  xmm2, [esp+0F0h+var_90]
0x909FF8: movaps  xmm3, [esp+0F0h+var_A0]
0x909FFD: mov     eax, [ebp+arg_0]
0x90A000: mov     ecx, [eax+8]
0x90A003: movaps  xmm1, xmm0
0x90A006: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x90A00A: mulps   xmm2, xmm1
0x90A00D: movaps  xmm1, xmm0
0x90A010: shufps  xmm1, xmm0, 55h ; 'U'
0x90A014: mulps   xmm3, xmm1
0x90A017: movaps  xmm1, xmm0
0x90A01A: shufps  xmm1, xmm0, 0
0x90A01E: movaps  xmm0, [esp+0F0h+var_B0]
0x90A023: mulps   xmm0, xmm1
0x90A026: movaps  xmm1, xmmword ptr [ecx+30h]
0x90A02A: addps   xmm0, xmm3
0x90A02D: addps   xmm0, xmm2
0x90A030: addps   xmm1, xmm0
0x90A033: movaps  [esp+0F0h+var_80], xmm1
0x90A038: mov     edx, [esi+0Ch]
0x90A03B: lea     eax, [esp+0F0h+var_C0]
0x90A03F: lea     ecx, [esp+0F0h+var_C0]
0x90A043: mov     [esp+0F0h+var_B4], edx
0x90A047: mov     [esp+0F0h+var_D0], eax
0x90A04B: mov     [esp+0F0h+var_CC], edi
0x90A04F: call    __RTC_NumErrors_1
0x90A054: mov     ecx, [ebx]
0x90A056: mov     edx, [esp+0F0h+var_D8]
0x90A05A: shl     eax, 5
0x90A05D: add     eax, ecx
0x90A05F: movzx   eax, byte ptr [eax+edx+190h]
0x90A067: mov     edx, [ebp+arg_C]
0x90A06A: push    edx
0x90A06B: mov     edx, [ebp+arg_4]
0x90A06E: push    ebx
0x90A06F: push    edx
0x90A070: lea     edx, [esp+0FCh+var_D0]
0x90A074: lea     eax, [eax+eax*4]
0x90A077: push    edx
0x90A078: call    dword ptr [ecx+eax*4+994h]
0x90A07F: mov     eax, [ebp+arg_C]
0x90A082: mov     cl, [eax+4]
0x90A085: add     esp, 10h
0x90A088: test    cl, cl
0x90A08A: jnz     short loc_90A09F
0x90A08C: mov     ecx, [esp+0F0h+var_D4]
0x90A090: mov     eax, [ecx+0Ch]
0x90A093: inc     edi
0x90A094: add     esi, 10h
0x90A097: cmp     edi, eax
0x90A099: jl      loc_909FF0
0x90A09F: mov     ebx, large fs:2Ch
0x90A0A6: mov     ecx, ds:0BA9DE4h
0x90A0AC: mov     eax, [ebx+ecx*4]
0x90A0AF: mov     edx, [eax+1A4h]
0x90A0B5: cmp     edx, [eax+1A8h]
0x90A0BB: jnb     short loc_90A0E1
0x90A0BD: mov     esi, eax
0x90A0BF: mov     ecx, [esi+1A4h]
0x90A0C5: mov     dword ptr [ecx], offset aEt; "Et"
0x90A0CB: rdtsc
0x90A0CD: mov     [esp+0F0h+var_D4], eax
0x90A0D1: mov     eax, [esp+0F0h+var_D4]
0x90A0D5: mov     [ecx+4], eax
0x90A0D8: add     ecx, 0Ch
0x90A0DB: mov     [esi+1A4h], ecx
0x90A0E1: pop     edi
0x90A0E2: pop     esi
0x90A0E3: pop     ebx
0x90A0E4: mov     esp, ebp
0x90A0E6: pop     ebp
0x90A0E7: retn
