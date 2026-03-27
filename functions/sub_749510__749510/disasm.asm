0x749510: push    esi
0x749511: mov     esi, [ecx+0C8h]
0x749517: test    esi, esi
0x749519: push    edi
0x74951A: mov     edi, [ecx+0B4h]
0x749520: jz      short loc_74953D
0x749522: push    ebx
0x749523: mov     ebx, [esp+0Ch+arg_0]
0x749527: mov     ecx, [esi+8]
0x74952A: lea     eax, [esi+8]
0x74952D: mov     eax, [ecx]
0x74952F: mov     edx, [eax+50h]
0x749532: mov     esi, [esi]
0x749534: push    ebx
0x749535: push    edi
0x749536: call    edx
0x749538: test    esi, esi
0x74953A: jnz     short loc_749527
0x74953C: pop     ebx
0x74953D: pop     edi
0x74953E: pop     esi
0x74953F: retn    4
