0x77BC40: push    8; Size
0x77BC42: call    FormHeapAlloc
0x77BC47: add     esp, 4
0x77BC4A: test    eax, eax
0x77BC4C: jz      short loc_77BC6F
0x77BC4E: push    eax; int
0x77BC4F: mov     dword ptr [eax], offset ??_7NiD3DShaderProgramCreatorHLSL@@6B@; const NiD3DShaderProgramCreatorHLSL::`vftable'
0x77BC55: mov     dword ptr [eax+4], 0
0x77BC5C: push    offset aHlsl; "hlsl"
0x77BC61: mov     ds:0B428C8h, eax
0x77BC66: call    sub_77F720
0x77BC6B: add     esp, 8
0x77BC6E: retn
0x77BC6F: xor     eax, eax
0x77BC71: push    eax; int
0x77BC72: push    offset aHlsl; "hlsl"
0x77BC77: mov     ds:0B428C8h, eax
0x77BC7C: call    sub_77F720
0x77BC81: add     esp, 8
0x77BC84: retn
