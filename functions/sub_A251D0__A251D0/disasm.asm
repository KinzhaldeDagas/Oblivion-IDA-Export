0xA251D0: push    offset dword_B14884
0xA251D5: mov     ecx, offset dword_B07CFC
0xA251DA: call    BSSimpleList_Remove
0xA251DF: mov     eax, off_B14888; "iActorShadowIntMax:Display"
0xA251E4: test    eax, eax
0xA251E6: jz      short locret_A251F4
0xA251E8: cmp     byte ptr [eax], 53h ; 'S'
0xA251EB: jnz     short locret_A251F4
0xA251ED: push    eax
0xA251EE: call    FormHeapFree
0xA251F3: pop     ecx
0xA251F4: retn
