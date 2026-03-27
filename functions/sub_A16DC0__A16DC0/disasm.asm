0xA16DC0: push    offset flt_B02DB0
0xA16DC5: mov     ecx, offset dword_B07CFC
0xA16DCA: call    BSSimpleList_Remove
0xA16DCF: mov     eax, off_B02DB4; "fLODFadeOutItemMultCity:LOD"
0xA16DD4: test    eax, eax
0xA16DD6: jz      short locret_A16DE4
0xA16DD8: cmp     byte ptr [eax], 53h ; 'S'
0xA16DDB: jnz     short locret_A16DE4
0xA16DDD: push    eax
0xA16DDE: call    FormHeapFree
0xA16DE3: pop     ecx
0xA16DE4: retn
