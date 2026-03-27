0xA254B0: push    offset unk_B14974
0xA254B5: mov     ecx, offset dword_B07CFC
0xA254BA: call    BSSimpleList_Remove
0xA254BF: mov     eax, off_B14978; "bActorLookWithHavok:General"
0xA254C4: test    eax, eax
0xA254C6: jz      short locret_A254D4
0xA254C8: cmp     byte ptr [eax], 53h ; 'S'
0xA254CB: jnz     short locret_A254D4
0xA254CD: push    eax
0xA254CE: call    FormHeapFree
0xA254D3: pop     ecx
0xA254D4: retn
