0x584D30: cmp     byte ptr [ecx+10h], 0
0x584D34: jz      short locret_584D44
0x584D36: mov     eax, [esp+arg_0]
0x584D3A: mov     ecx, [eax+4]
0x584D3D: push    ecx
0x584D3E: call    FormHeapFree
0x584D43: pop     ecx
0x584D44: retn    4
