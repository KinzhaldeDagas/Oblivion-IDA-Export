0x947A20: push    esi
0x947A21: mov     esi, ecx
0x947A23: mov     ecx, [esi+18h]; lpCriticalSection
0x947A26: push    edi
0x947A27: call    sub_8A7720
0x947A2C: mov     eax, [esp+8+arg_0]
0x947A30: mov     edx, [esi+18h]
0x947A33: mov     ecx, [esi+0Ch]
0x947A36: lea     eax, [eax+eax*2]
0x947A39: mov     edi, [ecx+eax*4]
0x947A3C: push    edx; lpCriticalSection
0x947A3D: call    dword ptr ds:0A28074h
0x947A43: mov     eax, edi
0x947A45: pop     edi
0x947A46: pop     esi
0x947A47: retn    4
