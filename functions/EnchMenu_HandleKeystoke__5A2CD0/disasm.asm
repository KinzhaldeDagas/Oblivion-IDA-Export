0x5A2CD0: push    esi
0x5A2CD1: mov     esi, ecx
0x5A2CD3: mov     ecx, [esi+98h]
0x5A2CD9: call    sub_57D2F0
0x5A2CDE: test    al, al
0x5A2CE0: jz      short loc_5A2D2A
0x5A2CE2: mov     eax, [esp+4+arg_0]
0x5A2CE6: mov     ecx, [esi+98h]
0x5A2CEC: push    eax
0x5A2CED: call    sub_57FF50
0x5A2CF2: mov     ecx, [esi+98h]
0x5A2CF8: call    sub_580120
0x5A2CFD: mov     ecx, [esi+3Ch]
0x5A2D00: push    eax
0x5A2D01: push    0FDEh
0x5A2D06: call    Tile_SetString
0x5A2D0B: mov     ecx, [esi+98h]
0x5A2D11: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5A2D16: mov     ecx, [esi+28h]
0x5A2D19: push    0; a3
0x5A2D1B: push    eax; a2
0x5A2D1C: add     ecx, 1Ch; this
0x5A2D1F: call    BSStringT_Set
0x5A2D24: mov     al, 1
0x5A2D26: pop     esi
0x5A2D27: retn    4
0x5A2D2A: xor     al, al
0x5A2D2C: pop     esi
0x5A2D2D: retn    4
