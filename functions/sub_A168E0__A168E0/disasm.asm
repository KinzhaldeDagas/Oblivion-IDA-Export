0xA168E0: push    offset off_B02CE0
0xA168E5: mov     ecx, offset dword_B07CFC
0xA168EA: call    BSSimpleList_Remove
0xA168EF: mov     eax, off_B02CE4; "sStartingCell:General"
0xA168F4: test    eax, eax
0xA168F6: jz      short locret_A16904
0xA168F8: cmp     byte ptr [eax], 53h ; 'S'
0xA168FB: jnz     short locret_A16904
0xA168FD: push    eax
0xA168FE: call    FormHeapFree
0xA16903: pop     ecx
0xA16904: retn
