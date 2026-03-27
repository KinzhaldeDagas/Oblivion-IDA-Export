0xA16CA0: push    offset flt_B02D80
0xA16CA5: mov     ecx, offset dword_B07CFC
0xA16CAA: call    BSSimpleList_Remove
0xA16CAF: mov     eax, off_B02D84; "fLODTreeMipMapLODBias:SpeedTree"
0xA16CB4: test    eax, eax
0xA16CB6: jz      short locret_A16CC4
0xA16CB8: cmp     byte ptr [eax], 53h ; 'S'
0xA16CBB: jnz     short locret_A16CC4
0xA16CBD: push    eax
0xA16CBE: call    FormHeapFree
0xA16CC3: pop     ecx
0xA16CC4: retn
