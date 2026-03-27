0x98C777: push    ebp
0x98C778: mov     ebp, esp
0x98C77A: sub     esp, 4
0x98C77D: mov     [ebp+var_4], edi
0x98C780: mov     edi, [ebp+arg_0]
0x98C783: mov     ecx, [ebp+arg_4]
0x98C786: shr     ecx, 7
0x98C789: pxor    xmm0, xmm0
0x98C78D: jmp     short loc_98C797
0x98C78F: db 8Dh, 0A4h, 24h, 4 dup(0)
0x98C796: db 90h
0x98C797: movdqa  xmmword ptr [edi], xmm0
0x98C79B: movdqa  xmmword ptr [edi+10h], xmm0
0x98C7A0: movdqa  xmmword ptr [edi+20h], xmm0
0x98C7A5: movdqa  xmmword ptr [edi+30h], xmm0
0x98C7AA: movdqa  xmmword ptr [edi+40h], xmm0
0x98C7AF: movdqa  xmmword ptr [edi+50h], xmm0
0x98C7B4: movdqa  xmmword ptr [edi+60h], xmm0
0x98C7B9: movdqa  xmmword ptr [edi+70h], xmm0
0x98C7BE: lea     edi, [edi+80h]
0x98C7C4: dec     ecx
0x98C7C5: jnz     short loc_98C797
0x98C7C7: mov     edi, [ebp+var_4]
0x98C7CA: mov     esp, ebp
0x98C7CC: pop     ebp
0x98C7CD: retn
