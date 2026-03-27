0x768C10: sub     esp, 0Ch
0x768C13: push    ebx; a8
0x768C14: push    ebp; a7
0x768C15: push    esi; a6
0x768C16: push    edi; a5
0x768C17: push    3; a4
0x768C19: mov     esi, ecx
0x768C1B: xor     ebx, ebx
0x768C1D: push    ebx; a3
0x768C1E: lea     eax, [esi+6F4h]
0x768C24: push    eax; a2
0x768C25: call    sub_7637D0
0x768C2A: push    3; a4
0x768C2C: push    1; a3
0x768C2E: lea     ecx, [esi+74Ch]
0x768C34: push    ecx; a2
0x768C35: mov     ecx, esi; a1
0x768C37: call    sub_7637D0
0x768C3C: push    5; a4
0x768C3E: push    ebx; a3
0x768C3F: lea     edx, [esi+7A4h]
0x768C45: push    edx; a2
0x768C46: mov     ecx, esi; a1
0x768C48: call    sub_7637D0
0x768C4D: push    5; a4
0x768C4F: push    1; a3
0x768C51: lea     eax, [esi+7FCh]
0x768C57: push    eax; a2
0x768C58: mov     ecx, esi; a1
0x768C5A: call    sub_7637D0
0x768C5F: mov     ecx, esi; this
0x768C61: call    sub_764630
0x768C66: mov     edi, [esi+854h]
0x768C6C: push    70h ; 'p'; Size
0x768C6E: call    FormHeapAlloc
0x768C73: add     esp, 4
0x768C76: cmp     eax, ebx
0x768C78: jz      short loc_768CB4
0x768C7A: push    1; a6
0x768C7C: push    1; a5
0x768C7E: push    edi; a4
0x768C7F: push    1; a3
0x768C81: push    2; a2
0x768C83: mov     ecx, eax; this
0x768C85: call    NiPixelData__NiPixelData
0x768C8A: mov     ebp, eax
0x768C8C: cmp     ebp, ebx
0x768C8E: jz      short loc_768C9A
0x768C90: lea     ecx, [ebp+4]
0x768C93: push    ecx; lpAddend
0x768C94: call    dword ptr ds:0A28078h
0x768C9A: mov     edx, [ebp+5Ch]
0x768C9D: mov     eax, [edx]
0x768C9F: mov     cl, [edi+1]
0x768CA2: add     eax, [ebp+50h]
0x768CA5: cmp     cl, 10h
0x768CA8: jnz     short loc_768CB8
0x768CAA: mov     cl, 0FFh
0x768CAC: mov     [eax+3], cl
0x768CAF: mov     [eax+2], cl
0x768CB2: jmp     short loc_768CD1
0x768CB4: xor     ebp, ebp
0x768CB6: jmp     short loc_768C9A
0x768CB8: cmp     cl, 20h ; ' '
0x768CBB: jnz     short loc_768CD6
0x768CBD: mov     cl, 0FFh
0x768CBF: mov     [eax+3], bl
0x768CC2: mov     [eax+2], bl
0x768CC5: mov     [eax+7], cl
0x768CC8: mov     [eax+6], cl
0x768CCB: mov     [eax+5], cl
0x768CCE: mov     [eax+4], cl
0x768CD1: mov     [eax], bl
0x768CD3: mov     [eax+1], bl
0x768CD6: lea     eax, [esp+1Ch+a2]
0x768CDA: push    eax; a2
0x768CDB: push    ebp; a1
0x768CDC: mov     [esp+24h+a2], 6
0x768CE4: mov     [esp+24h+var_4], ebx
0x768CE8: mov     [esp+24h+var_8], ebx
0x768CEC: call    NiSourceTexture__LoadTexturePixelData
0x768CF1: mov     edi, [esi+8F0h]
0x768CF7: mov     ebx, eax
0x768CF9: add     esp, 8
0x768CFC: cmp     edi, ebx
0x768CFE: jz      short loc_768D34
0x768D00: test    edi, edi
0x768D02: jz      short loc_768D20
0x768D04: lea     ecx, [edi+4]
0x768D07: push    ecx; lpAddend
0x768D08: call    dword ptr ds:0A2807Ch
0x768D0E: test    eax, eax
0x768D10: jnz     short loc_768D20
0x768D12: test    edi, edi
0x768D14: jz      short loc_768D20
0x768D16: mov     edx, [edi]
0x768D18: mov     eax, [edx]
0x768D1A: push    1
0x768D1C: mov     ecx, edi
0x768D1E: call    eax
0x768D20: test    ebx, ebx
0x768D22: mov     [esi+8F0h], ebx
0x768D28: jz      short loc_768D34
0x768D2A: add     ebx, 4
0x768D2D: push    ebx; lpAddend
0x768D2E: call    dword ptr ds:0A28078h
0x768D34: lea     ecx, [ebp+4]
0x768D37: push    ecx; lpAddend
0x768D38: call    dword ptr ds:0A2807Ch
0x768D3E: test    eax, eax
0x768D40: jnz     short loc_768D4D
0x768D42: mov     edx, [ebp+0]
0x768D45: mov     eax, [edx]
0x768D47: push    1
0x768D49: mov     ecx, ebp
0x768D4B: call    eax
0x768D4D: pop     edi
0x768D4E: pop     esi
0x768D4F: pop     ebp
0x768D50: mov     al, 1
0x768D52: pop     ebx
0x768D53: add     esp, 0Ch
0x768D56: retn
