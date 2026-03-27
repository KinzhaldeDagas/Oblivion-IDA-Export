0x909AD0: push    ebp
0x909AD1: mov     ebp, esp
0x909AD3: and     esp, 0FFFFFFF0h
0x909AD6: sub     esp, 0E4h
0x909ADC: push    ebx
0x909ADD: push    esi
0x909ADE: push    edi
0x909ADF: mov     edi, large fs:2Ch
0x909AE6: mov     esi, ecx
0x909AE8: mov     ecx, ds:0BA9DE4h
0x909AEE: mov     eax, [edi+ecx*4]
0x909AF1: mov     edx, [eax+1A4h]
0x909AF7: cmp     edx, [eax+1A8h]
0x909AFD: jnb     short loc_909B23
0x909AFF: mov     ebx, eax
0x909B01: mov     ecx, [ebx+1A4h]
0x909B07: mov     dword ptr [ecx], offset aTtmultisphere; "TtMultiSphere"
0x909B0D: rdtsc
0x909B0F: mov     [esp+0F0h+var_D8], eax
0x909B13: mov     eax, [esp+0F0h+var_D8]
0x909B17: mov     [ecx+4], eax
0x909B1A: add     ecx, 0Ch
0x909B1D: mov     [ebx+1A4h], ecx
0x909B23: mov     ebx, [ebp+arg_0]
0x909B26: mov     ecx, [ebx]
0x909B28: mov     edx, [ebx+8]
0x909B2B: mov     [esp+0F0h+var_D8], ecx
0x909B2F: push    edx
0x909B30: lea     ecx, [esp+0F4h+var_B0]
0x909B34: call    sub_903FA0
0x909B39: push    0
0x909B3B: lea     ecx, [esp+0F4h+var_C0]
0x909B3F: call    sub_8ED410
0x909B44: mov     ecx, [esi+0Ch]
0x909B47: mov     esi, [esi+10h]
0x909B4A: dec     esi
0x909B4B: lea     eax, [esp+0F0h+var_B0]
0x909B4F: mov     [esp+0F0h+var_C4], ebx
0x909B53: mov     [esp+0F0h+var_C8], eax
0x909B57: mov     [esp+0F0h+var_D4], ecx
0x909B5B: js      loc_909BFC
0x909B61: mov     eax, [esp+0F0h+var_D8]
0x909B65: lea     edi, [esi+1]
0x909B68: shl     edi, 4
0x909B6B: add     edi, eax
0x909B6D: lea     ecx, [ecx+0]
0x909B70: movaps  xmm0, xmmword ptr [edi]
0x909B73: movaps  xmm2, [esp+0F0h+var_90]
0x909B78: movaps  xmm3, [esp+0F0h+var_A0]
0x909B7D: mov     edx, [ebx+8]
0x909B80: movaps  xmm1, xmm0
0x909B83: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x909B87: mulps   xmm2, xmm1
0x909B8A: movaps  xmm1, xmm0
0x909B8D: shufps  xmm1, xmm0, 55h ; 'U'
0x909B91: mulps   xmm3, xmm1
0x909B94: movaps  xmm1, xmm0
0x909B97: shufps  xmm1, xmm0, 0
0x909B9B: movaps  xmm0, [esp+0F0h+var_B0]
0x909BA0: mulps   xmm0, xmm1
0x909BA3: movaps  xmm1, xmmword ptr [edx+30h]
0x909BA7: mov     edx, [esp+0F0h+var_D4]
0x909BAB: addps   xmm0, xmm3
0x909BAE: addps   xmm0, xmm2
0x909BB1: addps   xmm1, xmm0
0x909BB4: movaps  [esp+0F0h+var_80], xmm1
0x909BB9: mov     eax, [edi+0Ch]
0x909BBC: lea     ecx, [esp+0F0h+var_C0]
0x909BC0: mov     [esp+0F0h+var_B4], eax
0x909BC4: mov     [esp+0F0h+var_D0], ecx
0x909BC8: mov     [esp+0F0h+var_CC], esi
0x909BCC: mov     ecx, [edx+4]
0x909BCF: mov     edx, [ebp+arg_10]
0x909BD2: mov     eax, [ecx]
0x909BD4: push    edx
0x909BD5: mov     edx, [ebp+arg_C]
0x909BD8: push    edx
0x909BD9: mov     edx, [ebp+arg_8]
0x909BDC: push    edx
0x909BDD: mov     edx, [ebp+arg_4]
0x909BE0: push    edx
0x909BE1: lea     edx, [esp+100h+var_D0]
0x909BE5: push    edx
0x909BE6: call    dword ptr [eax+10h]
0x909BE9: dec     esi
0x909BEA: sub     edi, 10h
0x909BED: test    esi, esi
0x909BEF: jge     loc_909B70
0x909BF5: mov     edi, large fs:2Ch
0x909BFC: mov     ecx, ds:0BA9DE4h
0x909C02: mov     eax, [edi+ecx*4]
0x909C05: mov     edx, [eax+1A4h]
0x909C0B: cmp     edx, [eax+1A8h]
0x909C11: jnb     short loc_909C37
0x909C13: mov     edi, eax
0x909C15: mov     ecx, [edi+1A4h]
0x909C1B: mov     dword ptr [ecx], offset aEt; "Et"
0x909C21: rdtsc
0x909C23: mov     [esp+0F0h+var_D4], eax
0x909C27: mov     eax, [esp+0F0h+var_D4]
0x909C2B: mov     [ecx+4], eax
0x909C2E: add     ecx, 0Ch
0x909C31: mov     [edi+1A4h], ecx
0x909C37: pop     edi
0x909C38: pop     esi
0x909C39: pop     ebx
0x909C3A: mov     esp, ebp
0x909C3C: pop     ebp
0x909C3D: retn    14h
