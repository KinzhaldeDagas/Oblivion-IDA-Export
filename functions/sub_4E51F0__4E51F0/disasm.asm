0x4E51F0: mov     eax, ds:0B333A0h
0x4E51F5: mov     ecx, [eax+34h]
0x4E51F8: test    ecx, ecx
0x4E51FA: jz      short loc_4E5217
0x4E51FC: call    sub_4AF170
0x4E5201: test    eax, eax
0x4E5203: jz      short sub_4E5275
0x4E5205: mov     ecx, [esp+arg_4]
0x4E5209: mov     edx, [esp+arg_0]
0x4E520D: push    ecx
0x4E520E: push    edx
0x4E520F: mov     ecx, eax
0x4E5211: call    SetLinkedPointsEnabled
0x4E5216: retn
0x4E5217: push    ebx
0x4E5218: mov     ebx, ds:0B06A2Ch
0x4E521E: push    edi
0x4E521F: xor     edi, edi
0x4E5221: test    ebx, ebx
0x4E5223: jbe     short loc_4E5273
0x4E5225: push    ebp
0x4E5226: mov     ebp, [esp+0Ch+arg_0]
0x4E522A: push    esi
0x4E522B: jmp     short loc_4E5230
0x4E522D: align 10h
0x4E5230: xor     esi, esi
0x4E5232: mov     eax, ds:0B333A0h
0x4E5237: mov     ecx, [eax+8]
0x4E523A: push    esi
0x4E523B: push    edi
0x4E523C: call    GetGridEntry
0x4E5241: test    eax, eax
0x4E5243: jz      short loc_4E5263
0x4E5245: mov     eax, [eax]
