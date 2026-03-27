0x997CAA: push    ebp
0x997CAB: mov     ebp, esp
0x997CAD: push    esi
0x997CAE: mov     esi, eax
0x997CB0: jmp     short loc_997CC5
0x997CB2: mov     ecx, [ebp+File]; File
0x997CB5: mov     al, [ebp+arg_0]
0x997CB8: dec     [ebp+arg_4]
0x997CBB: call    _write_char
0x997CC0: cmp     dword ptr [esi], 0FFFFFFFFh
0x997CC3: jz      short loc_997CCB
0x997CC5: cmp     [ebp+arg_4], 0
0x997CC9: jg      short loc_997CB2
0x997CCB: pop     esi
0x997CCC: pop     ebp
0x997CCD: retn
