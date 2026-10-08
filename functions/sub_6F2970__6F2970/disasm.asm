0x6F2970: push    ebx
0x6F2971: mov     ebx, [esp+4+arg_0]
0x6F2975: push    esi
0x6F2976: mov     esi, [esp+8+arg_4]
0x6F297A: cmp     ebx, esi
0x6F297C: jz      short loc_6F29BA
0x6F297E: push    edi
0x6F297F: mov     edi, [esp+0Ch+arg_8]
0x6F2983: mov     eax, [esi-2Ch]
0x6F2986: sub     esi, 2Ch ; ','
0x6F2989: sub     edi, 2Ch ; ','
0x6F298C: mov     [edi], eax
0x6F298E: mov     ecx, [esi+4]
0x6F2991: mov     [edi+4], ecx
0x6F2994: mov     edx, [esi+8]
0x6F2997: push    0FFFFFFFFh; count
0x6F2999: mov     [edi+8], edx
0x6F299C: mov     eax, [esi+0Ch]
0x6F299F: push    0; offset
0x6F29A1: lea     ecx, [esi+10h]
0x6F29A4: push    ecx; source
0x6F29A5: lea     ecx, [edi+10h]; this
0x6F29A8: mov     [edi+0Ch], eax
0x6F29AB: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F29B0: cmp     esi, ebx
0x6F29B2: jnz     short loc_6F2983
0x6F29B4: mov     eax, edi
0x6F29B6: pop     edi
0x6F29B7: pop     esi
0x6F29B8: pop     ebx
0x6F29B9: retn
0x6F29BA: mov     eax, [esp+8+arg_8]
0x6F29BE: pop     esi
0x6F29BF: pop     ebx
0x6F29C0: retn
