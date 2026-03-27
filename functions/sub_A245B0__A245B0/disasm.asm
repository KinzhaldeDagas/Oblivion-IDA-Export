0xA245B0: push    offset unk_B13590
0xA245B5: mov     ecx, offset dword_B07CFC
0xA245BA: call    BSSimpleList_Remove
0xA245BF: mov     eax, off_B13594; "fXenonMenuStickSpeed:Controls"
0xA245C4: test    eax, eax
0xA245C6: jz      short locret_A245D4
0xA245C8: cmp     byte ptr [eax], 53h ; 'S'
0xA245CB: jnz     short locret_A245D4
0xA245CD: push    eax
0xA245CE: call    FormHeapFree
0xA245D3: pop     ecx
0xA245D4: retn
