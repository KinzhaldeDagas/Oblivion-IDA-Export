0x968210: push    esi
0x968211: push    40h ; '@'; Size
0x968213: call    FormHeapAlloc
0x968218: add     esp, 4
0x96821B: test    eax, eax
0x96821D: jz      short loc_968252
0x96821F: push    offset dword_B258E8
0x968224: push    offset dword_B258DC
0x968229: push    offset dword_B258D0
0x96822E: push    offset Vector3_InitValue?
0x968233: push    offset flt_B258F4
0x968238: mov     ecx, eax
0x96823A: call    sub_961580
0x96823F: mov     ecx, [esp+4+arg_0]
0x968243: mov     esi, eax
0x968245: mov     eax, [esi]
0x968247: mov     edx, [eax]
0x968249: push    ecx
0x96824A: mov     ecx, esi
0x96824C: call    edx
0x96824E: mov     eax, esi
0x968250: pop     esi
0x968251: retn
0x968252: mov     ecx, [esp+4+arg_0]
0x968256: xor     esi, esi
0x968258: mov     eax, [esi]
0x96825A: mov     edx, [eax]
0x96825C: push    ecx
0x96825D: mov     ecx, esi
0x96825F: call    edx
0x968261: mov     eax, esi
0x968263: pop     esi
0x968264: retn
