0x5535D0: mov     ecx, ds:0B39B80h
0x5535D6: test    ecx, ecx
0x5535D8: jz      short locret_5535F6
0x5535DA: push    esi
0x5535DB: mov     esi, ecx
0x5535DD: call    sub_553000
0x5535E2: push    esi
0x5535E3: call    FormHeapFree
0x5535E8: add     esp, 4
0x5535EB: mov     dword ptr ds:0B39B80h, 0
0x5535F5: pop     esi
0x5535F6: retn
