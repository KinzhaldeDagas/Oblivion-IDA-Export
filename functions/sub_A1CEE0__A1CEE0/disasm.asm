0xA1CEE0: push    offset off_B11B84; "1.0, 1.0"
0xA1CEE5: mov     ecx, offset unk_B11D4C
0xA1CEEA: call    BSSimpleList_Remove
0xA1CEEF: mov     eax, off_B11B88; "sRUpperArm:DEFAULT"
0xA1CEF4: test    eax, eax
0xA1CEF6: jz      short locret_A1CF04
0xA1CEF8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CEFB: jnz     short locret_A1CF04
0xA1CEFD: push    eax
0xA1CEFE: call    FormHeapFree
0xA1CF03: pop     ecx
0xA1CF04: retn
