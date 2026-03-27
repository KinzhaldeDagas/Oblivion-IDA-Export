0x781B10: sub     esp, 10h
0x781B13: push    ebx
0x781B14: push    esi
0x781B15: push    edi
0x781B16: push    38h ; '8'; Size
0x781B18: mov     edi, ecx
0x781B1A: call    FormHeapAlloc
0x781B1F: mov     esi, eax
0x781B21: xor     ebx, ebx
0x781B23: add     esp, 4
0x781B26: cmp     esi, ebx
0x781B28: jz      short loc_781B89
0x781B2A: mov     eax, ds:0B428C4h
0x781B2F: push    eax
0x781B30: mov     ecx, esi; this
0x781B32: call    ??0NiD3DShaderProgram@@QAE@XZ; NiD3DShaderProgram::NiD3DShaderProgram(void)
0x781B37: lea     eax, [esp+1Ch+var_C]
0x781B3B: push    eax
0x781B3C: lea     ecx, [esp+20h+var_8]
0x781B40: push    ecx
0x781B41: mov     dword ptr [esi], offset ??_7NiD3DVertexShader@@6B@; const NiD3DVertexShader::`vftable'
0x781B47: mov     [esi+28h], bl
0x781B4A: mov     [esi+2Ch], ebx
0x781B4D: mov     [esi+30h], ebx
0x781B50: mov     [esi+34h], ebx
0x781B53: mov     edx, [edi]
0x781B55: mov     edx, [edx+24h]
0x781B58: lea     eax, [esp+24h+var_4]
0x781B5C: push    eax
0x781B5D: mov     eax, [esp+28h+arg_0]
0x781B61: lea     ecx, [esp+28h+var_10]
0x781B65: push    ecx
0x781B66: push    eax
0x781B67: mov     ecx, edi
0x781B69: mov     [esp+30h+var_4], ebx
0x781B6D: mov     [esp+30h+var_10], ebx
0x781B71: mov     [esp+30h+var_C], ebx
0x781B75: mov     [esp+30h+var_8], ebx
0x781B79: call    edx
0x781B7B: test    al, al
0x781B7D: jnz     short loc_781B94
0x781B7F: mov     eax, [esi]
0x781B81: mov     edx, [eax]
0x781B83: push    1
0x781B85: mov     ecx, esi
0x781B87: call    edx
0x781B89: pop     edi
0x781B8A: pop     esi
0x781B8B: xor     eax, eax
0x781B8D: pop     ebx
0x781B8E: add     esp, 10h
0x781B91: retn    1Ch
0x781B94: mov     ebx, [esp+1Ch+arg_18]
0x781B98: mov     eax, [esp+1Ch+var_C]
0x781B9C: mov     ecx, [esp+1Ch+var_8]
0x781BA0: mov     edx, [esp+1Ch+arg_14]
0x781BA4: push    ebp
0x781BA5: push    ebx
0x781BA6: push    eax
0x781BA7: push    ecx
0x781BA8: mov     ecx, [esp+2Ch+var_10]
0x781BAC: push    edx
0x781BAD: lea     eax, [esp+30h+arg_10]
0x781BB1: push    eax
0x781BB2: push    ecx
0x781BB3: mov     ecx, edi
0x781BB5: call    sub_783BF0
0x781BBA: mov     ebp, eax
0x781BBC: test    ebp, ebp
0x781BBE: jnz     short loc_781BEB
0x781BC0: mov     edx, dword ptr [esp+20h+ArgList]
0x781BC4: push    edx; ArgList
0x781BC5: push    offset aFailedCreateve; "Failed CreateVertexShader call on %s\n"
0x781BCA: push    eax; int
0x781BCB: push    1; int
0x781BCD: call    sub_738460
0x781BD2: mov     eax, [esi]
0x781BD4: mov     edx, [eax]
0x781BD6: add     esp, 10h
0x781BD9: push    1
0x781BDB: mov     ecx, esi
0x781BDD: call    edx
0x781BDF: pop     ebp
0x781BE0: pop     edi
0x781BE1: pop     esi
0x781BE2: xor     eax, eax
0x781BE4: pop     ebx
0x781BE5: add     esp, 10h
0x781BE8: retn    1Ch
0x781BEB: mov     ecx, dword ptr [esp+20h+ArgList]
0x781BEF: mov     eax, [esi]
0x781BF1: mov     edx, [eax+8]
0x781BF4: push    ecx
0x781BF5: mov     ecx, esi
0x781BF7: call    edx
0x781BF9: mov     ecx, [esp+20h+arg_0]
0x781BFD: mov     eax, [esi]
0x781BFF: mov     edx, [eax+10h]
0x781C02: push    ecx
0x781C03: mov     ecx, esi
0x781C05: call    edx
0x781C07: mov     ecx, [esp+20h+var_10]
0x781C0B: mov     eax, [esi]
0x781C0D: mov     edx, [esp+20h+var_4]
0x781C11: mov     eax, [eax+1Ch]
0x781C14: push    ecx
0x781C15: push    edx
0x781C16: mov     ecx, esi
0x781C18: call    eax
0x781C1A: mov     edx, [esi]
0x781C1C: mov     eax, [edx+24h]
0x781C1F: push    edi
0x781C20: mov     ecx, esi
0x781C22: call    eax
0x781C24: mov     edx, [esi]
0x781C26: mov     eax, [edx+44h]
0x781C29: push    ebp
0x781C2A: mov     ecx, esi
0x781C2C: call    eax
0x781C2E: mov     edx, [esi]
0x781C30: mov     eax, [esp+20h+arg_14]
0x781C34: mov     edx, [edx+3Ch]
0x781C37: push    eax
0x781C38: mov     ecx, esi
0x781C3A: call    edx
0x781C3C: mov     ecx, [esp+20h+arg_10]
0x781C40: mov     eax, [esi]
0x781C42: mov     edx, [eax+4Ch]
0x781C45: push    ecx
0x781C46: mov     ecx, esi
0x781C48: call    edx
0x781C4A: mov     eax, [esi]
0x781C4C: mov     edx, [eax+54h]
0x781C4F: push    ebx
0x781C50: mov     ecx, esi
0x781C52: call    edx
0x781C54: pop     ebp
0x781C55: pop     edi
0x781C56: mov     eax, esi
0x781C58: pop     esi
0x781C59: pop     ebx
0x781C5A: add     esp, 10h
0x781C5D: retn    1Ch
