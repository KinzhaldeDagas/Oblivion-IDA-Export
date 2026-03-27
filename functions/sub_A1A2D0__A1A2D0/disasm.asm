0xA1A2D0: push    offset UseWaterReflectionActors
0xA1A2D5: mov     ecx, offset dword_B07CFC
0xA1A2DA: call    BSSimpleList_Remove
0xA1A2DF: mov     eax, off_B0706C; "bUseWaterReflectionsActors:Water"
0xA1A2E4: test    eax, eax
0xA1A2E6: jz      short locret_A1A2F4
0xA1A2E8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A2EB: jnz     short locret_A1A2F4
0xA1A2ED: push    eax
0xA1A2EE: call    FormHeapFree
0xA1A2F3: pop     ecx
0xA1A2F4: retn
