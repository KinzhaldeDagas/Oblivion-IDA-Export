0x77D3F0: push    esi
0x77D3F1: mov     esi, [esp+4+arg_0]
0x77D3F5: test    esi, esi
0x77D3F7: jz      short loc_77D44B
0x77D3F9: mov     eax, [esi+8]
0x77D3FC: test    eax, eax
0x77D3FE: jz      short loc_77D40F
0x77D400: mov     ecx, [eax]
0x77D402: mov     edx, [ecx+8]
0x77D405: push    eax
0x77D406: call    edx
0x77D408: mov     dword ptr [esi+8], 0
0x77D40F: mov     ecx, esi
0x77D411: call    sub_77D390
0x77D416: mov     eax, [esi+3Ch]
0x77D419: test    eax, eax
0x77D41B: mov     ecx, [esi+40h]
0x77D41E: jz      short loc_77D423
0x77D420: mov     [eax+40h], ecx
0x77D423: test    ecx, ecx
0x77D425: jz      short loc_77D42A
0x77D427: mov     [ecx+3Ch], eax
0x77D42A: mov     eax, ds:0B4289Ch
0x77D42F: test    eax, eax
0x77D431: jz      short loc_77D43B
0x77D433: mov     [eax+40h], esi
0x77D436: mov     eax, ds:0B4289Ch
0x77D43B: mov     [esi+3Ch], eax
0x77D43E: mov     dword ptr [esi+40h], 0
0x77D445: mov     ds:0B4289Ch, esi
0x77D44B: pop     esi
0x77D44C: retn    4
