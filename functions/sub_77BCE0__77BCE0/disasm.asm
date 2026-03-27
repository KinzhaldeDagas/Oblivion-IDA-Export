0x77BCE0: push    10h; Size
0x77BCE2: call    FormHeapAlloc
0x77BCE7: xor     ecx, ecx
0x77BCE9: add     esp, 4
0x77BCEC: cmp     eax, ecx
0x77BCEE: jz      short loc_77BD01
0x77BCF0: mov     [eax+4], ecx
0x77BCF3: mov     [eax+8], ecx
0x77BCF6: mov     [eax+0Ch], ecx
0x77BCF9: mov     dword ptr [eax], offset ??_7NiD3DShaderProgramCreatorObj@@6B@; const NiD3DShaderProgramCreatorObj::`vftable'
0x77BCFF: jmp     short loc_77BD03
0x77BD01: xor     eax, eax
0x77BD03: push    eax; int
0x77BD04: push    offset off_A8ABC0; Str
0x77BD09: mov     ds:0B428D0h, eax
0x77BD0E: call    sub_77F720
0x77BD13: mov     eax, ds:0B428D0h
0x77BD18: push    eax; int
0x77BD19: push    offset off_A8ABBC; Str
0x77BD1E: call    sub_77F720
0x77BD23: add     esp, 10h
0x77BD26: retn
