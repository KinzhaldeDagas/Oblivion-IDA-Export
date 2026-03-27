0x6D4B90: sub     esp, 8
0x6D4B93: push    ebx
0x6D4B94: push    ebp
0x6D4B95: push    esi
0x6D4B96: push    edi
0x6D4B97: mov     edi, [esp+18h+a2]
0x6D4B9B: push    edi; a2
0x6D4B9C: mov     esi, ecx
0x6D4B9E: call    sub_7008A0
0x6D4BA3: mov     eax, [edi+21Ch]
0x6D4BA9: push    1
0x6D4BAB: lea     ecx, [esp+1Ch+var_8]
0x6D4BAF: push    ecx
0x6D4BB0: mov     ebp, 4
0x6D4BB5: push    ebp
0x6D4BB6: lea     edx, [esp+24h+a2]
0x6D4BBA: push    edx
0x6D4BBB: push    eax
0x6D4BBC: mov     eax, [eax+4]
0x6D4BBF: mov     [esp+2Ch+var_8], ebp
0x6D4BC3: call    eax
0x6D4BC5: add     esp, 14h
0x6D4BC8: cmp     [esp+18h+a2], 0
0x6D4BCD: jbe     short loc_6D4C36
0x6D4BCF: mov     eax, [edi+21Ch]
0x6D4BD5: push    1
0x6D4BD7: lea     ecx, [esp+1Ch+var_8]
0x6D4BDB: push    ecx
0x6D4BDC: push    ebp
0x6D4BDD: lea     edx, [esp+24h+var_4]
0x6D4BE1: push    edx
0x6D4BE2: push    eax
0x6D4BE3: mov     eax, [eax+4]
0x6D4BE6: mov     [esp+2Ch+var_8], ebp
0x6D4BEA: call    eax
0x6D4BEC: mov     ebx, [esp+2Ch+var_4]
0x6D4BF0: movzx   ecx, ds:byte_B3D3E8[ebx]
0x6D4BF7: mov     edx, [esp+2Ch+a2]
0x6D4BFB: push    edx
0x6D4BFC: mov     [esi+48h], cl
0x6D4BFF: mov     eax, ds:0B3D088h[ebx*4]
0x6D4C06: push    edi
0x6D4C07: call    eax ; dword_B3D088
0x6D4C09: movzx   ecx, byte ptr [esi+48h]
0x6D4C0D: mov     edx, [esp+34h+a2]
0x6D4C11: push    ecx
0x6D4C12: push    edx
0x6D4C13: mov     [esp+3Ch+var_4], eax
0x6D4C17: push    eax
0x6D4C18: mov     eax, ds:0B3D410h[ebx*4]
0x6D4C1F: call    eax ; dword_B3D410
0x6D4C21: mov     ecx, [esp+40h+a2]
0x6D4C25: mov     edx, [esp+40h+var_4]
0x6D4C29: add     esp, 28h
0x6D4C2C: push    ebx
0x6D4C2D: push    ecx
0x6D4C2E: push    edx
0x6D4C2F: mov     ecx, esi
0x6D4C31: call    sub_6D4A10
0x6D4C36: mov     eax, [edi+21Ch]
0x6D4C3C: push    1
0x6D4C3E: lea     ecx, [esp+1Ch+var_4]
0x6D4C42: push    ecx
0x6D4C43: push    ebp
0x6D4C44: lea     edx, [esp+24h+a2]
0x6D4C48: push    edx
0x6D4C49: push    eax
0x6D4C4A: mov     eax, [eax+4]
0x6D4C4D: mov     [esp+2Ch+var_4], ebp
0x6D4C51: call    eax
0x6D4C53: add     esp, 14h
0x6D4C56: cmp     [esp+18h+a2], 0
0x6D4C5B: jbe     short loc_6D4CC4
0x6D4C5D: mov     eax, [edi+21Ch]
0x6D4C63: push    1
0x6D4C65: lea     ecx, [esp+1Ch+var_4]
0x6D4C69: push    ecx
0x6D4C6A: push    ebp
0x6D4C6B: lea     edx, [esp+24h+var_8]
0x6D4C6F: push    edx
0x6D4C70: push    eax
0x6D4C71: mov     eax, [eax+4]
0x6D4C74: mov     [esp+2Ch+var_4], ebp
0x6D4C78: call    eax
0x6D4C7A: mov     ebx, [esp+2Ch+var_8]
0x6D4C7E: movzx   ecx, ds:byte_B3D3E8[ebx]
0x6D4C85: mov     edx, [esp+2Ch+a2]
0x6D4C89: push    edx
0x6D4C8A: mov     [esi+49h], cl
0x6D4C8D: mov     eax, ds:0B3D088h[ebx*4]
0x6D4C94: push    edi
0x6D4C95: call    eax ; dword_B3D088
0x6D4C97: movzx   ecx, byte ptr [esi+49h]
0x6D4C9B: mov     edx, [esp+34h+a2]
0x6D4C9F: push    ecx
0x6D4CA0: push    edx
0x6D4CA1: mov     [esp+3Ch+var_4], eax
0x6D4CA5: push    eax
0x6D4CA6: mov     eax, ds:0B3D410h[ebx*4]
0x6D4CAD: call    eax ; dword_B3D410
0x6D4CAF: mov     ecx, [esp+40h+a2]
0x6D4CB3: mov     edx, [esp+40h+var_4]
0x6D4CB7: add     esp, 28h
0x6D4CBA: push    ebx
0x6D4CBB: push    ecx
0x6D4CBC: push    edx
0x6D4CBD: mov     ecx, esi
0x6D4CBF: call    sub_6D4A70
0x6D4CC4: mov     eax, [edi+21Ch]
0x6D4CCA: push    1
0x6D4CCC: lea     ecx, [esp+1Ch+var_4]
0x6D4CD0: push    ecx
0x6D4CD1: push    ebp
0x6D4CD2: lea     edx, [esp+24h+a2]
0x6D4CD6: push    edx
0x6D4CD7: push    eax
0x6D4CD8: mov     eax, [eax+4]
0x6D4CDB: mov     [esp+2Ch+var_4], ebp
0x6D4CDF: call    eax
0x6D4CE1: add     esp, 14h
0x6D4CE4: cmp     [esp+18h+a2], 0
0x6D4CE9: jbe     short loc_6D4D52
0x6D4CEB: mov     eax, [edi+21Ch]
0x6D4CF1: push    1
0x6D4CF3: lea     ecx, [esp+1Ch+var_4]
0x6D4CF7: push    ecx
0x6D4CF8: push    ebp
0x6D4CF9: lea     edx, [esp+24h+var_8]
0x6D4CFD: push    edx
0x6D4CFE: push    eax
0x6D4CFF: mov     eax, [eax+4]
0x6D4D02: mov     [esp+2Ch+var_4], ebp
0x6D4D06: call    eax
0x6D4D08: mov     ebx, [esp+2Ch+var_8]
0x6D4D0C: movzx   ecx, ds:byte_B3D3E8[ebx]
0x6D4D13: mov     edx, [esp+2Ch+a2]
0x6D4D17: push    edx
0x6D4D18: mov     [esi+4Ah], cl
0x6D4D1B: mov     eax, ds:0B3D088h[ebx*4]
0x6D4D22: push    edi
0x6D4D23: call    eax ; dword_B3D088
0x6D4D25: movzx   ecx, byte ptr [esi+4Ah]
0x6D4D29: mov     edx, [esp+34h+a2]
0x6D4D2D: push    ecx
0x6D4D2E: push    edx
0x6D4D2F: mov     [esp+3Ch+var_4], eax
0x6D4D33: push    eax
0x6D4D34: mov     eax, ds:0B3D410h[ebx*4]
0x6D4D3B: call    eax ; dword_B3D410
0x6D4D3D: mov     ecx, [esp+40h+a2]
0x6D4D41: mov     edx, [esp+40h+var_4]
0x6D4D45: add     esp, 28h
0x6D4D48: push    ebx
0x6D4D49: push    ecx
0x6D4D4A: push    edx
0x6D4D4B: mov     ecx, esi
0x6D4D4D: call    sub_6D4AD0
0x6D4D52: mov     eax, [edi+21Ch]
0x6D4D58: push    1
0x6D4D5A: lea     ecx, [esp+1Ch+var_4]
0x6D4D5E: push    ecx
0x6D4D5F: push    ebp
0x6D4D60: lea     edx, [esp+24h+a2]
0x6D4D64: push    edx
0x6D4D65: push    eax
0x6D4D66: mov     eax, [eax+4]
0x6D4D69: mov     [esp+2Ch+var_4], ebp
0x6D4D6D: call    eax
0x6D4D6F: add     esp, 14h
0x6D4D72: cmp     [esp+18h+a2], 0
0x6D4D77: jbe     short loc_6D4DD9
0x6D4D79: mov     eax, [edi+21Ch]
0x6D4D7F: push    1
0x6D4D81: lea     ecx, [esp+1Ch+var_4]
0x6D4D85: push    ecx
0x6D4D86: push    ebp
0x6D4D87: lea     edx, [esp+24h+var_8]
0x6D4D8B: push    edx
0x6D4D8C: push    eax
0x6D4D8D: mov     eax, [eax+4]
0x6D4D90: mov     [esp+2Ch+var_4], ebp
0x6D4D94: call    eax
0x6D4D96: mov     ebx, [esp+2Ch+var_8]
0x6D4D9A: mov     edx, [esp+2Ch+a2]
0x6D4D9E: mov     cl, ds:byte_B3D3E8[ebx]
0x6D4DA4: push    edx
0x6D4DA5: mov     [esi+4Bh], cl
0x6D4DA8: mov     eax, ds:0B3D088h[ebx*4]
0x6D4DAF: push    edi
0x6D4DB0: call    eax ; dword_B3D088
0x6D4DB2: mov     ecx, [esp+34h+a2]
0x6D4DB6: mov     edx, ds:0B3D410h[ebx*4]
0x6D4DBD: mov     edi, eax
0x6D4DBF: movzx   eax, byte ptr [esi+4Bh]
0x6D4DC3: push    eax
0x6D4DC4: push    ecx
0x6D4DC5: push    edi
0x6D4DC6: call    edx ; dword_B3D410
0x6D4DC8: mov     eax, [esp+40h+a2]
0x6D4DCC: add     esp, 28h
0x6D4DCF: push    ebx
0x6D4DD0: push    eax
0x6D4DD1: push    edi
0x6D4DD2: mov     ecx, esi
0x6D4DD4: call    sub_6D4B30
0x6D4DD9: pop     edi
0x6D4DDA: pop     esi
0x6D4DDB: pop     ebp
0x6D4DDC: pop     ebx
0x6D4DDD: add     esp, 8
0x6D4DE0: retn    4
