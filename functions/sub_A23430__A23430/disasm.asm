0xA23430: push    offset byte_B120E4
0xA23435: mov     ecx, offset dword_B07CFC
0xA2343A: call    BSSimpleList_Remove
0xA2343F: mov     eax, off_B120E8; "bUseEyeEnvMapping:General"
0xA23444: test    eax, eax
0xA23446: jz      short locret_A23454
0xA23448: cmp     byte ptr [eax], 53h ; 'S'
0xA2344B: jnz     short locret_A23454
0xA2344D: push    eax
0xA2344E: call    FormHeapFree
0xA23453: pop     ecx
0xA23454: retn
