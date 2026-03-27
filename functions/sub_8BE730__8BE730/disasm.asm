0x8BE730: push    ebp
0x8BE731: mov     ebp, esp
0x8BE733: and     esp, 0FFFFFFF0h
0x8BE736: mov     eax, [ebp+arg_0]
0x8BE739: sub     esp, 0Ch
0x8BE73C: push    esi
0x8BE73D: push    0
0x8BE73F: push    eax
0x8BE740: mov     esi, ecx
0x8BE742: call    sub_8F5750
0x8BE747: fld     [ebp+arg_8]
0x8BE74A: mov     eax, [ebp+arg_4]
0x8BE74D: movss   xmm4, dword ptr ds:0A46C30h
0x8BE755: mov     dword ptr [esi], offset ??_7hkMotorAction@@6B@; const hkMotorAction::`vftable'
0x8BE75B: movaps  xmm0, xmmword ptr [eax]
0x8BE75E: movaps  xmmword ptr [esi+20h], xmm0
0x8BE762: fstp    dword ptr [esi+30h]
0x8BE765: fld     [ebp+arg_C]
0x8BE768: xorps   xmm3, xmm3
0x8BE76B: fstp    dword ptr [esi+34h]
0x8BE76E: mov     byte ptr [esi+38h], 1
0x8BE772: movaps  xmm2, xmmword ptr [esi+20h]
0x8BE776: movaps  xmm0, xmm2
0x8BE779: mulps   xmm0, xmm2
0x8BE77C: movaps  xmm1, xmm0
0x8BE77F: shufps  xmm1, xmm0, 4Eh ; 'N'
0x8BE783: addps   xmm1, xmm0
0x8BE786: movaps  xmm0, xmm1
0x8BE789: shufps  xmm0, xmm1, 0B1h ; '±'
0x8BE78D: addps   xmm0, xmm1
0x8BE790: movaps  xmm1, xmm0
0x8BE793: rsqrtss xmm1, xmm1
0x8BE797: mulss   xmm0, xmm1
0x8BE79B: mulss   xmm0, xmm1
0x8BE79F: movss   xmm3, xmm4
0x8BE7A3: movss   xmm4, dword ptr ds:0A3D65Ch
0x8BE7AB: subss   xmm3, xmm0
0x8BE7AF: xorps   xmm0, xmm0
0x8BE7B2: movss   xmm0, xmm4
0x8BE7B6: mulss   xmm0, xmm1
0x8BE7BA: mulss   xmm0, xmm3
0x8BE7BE: movaps  xmm1, xmm0
0x8BE7C1: shufps  xmm1, xmm0, 0
0x8BE7C5: mulps   xmm1, xmm2
0x8BE7C8: movaps  xmmword ptr [esi+20h], xmm1
0x8BE7CC: mov     eax, esi
0x8BE7CE: pop     esi
0x8BE7CF: mov     esp, ebp
0x8BE7D1: pop     ebp
0x8BE7D2: retn    10h
