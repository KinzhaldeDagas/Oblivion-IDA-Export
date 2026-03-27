0x913C70: push    ebp
0x913C71: mov     ebp, esp
0x913C73: and     esp, 0FFFFFFF0h
0x913C76: sub     esp, 28h
0x913C79: push    esi
0x913C7A: push    edi
0x913C7B: movaps  xmm0, xmmword ptr [ecx+10h]
0x913C7F: movaps  xmm2, xmm0
0x913C82: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x913C86: mov     esi, [ebp+arg_0]
0x913C89: mov     eax, [esi+1Ch]
0x913C8C: movaps  xmm1, xmmword ptr [eax+30h]
0x913C90: movaps  xmm3, xmmword ptr [eax+20h]
0x913C94: mulps   xmm3, xmm2
0x913C97: movaps  xmm2, xmmword ptr [eax+10h]
0x913C9B: addps   xmm3, xmm1
0x913C9E: movaps  xmm1, xmm0
0x913CA1: shufps  xmm1, xmm0, 55h ; 'U'
0x913CA5: mulps   xmm2, xmm1
0x913CA8: movaps  xmm1, xmm0
0x913CAB: shufps  xmm1, xmm0, 0
0x913CAF: movaps  xmm0, xmmword ptr [eax]
0x913CB2: mov     eax, [esi+20h]
0x913CB5: mulps   xmm0, xmm1
0x913CB8: addps   xmm0, xmm2
0x913CBB: addps   xmm0, xmm3
0x913CBE: movaps  [esp+30h+var_10], xmm0
0x913CC3: movaps  xmm0, xmmword ptr [ecx+20h]
0x913CC7: movaps  xmm1, xmmword ptr [eax+30h]
0x913CCB: movaps  xmm3, xmmword ptr [eax+20h]
0x913CCF: movaps  xmm2, xmm0
0x913CD2: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x913CD6: mulps   xmm3, xmm2
0x913CD9: movaps  xmm2, xmmword ptr [eax+10h]
0x913CDD: addps   xmm3, xmm1
0x913CE0: movaps  xmm1, xmm0
0x913CE3: shufps  xmm1, xmm0, 55h ; 'U'
0x913CE7: mulps   xmm2, xmm1
0x913CEA: movaps  xmm1, xmm0
0x913CED: mov     edi, [ebp+arg_4]
0x913CF0: shufps  xmm1, xmm0, 0
0x913CF4: movaps  xmm0, xmmword ptr [eax]
0x913CF7: mov     eax, [esi+28h]
0x913CFA: push    8
0x913CFC: push    eax
0x913CFD: mulps   xmm0, xmm1
0x913D00: addps   xmm0, xmm2
0x913D03: push    edi
0x913D04: addps   xmm0, xmm3
0x913D07: push    esi
0x913D08: movaps  [esp+40h+var_20], xmm0
0x913D0D: call    sub_8F0F70
0x913D12: push    edi
0x913D13: push    esi
0x913D14: lea     ecx, [esp+48h+var_20]
0x913D18: push    ecx
0x913D19: lea     edx, [esp+4Ch+var_10]
0x913D1D: push    edx
0x913D1E: call    sub_8F1CC0
0x913D23: add     esp, 20h
0x913D26: pop     edi
0x913D27: pop     esi
0x913D28: mov     esp, ebp
0x913D2A: pop     ebp
0x913D2B: retn    8
