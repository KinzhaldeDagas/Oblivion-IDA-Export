0xA23340: push    offset bFixFaceNormals
0xA23345: mov     ecx, offset dword_B07CFC
0xA2334A: call    BSSimpleList_Remove
0xA2334F: mov     eax, off_B120C0; "bFixFaceNormals:General"
0xA23354: test    eax, eax
0xA23356: jz      short locret_A23364
0xA23358: cmp     byte ptr [eax], 53h ; 'S'
0xA2335B: jnz     short locret_A23364
0xA2335D: push    eax
0xA2335E: call    FormHeapFree
0xA23363: pop     ecx
0xA23364: retn
