0x8EB490: push    ebp
0x8EB491: mov     ebp, esp
0x8EB493: and     esp, 0FFFFFFF0h
0x8EB496: sub     esp, 34h
0x8EB499: mov     eax, [ebp+arg_4]
0x8EB49C: push    ebx
0x8EB49D: mov     ebx, [ebp+arg_8]
0x8EB4A0: movaps  xmm0, xmmword ptr [ebx+40h]
0x8EB4A4: mov     [esp+38h+var_28], eax
0x8EB4A8: movss   xmm1, [esp+38h+var_28]
0x8EB4AE: push    esi
0x8EB4AF: movaps  xmm2, xmm1
0x8EB4B2: shufps  xmm2, xmm1, 0
0x8EB4B6: mulps   xmm2, xmm0
0x8EB4B9: push    edi
0x8EB4BA: mov     edi, ecx
0x8EB4BC: movaps  xmmword ptr [edi+0D0h], xmm2
0x8EB4C3: movaps  xmm0, xmmword ptr [ebx+50h]
0x8EB4C7: movaps  xmm3, xmmword ptr [edi+30h]
0x8EB4CB: movaps  xmm4, xmmword ptr [edi+20h]
0x8EB4CF: lea     esi, [edi+10h]
0x8EB4D2: movaps  xmm2, xmm0
0x8EB4D5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8EB4D9: mulps   xmm3, xmm2
0x8EB4DC: movaps  xmm2, xmm0
0x8EB4DF: shufps  xmm2, xmm0, 55h ; 'U'
0x8EB4E3: mulps   xmm4, xmm2
0x8EB4E6: movaps  xmm2, xmm0
0x8EB4E9: shufps  xmm2, xmm0, 0
0x8EB4ED: movaps  xmm0, xmmword ptr [esi]
0x8EB4F0: mulps   xmm0, xmm2
0x8EB4F3: addps   xmm0, xmm4
0x8EB4F6: addps   xmm0, xmm3
0x8EB4F9: movaps  xmm2, xmm1
0x8EB4FC: shufps  xmm2, xmm1, 0
0x8EB500: mulps   xmm2, xmm0
0x8EB503: movaps  xmmword ptr [edi+0E0h], xmm2
0x8EB50A: mov     cx, [ebx+4]
0x8EB50E: mov     [edi+0BEh], cx
0x8EB515: movaps  xmm0, xmmword ptr [esi+50h]
0x8EB519: mov     ecx, [ebp+arg_0]
0x8EB51C: movaps  xmmword ptr [esi+40h], xmm0
0x8EB520: mov     edx, [ecx]
0x8EB522: mov     [esi+4Ch], edx
0x8EB525: fld     dword ptr [esi+0A4h]
0x8EB52B: movaps  xmm1, xmmword ptr [edi+0D0h]
0x8EB532: fld     st
0x8EB534: movaps  xmm0, xmm1
0x8EB537: fmul    st, st(1)
0x8EB539: mulps   xmm0, xmm1
0x8EB53C: movaps  xmm2, xmm0
0x8EB53F: shufps  xmm2, xmm0, 55h ; 'U'
0x8EB543: movaps  xmm3, xmm0
0x8EB546: lea     eax, [esp+40h+var_2C]
0x8EB54A: addss   xmm2, xmm0
0x8EB54E: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8EB552: addss   xmm3, xmm2
0x8EB556: movss   dword ptr [eax], xmm3
0x8EB55A: fld     [esp+40h+var_2C]
0x8EB55E: fcompp
0x8EB560: fnstsw  ax
0x8EB562: fstp    st
0x8EB564: test    ah, 41h
0x8EB567: jnz     short loc_8EB590
0x8EB569: fld     [esp+40h+var_2C]
0x8EB56D: fsqrt
0x8EB56F: fdivr   dword ptr [esi+0A4h]
0x8EB575: fstp    [esp+40h+var_28]
0x8EB579: movss   xmm0, [esp+40h+var_28]
0x8EB57F: movaps  xmm2, xmm0
0x8EB582: shufps  xmm2, xmm0, 0
0x8EB586: mulps   xmm2, xmm1
0x8EB589: movaps  xmmword ptr [edi+0D0h], xmm2
0x8EB590: mov     edx, [ecx+8]
0x8EB593: movaps  xmm1, xmmword ptr [edi+0D0h]
0x8EB59A: mov     [esp+40h+var_28], edx
0x8EB59E: movss   xmm0, [esp+40h+var_28]
0x8EB5A4: movaps  xmm2, xmm0
0x8EB5A7: shufps  xmm2, xmm0, 0
0x8EB5AB: movaps  xmm0, xmmword ptr [esi+50h]
0x8EB5AF: mulps   xmm2, xmm1
0x8EB5B2: addps   xmm0, xmm2
0x8EB5B5: movaps  xmmword ptr [esi+50h], xmm0
0x8EB5B9: mov     eax, [ecx+0Ch]
0x8EB5BC: mov     [esi+5Ch], eax
0x8EB5BF: lea     eax, [esi+70h]
0x8EB5C2: mov     edx, [eax]
0x8EB5C4: mov     dword ptr [esp+40h+var_20], edx
0x8EB5C8: mov     edx, [eax+4]
0x8EB5CB: mov     dword ptr [esp+40h+var_20+4], edx
0x8EB5CF: mov     edx, [eax+8]
0x8EB5D2: mov     eax, [eax+0Ch]
0x8EB5D5: mov     dword ptr [esp+40h+var_20+8], edx
0x8EB5D9: mov     dword ptr [esp+40h+var_20+0Ch], eax
0x8EB5DD: movaps  xmm0, [esp+40h+var_20]
0x8EB5E2: movaps  xmmword ptr [esi+60h], xmm0
0x8EB5E6: fld     dword ptr [ecx+8]
0x8EB5E9: fmul    dword ptr ds:0A3D65Ch
0x8EB5EF: movaps  xmm2, xmmword ptr [edi+0E0h]
0x8EB5F6: lea     edx, [esp+40h+var_28]
0x8EB5FA: fstp    [esp+40h+var_28]
0x8EB5FE: movss   xmm0, [esp+40h+var_28]
0x8EB604: movaps  xmm1, xmm0
0x8EB607: shufps  xmm1, xmm0, 0
0x8EB60B: mulps   xmm1, xmm2
0x8EB60E: movaps  xmm0, xmm1
0x8EB611: mulps   xmm0, xmm1
0x8EB614: movaps  xmm3, xmm0
0x8EB617: shufps  xmm3, xmm0, 55h ; 'U'
0x8EB61B: movaps  xmm4, xmm0
0x8EB61E: addss   xmm3, xmm0
0x8EB622: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8EB626: addss   xmm4, xmm3
0x8EB62A: movss   dword ptr [edx], xmm4
0x8EB62E: fld     [esp+40h+var_28]
0x8EB632: fmul    dword ptr ds:0A96F74h
0x8EB638: movaps  [esp+40h+var_10], xmm1
0x8EB63D: fstp    [esp+40h+var_2C]
0x8EB641: fld     dword ptr [esi+0A8h]
0x8EB647: fmul    dword ptr [ecx+8]
0x8EB64A: fld     dword ptr ds:0A37450h
0x8EB650: fcomp   st(1)
0x8EB652: fnstsw  ax
0x8EB654: test    ah, 5
0x8EB657: jp      short loc_8EB661
0x8EB659: fstp    st
0x8EB65B: fld     dword ptr ds:0A37450h
0x8EB661: fld     st
0x8EB663: fmul    st, st(1)
0x8EB665: fstp    [esp+40h+var_28]
0x8EB669: fld     [esp+40h+var_2C]
0x8EB66D: fcomp   [esp+40h+var_28]
0x8EB671: fnstsw  ax
0x8EB673: test    ah, 41h
0x8EB676: jp      short loc_8EB67C
0x8EB678: fstp    st
0x8EB67A: jmp     short loc_8EB6B6
0x8EB67C: fld     [esp+40h+var_2C]
0x8EB680: mov     eax, [esp+40h+var_28]
0x8EB684: fsqrt
0x8EB686: mov     [esp+40h+var_2C], eax
0x8EB68A: fdivp   st(1), st
0x8EB68C: fstp    [esp+40h+var_24]
0x8EB690: movss   xmm0, [esp+40h+var_24]
0x8EB696: movaps  xmm3, xmm0
0x8EB699: shufps  xmm3, xmm0, 0
0x8EB69D: mulps   xmm3, xmm2
0x8EB6A0: movaps  xmm2, xmm0
0x8EB6A3: shufps  xmm2, xmm0, 0
0x8EB6A7: mulps   xmm2, xmm1
0x8EB6AA: movaps  xmmword ptr [edi+0E0h], xmm3
0x8EB6B1: movaps  [esp+40h+var_10], xmm2
0x8EB6B6: fld     [esp+40h+var_2C]
0x8EB6BA: lea     ecx, [esp+40h+var_20]
0x8EB6BE: fmul    [esp+40h+var_2C]
0x8EB6C2: push    ecx
0x8EB6C3: fld     [esp+44h+var_2C]
0x8EB6C7: lea     edx, [esp+44h+var_10]
0x8EB6CB: fmul    dword ptr ds:0A96F70h
0x8EB6D1: push    edx
0x8EB6D2: lea     ecx, [esp+48h+var_20]
0x8EB6D6: fsubr   dword ptr ds:0A2F948h
0x8EB6DC: fld     st(1)
0x8EB6DE: fmul    dword ptr ds:0A96F6Ch
0x8EB6E4: fsubp   st(1), st
0x8EB6E6: fxch    st(1)
0x8EB6E8: fmul    [esp+48h+var_2C]
0x8EB6EC: fmul    dword ptr ds:0A96F68h
0x8EB6F2: fsubp   st(1), st
0x8EB6F4: fstp    dword ptr [esp+48h+var_10+0Ch]
0x8EB6F8: call    sub_889470
0x8EB6FD: lea     ecx, [esp+40h+var_20]
0x8EB701: call    sub_4D6830
0x8EB706: fld     [esp+40h+var_2C]
0x8EB70A: fsqrt
0x8EB70C: movaps  xmm0, [esp+40h+var_10]
0x8EB711: movaps  xmm1, xmm0
0x8EB714: addps   xmm1, xmm0
0x8EB717: movaps  xmm0, [esp+40h+var_20]
0x8EB71C: lea     eax, [esi+70h]
0x8EB71F: movaps  xmmword ptr [esi+90h], xmm1
0x8EB726: push    eax
0x8EB727: mov     ecx, esi
0x8EB729: fmul    dword ptr ds:0A9AFC8h
0x8EB72F: fstp    dword ptr [esi+9Ch]
0x8EB735: movaps  xmmword ptr [esi+70h], xmm0
0x8EB739: call    sub_8B1DD0
0x8EB73E: movaps  xmm0, xmmword ptr [esi+80h]
0x8EB745: movaps  xmm2, xmmword ptr [esi+20h]
0x8EB749: movaps  xmm3, xmmword ptr [esi+10h]
0x8EB74D: movaps  xmm1, xmm0
0x8EB750: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8EB754: mulps   xmm2, xmm1
0x8EB757: movaps  xmm1, xmm0
0x8EB75A: shufps  xmm1, xmm0, 55h ; 'U'
0x8EB75E: mulps   xmm3, xmm1
0x8EB761: movaps  xmm1, xmm0
0x8EB764: shufps  xmm1, xmm0, 0
0x8EB768: movaps  xmm0, xmmword ptr [esi]
0x8EB76B: mulps   xmm0, xmm1
0x8EB76E: movaps  xmm1, xmmword ptr [esi+50h]
0x8EB772: addps   xmm0, xmm3
0x8EB775: addps   xmm0, xmm2
0x8EB778: subps   xmm1, xmm0
0x8EB77B: movaps  xmmword ptr [esi+30h], xmm1
0x8EB77F: movaps  xmm0, xmmword ptr [ebx+10h]
0x8EB783: movaps  xmmword ptr [edi+0D0h], xmm0
0x8EB78A: movaps  xmm0, xmmword ptr [ebx+20h]
0x8EB78E: movaps  xmm2, xmmword ptr [esi+20h]
0x8EB792: movaps  xmm3, xmmword ptr [esi+10h]
0x8EB796: movaps  xmm1, xmm0
0x8EB799: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8EB79D: mulps   xmm2, xmm1
0x8EB7A0: movaps  xmm1, xmm0
0x8EB7A3: shufps  xmm1, xmm0, 55h ; 'U'
0x8EB7A7: mulps   xmm3, xmm1
0x8EB7AA: movaps  xmm1, xmm0
0x8EB7AD: shufps  xmm1, xmm0, 0
0x8EB7B1: movaps  xmm0, xmmword ptr [esi]
0x8EB7B4: mulps   xmm0, xmm1
0x8EB7B7: addps   xmm0, xmm3
0x8EB7BA: addps   xmm0, xmm2
0x8EB7BD: movaps  xmmword ptr [edi+0E0h], xmm0
0x8EB7C4: pop     edi
0x8EB7C5: pop     esi
0x8EB7C6: lea     eax, [ebx+80h]
0x8EB7CC: pop     ebx
0x8EB7CD: mov     esp, ebp
0x8EB7CF: pop     ebp
0x8EB7D0: retn    0Ch
