0xA248E0: push    offset unk_B13618
0xA248E5: mov     ecx, offset dword_B07CFC
0xA248EA: call    BSSimpleList_Remove
0xA248EF: mov     eax, off_B1361C; "fXenonMenuStickSpeedMaxMod:Controls"
0xA248F4: test    eax, eax
0xA248F6: jz      short locret_A24904
0xA248F8: cmp     byte ptr [eax], 53h ; 'S'
0xA248FB: jnz     short locret_A24904
0xA248FD: push    eax
0xA248FE: call    FormHeapFree
0xA24903: pop     ecx
0xA24904: retn
