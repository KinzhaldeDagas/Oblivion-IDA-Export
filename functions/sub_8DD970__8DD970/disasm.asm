0x8DD970: push    ebp
0x8DD971: mov     ebp, esp
0x8DD973: and     esp, 0FFFFFFF0h
0x8DD976: sub     esp, 0Ch
0x8DD979: mov     eax, [ebp+arg_4]
0x8DD97C: push    esi
0x8DD97D: mov     esi, [ebp+arg_8]
0x8DD980: xorps   xmm0, xmm0
0x8DD983: movaps  xmmword ptr [esi+90h], xmm0
0x8DD98A: movaps  xmm0, xmmword ptr [eax]
0x8DD98D: movaps  xmmword ptr [esi+60h], xmm0
0x8DD991: movaps  xmm0, xmmword ptr [eax]
0x8DD994: push    eax
0x8DD995: mov     ecx, esi
0x8DD997: movaps  xmmword ptr [esi+70h], xmm0
0x8DD99B: call    sub_8B1DD0
0x8DD9A0: mov     eax, [ebp+arg_0]
0x8DD9A3: movaps  xmm0, xmmword ptr [eax]
0x8DD9A6: movaps  xmmword ptr [esi+30h], xmm0
0x8DD9AA: fld     dword ptr [esi+4Ch]
0x8DD9AD: movaps  xmm0, xmmword ptr [esi+80h]
0x8DD9B4: movaps  xmm2, xmmword ptr [esi+20h]
0x8DD9B8: movaps  xmm3, xmmword ptr [esi+10h]
0x8DD9BC: movaps  xmm1, xmm0
0x8DD9BF: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8DD9C3: mulps   xmm2, xmm1
0x8DD9C6: movaps  xmm1, xmm0
0x8DD9C9: shufps  xmm1, xmm0, 55h ; 'U'
0x8DD9CD: mulps   xmm3, xmm1
0x8DD9D0: movaps  xmm1, xmm0
0x8DD9D3: shufps  xmm1, xmm0, 0
0x8DD9D7: movaps  xmm0, xmmword ptr [esi]
0x8DD9DA: mulps   xmm0, xmm1
0x8DD9DD: addps   xmm0, xmm3
0x8DD9E0: addps   xmm0, xmm2
0x8DD9E3: movaps  xmm1, xmm0
0x8DD9E6: movaps  xmm0, xmmword ptr [eax]
0x8DD9E9: addps   xmm0, xmm1
0x8DD9EC: movaps  xmmword ptr [esi+40h], xmm0
0x8DD9F0: movaps  xmmword ptr [esi+50h], xmm0
0x8DD9F4: fstp    dword ptr [esi+4Ch]
0x8DD9F7: mov     dword ptr [esi+5Ch], 0
0x8DD9FE: pop     esi
0x8DD9FF: mov     esp, ebp
0x8DDA01: pop     ebp
0x8DDA02: retn
