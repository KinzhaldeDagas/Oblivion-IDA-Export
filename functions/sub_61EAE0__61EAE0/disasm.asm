0x61EAE0: push    esi
0x61EAE1: push    edi
0x61EAE2: mov     esi, ecx
0x61EAE4: call    sub_6135F0
0x61EAE9: mov     edi, [esp+8+arg_0]
0x61EAED: cmp     edi, eax
0x61EAEF: jnz     short loc_61EB5E
0x61EAF1: mov     ecx, esi
0x61EAF3: call    sub_6135F0
0x61EAF8: test    eax, eax
0x61EAFA: jz      short loc_61EB3F
0x61EAFC: mov     ecx, esi
0x61EAFE: call    sub_6135F0
0x61EB03: mov     ecx, eax
0x61EB05: call    Actor_IsSwimming
0x61EB0A: test    al, al
0x61EB0C: jz      short loc_61EB3F
0x61EB0E: mov     ecx, [esi+3Ch]
0x61EB11: call    Actor_IsSwimming
0x61EB16: test    al, al
0x61EB18: jnz     short loc_61EB3F
0x61EB1A: mov     ecx, [esi+3Ch]
0x61EB1D: call    Actor_CanFightInWater
0x61EB22: test    al, al
0x61EB24: jnz     short loc_61EB3F
0x61EB26: xor     ecx, ecx
0x61EB28: test    al, al
0x61EB2A: setz    cl
0x61EB2D: push    1
0x61EB2F: mov     eax, ecx
0x61EB31: push    eax
0x61EB32: push    edi
0x61EB33: mov     ecx, esi
0x61EB35: call    sub_619D40
0x61EB3A: pop     edi
0x61EB3B: pop     esi
0x61EB3C: retn    4
0x61EB3F: mov     al, [esi+174h]
0x61EB45: xor     ecx, ecx
0x61EB47: test    al, al
0x61EB49: setz    cl
0x61EB4C: push    1
0x61EB4E: mov     eax, ecx
0x61EB50: push    eax
0x61EB51: push    edi
0x61EB52: mov     ecx, esi
0x61EB54: call    sub_619D40
0x61EB59: pop     edi
0x61EB5A: pop     esi
0x61EB5B: retn    4
0x61EB5E: mov     eax, 1
0x61EB63: push    eax
0x61EB64: push    eax
0x61EB65: push    edi
0x61EB66: mov     ecx, esi
0x61EB68: call    sub_619D40
0x61EB6D: pop     edi
0x61EB6E: pop     esi
0x61EB6F: retn    4
