0x4A4460: push    ebx
0x4A4461: push    esi
0x4A4462: push    edi
0x4A4463: mov     edi, ecx
0x4A4465: test    edi, edi
0x4A4467: jz      short loc_4A448A
0x4A4469: mov     ebx, [esp+0Ch+arg_0]
0x4A446D: lea     ecx, [ecx+0]
0x4A4470: mov     esi, [edi]
0x4A4472: test    esi, esi
0x4A4474: jz      short loc_4A4483
0x4A4476: mov     eax, [esi]
0x4A4478: mov     edx, [eax+0Ch]
0x4A447B: mov     ecx, esi
0x4A447D: call    edx
0x4A447F: cmp     eax, ebx
0x4A4481: jz      short loc_4A4492
0x4A4483: mov     edi, [edi+4]
0x4A4486: test    edi, edi
0x4A4488: jnz     short loc_4A4470
0x4A448A: pop     edi
0x4A448B: pop     esi
0x4A448C: xor     eax, eax
0x4A448E: pop     ebx
0x4A448F: retn    4
0x4A4492: pop     edi
0x4A4493: mov     eax, esi
0x4A4495: pop     esi
0x4A4496: pop     ebx
0x4A4497: retn    4
