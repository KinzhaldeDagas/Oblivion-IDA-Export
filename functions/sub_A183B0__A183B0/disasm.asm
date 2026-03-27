0xA183B0: push    offset byte_B05BA4
0xA183B5: mov     ecx, offset dword_B07CFC
0xA183BA: call    BSSimpleList_Remove
0xA183BF: mov     eax, off_B05BA8; "bAllowScriptedAutosave:General"
0xA183C4: test    eax, eax
0xA183C6: jz      short locret_A183D4
0xA183C8: cmp     byte ptr [eax], 53h ; 'S'
0xA183CB: jnz     short locret_A183D4
0xA183CD: push    eax
0xA183CE: call    FormHeapFree
0xA183D3: pop     ecx
0xA183D4: retn
