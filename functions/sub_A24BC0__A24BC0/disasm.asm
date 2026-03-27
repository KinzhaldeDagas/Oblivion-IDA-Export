0xA24BC0: push    offset aPURJ
0xA24BC5: mov     ecx, offset dword_B07CFC
0xA24BCA: call    BSSimpleList_Remove
0xA24BCF: mov     eax, off_B1413C; "fPercentageOfBar0:LoadingBar"
0xA24BD4: test    eax, eax
0xA24BD6: jz      short locret_A24BE4
0xA24BD8: cmp     byte ptr [eax], 53h ; 'S'
0xA24BDB: jnz     short locret_A24BE4
0xA24BDD: push    eax
0xA24BDE: call    FormHeapFree
0xA24BE3: pop     ecx
0xA24BE4: retn
