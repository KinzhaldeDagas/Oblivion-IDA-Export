0xA16CD0: push    offset unk_B02D88
0xA16CD5: mov     ecx, offset dword_B07CFC
0xA16CDA: call    BSSimpleList_Remove
0xA16CDF: mov     eax, off_B02D8C; "fMenuBGBlurRadius:Interface"
0xA16CE4: test    eax, eax
0xA16CE6: jz      short locret_A16CF4
0xA16CE8: cmp     byte ptr [eax], 53h ; 'S'
0xA16CEB: jnz     short locret_A16CF4
0xA16CED: push    eax
0xA16CEE: call    FormHeapFree
0xA16CF3: pop     ecx
0xA16CF4: retn
