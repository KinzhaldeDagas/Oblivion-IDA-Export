0x8D2B10: push    ebp
0x8D2B11: mov     ebp, esp
0x8D2B13: and     esp, 0FFFFFFF0h
0x8D2B16: sub     esp, 30h
0x8D2B19: mov     eax, [ebp+arg_4]
0x8D2B1C: mov     edx, [eax]
0x8D2B1E: mov     [esp+30h+var_30], edx
0x8D2B21: mov     edx, [eax+14h]
0x8D2B24: mov     [esp+30h+var_1C], edx
0x8D2B28: mov     edx, [eax+28h]
0x8D2B2B: mov     [esp+30h+var_8], edx
0x8D2B2F: mov     edx, [eax+10h]
0x8D2B32: mov     [esp+30h+var_2C], edx
0x8D2B36: mov     edx, [eax+4]
0x8D2B39: mov     [esp+30h+var_20], edx
0x8D2B3D: mov     edx, [eax+20h]
0x8D2B40: mov     [esp+30h+var_28], edx
0x8D2B44: mov     edx, [eax+8]
0x8D2B47: mov     [esp+30h+var_10], edx
0x8D2B4B: mov     edx, [eax+24h]
0x8D2B4E: mov     eax, [eax+18h]
0x8D2B51: mov     [esp+30h+var_18], edx
0x8D2B55: mov     edx, [ebp+arg_0]
0x8D2B58: movaps  xmm1, xmmword ptr [edx]
0x8D2B5B: movaps  xmm2, xmmword ptr [edx+10h]
0x8D2B5F: movaps  xmm3, xmmword ptr [edx+20h]
0x8D2B63: mov     [esp+30h+var_C], eax
0x8D2B67: lea     eax, [esp+30h+var_30]
0x8D2B6A: mov     edx, eax
0x8D2B6C: sub     ecx, edx
0x8D2B6E: mov     [esp+30h+var_24], 0
0x8D2B76: mov     [esp+30h+var_14], 0
0x8D2B7E: mov     [esp+30h+var_4], 0
0x8D2B86: mov     edx, 3
0x8D2B8B: jmp     short loc_8D2B90
0x8D2B8D: align 10h
0x8D2B90: movaps  xmm0, xmmword ptr [eax]
0x8D2B93: movaps  xmm4, xmm0
0x8D2B96: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8D2B9A: movaps  xmm5, xmm3
0x8D2B9D: mulps   xmm5, xmm4
0x8D2BA0: movaps  xmm4, xmm0
0x8D2BA3: shufps  xmm4, xmm0, 55h ; 'U'
0x8D2BA7: movaps  xmm6, xmm2
0x8D2BAA: mulps   xmm6, xmm4
0x8D2BAD: movaps  xmm4, xmm0
0x8D2BB0: shufps  xmm4, xmm0, 0
0x8D2BB4: movaps  xmm0, xmm1
0x8D2BB7: mulps   xmm0, xmm4
0x8D2BBA: addps   xmm0, xmm6
0x8D2BBD: addps   xmm0, xmm5
0x8D2BC0: movaps  xmmword ptr [ecx+eax], xmm0
0x8D2BC4: add     eax, 10h
0x8D2BC7: dec     edx
0x8D2BC8: jnz     short loc_8D2B90
0x8D2BCA: mov     esp, ebp
0x8D2BCC: pop     ebp
0x8D2BCD: retn    8
