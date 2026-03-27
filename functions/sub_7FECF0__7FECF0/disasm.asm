0x7FECF0: push    esi
0x7FECF1: push    edi
0x7FECF2: mov     edi, ecx
0x7FECF4: mov     esi, offset dword_B473D0
0x7FECF9: lea     esp, [esp+0]
0x7FED00: mov     ecx, [esi]
0x7FED02: mov     eax, [edi]
0x7FED04: mov     edx, [eax+94h]
0x7FED0A: push    ecx
0x7FED0B: mov     ecx, edi
0x7FED0D: call    edx
0x7FED0F: add     esi, 4
0x7FED12: cmp     esi, offset dword_B474A8
0x7FED18: jl      short loc_7FED00
0x7FED1A: pop     edi
0x7FED1B: pop     esi
0x7FED1C: retn
