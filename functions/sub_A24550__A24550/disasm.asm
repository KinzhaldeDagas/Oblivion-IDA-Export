0xA24550: push    offset aRia9Uj
0xA24555: mov     ecx, offset dword_B07CFC
0xA2455A: call    BSSimpleList_Remove
0xA2455F: mov     eax, off_B13584; "fXenonMenuMouseXYMult:Controls"
0xA24564: test    eax, eax
0xA24566: jz      short locret_A24574
0xA24568: cmp     byte ptr [eax], 53h ; 'S'
0xA2456B: jnz     short locret_A24574
0xA2456D: push    eax
0xA2456E: call    FormHeapFree
0xA24573: pop     ecx
0xA24574: retn
