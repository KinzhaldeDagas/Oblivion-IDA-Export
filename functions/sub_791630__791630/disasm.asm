0x791630: sub     esp, 8; Push helper for CBranch::m_vChildren. Vector wrapper starts at branch+0x08; usable begin/end/cap are +0x0C/+0x10/+0x14; element size is 0x0C SIdvBranch.
0x791633: push    esi
0x791634: mov     esi, ecx
0x791636: push    edi
0x791637: mov     edi, [esi+4]
0x79163A: test    edi, edi
0x79163C: jnz     short loc_791642
0x79163E: xor     ecx, ecx
0x791640: jmp     short loc_791657
0x791642: mov     ecx, [esi+8]
0x791645: sub     ecx, edi
0x791647: mov     eax, 2AAAAAABh
0x79164C: imul    ecx
0x79164E: sar     edx, 1
0x791650: mov     ecx, edx
0x791652: shr     ecx, 1Fh
0x791655: add     ecx, edx
0x791657: test    edi, edi
0x791659: jz      short loc_7916A5
0x79165B: mov     edx, [esi+0Ch]
0x79165E: sub     edx, edi
0x791660: mov     eax, 2AAAAAABh
0x791665: imul    edx
0x791667: sar     edx, 1
0x791669: mov     eax, edx
0x79166B: shr     eax, 1Fh
0x79166E: add     eax, edx
0x791670: cmp     ecx, eax
0x791672: jnb     short loc_7916A5
0x791674: mov     ecx, [esp+10h+value]
0x791678: mov     edx, [esp+10h+value]
0x79167C: mov     edi, [esi+8]
0x79167F: mov     byte ptr [esp+10h+result.owner], 0
0x791684: mov     eax, [esp+10h+result.owner]
0x791688: push    eax
0x791689: push    ecx
0x79168A: push    esi
0x79168B: push    edx
0x79168C: push    1
0x79168E: push    edi
0x79168F: call    sub_6F1290
0x791694: add     esp, 18h
0x791697: add     edi, 0Ch
0x79169A: mov     [esi+8], edi
0x79169D: pop     edi
0x79169E: pop     esi
0x79169F: add     esp, 8
0x7916A2: retn    4
0x7916A5: push    ebx
0x7916A6: mov     ebx, [esi+8]
0x7916A9: cmp     edi, ebx
0x7916AB: jbe     short loc_7916B2
0x7916AD: call    __invalid_parameter_noinfo
0x7916B2: mov     eax, [esp+14h+value]
0x7916B6: push    eax; value
0x7916B7: push    ebx; position
0x7916B8: push    esi; owner
0x7916B9: lea     ecx, [esp+20h+result]
0x7916BD: push    ecx; result
0x7916BE: mov     ecx, esi; this
0x7916C0: call    OB_stVectorBranchChildRef_InsertOneChecked_010201A0; Checked one-element insertion wrapper for the 0x0C-byte branch-child vector. Captures the logical index, calls InsertFill(count=1), then rebuilds the checked owner/current iterator against the possibly relocated buffer.
0x7916C5: pop     ebx
0x7916C6: pop     edi
0x7916C7: pop     esi
0x7916C8: add     esp, 8
0x7916CB: retn    4
