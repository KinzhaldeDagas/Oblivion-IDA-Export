0x8A0420: push    ebx
0x8A0421: push    esi
0x8A0422: push    edi
0x8A0423: mov     edi, [esp+0Ch+arg_0]
0x8A0427: push    edi
0x8A0428: mov     esi, ecx
0x8A042A: call    sub_89D6F0
0x8A042F: mov     bl, al
0x8A0431: test    bl, bl
0x8A0433: jz      short loc_8A0479
0x8A0435: mov     eax, [edi]
0x8A0437: mov     edx, [eax+88h]
0x8A043D: push    ebp
0x8A043E: mov     ecx, edi
0x8A0440: call    edx
0x8A0442: mov     ebp, eax
0x8A0444: mov     eax, [esi]
0x8A0446: mov     edx, [eax+88h]
0x8A044C: mov     ecx, esi
0x8A044E: call    edx
0x8A0450: mov     edx, [edi]
0x8A0452: cmp     eax, ebp
0x8A0454: setz    al
0x8A0457: and     bl, al
0x8A0459: mov     eax, [edx+8Ch]
0x8A045F: mov     ecx, edi
0x8A0461: call    eax
0x8A0463: mov     edx, [esi]
0x8A0465: mov     edi, eax
0x8A0467: mov     eax, [edx+8Ch]
0x8A046D: mov     ecx, esi
0x8A046F: call    eax
0x8A0471: cmp     eax, edi
0x8A0473: setz    cl
0x8A0476: and     bl, cl
0x8A0478: pop     ebp
0x8A0479: pop     edi
0x8A047A: pop     esi
0x8A047B: mov     al, bl
0x8A047D: pop     ebx
0x8A047E: retn    4
