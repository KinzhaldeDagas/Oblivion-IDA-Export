0xA1A360: push    offset UseWaterReflectionMisc
0xA1A365: mov     ecx, offset dword_B07CFC
0xA1A36A: call    BSSimpleList_Remove
0xA1A36F: mov     eax, off_B07084; "bUseWaterReflectionsMisc:Water"
0xA1A374: test    eax, eax
0xA1A376: jz      short locret_A1A384
0xA1A378: cmp     byte ptr [eax], 53h ; 'S'
0xA1A37B: jnz     short locret_A1A384
0xA1A37D: push    eax
0xA1A37E: call    FormHeapFree
0xA1A383: pop     ecx
0xA1A384: retn
