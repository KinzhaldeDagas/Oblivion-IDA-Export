0x9154E0: push    ebp
0x9154E1: mov     ebp, esp
0x9154E3: and     esp, 0FFFFFFF0h
0x9154E6: sub     esp, 18h
0x9154E9: push    esi
0x9154EA: push    edi
0x9154EB: mov     edx, [ebp+arg_4]
0x9154EE: fldz
0x9154F0: movaps  xmm0, xmmword ptr [edx]
0x9154F3: movaps  xmm1, xmmword ptr [edx+10h]
0x9154F7: movss   xmm4, dword ptr ds:0A46C30h
0x9154FF: subps   xmm1, xmm0
0x915502: movaps  xmm0, xmm1
0x915505: mulps   xmm0, xmm1
0x915508: movaps  xmm2, xmm0
0x91550B: shufps  xmm2, xmm0, 55h ; 'U'
0x91550F: addss   xmm2, xmm0
0x915513: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x915517: addss   xmm0, xmm2
0x91551B: movaps  xmm2, xmm0
0x91551E: rsqrtss xmm2, xmm2
0x915522: mulss   xmm0, xmm2
0x915526: mulss   xmm0, xmm2
0x91552A: xorps   xmm3, xmm3
0x91552D: movss   xmm3, xmm4
0x915531: movss   xmm4, dword ptr ds:0A3D65Ch
0x915539: subss   xmm3, xmm0
0x91553D: xorps   xmm0, xmm0
0x915540: movss   xmm0, xmm4
0x915544: mulss   xmm0, xmm2
0x915548: mulss   xmm0, xmm3
0x91554C: shufps  xmm0, xmm0, 0
0x915550: mulps   xmm0, xmm1
0x915553: movaps  xmm1, xmmword ptr [ecx+40h]
0x915557: mulps   xmm0, xmm1
0x91555A: movaps  xmm1, xmm0
0x91555D: shufps  xmm1, xmm0, 55h ; 'U'
0x915561: movaps  xmm2, xmm0
0x915564: addss   xmm1, xmm0
0x915568: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x91556C: addss   xmm2, xmm1
0x915570: movss   [esp+20h+var_10], xmm2
0x915576: fcomp   [esp+20h+var_10]
0x91557A: mov     esi, [ebp+arg_0]
0x91557D: mov     edi, [ebp+arg_8]
0x915580: fnstsw  ax
0x915582: test    ah, 41h
0x915585: jz      short loc_915595
0x915587: xor     al, al
0x915589: mov     [esi], al
0x91558B: mov     eax, esi
0x91558D: pop     edi
0x91558E: pop     esi
0x91558F: mov     esp, ebp
0x915591: pop     ebp
0x915592: retn    0Ch
0x915595: push    edi
0x915596: push    edx
0x915597: lea     eax, [esp+28h+var_11]
0x91559B: push    eax
0x91559C: call    sub_9149C0
0x9155A1: cmp     byte ptr [eax], 0
0x9155A4: pop     edi
0x9155A5: setnz   al
0x9155A8: mov     [esi], al
0x9155AA: mov     eax, esi
0x9155AC: pop     esi
0x9155AD: mov     esp, ebp
0x9155AF: pop     ebp
0x9155B0: retn    0Ch
