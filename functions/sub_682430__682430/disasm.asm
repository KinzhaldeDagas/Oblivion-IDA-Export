0x682430: mov     ecx, ds:0B3BF80h
0x682436: test    ecx, ecx
0x682438: jz      short locret_68244C
0x68243A: mov     eax, [ecx]
0x68243C: mov     edx, [eax]
0x68243E: push    1
0x682440: call    edx
0x682442: mov     dword ptr ds:0B3BF80h, 0
0x68244C: retn
