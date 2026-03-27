0x77BFB0: push    esi
0x77BFB1: mov     esi, ecx
0x77BFB3: cmp     dword ptr [esi+14h], 0
0x77BFB7: jnz     short loc_77BFCA
0x77BFB9: push    offset OutputString; "Attempting to RetrieveShader w/out a va"...
0x77BFBE: call    dword ptr ds:0A28144h
0x77BFC4: xor     eax, eax
0x77BFC6: pop     esi
0x77BFC7: retn    0Ch
0x77BFCA: push    ebp; ArgList
0x77BFCB: mov     ebp, dword ptr [esp+8+ArgList]
0x77BFCF: test    ebp, ebp
0x77BFD1: jz      loc_77C068
0x77BFD7: cmp     byte ptr [ebp+0], 0
0x77BFDB: jz      loc_77C068
0x77BFE1: mov     eax, [esi]
0x77BFE3: mov     edx, [eax+8]
0x77BFE6: push    ebx
0x77BFE7: mov     ebx, [esp+0Ch+arg_4]
0x77BFEB: push    edi
0x77BFEC: push    ebx
0x77BFED: push    ebp
0x77BFEE: call    edx
0x77BFF0: mov     edi, eax
0x77BFF2: test    edi, edi
0x77BFF4: jnz     short loc_77C042
0x77BFF6: mov     eax, [esi]
0x77BFF8: mov     edx, [eax+34h]
0x77BFFB: mov     ecx, esi
0x77BFFD: call    edx
0x77BFFF: test    eax, eax
0x77C001: jz      short loc_77C042
0x77C003: mov     ecx, [esi+14h]
0x77C006: mov     edx, [eax]
0x77C008: mov     edx, [edx+4]
0x77C00B: push    ebx
0x77C00C: push    ebp
0x77C00D: push    ecx
0x77C00E: mov     ecx, eax
0x77C010: call    edx
0x77C012: mov     edi, eax
0x77C014: test    edi, edi
0x77C016: mov     eax, [esi]
0x77C018: mov     ecx, esi
0x77C01A: jnz     short loc_77C027
0x77C01C: mov     edx, [eax+38h]
0x77C01F: call    edx
0x77C021: test    eax, eax
0x77C023: jnz     short loc_77C003
0x77C025: jmp     short loc_77C042
0x77C027: mov     edx, [eax+18h]
0x77C02A: push    ebx
0x77C02B: push    edi
0x77C02C: call    edx
0x77C02E: mov     ecx, [esi+14h]
0x77C031: push    edi
0x77C032: call    sub_769B10
0x77C037: mov     eax, [esi+14h]
0x77C03A: push    eax; a2
0x77C03B: mov     ecx, edi; this
0x77C03D: call    NiD3DShaderInterface__SetDX9Renderer
0x77C042: cmp     [esp+10h+arg_8], 0
0x77C047: jz      short loc_77C05F
0x77C049: test    edi, edi
0x77C04B: jnz     short loc_77C05F
0x77C04D: push    ebx
0x77C04E: push    ebp; ArgList
0x77C04F: push    offset aFailedToFindSh; "Failed to find shader %s, Implementatio"...
0x77C054: push    edi; int
0x77C055: push    1; int
0x77C057: call    sub_738460
0x77C05C: add     esp, 14h
0x77C05F: mov     eax, edi
0x77C061: pop     edi
0x77C062: pop     ebx
0x77C063: pop     ebp
0x77C064: pop     esi
0x77C065: retn    0Ch
0x77C068: push    offset aAttemptingTo_1; "Attempting to RetrieveShader w/out a va"...
0x77C06D: push    0; int
0x77C06F: push    1; int
0x77C071: call    sub_738460
0x77C076: add     esp, 0Ch
0x77C079: pop     ebp
0x77C07A: xor     eax, eax
0x77C07C: pop     esi
0x77C07D: retn    0Ch
