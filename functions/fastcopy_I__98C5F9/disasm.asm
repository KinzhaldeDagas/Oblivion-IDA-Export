0x98C5F9: push    ebp
0x98C5FA: mov     ebp, esp
0x98C5FC: sub     esp, 8
0x98C5FF: mov     [ebp+var_4], edi
0x98C602: mov     [ebp+var_8], esi
0x98C605: mov     esi, [ebp+arg_4]
0x98C608: mov     edi, [ebp+arg_0]
0x98C60B: mov     ecx, [ebp+arg_8]
0x98C60E: shr     ecx, 7
0x98C611: jmp     short loc_98C619
0x98C613: db 8Dh, 9Bh, 4 dup(0)
0x98C619: movdqa  xmm0, xmmword ptr [esi]
0x98C61D: movdqa  xmm1, xmmword ptr [esi+10h]
0x98C622: movdqa  xmm2, xmmword ptr [esi+20h]
0x98C627: movdqa  xmm3, xmmword ptr [esi+30h]
0x98C62C: movdqa  xmmword ptr [edi], xmm0
0x98C630: movdqa  xmmword ptr [edi+10h], xmm1
0x98C635: movdqa  xmmword ptr [edi+20h], xmm2
0x98C63A: movdqa  xmmword ptr [edi+30h], xmm3
0x98C63F: movdqa  xmm4, xmmword ptr [esi+40h]
0x98C644: movdqa  xmm5, xmmword ptr [esi+50h]
0x98C649: movdqa  xmm6, xmmword ptr [esi+60h]
0x98C64E: movdqa  xmm7, xmmword ptr [esi+70h]
0x98C653: movdqa  xmmword ptr [edi+40h], xmm4
0x98C658: movdqa  xmmword ptr [edi+50h], xmm5
0x98C65D: movdqa  xmmword ptr [edi+60h], xmm6
0x98C662: movdqa  xmmword ptr [edi+70h], xmm7
0x98C667: lea     esi, [esi+80h]
0x98C66D: lea     edi, [edi+80h]
0x98C673: dec     ecx
0x98C674: jnz     short loc_98C619
0x98C676: mov     esi, [ebp+var_8]
0x98C679: mov     edi, [ebp+var_4]
0x98C67C: mov     esp, ebp
0x98C67E: pop     ebp
0x98C67F: retn
