0xA258C0: push    offset byte_B14E98
0xA258C5: mov     ecx, offset dword_B07CFC
0xA258CA: call    BSSimpleList_Remove
0xA258CF: mov     eax, off_B14E9C; "bEssentialTakeNoDamage:GamePlay"
0xA258D4: test    eax, eax
0xA258D6: jz      short locret_A258E4
0xA258D8: cmp     byte ptr [eax], 53h ; 'S'
0xA258DB: jnz     short locret_A258E4
0xA258DD: push    eax
0xA258DE: call    FormHeapFree
0xA258E3: pop     ecx
0xA258E4: retn
