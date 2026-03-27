0x8A2B40: push    ebp
0x8A2B41: mov     ebp, esp
0x8A2B43: and     esp, 0FFFFFFF0h
0x8A2B46: sub     esp, 20h
0x8A2B49: mov     eax, ds:0B30AACh
0x8A2B4E: xor     eax, esp
0x8A2B50: mov     [esp+20h+var_4], eax
0x8A2B54: mov     edx, [ebp+arg_4]
0x8A2B57: movaps  xmm2, xmmword ptr [edx]
0x8A2B5A: mov     eax, ecx
0x8A2B5C: mov     ecx, [ebp+arg_0]
0x8A2B5F: movaps  xmm1, xmmword ptr [ecx]
0x8A2B62: movaps  xmm3, xmm1
0x8A2B65: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8A2B69: movaps  xmm0, xmm2
0x8A2B6C: shufps  xmm0, xmm2, 0C9h ; 'É'
0x8A2B70: shufps  xmm1, xmm1, 0C9h ; 'É'
0x8A2B74: mulps   xmm0, xmm3
0x8A2B77: movaps  xmm3, xmm2
0x8A2B7A: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x8A2B7E: mulps   xmm3, xmm1
0x8A2B81: subps   xmm0, xmm3
0x8A2B84: movaps  xmmword ptr [eax], xmm0
0x8A2B87: movaps  xmm1, xmmword ptr [ecx]
0x8A2B8A: shufps  xmm1, xmm1, 0FFh
0x8A2B8E: movaps  xmm2, xmm1
0x8A2B91: shufps  xmm2, xmm1, 0
0x8A2B95: movaps  xmm1, xmmword ptr [edx]
0x8A2B98: mulps   xmm2, xmm1
0x8A2B9B: subps   xmm0, xmm2
0x8A2B9E: movaps  xmmword ptr [eax], xmm0
0x8A2BA1: movaps  xmm1, xmmword ptr [edx]
0x8A2BA4: shufps  xmm1, xmm1, 0FFh
0x8A2BA8: movaps  xmm2, xmm1
0x8A2BAB: shufps  xmm2, xmm1, 0
0x8A2BAF: movaps  xmm1, xmmword ptr [ecx]
0x8A2BB2: mulps   xmm2, xmm1
0x8A2BB5: addps   xmm2, xmm0
0x8A2BB8: movaps  xmmword ptr [eax], xmm2
0x8A2BBB: movaps  xmm0, xmmword ptr [ecx]
0x8A2BBE: movaps  xmm1, xmmword ptr [edx]
0x8A2BC1: mov     ecx, [esp+20h+var_4]
0x8A2BC5: mulps   xmm1, xmm0
0x8A2BC8: movaps  xmm0, xmm1
0x8A2BCB: shufps  xmm0, xmm1, 4Eh ; 'N'
0x8A2BCF: addps   xmm0, xmm1
0x8A2BD2: movaps  xmm1, xmm0
0x8A2BD5: shufps  xmm1, xmm0, 0B1h ; '±'
0x8A2BD9: addps   xmm1, xmm0
0x8A2BDC: movss   [esp+20h+var_14], xmm1
0x8A2BE2: fld     [esp+20h+var_14]
0x8A2BE6: xor     ecx, esp
0x8A2BE8: fstp    dword ptr [eax+0Ch]
0x8A2BEB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A2BF0: mov     esp, ebp
0x8A2BF2: pop     ebp
0x8A2BF3: retn    8
