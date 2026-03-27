0x7819A0: sub     esp, 0Ch
0x7819A3: push    ebx
0x7819A4: push    esi
0x7819A5: push    edi
0x7819A6: push    38h ; '8'; Size
0x7819A8: mov     ebx, ecx
0x7819AA: call    FormHeapAlloc
0x7819AF: mov     esi, eax
0x7819B1: xor     edi, edi
0x7819B3: add     esp, 4
0x7819B6: cmp     esi, edi
0x7819B8: jz      loc_781A45
0x7819BE: mov     eax, ds:0B428C4h
0x7819C3: push    eax
0x7819C4: mov     ecx, esi; this
0x7819C6: call    ??0NiD3DShaderProgram@@QAE@XZ; NiD3DShaderProgram::NiD3DShaderProgram(void)
0x7819CB: cmp     [esp+18h+arg_C], edi
0x7819CF: mov     [esi+28h], edi
0x7819D2: mov     dword ptr [esi], offset ??_7NiD3DHLSLPixelShader@@6B@; const NiD3DHLSLPixelShader::`vftable'
0x7819D8: mov     [esi+2Ch], edi
0x7819DB: mov     [esi+30h], edi
0x7819DE: mov     [esi+34h], edi
0x7819E1: mov     [esp+18h+var_4], edi
0x7819E5: mov     [esp+18h+var_8], edi
0x7819E9: mov     [esp+18h+var_C], edi
0x7819ED: jnz     short loc_7819F7
0x7819EF: mov     [esp+18h+arg_C], offset aMain; "main"
0x7819F7: cmp     [esp+18h+arg_10], edi
0x7819FB: jnz     short loc_781A0D
0x7819FD: mov     ecx, ds:0B428C0h
0x781A03: push    ecx
0x781A04: call    D3DXGetPixelShaderProfile_0
0x781A09: mov     [esp+18h+arg_10], eax
0x781A0D: lea     edx, [esp+18h+var_C]
0x781A11: push    edx
0x781A12: mov     edx, [esp+1Ch+arg_10]
0x781A16: lea     eax, [esp+1Ch+var_4]
0x781A1A: push    eax
0x781A1B: mov     eax, [esp+20h+arg_C]
0x781A1F: lea     ecx, [esp+20h+var_8]
0x781A23: push    ecx
0x781A24: mov     ecx, [esp+24h+arg_4]
0x781A28: push    edx
0x781A29: mov     edx, [esp+28h+arg_0]
0x781A2D: push    eax
0x781A2E: push    ecx
0x781A2F: push    edx
0x781A30: mov     ecx, ebx
0x781A32: call    sub_781350
0x781A37: test    al, al
0x781A39: jnz     short loc_781A50
0x781A3B: mov     eax, [esi]
0x781A3D: mov     edx, [eax]
0x781A3F: push    1
0x781A41: mov     ecx, esi
0x781A43: call    edx
0x781A45: pop     edi
0x781A46: pop     esi
0x781A47: xor     eax, eax
0x781A49: pop     ebx
0x781A4A: add     esp, 0Ch
0x781A4D: retn    14h
0x781A50: push    ebp
0x781A51: mov     ebp, [esp+1Ch+var_8]
0x781A55: push    ebp
0x781A56: mov     ecx, ebx
0x781A58: call    sub_783C30
0x781A5D: mov     edi, eax
0x781A5F: test    edi, edi
0x781A61: mov     eax, dword ptr [esp+1Ch+ArgList]
0x781A65: push    eax; ArgList
0x781A66: jnz     short loc_781A8E
0x781A68: push    offset aFailedCreatepi; "Failed CreatePixelShader call on %s\n"
0x781A6D: push    edi; int
0x781A6E: push    1; int
0x781A70: call    sub_738460
0x781A75: mov     edx, [esi]
0x781A77: mov     eax, [edx]
0x781A79: add     esp, 10h
0x781A7C: push    1
0x781A7E: mov     ecx, esi
0x781A80: call    eax
0x781A82: pop     ebp
0x781A83: pop     edi
0x781A84: pop     esi
0x781A85: xor     eax, eax
0x781A87: pop     ebx
0x781A88: add     esp, 0Ch
0x781A8B: retn    14h
0x781A8E: mov     edx, [esi]
0x781A90: mov     edx, [edx+8]
0x781A93: mov     ecx, esi
0x781A95: call    edx
0x781A97: mov     eax, [esi]
0x781A99: mov     edx, [eax+10h]
0x781A9C: push    0
0x781A9E: mov     ecx, esi
0x781AA0: call    edx
0x781AA2: mov     ecx, [esp+1Ch+var_4]
0x781AA6: mov     eax, [esi]
0x781AA8: mov     edx, [eax+1Ch]
0x781AAB: push    ebp
0x781AAC: push    ecx
0x781AAD: mov     ecx, esi
0x781AAF: call    edx
0x781AB1: mov     eax, [esi]
0x781AB3: mov     edx, [eax+24h]
0x781AB6: push    ebx
0x781AB7: mov     ecx, esi
0x781AB9: call    edx
0x781ABB: mov     eax, [esi]
0x781ABD: mov     edx, [eax+3Ch]
0x781AC0: push    edi
0x781AC1: mov     ecx, esi
0x781AC3: call    edx
0x781AC5: mov     ecx, [esp+1Ch+arg_C]
0x781AC9: mov     eax, [esi]
0x781ACB: mov     edx, [eax+4Ch]
0x781ACE: push    ecx
0x781ACF: mov     ecx, esi
0x781AD1: call    edx
0x781AD3: mov     ecx, [esp+1Ch+arg_10]
0x781AD7: mov     eax, [esi]
0x781AD9: mov     edx, [eax+54h]
0x781ADC: push    ecx
0x781ADD: mov     ecx, esi
0x781ADF: call    edx
0x781AE1: mov     ecx, [esp+1Ch+var_C]
0x781AE5: mov     eax, [esi]
0x781AE7: mov     edx, [eax+5Ch]
0x781AEA: push    ecx
0x781AEB: mov     ecx, esi
0x781AED: call    edx
0x781AEF: mov     eax, [esp+1Ch+var_C]
0x781AF3: test    eax, eax
0x781AF5: jz      short loc_781AFF
0x781AF7: mov     ecx, [eax]
0x781AF9: mov     edx, [ecx+8]
0x781AFC: push    eax
0x781AFD: call    edx
0x781AFF: pop     ebp
0x781B00: pop     edi
0x781B01: mov     eax, esi
0x781B03: pop     esi
0x781B04: pop     ebx
0x781B05: add     esp, 0Ch
0x781B08: retn    14h
