0xA26460: push    offset unk_B16294
0xA26465: mov     ecx, offset dword_B07CFC
0xA2646A: call    BSSimpleList_Remove
0xA2646F: mov     eax, off_B16298; "fChainLargeMassMin:Audio"
0xA26474: test    eax, eax
0xA26476: jz      short locret_A26484
0xA26478: cmp     byte ptr [eax], 53h ; 'S'
0xA2647B: jnz     short locret_A26484
0xA2647D: push    eax
0xA2647E: call    FormHeapFree
0xA26483: pop     ecx
0xA26484: retn
