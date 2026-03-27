0x914790: push    ebp
0x914791: mov     ebp, esp
0x914793: and     esp, 0FFFFFFF0h
0x914796: sub     esp, 18h
0x914799: push    esi
0x91479A: mov     esi, ecx
0x91479C: mov     eax, [esi]
0x91479E: push    edi
0x91479F: mov     edi, [ebp+arg_0]
0x9147A2: lea     ecx, [esp+20h+var_10]
0x9147A6: push    ecx
0x9147A7: push    edi
0x9147A8: mov     ecx, esi
0x9147AA: call    dword ptr [eax+24h]
0x9147AD: movaps  xmm1, xmmword ptr [edi]
0x9147B0: movaps  xmm0, [esp+20h+var_10]
0x9147B5: mulps   xmm0, xmm1
0x9147B8: movaps  xmm1, xmm0
0x9147BB: shufps  xmm1, xmm0, 55h ; 'U'
0x9147BF: movaps  xmm2, xmm0
0x9147C2: addss   xmm1, xmm0
0x9147C6: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9147CA: lea     edx, [esp+20h+var_14]
0x9147CE: addss   xmm2, xmm1
0x9147D2: movss   dword ptr [edx], xmm2
0x9147D6: fld     [esp+20h+var_14]
0x9147DA: fadd    dword ptr [esi+0Ch]
0x9147DD: pop     edi
0x9147DE: pop     esi
0x9147DF: mov     esp, ebp
0x9147E1: pop     ebp
0x9147E2: retn    4
