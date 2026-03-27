0x90A500: push    ebp
0x90A501: mov     ebp, esp
0x90A503: and     esp, 0FFFFFFF0h
0x90A506: sub     esp, 18h
0x90A509: mov     edx, [ebp+arg_8]
0x90A50C: push    esi
0x90A50D: push    edi
0x90A50E: mov     edi, [ebp+arg_C]
0x90A511: mov     eax, [edi+3034h]
0x90A517: mov     esi, [edi]
0x90A519: push    edi
0x90A51A: push    edx
0x90A51B: mov     edx, [ebp+arg_4]
0x90A51E: mov     [esp+28h+var_14], eax
0x90A522: mov     eax, [ebp+arg_0]
0x90A525: push    eax
0x90A526: push    edx
0x90A527: call    sub_909650
0x90A52C: cmp     esi, [edi]
0x90A52E: jnb     short loc_90A571
0x90A530: lea     eax, [esp+20h+var_10]
0x90A534: push    eax
0x90A535: mov     ecx, esi
0x90A537: call    sub_8F7000
0x90A53C: movaps  xmm0, xmmword ptr [eax]
0x90A53F: movaps  xmm1, xmmword ptr [esi+10h]
0x90A543: movaps  xmm2, xmm0
0x90A546: shufps  xmm2, xmm0, 0
0x90A54A: movaps  xmm0, xmmword ptr [esi]
0x90A54D: mulps   xmm2, xmm1
0x90A550: addps   xmm0, xmm2
0x90A553: movaps  xmmword ptr [esi], xmm0
0x90A556: movaps  xmm1, xmmword ptr [esi+10h]
0x90A55A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x90A561: xorps   xmm1, xmm0
0x90A564: movaps  xmmword ptr [esi+10h], xmm1
0x90A568: mov     eax, [edi]
0x90A56A: add     esi, 30h ; '0'
0x90A56D: cmp     esi, eax
0x90A56F: jb      short loc_90A530
0x90A571: fld     dword ptr [edi+3034h]
0x90A577: fld     [esp+20h+var_14]
0x90A57B: fucompp
0x90A57D: fnstsw  ax
0x90A57F: test    ah, 44h
0x90A582: jnp     short loc_90A596
0x90A584: movaps  xmm0, xmmword ptr ds:0A9B570h
0x90A58B: movaps  xmm1, xmmword ptr [edi+20h]
0x90A58F: xorps   xmm1, xmm0
0x90A592: movaps  xmmword ptr [edi+20h], xmm1
0x90A596: pop     edi
0x90A597: pop     esi
0x90A598: mov     esp, ebp
0x90A59A: pop     ebp
0x90A59B: retn    10h
