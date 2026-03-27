0x734920: push    ebp
0x734921: push    esi
0x734922: mov     esi, ecx
0x734924: xor     ebp, ebp
0x734926: cmp     [esi+10Eh], bp
0x73492D: jbe     short loc_734989
0x73492F: mov     eax, [esp+8+arg_4]
0x734933: push    edi
0x734934: mov     edi, [esp+0Ch+arg_0]
0x734938: jmp     short loc_734940
0x73493A: align 10h
0x734940: movzx   ecx, byte ptr [edi+1]
0x734944: movzx   edx, word ptr [esi+104h]
0x73494B: shl     ecx, 8
0x73494E: sub     ecx, edx
0x734950: movzx   edx, byte ptr [edi]
0x734953: add     ecx, edx
0x734955: mov     edx, [esi+16Ch]
0x73495B: lea     edx, [edx+ecx*4]
0x73495E: movzx   ecx, byte ptr [edx]
0x734961: mov     [eax], cl
0x734963: movzx   ecx, byte ptr [edx+1]
0x734967: add     eax, 1
0x73496A: mov     [eax], cl
0x73496C: mov     dl, [edx+2]
0x73496F: add     eax, 1
0x734972: mov     [eax], dl
0x734974: movzx   ecx, word ptr [esi+10Eh]
0x73497B: add     ebp, 1
0x73497E: add     eax, 1
0x734981: add     edi, 2
0x734984: cmp     ebp, ecx
0x734986: jb      short loc_734940
0x734988: pop     edi
0x734989: pop     esi
0x73498A: pop     ebp
0x73498B: retn    8
