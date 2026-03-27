0xA19AD0: push    offset flt_B06EF4
0xA19AD5: mov     ecx, offset dword_B07CFC
0xA19ADA: call    BSSimpleList_Remove
0xA19ADF: mov     eax, off_B06EF8; "fEyeEnvMapLOD2:Display"
0xA19AE4: test    eax, eax
0xA19AE6: jz      short locret_A19AF4
0xA19AE8: cmp     byte ptr [eax], 53h ; 'S'
0xA19AEB: jnz     short locret_A19AF4
0xA19AED: push    eax
0xA19AEE: call    FormHeapFree
0xA19AF3: pop     ecx
0xA19AF4: retn
