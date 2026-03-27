0x50FCA0: mov     eax, ds:0B333CCh
0x50FCA5: xor     byte ptr ds:0B361FEh, 1
0x50FCAC: cmp     word ptr [eax+0B6h], 1
0x50FCB4: ja      short loc_50FCBA
0x50FCB6: xor     ecx, ecx
0x50FCB8: jmp     short loc_50FCC3
0x50FCBA: mov     eax, [eax+0B0h]
0x50FCC0: mov     ecx, [eax+4]
0x50FCC3: push    8
0x50FCC5: call    NiNode_GetNiPropertyByID
0x50FCCA: test    eax, eax
0x50FCCC: mov     cl, ds:0B361FEh
0x50FCD2: jz      short loc_50FCE5
0x50FCD4: test    cl, cl
0x50FCD6: jz      short loc_50FCDF
0x50FCD8: or      word ptr [eax+18h], 1
0x50FCDD: jmp     short loc_50FCE5
0x50FCDF: and     word ptr [eax+18h], 0FFFEh
0x50FCE5: cmp     byte ptr ds:0B361ACh, 0
0x50FCEC: jz      short loc_50FD0A
0x50FCEE: test    cl, cl
0x50FCF0: mov     eax, offset aOn_0
0x50FCF5: jnz     short loc_50FCFC
0x50FCF7: mov     eax, offset aOff
0x50FCFC: push    eax
0x50FCFD: push    offset aWireframeS; "Wireframe -> %s"
0x50FD02: call    Interface_ConsolePrint
0x50FD07: add     esp, 8
0x50FD0A: mov     al, 1
0x50FD0C: retn
