0x420EB0: push    4Eh ; 'N'; Removes the friend-hit list entry whose actor pointer matches the supplied actor.
0x420EB2: call    BaseExtraList_GetExtraData
0x420EB7: test    eax, eax
0x420EB9: jz      short locret_420EC2
0x420EBB: mov     ecx, eax
0x420EBD: jmp     loc_42AFC0
0x420EC2: retn    4
0x42AFC0: mov     ecx, [ecx+0Ch]
0x42AFC3: mov     eax, ecx
0x42AFC5: test    eax, eax
0x42AFC7: jz      short locret_42AFE2
0x42AFC9: push    esi
0x42AFCA: mov     esi, [esp+4+arg_0]
0x42AFCE: mov     edi, edi
0x42AFD0: mov     edx, [eax]
0x42AFD2: test    edx, edx
0x42AFD4: jz      short loc_42AFE1
0x42AFD6: cmp     [edx], esi
0x42AFD8: jz      short loc_42AFE5
0x42AFDA: mov     eax, [eax+4]
0x42AFDD: test    eax, eax
0x42AFDF: jnz     short loc_42AFD0
0x42AFE1: pop     esi
0x42AFE2: retn    4
0x42AFE5: pop     esi
0x42AFE6: mov     [esp+arg_0], edx
0x42AFEA: jmp     BSSimpleList_Remove
