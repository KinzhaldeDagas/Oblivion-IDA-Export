0xA19AA0: push    offset flt_B06EEC
0xA19AA5: mov     ecx, offset dword_B07CFC
0xA19AAA: call    BSSimpleList_Remove
0xA19AAF: mov     eax, off_B06EF0; "fEyeEnvMapLOD1:Display"
0xA19AB4: test    eax, eax
0xA19AB6: jz      short locret_A19AC4
0xA19AB8: cmp     byte ptr [eax], 53h ; 'S'
0xA19ABB: jnz     short locret_A19AC4
0xA19ABD: push    eax
0xA19ABE: call    FormHeapFree
0xA19AC3: pop     ecx
0xA19AC4: retn
