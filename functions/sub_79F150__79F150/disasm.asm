0x79F150: push    ecx; OBLIVION AUTHORITY (2026-08-30): Checked-iterator insert-one wrapper for vector<vector<float>>. Validates owner/position, calls insert-fill(count=1), relocates the inserted element after possible reallocation, and returns {owner,current}. Boundary corrected through ret 0x10 at 0x79F1DA.
0x79F151: push    ebx
0x79F152: push    ebp
0x79F153: mov     ebp, [esp+0Ch+expectedOwner]
0x79F157: push    esi
0x79F158: mov     esi, ecx
0x79F15A: mov     ebx, [esi+4]
0x79F15D: test    ebx, ebx
0x79F15F: push    edi
0x79F160: jz      short loc_79F16E
0x79F162: mov     eax, [esi+8]
0x79F165: mov     ecx, eax
0x79F167: sub     ecx, ebx
0x79F169: sar     ecx, 4
0x79F16C: jnz     short loc_79F172
0x79F16E: xor     edi, edi
0x79F170: jmp     short loc_79F191
0x79F172: cmp     ebx, eax
0x79F174: jbe     short loc_79F17B
0x79F176: call    __invalid_parameter_noinfo
0x79F17B: test    ebp, ebp
0x79F17D: jz      short loc_79F183
0x79F17F: cmp     ebp, esi
0x79F181: jz      short loc_79F188
0x79F183: call    __invalid_parameter_noinfo
0x79F188: mov     edi, [esp+14h+position]
0x79F18C: sub     edi, ebx
0x79F18E: sar     edi, 4
0x79F191: mov     edx, [esp+14h+value]
0x79F195: mov     eax, [esp+14h+position]
0x79F199: push    edx; value
0x79F19A: push    1; count
0x79F19C: push    eax; position
0x79F19D: push    ebp; expectedOwner
0x79F19E: mov     ecx, esi; this
0x79F1A0: call    OB_stVector_stVectorFloat_InsertFill_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked insert-fill implementation for vector<vector<float>>. Deep-copies the fill value, reuses capacity or grows by roughly 1.5x, moves existing inner-vector owners with ownership transfer, and preserves exception cleanup. Oblivion call flow establishes the specialization; RT4.1 FrondEngine.cpp lines 768-779 corroborate its m_vRunningLengths resize role.
0x79F1A5: mov     ebx, [esi+4]; Recovered post-insert normal tail omitted by the former false noreturn call: recomputes the inserted pointer after possible reallocation and fills the checked iterator result.
0x79F1A8: cmp     ebx, [esi+8]
0x79F1AB: jbe     short loc_79F1B2
0x79F1AD: call    __invalid_parameter_noinfo
0x79F1B2: shl     edi, 4
0x79F1B5: add     edi, ebx
0x79F1B7: cmp     edi, [esi+8]
0x79F1BA: mov     [esp+14h+position], ebx
0x79F1BE: ja      short loc_79F1C5
0x79F1C0: cmp     edi, [esi+4]
0x79F1C3: jnb     short loc_79F1CA
0x79F1C5: call    __invalid_parameter_noinfo
0x79F1CA: mov     eax, [esp+14h+result]
0x79F1CE: mov     [eax+4], edi
0x79F1D1: pop     edi
0x79F1D2: mov     [eax], esi
0x79F1D4: pop     esi
0x79F1D5: pop     ebp
0x79F1D6: pop     ebx
0x79F1D7: pop     ecx
0x79F1D8: retn    10h
