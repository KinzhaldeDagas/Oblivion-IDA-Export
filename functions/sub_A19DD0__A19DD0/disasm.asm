0xA19DD0: push    offset byte_B06F74
0xA19DD5: mov     ecx, offset dword_B07CFC
0xA19DDA: call    BSSimpleList_Remove
0xA19DDF: mov     eax, off_B06F78; "bCreateShaderPackage:General"
0xA19DE4: test    eax, eax
0xA19DE6: jz      short locret_A19DF4
0xA19DE8: cmp     byte ptr [eax], 53h ; 'S'
0xA19DEB: jnz     short locret_A19DF4
0xA19DED: push    eax
0xA19DEE: call    FormHeapFree
0xA19DF3: pop     ecx
0xA19DF4: retn
