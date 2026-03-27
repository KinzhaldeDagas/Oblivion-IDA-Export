0x470960: push    ebx
0x470961: mov     ebx, [esp+4+arg_0]
0x470965: push    esi
0x470966: mov     esi, ecx
0x470968: mov     eax, [esi]
0x47096A: mov     edx, [eax+4]
0x47096D: push    edi
0x47096E: push    ebx
0x47096F: call    edx
0x470971: mov     ecx, [esi+8]
0x470974: mov     edi, [ecx+eax*4]
0x470977: test    edi, edi
0x470979: jz      short loc_470999
0x47097B: jmp     short loc_470980
0x47097D: align 10h
0x470980: movzx   eax, word ptr [edi+4]
0x470984: mov     edx, [esi]
0x470986: mov     edx, [edx+8]
0x470989: push    eax
0x47098A: push    ebx
0x47098B: mov     ecx, esi
0x47098D: call    edx
0x47098F: test    al, al
0x470991: jnz     short loc_4709A1
0x470993: mov     edi, [edi]
0x470995: test    edi, edi
0x470997: jnz     short loc_470980
0x470999: pop     edi
0x47099A: pop     esi
0x47099B: xor     al, al
0x47099D: pop     ebx
0x47099E: retn    8
0x4709A1: mov     eax, [edi+8]
0x4709A4: mov     ecx, [esp+0Ch+arg_4]
0x4709A8: pop     edi
0x4709A9: pop     esi
0x4709AA: mov     [ecx], eax
0x4709AC: mov     al, 1
0x4709AE: pop     ebx
0x4709AF: retn    8
