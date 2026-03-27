0x909940: push    ebp
0x909941: mov     ebp, esp
0x909943: and     esp, 0FFFFFFF0h
0x909946: sub     esp, 0E4h
0x90994C: mov     ecx, ds:0BA9DE4h
0x909952: push    ebx
0x909953: mov     ebx, large fs:2Ch
0x90995A: mov     eax, [ebx+ecx*4]
0x90995D: mov     edx, [eax+1A4h]
0x909963: push    esi
0x909964: cmp     edx, [eax+1A8h]
0x90996A: push    edi
0x90996B: jnb     short loc_909991
0x90996D: mov     esi, eax
0x90996F: mov     ecx, [esi+1A4h]
0x909975: mov     dword ptr [ecx], offset aTtmultisphere; "TtMultiSphere"
0x90997B: rdtsc
0x90997D: mov     [esp+0F0h+var_D8], eax
0x909981: mov     eax, [esp+0F0h+var_D8]
0x909985: mov     [ecx+4], eax
0x909988: add     ecx, 0Ch
0x90998B: mov     [esi+1A4h], ecx
0x909991: mov     esi, [ebp+arg_0]
0x909994: mov     ecx, [esi+8]
0x909997: mov     edi, [esi]
0x909999: push    ecx
0x90999A: lea     ecx, [esp+0F4h+var_B0]
0x90999E: mov     [esp+0F4h+var_D4], edi
0x9099A2: call    sub_903FA0
0x9099A7: push    0
0x9099A9: lea     ecx, [esp+0F4h+var_C0]
0x9099AD: call    sub_8ED410
0x9099B2: mov     eax, [ebp+arg_4]
0x9099B5: mov     ecx, [eax]
0x9099B7: lea     edx, [esp+0F0h+var_B0]
0x9099BB: mov     [esp+0F0h+var_C4], esi
0x9099BF: mov     [esp+0F0h+var_C8], edx
0x9099C3: mov     edx, [ecx]
0x9099C5: call    dword ptr [edx+8]
0x9099C8: mov     [esp+0F0h+var_D8], eax
0x9099CC: mov     eax, [edi+0Ch]
0x9099CF: xor     esi, esi
0x9099D1: test    eax, eax
0x9099D3: jle     loc_909A8C
0x9099D9: mov     ebx, [ebp+arg_8]
0x9099DC: add     edi, 10h
0x9099DF: nop
0x9099E0: movaps  xmm0, xmmword ptr [edi]
0x9099E3: movaps  xmm2, [esp+0F0h+var_90]
0x9099E8: movaps  xmm3, [esp+0F0h+var_A0]
0x9099ED: mov     eax, [ebp+arg_0]
0x9099F0: mov     ecx, [eax+8]
0x9099F3: movaps  xmm1, xmm0
0x9099F6: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x9099FA: mulps   xmm2, xmm1
0x9099FD: movaps  xmm1, xmm0
0x909A00: shufps  xmm1, xmm0, 55h ; 'U'
0x909A04: mulps   xmm3, xmm1
0x909A07: movaps  xmm1, xmm0
0x909A0A: shufps  xmm1, xmm0, 0
0x909A0E: movaps  xmm0, [esp+0F0h+var_B0]
0x909A13: mulps   xmm0, xmm1
0x909A16: movaps  xmm1, xmmword ptr [ecx+30h]
0x909A1A: addps   xmm0, xmm3
0x909A1D: addps   xmm0, xmm2
0x909A20: addps   xmm1, xmm0
0x909A23: movaps  [esp+0F0h+var_80], xmm1
0x909A28: mov     edx, [edi+0Ch]
0x909A2B: lea     eax, [esp+0F0h+var_C0]
0x909A2F: lea     ecx, [esp+0F0h+var_C0]
0x909A33: mov     [esp+0F0h+var_B4], edx
0x909A37: mov     [esp+0F0h+var_D0], eax
0x909A3B: mov     [esp+0F0h+var_CC], esi
0x909A3F: call    __RTC_NumErrors_1
0x909A44: mov     ecx, [ebx]
0x909A46: mov     edx, [esp+0F0h+var_D8]
0x909A4A: shl     eax, 5
0x909A4D: add     eax, ecx
0x909A4F: movzx   eax, byte ptr [eax+edx+190h]
0x909A57: mov     edx, [ebp+arg_C]
0x909A5A: push    edx
0x909A5B: mov     edx, [ebp+arg_4]
0x909A5E: push    ebx
0x909A5F: push    edx
0x909A60: lea     edx, [esp+0FCh+var_D0]
0x909A64: lea     eax, [eax+eax*4]
0x909A67: push    edx
0x909A68: call    dword ptr [ecx+eax*4+998h]
0x909A6F: mov     eax, [esp+100h+var_D4]
0x909A73: mov     ecx, [eax+0Ch]
0x909A76: add     esp, 10h
0x909A79: inc     esi
0x909A7A: add     edi, 10h
0x909A7D: cmp     esi, ecx
0x909A7F: jl      loc_9099E0
0x909A85: mov     ebx, large fs:2Ch
0x909A8C: mov     ecx, ds:0BA9DE4h
0x909A92: mov     eax, [ebx+ecx*4]
0x909A95: mov     edx, [eax+1A4h]
0x909A9B: cmp     edx, [eax+1A8h]
0x909AA1: jnb     short loc_909AC7
0x909AA3: mov     esi, eax
0x909AA5: mov     ecx, [esi+1A4h]
0x909AAB: mov     dword ptr [ecx], offset aEt; "Et"
0x909AB1: rdtsc
0x909AB3: mov     [esp+0F0h+var_D4], eax
0x909AB7: mov     eax, [esp+0F0h+var_D4]
0x909ABB: mov     [ecx+4], eax
0x909ABE: add     ecx, 0Ch
0x909AC1: mov     [esi+1A4h], ecx
0x909AC7: pop     edi
0x909AC8: pop     esi
0x909AC9: pop     ebx
0x909ACA: mov     esp, ebp
0x909ACC: pop     ebp
0x909ACD: retn
