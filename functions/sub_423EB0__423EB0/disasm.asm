0x423EB0: push    esi
0x423EB1: push    edi
0x423EB2: push    13h; a2
0x423EB4: mov     esi, ecx
0x423EB6: call    BaseExtraList_GetExtraData
0x423EBB: test    eax, eax
0x423EBD: mov     edi, [esp+8+arg_0]
0x423EC1: jnz     short loc_423EDA
0x423EC3: test    edi, edi
0x423EC5: jz      short loc_423ED5
0x423EC7: mov     ecx, esi
0x423EC9: call    sub_41EB90
0x423ECE: test    eax, eax
0x423ED0: jz      short loc_423ED5
0x423ED2: mov     [eax+10h], edi
0x423ED5: pop     edi
0x423ED6: pop     esi
0x423ED7: retn    4
0x423EDA: cmp     byte ptr [eax+0Ch], 1
0x423EDE: jnz     short loc_423ECE
0x423EE0: test    edi, edi
0x423EE2: jnz     short loc_423ECE
0x423EE4: push    1
0x423EE6: push    eax
0x423EE7: mov     ecx, esi
0x423EE9: call    BaseExtraList_RemoveExtraByPtr
0x423EEE: pop     edi
0x423EEF: pop     esi
0x423EF0: retn    4
