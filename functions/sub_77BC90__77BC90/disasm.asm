0x77BC90: push    10h; Size
0x77BC92: call    FormHeapAlloc
0x77BC97: xor     ecx, ecx
0x77BC99: add     esp, 4
0x77BC9C: cmp     eax, ecx
0x77BC9E: jz      short loc_77BCB1
0x77BCA0: mov     dword ptr [eax], offset ??_7NiD3DShaderProgramCreatorAsm@@6B@; const NiD3DShaderProgramCreatorAsm::`vftable'
0x77BCA6: mov     [eax+4], ecx
0x77BCA9: mov     [eax+8], ecx
0x77BCAC: mov     [eax+0Ch], ecx
0x77BCAF: jmp     short loc_77BCB3
0x77BCB1: xor     eax, eax
0x77BCB3: push    eax; int
0x77BCB4: push    offset off_A8AB88; Str
0x77BCB9: mov     ds:0B428CCh, eax
0x77BCBE: call    sub_77F720
0x77BCC3: mov     eax, ds:0B428CCh
0x77BCC8: push    eax; int
0x77BCC9: push    offset off_A4D1EC; Str
0x77BCCE: call    sub_77F720
0x77BCD3: add     esp, 10h
0x77BCD6: retn
