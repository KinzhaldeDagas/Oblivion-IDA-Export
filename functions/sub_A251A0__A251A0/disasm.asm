0xA251A0: push    offset dword_B1487C
0xA251A5: mov     ecx, offset dword_B07CFC
0xA251AA: call    BSSimpleList_Remove
0xA251AF: mov     eax, off_B14880; "iActorShadowIntMin:Display"
0xA251B4: test    eax, eax
0xA251B6: jz      short locret_A251C4
0xA251B8: cmp     byte ptr [eax], 53h ; 'S'
0xA251BB: jnz     short locret_A251C4
0xA251BD: push    eax
0xA251BE: call    FormHeapFree
0xA251C3: pop     ecx
0xA251C4: retn
