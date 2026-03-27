0x6A5E50: push    esi
0x6A5E51: mov     esi, ecx
0x6A5E53: mov     ecx, [esi+20h]; this
0x6A5E56: test    ecx, ecx
0x6A5E58: push    edi
0x6A5E59: jz      SummonCreatureEffect_Update___DispelThis
0x6A5E5F: call    MagicTarget_GetParentActor
0x6A5E64: mov     edi, eax
0x6A5E66: test    edi, edi
0x6A5E68: jz      short SummonCreatureEffect_Update___DispelThis
0x6A5E6A: cmp     byte ptr [esi+60h], 0
0x6A5E6E: jz      short loc_6A5E87
0x6A5E70: mov     ecx, [esi+3Ch]
0x6A5E73: test    ecx, ecx
0x6A5E75: jz      short SummonCreatureEffect_Update___DispelThis
0x6A5E77: mov     eax, [ecx]
0x6A5E79: mov     edx, [eax+198h]
0x6A5E7F: push    0
0x6A5E81: call    edx
0x6A5E83: test    al, al
0x6A5E85: jnz     short SummonCreatureEffect_Update___DispelThis
0x6A5E87: fld     dword ptr [esi+4]
0x6A5E8A: fld     dword ptr [esi+44h]
0x6A5E8D: fcompp
0x6A5E8F: fnstsw  ax
0x6A5E91: test    ah, 41h
0x6A5E94: jp      short loc_6A5EB7
0x6A5E96: cmp     byte ptr [esi+60h], 0
0x6A5E9A: jnz     short loc_6A5EB7
0x6A5E9C: push    edi
0x6A5E9D: mov     ecx, esi
0x6A5E9F: call    SummonCreatureEffect_PlaceSummon
0x6A5EA4: cmp     edi, ds:0B333C4h
0x6A5EAA: jnz     short loc_6A5EB3
0x6A5EAC: mov     ecx, esi
0x6A5EAE: call    SummonCreatureEffect_DispelOtherSummons
0x6A5EB3: mov     byte ptr [esi+60h], 1
0x6A5EB7: mov     ecx, [esi+3Ch]
0x6A5EBA: test    ecx, ecx
0x6A5EBC: jz      short SummonCreatureEffect_Update___Done
0x6A5EBE: mov     eax, [ecx]
0x6A5EC0: mov     edx, [eax+198h]
0x6A5EC6: push    0
0x6A5EC8: call    edx
0x6A5ECA: test    al, al
0x6A5ECC: jnz     short SummonCreatureEffect_Update___Done
0x6A5ECE: mov     eax, [esi+3Ch]
0x6A5ED1: push    edi
0x6A5ED2: push    eax
0x6A5ED3: call    sub_6925C0
0x6A5ED8: add     esp, 8
0x6A5EDB: pop     edi
0x6A5EDC: pop     esi
0x6A5EDD: retn    4
