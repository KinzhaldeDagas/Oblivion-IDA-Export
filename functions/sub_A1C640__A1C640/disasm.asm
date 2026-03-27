0xA1C640: push    offset dword_B11918
0xA1C645: mov     ecx, offset dword_B07CFC
0xA1C64A: call    BSSimpleList_Remove
0xA1C64F: mov     eax, off_B1191C; "iMaxViewCasterPicksHavok:Interface"
0xA1C654: test    eax, eax
0xA1C656: jz      short locret_A1C664
0xA1C658: cmp     byte ptr [eax], 53h ; 'S'
0xA1C65B: jnz     short locret_A1C664
0xA1C65D: push    eax
0xA1C65E: call    FormHeapFree
0xA1C663: pop     ecx
0xA1C664: retn
