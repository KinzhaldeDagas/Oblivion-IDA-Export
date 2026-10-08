0x79B560: push    ecx; Checked insert-one wrapper for st_vector<SFrondVertex>. Preserves the pre-growth iterator index, delegates to InsertFill(count=1), then returns an 8-byte {owner,current} iterator.
0x79B561: push    ebx
0x79B562: push    ebp
0x79B563: mov     ebp, [esp+0Ch+position]
0x79B567: push    esi
0x79B568: mov     esi, ecx
0x79B56A: push    edi
0x79B56B: mov     edi, [esi+4]
0x79B56E: test    edi, edi
0x79B570: jz      short loc_79B58E
0x79B572: mov     ebx, [esi+8]
0x79B575: mov     ecx, ebx
0x79B577: sub     ecx, edi
0x79B579: mov     eax, 92492493h
0x79B57E: imul    ecx
0x79B580: add     edx, ecx
0x79B582: sar     edx, 5
0x79B585: mov     eax, edx
0x79B587: shr     eax, 1Fh
0x79B58A: add     eax, edx
0x79B58C: jnz     short loc_79B596
0x79B58E: mov     ebx, [esp+14h+expectedOwner]
0x79B592: xor     edi, edi
0x79B594: jmp     short loc_79B5C7
0x79B596: cmp     edi, ebx
0x79B598: jbe     short loc_79B59F
0x79B59A: call    __invalid_parameter_noinfo
0x79B59F: mov     ebx, [esp+14h+expectedOwner]
0x79B5A3: test    ebx, ebx
0x79B5A5: jz      short loc_79B5AB
0x79B5A7: cmp     ebx, esi
0x79B5A9: jz      short loc_79B5B0
0x79B5AB: call    __invalid_parameter_noinfo
0x79B5B0: mov     ecx, ebp
0x79B5B2: sub     ecx, edi
0x79B5B4: mov     eax, 92492493h
0x79B5B9: imul    ecx
0x79B5BB: add     edx, ecx
0x79B5BD: sar     edx, 5
0x79B5C0: mov     edi, edx
0x79B5C2: shr     edi, 1Fh
0x79B5C5: add     edi, edx
0x79B5C7: mov     ecx, [esp+14h+value]
0x79B5CB: push    ecx; value
0x79B5CC: push    1; count
0x79B5CE: push    ebp; position
0x79B5CF: push    ebx; expectedOwner
0x79B5D0: mov     ecx, esi; this
0x79B5D2: call    OB_stVector_SFrondVertex_InsertFill_010201A0; Oblivion-authoritative fill insertion for st_vector<SFrondVertex>. Snapshots the value for alias safety, inserts count 0x38-byte records, reuses capacity when possible, otherwise grows to max(old+old/2, size+count), and preserves overlapping ranges with forward/backward movement.
0x79B5D7: mov     ebx, [esi+4]
0x79B5DA: cmp     ebx, [esi+8]
0x79B5DD: jbe     short loc_79B5E4
0x79B5DF: call    __invalid_parameter_noinfo
0x79B5E4: lea     edx, ds:0[edi*8]
0x79B5EB: sub     edx, edi
0x79B5ED: lea     edi, [ebx+edx*8]
0x79B5F0: cmp     edi, [esi+8]
0x79B5F3: mov     [esp+14h+position], ebx
0x79B5F7: ja      short loc_79B5FE
0x79B5F9: cmp     edi, [esi+4]
0x79B5FC: jnb     short loc_79B603
0x79B5FE: call    __invalid_parameter_noinfo
0x79B603: mov     eax, [esp+14h+result]
0x79B607: mov     [eax+4], edi
0x79B60A: pop     edi
0x79B60B: mov     [eax], esi
0x79B60D: pop     esi
0x79B60E: pop     ebp
0x79B60F: pop     ebx
0x79B610: pop     ecx
0x79B611: retn    10h
