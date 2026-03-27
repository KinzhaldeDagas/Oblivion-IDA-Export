0x936B70: push    ebp
0x936B71: mov     ebp, esp
0x936B73: and     esp, 0FFFFFFF0h
0x936B76: sub     esp, 8
0x936B79: mov     eax, [ebp+arg_0]
0x936B7C: push    esi
0x936B7D: mov     esi, [ebp+arg_4]
0x936B80: movzx   edx, byte ptr [esi]
0x936B83: mov     [eax+38h], edx
0x936B86: movzx   edx, byte ptr [esi+1]
0x936B8A: and     edx, 0FFFFFFF8h
0x936B8D: shl     edx, 1Ch
0x936B90: push    edi
0x936B91: mov     [esp+10h+var_4], 3F800000h
0x936B99: mov     edi, [esp+10h+var_4]
0x936B9D: or      edi, edx
0x936B9F: mov     edx, edi
0x936BA1: mov     [eax+30h], edx
0x936BA4: movaps  xmm1, xmmword ptr [ecx+70h]
0x936BA8: xor     edx, edx
0x936BAA: mov     dl, [esi+1]
0x936BAD: mov     [esp+10h+var_4], edi
0x936BB1: pop     edi
0x936BB2: pop     esi
0x936BB3: and     edx, 70h
0x936BB6: add     edx, offset unk_AA1CC0
0x936BBC: movaps  xmm0, xmmword ptr [edx]
0x936BBF: mulps   xmm1, xmm0
0x936BC2: movaps  xmmword ptr [eax+10h], xmm1
0x936BC6: movaps  xmm0, xmmword ptr [eax+10h]
0x936BCA: movaps  xmm1, xmmword ptr [ecx+50h]
0x936BCE: movaps  xmm3, xmmword ptr [ecx+40h]
0x936BD2: movaps  xmm2, xmm0
0x936BD5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x936BD9: mulps   xmm3, xmm2
0x936BDC: movaps  xmm2, xmmword ptr [ecx+30h]
0x936BE0: addps   xmm3, xmm1
0x936BE3: movaps  xmm1, xmm0
0x936BE6: shufps  xmm1, xmm0, 55h ; 'U'
0x936BEA: mulps   xmm2, xmm1
0x936BED: movaps  xmm1, xmm0
0x936BF0: shufps  xmm1, xmm0, 0
0x936BF4: movaps  xmm0, xmmword ptr [ecx+20h]
0x936BF8: mulps   xmm0, xmm1
0x936BFB: addps   xmm0, xmm2
0x936BFE: addps   xmm0, xmm3
0x936C01: movaps  xmmword ptr [eax], xmm0
0x936C04: mov     esp, ebp
0x936C06: pop     ebp
0x936C07: retn    8
