0x796940: push    ebx; OBLIVION AUTHORITY (2026-08-30): Backward move-assignment of vector<unsigned short> owners, implemented by swapping pointer triplets from the range end toward destinationEnd.
0x796941: mov     ebx, [esp+4+destinationEnd]
0x796945: push    ebp
0x796946: push    esi
0x796947: mov     esi, [esp+0Ch+last]
0x79694B: push    edi
0x79694C: mov     edi, [esp+10h+first]
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
0x796967: push    esi; other
0x796968: lea     ecx, [ebx+esi]; this
0x79696B: call    OB_stVectorUShort_Swap_010201A0; OBLIVION AUTHORITY (2026-08-30): Swaps two vector<unsigned short> owners via a temporary deep copy and copy assignments; exception cleanup frees the temporary buffer.
0x796970: cmp     esi, edi
0x796972: jnz     short loc_796964
0x796974: pop     edi
0x796975: pop     esi
0x796976: mov     eax, ebp
0x796978: pop     ebp
0x796979: pop     ebx
0x79697A: retn
