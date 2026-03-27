0xA247F0: push    offset flt_B135F0
0xA247F5: mov     ecx, offset dword_B07CFC
0xA247FA: call    BSSimpleList_Remove
0xA247FF: mov     eax, off_B135F4; "fMenuPlayerLightDiffuseBlue:Interface"
0xA24804: test    eax, eax
0xA24806: jz      short locret_A24814
0xA24808: cmp     byte ptr [eax], 53h ; 'S'
0xA2480B: jnz     short locret_A24814
0xA2480D: push    eax
0xA2480E: call    FormHeapFree
0xA24813: pop     ecx
0xA24814: retn
