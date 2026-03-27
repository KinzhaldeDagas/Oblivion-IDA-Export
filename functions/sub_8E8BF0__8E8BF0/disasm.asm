0x8E8BF0: push    ebp
0x8E8BF1: mov     ebp, esp
0x8E8BF3: and     esp, 0FFFFFFF0h
0x8E8BF6: sub     esp, 18h
0x8E8BF9: push    esi
0x8E8BFA: mov     esi, ecx
0x8E8BFC: movaps  xmm3, xmmword ptr [esi+40h]
0x8E8C00: movaps  xmm2, xmmword ptr [esi+20h]
0x8E8C04: movaps  xmm5, xmmword ptr [esi+30h]
0x8E8C08: mov     ecx, [esi+0Ch]
0x8E8C0B: movaps  xmm4, xmm3
0x8E8C0E: shufps  xmm4, xmm3, 44h ; 'D'
0x8E8C12: movaps  xmm7, xmm3
0x8E8C15: push    edi
0x8E8C16: mov     edi, [ebp+arg_0]
0x8E8C19: movaps  xmm1, xmmword ptr [edi]
0x8E8C1C: movaps  xmm0, xmm2
0x8E8C1F: shufps  xmm0, xmm5, 44h ; 'D'
0x8E8C23: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8E8C27: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8E8C2B: movaps  xmm5, xmm0
0x8E8C2E: movaps  xmm3, xmm1
0x8E8C31: shufps  xmm3, xmm1, 55h ; 'U'
0x8E8C35: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8E8C39: mulps   xmm5, xmm3
0x8E8C3C: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x8E8C40: movaps  xmm3, xmm1
0x8E8C43: movaps  xmm6, xmm1
0x8E8C46: shufps  xmm3, xmm1, 0
0x8E8C4A: mulps   xmm0, xmm3
0x8E8C4D: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x8E8C51: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8E8C55: mulps   xmm2, xmm6
0x8E8C58: addps   xmm0, xmm5
0x8E8C5B: addps   xmm0, xmm2
0x8E8C5E: lea     edx, [esp+20h+var_10]
0x8E8C62: movaps  [esp+20h+var_10], xmm0
0x8E8C67: mov     eax, [ecx]
0x8E8C69: push    edx
0x8E8C6A: call    dword ptr [eax+10h]
0x8E8C6D: fstp    [esp+20h+var_14]
0x8E8C71: movss   xmm0, [esp+20h+var_14]
0x8E8C77: movaps  xmm1, [esp+20h+var_10]
0x8E8C7C: movaps  xmm4, xmmword ptr [esi+40h]
0x8E8C80: movaps  xmm2, xmm0
0x8E8C83: shufps  xmm2, xmm0, 0
0x8E8C87: movaps  xmm0, xmm2
0x8E8C8A: movaps  xmm2, xmmword ptr [esi+50h]
0x8E8C8E: mulps   xmm0, xmm1
0x8E8C91: movaps  xmm1, xmmword ptr [edi]
0x8E8C94: movaps  xmm3, xmm0
0x8E8C97: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8E8C9B: mulps   xmm4, xmm3
0x8E8C9E: movaps  xmm3, xmmword ptr [esi+30h]
0x8E8CA2: addps   xmm4, xmm2
0x8E8CA5: movaps  xmm2, xmm0
0x8E8CA8: shufps  xmm2, xmm0, 55h ; 'U'
0x8E8CAC: mulps   xmm3, xmm2
0x8E8CAF: movaps  xmm2, xmm0
0x8E8CB2: shufps  xmm2, xmm0, 0
0x8E8CB6: movaps  xmm0, xmmword ptr [esi+20h]
0x8E8CBA: mulps   xmm0, xmm2
0x8E8CBD: addps   xmm0, xmm3
0x8E8CC0: addps   xmm0, xmm4
0x8E8CC3: mulps   xmm0, xmm1
0x8E8CC6: movaps  xmm1, xmm0
0x8E8CC9: shufps  xmm1, xmm0, 55h ; 'U'
0x8E8CCD: movaps  xmm2, xmm0
0x8E8CD0: addss   xmm1, xmm0
0x8E8CD4: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8E8CD8: lea     eax, [esp+20h+var_14]
0x8E8CDC: addss   xmm2, xmm1
0x8E8CE0: pop     edi
0x8E8CE1: movss   dword ptr [eax], xmm2
0x8E8CE5: fld     [esp+1Ch+var_14]
0x8E8CE9: pop     esi
0x8E8CEA: mov     esp, ebp
0x8E8CEC: pop     ebp
0x8E8CED: retn    4
