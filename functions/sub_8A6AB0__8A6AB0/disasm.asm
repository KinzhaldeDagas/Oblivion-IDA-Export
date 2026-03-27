0x8A6AB0: push    ebx
0x8A6AB1: mov     ebx, ds:0BA9DE4h
0x8A6AB7: push    ebp
0x8A6AB8: mov     ebp, large fs:2Ch
0x8A6ABF: push    esi
0x8A6AC0: mov     esi, ecx
0x8A6AC2: mov     eax, [esi+3Ch]
0x8A6AC5: push    edi
0x8A6AC6: xor     edi, edi
0x8A6AC8: cmp     eax, edi
0x8A6ACA: jnz     short loc_8A6B11
0x8A6ACC: mov     eax, [esi+40h]
0x8A6ACF: test    eax, eax
0x8A6AD1: js      short loc_8A6AFB
0x8A6AD3: mov     ecx, [ebp+ebx*4+0]
0x8A6AD7: mov     ecx, [ecx+19Ch]
0x8A6ADD: cmp     ecx, edi
0x8A6ADF: jnz     short loc_8A6AE7
0x8A6AE1: mov     ecx, ds:0BA7D9Ch
0x8A6AE7: mov     edx, [esi+38h]
0x8A6AEA: and     eax, 3FFFFFFFh
0x8A6AEF: push    14h
0x8A6AF1: shl     eax, 3
0x8A6AF4: push    eax
0x8A6AF5: push    edx
0x8A6AF6: call    sub_8A75D0
0x8A6AFB: mov     eax, [esi+40h]
0x8A6AFE: and     eax, 0C0000000h
0x8A6B03: or      eax, 80000000h
0x8A6B08: mov     [esi+38h], edi
0x8A6B0B: mov     [esi+3Ch], edi
0x8A6B0E: mov     [esi+40h], eax
0x8A6B11: cmp     [esi+6Ch], edi
0x8A6B14: jnz     short loc_8A6B5B
0x8A6B16: mov     eax, [esi+70h]
0x8A6B19: test    eax, eax
0x8A6B1B: js      short loc_8A6B45
0x8A6B1D: mov     ecx, [ebp+ebx*4+0]
0x8A6B21: mov     ecx, [ecx+19Ch]
0x8A6B27: cmp     ecx, edi
0x8A6B29: jnz     short loc_8A6B31
0x8A6B2B: mov     ecx, ds:0BA7D9Ch
0x8A6B31: mov     edx, [esi+68h]
0x8A6B34: and     eax, 3FFFFFFFh
0x8A6B39: imul    eax, 1Ch
0x8A6B3C: push    14h
0x8A6B3E: push    eax
0x8A6B3F: push    edx
0x8A6B40: call    sub_8A75D0
0x8A6B45: mov     eax, [esi+70h]
0x8A6B48: and     eax, 0C0000000h
0x8A6B4D: or      eax, 80000000h
0x8A6B52: mov     [esi+68h], edi
0x8A6B55: mov     [esi+6Ch], edi
0x8A6B58: mov     [esi+70h], eax
0x8A6B5B: cmp     [esi+78h], edi
0x8A6B5E: jnz     short loc_8A6BA5
0x8A6B60: mov     eax, [esi+7Ch]
0x8A6B63: test    eax, eax
0x8A6B65: js      short loc_8A6B8F
0x8A6B67: mov     ecx, [ebp+ebx*4+0]
0x8A6B6B: mov     ecx, [ecx+19Ch]
0x8A6B71: cmp     ecx, edi
0x8A6B73: jnz     short loc_8A6B7B
0x8A6B75: mov     ecx, ds:0BA7D9Ch
0x8A6B7B: mov     edx, [esi+74h]
0x8A6B7E: and     eax, 3FFFFFFFh
0x8A6B83: push    14h
0x8A6B85: shl     eax, 2
0x8A6B88: push    eax
0x8A6B89: push    edx
0x8A6B8A: call    sub_8A75D0
0x8A6B8F: mov     eax, [esi+7Ch]
0x8A6B92: and     eax, 0C0000000h
0x8A6B97: or      eax, 80000000h
0x8A6B9C: mov     [esi+74h], edi
0x8A6B9F: mov     [esi+78h], edi
0x8A6BA2: mov     [esi+7Ch], eax
0x8A6BA5: cmp     [esi+84h], edi
0x8A6BAB: jnz     short loc_8A6C01
0x8A6BAD: mov     eax, [esi+88h]
0x8A6BB3: test    eax, eax
0x8A6BB5: js      short loc_8A6BDF
0x8A6BB7: mov     ecx, [ebp+ebx*4+0]
0x8A6BBB: mov     ecx, [ecx+19Ch]
0x8A6BC1: cmp     ecx, edi
0x8A6BC3: jnz     short loc_8A6BCB
0x8A6BC5: mov     ecx, ds:0BA7D9Ch
0x8A6BCB: mov     edx, [esi+80h]
0x8A6BD1: push    14h
0x8A6BD3: and     eax, 3FFFFFFFh
0x8A6BD8: push    eax
0x8A6BD9: push    edx
0x8A6BDA: call    sub_8A75D0
0x8A6BDF: mov     eax, [esi+88h]
0x8A6BE5: and     eax, 0C0000000h
0x8A6BEA: or      eax, 80000000h
0x8A6BEF: mov     [esi+80h], edi
0x8A6BF5: mov     [esi+84h], edi
0x8A6BFB: mov     [esi+88h], eax
0x8A6C01: mov     ecx, [esi+98h]
0x8A6C07: xor     eax, eax
0x8A6C09: cmp     ecx, edi
0x8A6C0B: jle     short loc_8A6C1F
0x8A6C0D: mov     edx, [esi+94h]
0x8A6C13: cmp     [edx], edi
0x8A6C15: jnz     short loc_8A6C76
0x8A6C17: inc     eax
0x8A6C18: add     edx, 4
0x8A6C1B: cmp     eax, ecx
0x8A6C1D: jl      short loc_8A6C13
0x8A6C1F: mov     eax, [esi+9Ch]
0x8A6C25: test    eax, eax
0x8A6C27: js      short loc_8A6C54
0x8A6C29: mov     ecx, [ebp+ebx*4+0]
0x8A6C2D: mov     ecx, [ecx+19Ch]
0x8A6C33: cmp     ecx, edi
0x8A6C35: jnz     short loc_8A6C3D
0x8A6C37: mov     ecx, ds:0BA7D9Ch
0x8A6C3D: mov     edx, [esi+94h]
0x8A6C43: and     eax, 3FFFFFFFh
0x8A6C48: push    14h
0x8A6C4A: shl     eax, 2
0x8A6C4D: push    eax
0x8A6C4E: push    edx
0x8A6C4F: call    sub_8A75D0
0x8A6C54: mov     eax, [esi+9Ch]
0x8A6C5A: and     eax, 0C0000000h
0x8A6C5F: or      eax, 80000000h
0x8A6C64: mov     [esi+94h], edi
0x8A6C6A: mov     [esi+98h], edi
0x8A6C70: mov     [esi+9Ch], eax
0x8A6C76: mov     edx, [esi+0A4h]
0x8A6C7C: xor     eax, eax
0x8A6C7E: cmp     edx, edi
0x8A6C80: jle     short loc_8A6C94
0x8A6C82: mov     ecx, [esi+0A0h]
0x8A6C88: cmp     [ecx], edi
0x8A6C8A: jnz     short loc_8A6CEB
0x8A6C8C: inc     eax
0x8A6C8D: add     ecx, 4
0x8A6C90: cmp     eax, edx
0x8A6C92: jl      short loc_8A6C88
0x8A6C94: mov     eax, [esi+0A8h]
0x8A6C9A: test    eax, eax
0x8A6C9C: js      short loc_8A6CC9
0x8A6C9E: mov     ecx, [ebp+ebx*4+0]
0x8A6CA2: mov     ecx, [ecx+19Ch]
0x8A6CA8: cmp     ecx, edi
0x8A6CAA: jnz     short loc_8A6CB2
0x8A6CAC: mov     ecx, ds:0BA7D9Ch
0x8A6CB2: mov     edx, [esi+0A0h]
0x8A6CB8: and     eax, 3FFFFFFFh
0x8A6CBD: push    14h
0x8A6CBF: shl     eax, 2
0x8A6CC2: push    eax
0x8A6CC3: push    edx
0x8A6CC4: call    sub_8A75D0
0x8A6CC9: mov     eax, [esi+0A8h]
0x8A6CCF: and     eax, 0C0000000h
0x8A6CD4: or      eax, 80000000h
0x8A6CD9: mov     [esi+0A0h], edi
0x8A6CDF: mov     [esi+0A4h], edi
0x8A6CE5: mov     [esi+0A8h], eax
0x8A6CEB: mov     edx, [esi+0B0h]
0x8A6CF1: xor     eax, eax
0x8A6CF3: cmp     edx, edi
0x8A6CF5: jle     short loc_8A6D0C
0x8A6CF7: mov     ecx, [esi+0ACh]
0x8A6CFD: lea     ecx, [ecx+0]
0x8A6D00: cmp     [ecx], edi
0x8A6D02: jnz     short loc_8A6D63
0x8A6D04: inc     eax
0x8A6D05: add     ecx, 4
0x8A6D08: cmp     eax, edx
0x8A6D0A: jl      short loc_8A6D00
0x8A6D0C: mov     eax, [esi+0B4h]
0x8A6D12: test    eax, eax
0x8A6D14: js      short loc_8A6D41
0x8A6D16: mov     ecx, [ebp+ebx*4+0]
0x8A6D1A: mov     ecx, [ecx+19Ch]
0x8A6D20: cmp     ecx, edi
0x8A6D22: jnz     short loc_8A6D2A
0x8A6D24: mov     ecx, ds:0BA7D9Ch
0x8A6D2A: mov     edx, [esi+0ACh]
0x8A6D30: and     eax, 3FFFFFFFh
0x8A6D35: push    14h
0x8A6D37: shl     eax, 2
0x8A6D3A: push    eax
0x8A6D3B: push    edx
0x8A6D3C: call    sub_8A75D0
0x8A6D41: mov     eax, [esi+0B4h]
0x8A6D47: and     eax, 0C0000000h
0x8A6D4C: or      eax, 80000000h
0x8A6D51: mov     [esi+0ACh], edi
0x8A6D57: mov     [esi+0B0h], edi
0x8A6D5D: mov     [esi+0B4h], eax
0x8A6D63: mov     edx, [esi+0BCh]
0x8A6D69: xor     eax, eax
0x8A6D6B: cmp     edx, edi
0x8A6D6D: jle     short loc_8A6D81
0x8A6D6F: mov     ecx, [esi+0B8h]
0x8A6D75: cmp     [ecx], edi
0x8A6D77: jnz     short loc_8A6DD8
0x8A6D79: inc     eax
0x8A6D7A: add     ecx, 4
0x8A6D7D: cmp     eax, edx
0x8A6D7F: jl      short loc_8A6D75
0x8A6D81: mov     eax, [esi+0C0h]
0x8A6D87: test    eax, eax
0x8A6D89: js      short loc_8A6DB6
0x8A6D8B: mov     ecx, [ebp+ebx*4+0]
0x8A6D8F: mov     ecx, [ecx+19Ch]
0x8A6D95: cmp     ecx, edi
0x8A6D97: jnz     short loc_8A6D9F
0x8A6D99: mov     ecx, ds:0BA7D9Ch
0x8A6D9F: mov     edx, [esi+0B8h]
0x8A6DA5: and     eax, 3FFFFFFFh
0x8A6DAA: push    14h
0x8A6DAC: shl     eax, 2
0x8A6DAF: push    eax
0x8A6DB0: push    edx
0x8A6DB1: call    sub_8A75D0
0x8A6DB6: mov     eax, [esi+0C0h]
0x8A6DBC: and     eax, 0C0000000h
0x8A6DC1: or      eax, 80000000h
0x8A6DC6: mov     [esi+0B8h], edi
0x8A6DCC: mov     [esi+0BCh], edi
0x8A6DD2: mov     [esi+0C0h], eax
0x8A6DD8: pop     edi
0x8A6DD9: pop     esi
0x8A6DDA: pop     ebp
0x8A6DDB: pop     ebx
0x8A6DDC: retn
