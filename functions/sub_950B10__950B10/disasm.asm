0x950B10: push    ebp
0x950B11: mov     ebp, esp
0x950B13: and     esp, 0FFFFFFF0h
0x950B16: sub     esp, 10h
0x950B19: mov     eax, [ebp+arg_8]
0x950B1C: movaps  xmm2, xmmword ptr [eax]
0x950B1F: mov     ecx, [ebp+arg_4]
0x950B22: movaps  xmm3, xmmword ptr [ecx]
0x950B25: mov     edx, [ebp+arg_C]
0x950B28: movaps  xmm4, xmmword ptr [edx]
0x950B2B: movaps  xmm0, xmm3
0x950B2E: subps   xmm0, xmm2
0x950B31: movaps  xmm1, xmm3
0x950B34: subps   xmm1, xmm4
0x950B37: movaps  xmm5, xmm1
0x950B3A: shufps  xmm5, xmm1, 0C9h ; 'É'
0x950B3E: movaps  xmm6, xmm0
0x950B41: shufps  xmm6, xmm0, 0D2h ; 'Ò'
0x950B45: mulps   xmm6, xmm5
0x950B48: movaps  xmm5, xmm1
0x950B4B: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x950B4F: movaps  xmm1, xmm0
0x950B52: shufps  xmm1, xmm0, 0C9h ; 'É'
0x950B56: movaps  xmm0, xmm1
0x950B59: movaps  xmm1, xmm2
0x950B5C: subps   xmm1, xmm3
0x950B5F: subps   xmm2, xmm4
0x950B62: movaps  xmm3, xmm2
0x950B65: shufps  xmm3, xmm2, 0C9h ; 'É'
0x950B69: movaps  xmm4, xmm1
0x950B6C: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x950B70: mulps   xmm4, xmm3
0x950B73: movaps  xmm3, xmm2
0x950B76: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x950B7A: movaps  xmm2, xmm1
0x950B7D: shufps  xmm2, xmm1, 0C9h ; 'É'
0x950B81: mulps   xmm0, xmm5
0x950B84: movaps  xmm1, xmm2
0x950B87: mulps   xmm1, xmm3
0x950B8A: subps   xmm0, xmm6
0x950B8D: mulps   xmm0, xmm0
0x950B90: movaps  xmm2, xmm0
0x950B93: shufps  xmm2, xmm0, 55h ; 'U'
0x950B97: movaps  xmm3, xmm0
0x950B9A: lea     eax, [esp+10h+var_4]
0x950B9E: addss   xmm2, xmm0
0x950BA2: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x950BA6: addss   xmm3, xmm2
0x950BAA: movss   dword ptr [eax], xmm3
0x950BAE: fld     [esp+10h+var_4]
0x950BB2: fcomp   [ebp+arg_10]
0x950BB5: subps   xmm1, xmm4
0x950BB8: fnstsw  ax
0x950BBA: test    ah, 5
0x950BBD: jnp     short loc_950BFB
0x950BBF: movaps  xmm0, xmm1
0x950BC2: mulps   xmm0, xmm1
0x950BC5: movaps  xmm1, xmm0
0x950BC8: shufps  xmm1, xmm0, 55h ; 'U'
0x950BCC: movaps  xmm2, xmm0
0x950BCF: addss   xmm1, xmm0
0x950BD3: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x950BD7: lea     ecx, [esp+10h+var_4]
0x950BDB: addss   xmm2, xmm1
0x950BDF: movss   dword ptr [ecx], xmm2
0x950BE3: fld     [esp+10h+var_4]
0x950BE7: fcomp   [ebp+arg_10]
0x950BEA: fnstsw  ax
0x950BEC: test    ah, 5
0x950BEF: jnp     short loc_950BFB
0x950BF1: mov     eax, [ebp+arg_0]
0x950BF4: mov     byte ptr [eax], 1
0x950BF7: mov     esp, ebp
0x950BF9: pop     ebp
0x950BFA: retn
0x950BFB: mov     eax, [ebp+arg_0]
0x950BFE: mov     byte ptr [eax], 0
0x950C01: mov     esp, ebp
0x950C03: pop     ebp
0x950C04: retn
