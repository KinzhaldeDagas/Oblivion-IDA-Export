0x7609C0: sub     esp, 64h
0x7609C3: push    ebx
0x7609C4: push    ebp
0x7609C5: push    esi
0x7609C6: mov     esi, [esp+70h+arg_0]
0x7609CA: mov     eax, [esi]
0x7609CC: push    edi
0x7609CD: mov     ebx, ecx
0x7609CF: mov     ecx, [eax+34h]
0x7609D2: push    esi
0x7609D3: call    ecx
0x7609D5: cmp     eax, 1
0x7609D8: setnz   dl
0x7609DB: xor     ebp, ebp
0x7609DD: mov     [ebx+5Ch], eax
0x7609E0: mov     [ebx+65h], dl
0x7609E3: mov     [ebx+68h], ebp
0x7609E6: mov     eax, [esi]
0x7609E8: mov     ecx, [eax+28h]
0x7609EB: push    esi
0x7609EC: call    ecx
0x7609EE: cmp     eax, 3
0x7609F1: jnz     loc_760A95
0x7609F7: cmp     [ebx+5Ch], ebp
0x7609FA: jbe     loc_760BDF
0x760A00: mov     edx, [esi]
0x760A02: mov     ecx, [edx+44h]
0x760A05: lea     eax, [esp+74h+a1]
0x760A09: push    eax
0x760A0A: push    ebp
0x760A0B: push    esi
0x760A0C: call    ecx
0x760A0E: test    eax, eax
0x760A10: jl      short loc_760A89
0x760A12: test    ebp, ebp
0x760A14: jnz     short loc_760A5E
0x760A16: mov     eax, [esp+74h+var_48]
0x760A1A: mov     edx, [esp+74h+var_4C]
0x760A1E: mov     [ebx+58h], eax
0x760A21: mov     eax, [esp+74h+a1]
0x760A25: cmp     eax, 28h ; '('
0x760A28: mov     [ebx+54h], edx
0x760A2B: jz      short loc_760A89
0x760A2D: cmp     eax, 29h ; ')'
0x760A30: jz      short loc_760A89
0x760A32: lea     ecx, [esp+74h+var_44]
0x760A36: call    InitSurfacEData
0x760A3B: lea     edx, [ebx+0Ch]
0x760A3E: mov     esi, eax
0x760A40: mov     edi, edx
0x760A42: mov     ecx, 11h
0x760A47: rep movsd
0x760A49: mov     ecx, [esp+74h+a1]
0x760A4D: push    edx; a2
0x760A4E: push    ecx; a1
0x760A4F: call    D3DFMTToTextureFormat
0x760A54: mov     esi, [esp+7Ch+arg_0]
0x760A5B: add     esp, 8
0x760A5E: movzx   edx, byte ptr [ebx+0Dh]
0x760A62: imul    edx, [esp+74h+var_48]
0x760A67: imul    edx, [esp+74h+var_4C]
0x760A6C: shr     edx, 3
0x760A6F: add     [ebx+68h], edx
0x760A72: add     ebp, 1
0x760A75: cmp     ebp, [ebx+5Ch]
0x760A78: jb      short loc_760A00
0x760A7A: pop     edi
0x760A7B: mov     [ebx+50h], esi
0x760A7E: pop     esi
0x760A7F: pop     ebp
0x760A80: mov     al, 1
0x760A82: pop     ebx
0x760A83: add     esp, 64h
0x760A86: retn    4
0x760A89: pop     edi
0x760A8A: pop     esi
0x760A8B: pop     ebp
0x760A8C: xor     al, al
0x760A8E: pop     ebx
0x760A8F: add     esp, 64h
0x760A92: retn    4
0x760A95: cmp     eax, 5
0x760A98: jnz     loc_760B3B
0x760A9E: cmp     [ebx+5Ch], ebp
0x760AA1: jbe     loc_760B21
0x760AA7: mov     eax, [esi]
0x760AA9: mov     edx, [eax+44h]
0x760AAC: lea     ecx, [esp+74h+a1]
0x760AB0: push    ecx
0x760AB1: push    ebp
0x760AB2: push    esi
0x760AB3: call    edx
0x760AB5: test    eax, eax
0x760AB7: jl      short loc_760A89
0x760AB9: test    ebp, ebp
0x760ABB: jnz     short loc_760B05
0x760ABD: mov     eax, [esp+74h+var_4C]
0x760AC1: mov     ecx, [esp+74h+var_48]
0x760AC5: mov     [ebx+54h], eax
0x760AC8: mov     eax, [esp+74h+a1]
0x760ACC: cmp     eax, 28h ; '('
0x760ACF: mov     [ebx+58h], ecx
0x760AD2: jz      short loc_760A89
0x760AD4: cmp     eax, 29h ; ')'
0x760AD7: jz      short loc_760A89
0x760AD9: lea     ecx, [esp+74h+var_44]
0x760ADD: call    InitSurfacEData
0x760AE2: lea     edx, [ebx+0Ch]
0x760AE5: mov     edi, edx
0x760AE7: push    edx; a2
0x760AE8: mov     edx, [esp+78h+a1]
0x760AEC: mov     esi, eax
0x760AEE: mov     ecx, 11h
0x760AF3: push    edx; a1
0x760AF4: rep movsd
0x760AF6: call    D3DFMTToTextureFormat
0x760AFB: mov     esi, [esp+7Ch+arg_0]
0x760B02: add     esp, 8
0x760B05: movzx   eax, byte ptr [ebx+0Dh]
0x760B09: imul    eax, [esp+74h+var_48]
0x760B0E: imul    eax, [esp+74h+var_4C]
0x760B13: shr     eax, 3
0x760B16: add     [ebx+68h], eax
0x760B19: add     ebp, 1
0x760B1C: cmp     ebp, [ebx+5Ch]
0x760B1F: jb      short loc_760AA7
0x760B21: mov     eax, [ebx+68h]
0x760B24: pop     edi
0x760B25: lea     ecx, [eax+eax*2]
0x760B28: mov     [ebx+50h], esi
0x760B2B: pop     esi
0x760B2C: add     ecx, ecx
0x760B2E: pop     ebp
0x760B2F: mov     [ebx+68h], ecx
0x760B32: mov     al, 1
0x760B34: pop     ebx
0x760B35: add     esp, 64h
0x760B38: retn    4
0x760B3B: cmp     eax, 4
0x760B3E: jnz     loc_760BDF
0x760B44: cmp     [ebx+5Ch], ebp
0x760B47: jbe     loc_760BDF
0x760B4D: lea     ecx, [ecx+0]
0x760B50: mov     edx, [esi]
0x760B52: mov     ecx, [edx+44h]
0x760B55: lea     eax, [esp+74h+a1]
0x760B59: push    eax
0x760B5A: push    ebp
0x760B5B: push    esi
0x760B5C: call    ecx
0x760B5E: test    eax, eax
0x760B60: jl      loc_760A89
0x760B66: test    ebp, ebp
0x760B68: jnz     short loc_760BBA
0x760B6A: mov     eax, [esp+74h+var_50]
0x760B6E: mov     edx, [esp+74h+var_54]
0x760B72: mov     [ebx+58h], eax
0x760B75: mov     eax, [esp+74h+a1]
0x760B79: cmp     eax, 28h ; '('
0x760B7C: mov     [ebx+54h], edx
0x760B7F: jz      loc_760A89
0x760B85: cmp     eax, 29h ; ')'
0x760B88: jz      loc_760A89
0x760B8E: lea     ecx, [esp+74h+var_44]
0x760B92: call    InitSurfacEData
0x760B97: lea     edx, [ebx+0Ch]
0x760B9A: mov     esi, eax
0x760B9C: mov     edi, edx
0x760B9E: mov     ecx, 11h
0x760BA3: rep movsd
0x760BA5: mov     ecx, [esp+74h+a1]
0x760BA9: push    edx; a2
0x760BAA: push    ecx; a1
0x760BAB: call    D3DFMTToTextureFormat
0x760BB0: mov     esi, [esp+7Ch+arg_0]
0x760BB7: add     esp, 8
0x760BBA: movzx   edx, byte ptr [ebx+0Dh]
0x760BBE: imul    edx, [esp+74h+var_4C]
0x760BC3: imul    edx, [esp+74h+var_50]
0x760BC8: imul    edx, [esp+74h+var_54]
0x760BCD: shr     edx, 3
0x760BD0: add     [ebx+68h], edx
0x760BD3: add     ebp, 1
0x760BD6: cmp     ebp, [ebx+5Ch]
0x760BD9: jb      loc_760B50
0x760BDF: pop     edi
0x760BE0: mov     [ebx+50h], esi
0x760BE3: pop     esi
0x760BE4: pop     ebp
0x760BE5: mov     al, 1
0x760BE7: pop     ebx
0x760BE8: add     esp, 64h
0x760BEB: retn    4
