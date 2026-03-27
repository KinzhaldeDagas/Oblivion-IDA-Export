0x760CC0: push    ecx
0x760CC1: push    esi
0x760CC2: mov     esi, ecx
0x760CC4: mov     eax, [esi+50h]
0x760CC7: test    eax, eax
0x760CC9: jz      loc_760D68
0x760CCF: mov     ecx, [eax]
0x760CD1: mov     edx, [ecx+28h]
0x760CD4: push    eax
0x760CD5: call    edx
0x760CD7: cmp     eax, 5
0x760CDA: jz      loc_760D68
0x760CE0: mov     eax, [esi+50h]
0x760CE3: mov     ecx, [eax]
0x760CE5: mov     edx, [ecx+28h]
0x760CE8: push    eax
0x760CE9: call    edx
0x760CEB: cmp     eax, 4
0x760CEE: jz      short loc_760D68
0x760CF0: push    ebx
0x760CF1: mov     ebx, [esi+50h]
0x760CF4: push    ebp
0x760CF5: mov     ebp, [esp+10h+arg_0]
0x760CF9: mov     eax, [ebp+60h]
0x760CFC: push    edi
0x760CFD: mov     [esi+5Ch], eax
0x760D00: xor     edi, edi
0x760D02: sub     eax, [esi+70h]
0x760D05: jz      short loc_760D65
0x760D07: mov     eax, [ebx]
0x760D09: mov     edx, [eax+48h]
0x760D0C: lea     ecx, [esp+14h+var_4]
0x760D10: push    ecx
0x760D11: push    edi
0x760D12: push    ebx
0x760D13: call    edx
0x760D15: test    eax, eax
0x760D17: jl      short loc_760D50
0x760D19: mov     eax, [esp+14h+var_4]
0x760D1D: mov     ecx, [esi+70h]
0x760D20: push    0
0x760D22: push    eax
0x760D23: add     ecx, edi
0x760D25: push    ecx
0x760D26: push    ebp
0x760D27: call    sub_760860
0x760D2C: mov     eax, [esp+24h+var_4]
0x760D30: mov     edx, [eax]
0x760D32: add     esp, 10h
0x760D35: push    eax
0x760D36: mov     eax, [edx+8]
0x760D39: call    eax
0x760D3B: mov     ecx, [esi+5Ch]
0x760D3E: sub     ecx, [esi+70h]
0x760D41: add     edi, 1
0x760D44: cmp     edi, ecx
0x760D46: jb      short loc_760D07
0x760D48: pop     edi
0x760D49: pop     ebp
0x760D4A: pop     ebx
0x760D4B: pop     esi
0x760D4C: pop     ecx
0x760D4D: retn    4
0x760D50: push    eax
0x760D51: call    sub_7736F0
0x760D56: push    eax
0x760D57: push    edi
0x760D58: push    offset aNidx9sourcet_2; "NiDX9SourceTextureData::CopyDataToSurfa"...
0x760D5D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x760D62: add     esp, 10h
0x760D65: pop     edi
0x760D66: pop     ebp
0x760D67: pop     ebx
0x760D68: pop     esi
0x760D69: pop     ecx
0x760D6A: retn    4
