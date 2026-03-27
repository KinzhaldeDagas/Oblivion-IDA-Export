0x8903B0: mov     eax, [esp+arg_0]
0x8903B4: mov     ecx, ds:0BA7D98h
0x8903BA: mov     edx, [ecx]
0x8903BC: push    esi
0x8903BD: movzx   esi, word ptr [eax+4]
0x8903C1: push    31h ; '1'
0x8903C3: push    esi
0x8903C4: push    eax
0x8903C5: mov     eax, [edx+14h]
0x8903C8: call    eax
0x8903CA: pop     esi
0x8903CB: retn
