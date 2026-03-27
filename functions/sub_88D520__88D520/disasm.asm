0x88D520: mov     eax, [esp+arg_0]
0x88D524: mov     ecx, ds:0BA7D98h
0x88D52A: mov     edx, [ecx]
0x88D52C: push    esi
0x88D52D: movzx   esi, word ptr [eax+4]
0x88D531: push    2Eh ; '.'
0x88D533: push    esi
0x88D534: push    eax
0x88D535: mov     eax, [edx+14h]
0x88D538: call    eax
0x88D53A: pop     esi
0x88D53B: retn
