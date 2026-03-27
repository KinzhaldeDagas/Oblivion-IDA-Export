0x71AD40: push    esi
0x71AD41: mov     esi, [esp+4+arg_0]
0x71AD45: mov     eax, [esi+4]
0x71AD48: cmp     eax, [ecx+4]
0x71AD4B: jnz     short loc_71AD77
0x71AD4D: mov     dl, [esi]
0x71AD4F: cmp     dl, [ecx]
0x71AD51: jnz     short loc_71AD77
0x71AD53: mov     eax, [esi+8]
0x71AD56: cmp     eax, [ecx+8]
0x71AD59: jnz     short loc_71AD77
0x71AD5B: mov     dl, [esi+1]
0x71AD5E: cmp     dl, [ecx+1]
0x71AD61: jnz     short loc_71AD77
0x71AD63: mov     edx, [esi+0Ch]
0x71AD66: mov     eax, [ecx+0Ch]
0x71AD69: cmp     edx, eax
0x71AD6B: jz      short loc_71AD7D
0x71AD6D: cmp     eax, 0FFFFFFFFh
0x71AD70: jz      short loc_71AD7D
0x71AD72: cmp     edx, 0FFFFFFFFh
0x71AD75: jz      short loc_71AD7D
0x71AD77: xor     al, al
0x71AD79: pop     esi
0x71AD7A: retn    4
0x71AD7D: push    edi
0x71AD7E: xor     edi, edi
0x71AD80: lea     edx, [esi+1Ch]
0x71AD83: lea     eax, [ecx+14h]
0x71AD86: sub     esi, ecx
0x71AD88: mov     ecx, [esi+eax]
0x71AD8B: cmp     ecx, [eax]
0x71AD8D: jnz     short loc_71ADBB
0x71AD8F: mov     ecx, [edx-4]
0x71AD92: cmp     ecx, [eax+4]
0x71AD95: jnz     short loc_71ADBB
0x71AD97: mov     cl, [edx]
0x71AD99: cmp     cl, [eax+8]
0x71AD9C: jnz     short loc_71ADBB
0x71AD9E: mov     cl, [edx+1]
0x71ADA1: cmp     cl, [eax+9]
0x71ADA4: jnz     short loc_71ADBB
0x71ADA6: add     edi, 1
0x71ADA9: add     edx, 0Ch
0x71ADAC: add     eax, 0Ch
0x71ADAF: cmp     edi, 4
0x71ADB2: jl      short loc_71AD88
0x71ADB4: pop     edi
0x71ADB5: mov     al, 1
0x71ADB7: pop     esi
0x71ADB8: retn    4
0x71ADBB: pop     edi
0x71ADBC: xor     al, al
0x71ADBE: pop     esi
0x71ADBF: retn    4
