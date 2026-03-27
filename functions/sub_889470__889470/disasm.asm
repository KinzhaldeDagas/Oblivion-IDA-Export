0x889470: push    ebp
0x889471: mov     ebp, esp
0x889473: and     esp, 0FFFFFFF0h
0x889476: sub     esp, 20h
0x889479: mov     eax, ds:0B30AACh
0x88947E: xor     eax, esp
0x889480: mov     [esp+20h+var_4], eax
0x889484: mov     edx, [ebp+arg_4]
0x889487: movaps  xmm0, xmmword ptr [edx]
0x88948A: mov     eax, ecx
0x88948C: mov     ecx, [ebp+arg_0]
0x88948F: movaps  xmm1, xmmword ptr [ecx]
0x889492: fld     dword ptr [ecx+0Ch]
0x889495: mov     ecx, [esp+20h+var_4]
0x889499: fstp    [esp+20h+var_18]
0x88949D: fld     dword ptr [edx+0Ch]
0x8894A0: movaps  xmm3, xmm0
0x8894A3: shufps  xmm3, xmm0, 0C9h ; 'É'
0x8894A7: fstp    [esp+20h+var_1C]
0x8894AB: fld     [esp+20h+var_18]
0x8894AF: movaps  xmm2, xmm1
0x8894B2: fmul    [esp+20h+var_1C]
0x8894B6: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8894BA: mulps   xmm3, xmm2
0x8894BD: movaps  xmm2, xmm0
0x8894C0: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x8894C4: movaps  xmm4, xmm1
0x8894C7: shufps  xmm4, xmm1, 0C9h ; 'É'
0x8894CB: mulps   xmm2, xmm4
0x8894CE: subps   xmm2, xmm3
0x8894D1: movaps  xmm3, xmm1
0x8894D4: shufps  xmm3, xmm1, 0FFh
0x8894D8: shufps  xmm3, xmm3, 0
0x8894DC: mulps   xmm3, xmm0
0x8894DF: addps   xmm3, xmm2
0x8894E2: movaps  xmm2, xmm0
0x8894E5: shufps  xmm2, xmm0, 0FFh
0x8894E9: mulps   xmm0, xmm1
0x8894EC: movaps  xmm4, xmm0
0x8894EF: shufps  xmm4, xmm0, 55h ; 'U'
0x8894F3: movaps  xmm5, xmm0
0x8894F6: addss   xmm4, xmm0
0x8894FA: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8894FE: addss   xmm5, xmm4
0x889502: movss   [esp+20h+var_14], xmm5
0x889508: fsub    [esp+20h+var_14]
0x88950C: movaps  xmm0, xmm2
0x88950F: shufps  xmm0, xmm2, 0
0x889513: mulps   xmm0, xmm1
0x889516: addps   xmm0, xmm3
0x889519: movaps  xmmword ptr [eax], xmm0
0x88951C: fstp    dword ptr [eax+0Ch]
0x88951F: xor     ecx, esp
0x889521: call    @__security_check_cookie@4; __security_check_cookie(x)
0x889526: mov     esp, ebp
0x889528: pop     ebp
0x889529: retn    8
