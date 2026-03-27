0x7C6C30: push    0FFFFFFFFh
0x7C6C32: push    offset ShadowSceneNodeAddShadowCaster_SEH
0x7C6C37: mov     eax, large fs:0
0x7C6C3D: push    eax
0x7C6C3E: sub     esp, 8
0x7C6C41: push    esi
0x7C6C42: push    edi
0x7C6C43: mov     eax, ds:0B30AACh
0x7C6C48: xor     eax, esp
0x7C6C4A: push    eax
0x7C6C4B: lea     eax, [esp+20h+var_C]
0x7C6C4F: mov     large fs:0, eax
0x7C6C55: mov     [esp+20h+var_14], ecx
0x7C6C59: mov     eax, [ecx+0F8h]
0x7C6C5F: test    eax, eax
0x7C6C61: jz      short loc_7C6C7F
0x7C6C63: mov     esi, [eax+8]
0x7C6C66: test    esi, esi
0x7C6C68: lea     ecx, [eax+8]
0x7C6C6B: mov     eax, [eax]
0x7C6C6D: jz      short loc_7C6C7B
0x7C6C6F: mov     ecx, [esp+20h+arg_0]
0x7C6C73: cmp     [esi+130h], ecx
0x7C6C79: jz      short loc_7C6CA7
0x7C6C7B: test    eax, eax
0x7C6C7D: jnz     short loc_7C6C63
0x7C6C7F: push    220h; Size
0x7C6C84: call    FormHeapAlloc
0x7C6C89: add     esp, 4
0x7C6C8C: mov     [esp+20h+var_10], eax
0x7C6C90: test    eax, eax
0x7C6C92: mov     [esp+20h+var_4], 0
0x7C6C9A: jz      short loc_7C6CF5
0x7C6C9C: mov     ecx, eax; this
0x7C6C9E: call    ??0ShadowSceneLight@@QAE@XZ; ShadowSceneLight::ShadowSceneLight(void)
0x7C6CA3: mov     esi, eax
0x7C6CA5: jmp     short loc_7C6CF7
0x7C6CA7: lea     edx, [esp+20h+arg_0]
0x7C6CAB: push    edx
0x7C6CAC: mov     ecx, esi
0x7C6CAE: call    sub_405AD0
0x7C6CB3: mov     eax, [eax]
0x7C6CB5: and     word ptr [eax+18h], 0FFFEh
0x7C6CBB: mov     eax, [esp+20h+arg_0]
0x7C6CBF: test    eax, eax
0x7C6CC1: jz      short loc_7C6CE1
0x7C6CC3: mov     edi, eax
0x7C6CC5: add     eax, 4
0x7C6CC8: push    eax; lpAddend
0x7C6CC9: call    dword ptr ds:0A2807Ch
0x7C6CCF: test    eax, eax
0x7C6CD1: jnz     short loc_7C6CE1
0x7C6CD3: test    edi, edi
0x7C6CD5: jz      short loc_7C6CE1
0x7C6CD7: mov     eax, [edi]
0x7C6CD9: mov     edx, [eax]
0x7C6CDB: push    1
0x7C6CDD: mov     ecx, edi
0x7C6CDF: call    edx
0x7C6CE1: fld1
0x7C6CE3: push    0; float
0x7C6CE5: push    ecx
0x7C6CE6: fstp    [esp+28h+var_28]; float
0x7C6CE9: mov     ecx, esi
0x7C6CEB: call    sub_7D1ED0
0x7C6CF0: jmp     loc_7C6DC7
0x7C6CF5: xor     esi, esi
0x7C6CF7: push    114h; Size
0x7C6CFC: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C6D04: mov     byte ptr [esi+104h], 1
0x7C6D0B: call    FormHeapAlloc
0x7C6D10: mov     edi, eax
0x7C6D12: add     esp, 4
0x7C6D15: mov     [esp+20h+var_10], edi
0x7C6D19: test    edi, edi
0x7C6D1B: mov     [esp+20h+var_4], 1
0x7C6D23: jz      short loc_7C6D4C
0x7C6D25: mov     ecx, edi; this
0x7C6D27: call    ??0NiLight@@QAE@XZ; NiLight::NiLight(void)
0x7C6D2C: fldz
0x7C6D2E: fst     dword ptr [edi+108h]
0x7C6D34: mov     dword ptr [edi], offset ??_7NiPointLight@@6B@; const NiPointLight::`vftable'
0x7C6D3A: fld1
0x7C6D3C: mov     eax, edi
0x7C6D3E: fstp    dword ptr [edi+10Ch]
0x7C6D44: fstp    dword ptr [edi+110h]
0x7C6D4A: jmp     short loc_7C6D4E
0x7C6D4C: xor     eax, eax
0x7C6D4E: and     word ptr [eax+18h], 0FFFEh
0x7C6D54: push    eax
0x7C6D55: mov     ecx, esi
0x7C6D57: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C6D5F: call    sub_7D3400
0x7C6D64: push    1
0x7C6D66: mov     ecx, esi
0x7C6D68: call    sub_7D3370
0x7C6D6D: mov     eax, [esp+20h+arg_0]
0x7C6D71: push    eax
0x7C6D72: mov     ecx, esi
0x7C6D74: mov     byte ptr [esi+0F5h], 0
0x7C6D7B: call    sub_7C5A10
0x7C6D80: lea     edi, [esi+4]
0x7C6D83: push    edi; lpAddend
0x7C6D84: mov     [esp+24h+arg_0], esi
0x7C6D88: call    dword ptr ds:0A28078h
0x7C6D8E: lea     ecx, [esp+20h+arg_0]
0x7C6D92: push    ecx
0x7C6D93: mov     ecx, [esp+24h+var_14]
0x7C6D97: add     ecx, 0F4h ; 'ô'
0x7C6D9D: mov     [esp+24h+var_4], 2
0x7C6DA5: call    sub_7C16B0
0x7C6DAA: push    edi; lpAddend
0x7C6DAB: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C6DB3: call    dword ptr ds:0A2807Ch
0x7C6DB9: test    eax, eax
0x7C6DBB: jnz     short loc_7C6DC7
0x7C6DBD: mov     edx, [esi]
0x7C6DBF: mov     eax, [edx]
0x7C6DC1: push    1
0x7C6DC3: mov     ecx, esi
0x7C6DC5: call    eax
0x7C6DC7: mov     eax, esi
0x7C6DC9: mov     ecx, dword ptr [esp+20h+var_C]
0x7C6DCD: mov     large fs:0, ecx
0x7C6DD4: pop     ecx
0x7C6DD5: pop     edi
0x7C6DD6: pop     esi
0x7C6DD7: add     esp, 14h
0x7C6DDA: retn    4
