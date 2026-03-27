0xA237B0: push    offset dword_B12630
0xA237B5: mov     ecx, offset dword_B07CFC
0xA237BA: call    BSSimpleList_Remove
0xA237BF: mov     eax, off_B12634; "iCanopyShadowScale:SpeedTree"
0xA237C4: test    eax, eax
0xA237C6: jz      short locret_A237D4
0xA237C8: cmp     byte ptr [eax], 53h ; 'S'
0xA237CB: jnz     short locret_A237D4
0xA237CD: push    eax
0xA237CE: call    FormHeapFree
0xA237D3: pop     ecx
0xA237D4: retn
