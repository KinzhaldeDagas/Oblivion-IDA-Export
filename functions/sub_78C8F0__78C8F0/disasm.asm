0x78C8F0: push    ecx; Oblivion collision-vector insert-one wrapper: converts the checked iterator to a 0x1C-record index, delegates to collision insert-fill(count=1), and returns the relocated iterator.
0x78C8F1: push    ebx
0x78C8F2: push    ebp
0x78C8F3: mov     ebp, [esp+0Ch+position.current]
0x78C8F7: push    esi
0x78C8F8: mov     esi, ecx
0x78C8FA: push    edi
0x78C8FB: mov     edi, [esi+4]
0x78C8FE: test    edi, edi
0x78C900: jz      short loc_78C91E
0x78C902: mov     ebx, [esi+8]
0x78C905: mov     ecx, ebx
0x78C907: sub     ecx, edi
0x78C909: mov     eax, 92492493h
0x78C90E: imul    ecx
0x78C910: add     edx, ecx
0x78C912: sar     edx, 4
0x78C915: mov     eax, edx
0x78C917: shr     eax, 1Fh
0x78C91A: add     eax, edx
0x78C91C: jnz     short loc_78C926
0x78C91E: mov     ebx, [esp+14h+position.owner]
0x78C922: xor     edi, edi
0x78C924: jmp     short loc_78C957
0x78C926: cmp     edi, ebx
0x78C928: jbe     short loc_78C92F
0x78C92A: call    __invalid_parameter_noinfo
0x78C92F: mov     ebx, [esp+14h+position.owner]
0x78C933: test    ebx, ebx
0x78C935: jz      short loc_78C93B
0x78C937: cmp     ebx, esi
0x78C939: jz      short loc_78C940
0x78C93B: call    __invalid_parameter_noinfo
0x78C940: mov     ecx, ebp
0x78C942: sub     ecx, edi
0x78C944: mov     eax, 92492493h
0x78C949: imul    ecx
0x78C94B: add     edx, ecx
0x78C94D: sar     edx, 4
0x78C950: mov     edi, edx
0x78C952: shr     edi, 1Fh
0x78C955: add     edi, edx
0x78C957: mov     ecx, [esp+14h+value]
0x78C95B: push    ecx; value
0x78C95C: push    1; count
0x78C95E: push    ebp
0x78C95F: push    ebx; position
0x78C960: mov     ecx, esi; this
0x78C962: call    OB_stVector_CollisionObject_InsertFill_010201A0; Oblivion vector<collision-record>::insert(position,count,value): authoritative 0x1C record stride, checked maximum 0x09249249, 1.5x growth, alias-safe in-place/reallocation paths, and FormHeap ownership.
0x78C967: mov     ebx, [esi+4]
0x78C96A: cmp     ebx, [esi+8]
0x78C96D: jbe     short loc_78C974
0x78C96F: call    __invalid_parameter_noinfo
0x78C974: lea     edx, ds:0[edi*8]
0x78C97B: sub     edx, edi
0x78C97D: lea     edi, [ebx+edx*4]
0x78C980: cmp     edi, [esi+8]
0x78C983: mov     [esp+14h+position.current], ebx
0x78C987: ja      short loc_78C98E
0x78C989: cmp     edi, [esi+4]
0x78C98C: jnb     short loc_78C993
0x78C98E: call    __invalid_parameter_noinfo
0x78C993: mov     eax, [esp+14h+result]
0x78C997: mov     [eax+4], edi
0x78C99A: pop     edi
0x78C99B: mov     [eax], esi
0x78C99D: pop     esi
0x78C99E: pop     ebp
0x78C99F: pop     ebx
0x78C9A0: pop     ecx
0x78C9A1: retn    10h
