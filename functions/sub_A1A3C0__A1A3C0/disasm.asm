0xA1A3C0: push    offset byte_B07090
0xA1A3C5: mov     ecx, offset dword_B07CFC
0xA1A3CA: call    BSSimpleList_Remove
0xA1A3CF: mov     eax, off_B07094; "bUseWaterDisplacements:Water"
0xA1A3D4: test    eax, eax
0xA1A3D6: jz      short locret_A1A3E4
0xA1A3D8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A3DB: jnz     short locret_A1A3E4
0xA1A3DD: push    eax
0xA1A3DE: call    FormHeapFree
0xA1A3E3: pop     ecx
0xA1A3E4: retn
