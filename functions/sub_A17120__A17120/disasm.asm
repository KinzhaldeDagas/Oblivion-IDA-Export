0xA17120: push    offset off_B030A4; "OblivionIntro.bik"
0xA17125: mov     ecx, offset dword_B07CFC
0xA1712A: call    BSSimpleList_Remove
0xA1712F: mov     eax, off_B030A8; "sOblivionIntro:General"
0xA17134: test    eax, eax
0xA17136: jz      short locret_A17144
0xA17138: cmp     byte ptr [eax], 53h ; 'S'
0xA1713B: jnz     short locret_A17144
0xA1713D: push    eax
0xA1713E: call    FormHeapFree
0xA17143: pop     ecx
0xA17144: retn
