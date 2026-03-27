0xA24ED0: push    offset aGIJ
0xA24ED5: mov     ecx, offset dword_B07CFC
0xA24EDA: call    BSSimpleList_Remove
0xA24EDF: mov     eax, off_B14808; "fTreeLODMin:LOD"
0xA24EE4: test    eax, eax
0xA24EE6: jz      short locret_A24EF4
0xA24EE8: cmp     byte ptr [eax], 53h ; 'S'
0xA24EEB: jnz     short locret_A24EF4
0xA24EED: push    eax
0xA24EEE: call    FormHeapFree
0xA24EF3: pop     ecx
0xA24EF4: retn
