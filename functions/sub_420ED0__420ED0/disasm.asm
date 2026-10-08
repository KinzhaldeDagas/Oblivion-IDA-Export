0x420ED0: push    esi; Returns the per-actor uint16 friend-hit count, or zero. Confirmed by the Oblivion console path '%s has hit %s ... times'.
0x420ED1: push    4Eh ; 'N'; a2
0x420ED3: xor     esi, esi
0x420ED5: call    BaseExtraList_GetExtraData
0x420EDA: test    eax, eax
0x420EDC: jz      short loc_420EE6
0x420EDE: pop     esi
0x420EDF: mov     ecx, eax
0x420EE1: jmp     loc_42AAE0
0x420EE6: mov     eax, esi
0x420EE8: pop     esi
0x420EE9: retn    4
0x42AAE0: mov     ecx, [ecx+0Ch]
0x42AAE3: xor     eax, eax
0x42AAE5: test    ecx, ecx
0x42AAE7: jz      short locret_42AB0A
0x42AAE9: push    esi
0x42AAEA: mov     esi, [esp+4+actor]
0x42AAEE: mov     edi, edi
0x42AAF0: mov     edx, [ecx]
0x42AAF2: test    edx, edx
0x42AAF4: jz      short loc_42AB09
0x42AAF6: cmp     [edx], esi
0x42AAF8: jz      short loc_42AB05
0x42AAFA: mov     ecx, [ecx+4]
0x42AAFD: test    ecx, ecx
0x42AAFF: jnz     short loc_42AAF0
0x42AB01: pop     esi
0x42AB02: retn    4
0x42AB05: movzx   eax, word ptr [edx+4]
0x42AB09: pop     esi
0x42AB0A: retn    4
