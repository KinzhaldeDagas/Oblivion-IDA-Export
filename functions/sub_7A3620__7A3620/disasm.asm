0x7A3620: push    ecx; Oblivion binary evidence: inserts one four-byte value at a checked owner/current iterator by calling OB_stVector4_InsertFill, then returns a relocated iterator to the inserted slot. Widely folded across SpeedTree pointer and scalar vectors.
0x7A3621: push    ebx
0x7A3622: push    ebp
0x7A3623: mov     ebp, [esp+0Ch+position.owner]
0x7A3627: push    esi
0x7A3628: mov     esi, ecx
0x7A362A: push    edi
0x7A362B: mov     edi, [esi+4]
0x7A362E: test    edi, edi
0x7A3630: jz      short loc_7A363E
0x7A3632: mov     eax, [esi+8]
0x7A3635: mov     ecx, eax
0x7A3637: sub     ecx, edi
0x7A3639: sar     ecx, 2
0x7A363C: jnz     short loc_7A3642
0x7A363E: xor     ebx, ebx
0x7A3640: jmp     short loc_7A3661
0x7A3642: cmp     edi, eax
0x7A3644: jbe     short loc_7A364B
0x7A3646: call    __invalid_parameter_noinfo
0x7A364B: test    ebp, ebp
0x7A364D: jz      short loc_7A3653
0x7A364F: cmp     ebp, esi
0x7A3651: jz      short loc_7A3658
0x7A3653: call    __invalid_parameter_noinfo
0x7A3658: mov     ebx, [esp+14h+position.current]
0x7A365C: sub     ebx, edi
0x7A365E: sar     ebx, 2
0x7A3661: mov     edx, [esp+14h+value]
0x7A3665: mov     eax, [esp+14h+position.current]
0x7A3669: push    edx; value
0x7A366A: push    1; count
0x7A366C: push    eax; position
0x7A366D: push    ebp; positionOwner
0x7A366E: mov     ecx, esi; this
0x7A3670: call    OB_stVector4_InsertFill_010201A0; Oblivion binary evidence: checked-iterator insert of count identical four-byte values. Validates iterator ownership, enforces max_size 0x3FFFFFFF, reuses capacity when possible, otherwise grows by roughly 1.5x and moves trivial ranges. This folded routine services pointer, integer, and float vector specializations.
0x7A3675: mov     edi, [esi+4]
0x7A3678: cmp     edi, [esi+8]
0x7A367B: jbe     short loc_7A3682
0x7A367D: call    __invalid_parameter_noinfo
0x7A3682: mov     [esp+14h+position.current], edi
0x7A3686: lea     edi, [edi+ebx*4]
0x7A3689: cmp     edi, [esi+8]
0x7A368C: ja      short loc_7A3693
0x7A368E: cmp     edi, [esi+4]
0x7A3691: jnb     short loc_7A3698
0x7A3693: call    __invalid_parameter_noinfo
0x7A3698: mov     eax, [esp+14h+result]
0x7A369C: mov     [eax+4], edi
0x7A369F: pop     edi
0x7A36A0: mov     [eax], esi
0x7A36A2: pop     esi
0x7A36A3: pop     ebp
0x7A36A4: pop     ebx
0x7A36A5: pop     ecx
0x7A36A6: retn    10h
