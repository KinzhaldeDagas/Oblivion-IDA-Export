0xA173C0: push    offset off_B03164; "ScreenShot"
0xA173C5: mov     ecx, offset dword_B07CFC
0xA173CA: call    BSSimpleList_Remove
0xA173CF: mov     eax, off_B03168; "sScreenShotBaseName:Display"
0xA173D4: test    eax, eax
0xA173D6: jz      short locret_A173E4
0xA173D8: cmp     byte ptr [eax], 53h ; 'S'
0xA173DB: jnz     short locret_A173E4
0xA173DD: push    eax
0xA173DE: call    FormHeapFree
0xA173E3: pop     ecx
0xA173E4: retn
