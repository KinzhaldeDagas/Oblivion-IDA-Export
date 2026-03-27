0xA17060: push    offset lpParameter
0xA17065: mov     ecx, offset dword_B07CFC
0xA1706A: call    BSSimpleList_Remove
0xA1706F: mov     eax, off_B03088; "sIntroSequence:General"
0xA17074: test    eax, eax
0xA17076: jz      short locret_A17084
0xA17078: cmp     byte ptr [eax], 53h ; 'S'
0xA1707B: jnz     short locret_A17084
0xA1707D: push    eax
0xA1707E: call    FormHeapFree
0xA17083: pop     ecx
0xA17084: retn
