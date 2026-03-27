0x917EA0: push    ebp
0x917EA1: mov     ebp, esp
0x917EA3: and     esp, 0FFFFFFF0h
0x917EA6: sub     esp, 1Ch
0x917EA9: push    esi
0x917EAA: mov     esi, ecx
0x917EAC: mov     ecx, [esi+10h]
0x917EAF: mov     eax, [ecx]
0x917EB1: lea     edx, [esp+20h+var_10]
0x917EB5: push    edx
0x917EB6: call    dword ptr [eax+2Ch]
0x917EB9: movaps  xmm0, [esp+20h+var_10]
0x917EBE: movaps  xmm1, xmmword ptr [esi+50h]
0x917EC2: movaps  xmm3, xmmword ptr [esi+40h]
0x917EC6: mov     eax, [ebp+arg_0]
0x917EC9: movaps  xmm2, xmm0
0x917ECC: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x917ED0: mulps   xmm3, xmm2
0x917ED3: movaps  xmm2, xmmword ptr [esi+30h]
0x917ED7: addps   xmm3, xmm1
0x917EDA: movaps  xmm1, xmm0
0x917EDD: shufps  xmm1, xmm0, 55h ; 'U'
0x917EE1: mulps   xmm2, xmm1
0x917EE4: movaps  xmm1, xmm0
0x917EE7: shufps  xmm1, xmm0, 0
0x917EEB: movaps  xmm0, xmmword ptr [esi+20h]
0x917EEF: mulps   xmm0, xmm1
0x917EF2: addps   xmm0, xmm2
0x917EF5: addps   xmm0, xmm3
0x917EF8: movaps  xmmword ptr [eax], xmm0
0x917EFB: pop     esi
0x917EFC: mov     esp, ebp
0x917EFE: pop     ebp
0x917EFF: retn    4
