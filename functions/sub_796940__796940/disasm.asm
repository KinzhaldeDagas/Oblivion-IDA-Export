0x796940: push    ebx
0x796941: mov     ebx, [esp+4+arg_8]
0x796945: push    ebp
0x796946: push    esi
0x796947: mov     esi, [esp+0Ch+arg_4]
0x79694B: push    edi
0x79694C: mov     edi, [esp+10h+arg_0]
0x796950: mov     eax, esi
0x796952: sub     eax, edi
0x796954: sar     eax, 4
0x796957: shl     eax, 4
0x79695A: mov     ebp, ebx
0x79695C: sub     ebp, eax
0x79695E: cmp     edi, esi
0x796960: jz      short loc_796974
0x796962: sub     ebx, esi
0x796964: sub     esi, 10h
0x796967: push    esi
0x796968: lea     ecx, [ebx+esi]
0x79696B: call    sub_795630
0x796970: cmp     esi, edi
0x796972: jnz     short loc_796964
0x796974: pop     edi
0x796975: pop     esi
0x796976: mov     eax, ebp
0x796978: pop     ebp
0x796979: pop     ebx
0x79697A: retn
