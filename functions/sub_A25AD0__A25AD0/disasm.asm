0xA25AD0: push    offset flt_B14EF0
0xA25AD5: mov     ecx, offset dword_B07CFC
0xA25ADA: call    BSSimpleList_Remove
0xA25ADF: mov     eax, off_B14EF4; "fJoystickMoveFBMult:Controls"
0xA25AE4: test    eax, eax
0xA25AE6: jz      short locret_A25AF4
0xA25AE8: cmp     byte ptr [eax], 53h ; 'S'
0xA25AEB: jnz     short locret_A25AF4
0xA25AED: push    eax
0xA25AEE: call    FormHeapFree
0xA25AF3: pop     ecx
0xA25AF4: retn
