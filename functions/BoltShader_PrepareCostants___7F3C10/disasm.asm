0x7F3C10: push    0FFFFFFFFh
0x7F3C12: push    offset SEH_803C90
0x7F3C17: mov     eax, large fs:0
0x7F3C1D: push    eax
0x7F3C1E: push    ecx
0x7F3C1F: push    esi
0x7F3C20: push    edi
0x7F3C21: mov     eax, ds:0B30AACh
0x7F3C26: xor     eax, esp
0x7F3C28: push    eax
0x7F3C29: lea     eax, [esp+1Ch+var_C]
0x7F3C2D: mov     large fs:0, eax
0x7F3C33: mov     esi, ecx
0x7F3C35: cmp     dword ptr [esi+30h], 0
0x7F3C39: lea     edi, [esi+30h]
0x7F3C3C: jnz     loc_7F3D45
0x7F3C42: push    34h ; '4'; Size
0x7F3C44: call    FormHeapAlloc
0x7F3C49: add     esp, 4
0x7F3C4C: mov     [esp+1Ch+var_10], eax
0x7F3C50: test    eax, eax
0x7F3C52: mov     [esp+1Ch+var_4], 0
0x7F3C5A: jz      short loc_7F3C69
0x7F3C5C: mov     ecx, [esi+14h]
0x7F3C5F: push    ecx
0x7F3C60: mov     ecx, eax
0x7F3C62: call    NiD3DShaderCostantMapVertex__Construct
0x7F3C67: jmp     short loc_7F3C6B
0x7F3C69: xor     eax, eax
0x7F3C6B: push    eax; a2
0x7F3C6C: mov     ecx, edi; this
0x7F3C6E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F3C76: call    NiSmartPointer_Set??
0x7F3C7B: mov     ecx, [edi]
0x7F3C7D: mov     edx, [ecx]
0x7F3C7F: mov     eax, [edx+18h]
0x7F3C82: push    0
0x7F3C84: push    0
0x7F3C86: push    0
0x7F3C88: push    0
0x7F3C8A: push    0
0x7F3C8C: push    4
0x7F3C8E: push    0
0x7F3C90: push    0
0x7F3C92: push    20000009h
0x7F3C97: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x7F3C9C: call    eax
0x7F3C9E: mov     ecx, [edi]
0x7F3CA0: mov     edx, [ecx]
0x7F3CA2: mov     edx, [edx+18h]
0x7F3CA5: push    0
0x7F3CA7: lea     eax, [esi+138h]
0x7F3CAD: push    eax
0x7F3CAE: push    4
0x7F3CB0: push    40h ; '@'
0x7F3CB2: push    offset EmptyString
0x7F3CB7: push    4
0x7F3CB9: push    4
0x7F3CBB: push    0
0x7F3CBD: push    10000009h
0x7F3CC2: push    offset aFvars; "fVars"
0x7F3CC7: call    edx
0x7F3CC9: mov     ecx, [edi]
0x7F3CCB: mov     eax, [ecx]
0x7F3CCD: mov     eax, [eax+18h]
0x7F3CD0: push    0
0x7F3CD2: lea     edx, [esi+128h]
0x7F3CD8: push    edx
0x7F3CD9: push    4
0x7F3CDB: push    10h
0x7F3CDD: push    offset EmptyString
0x7F3CE2: push    1
0x7F3CE4: push    8
0x7F3CE6: push    0
0x7F3CE8: push    10000007h
0x7F3CED: push    offset aEyeposition; "EyePosition"
0x7F3CF2: call    eax
0x7F3CF4: mov     eax, ds:0B468FCh
0x7F3CF9: test    eax, eax
0x7F3CFB: jnz     short loc_7F3D17
0x7F3CFD: cmp     dword ptr ds:0B42F48h, 2
0x7F3D04: setl    al
0x7F3D07: sub     eax, 1
0x7F3D0A: and     eax, 0A0h
0x7F3D0F: add     eax, 4Bh ; 'K'
0x7F3D12: mov     ds:0B468FCh, eax
0x7F3D17: mov     ecx, [edi]
0x7F3D19: mov     edi, [esi+80h]
0x7F3D1F: mov     edx, [ecx]
0x7F3D21: push    0
0x7F3D23: push    edi
0x7F3D24: push    4
0x7F3D26: mov     edi, eax
0x7F3D28: shl     edi, 4
0x7F3D2B: push    edi
0x7F3D2C: push    offset EmptyString
0x7F3D31: push    eax
0x7F3D32: mov     eax, [edx+18h]
0x7F3D35: push    0Eh
0x7F3D37: push    0
0x7F3D39: push    10000009h
0x7F3D3E: push    offset aBoltData; "bolt data"
0x7F3D43: call    eax
0x7F3D45: cmp     dword ptr [esi+2Ch], 0
0x7F3D49: lea     edi, [esi+2Ch]
0x7F3D4C: jnz     loc_7F3DE1
0x7F3D52: push    34h ; '4'; Size
0x7F3D54: call    FormHeapAlloc
0x7F3D59: add     esp, 4
0x7F3D5C: mov     [esp+1Ch+var_10], eax
0x7F3D60: test    eax, eax
0x7F3D62: mov     [esp+1Ch+var_4], 1
0x7F3D6A: jz      short loc_7F3D79
0x7F3D6C: mov     ecx, [esi+14h]
0x7F3D6F: push    ecx
0x7F3D70: mov     ecx, eax
0x7F3D72: call    NiD3DShaderCostantMapPixel__Construct
0x7F3D77: jmp     short loc_7F3D7B
0x7F3D79: xor     eax, eax
0x7F3D7B: push    eax; a2
0x7F3D7C: mov     ecx, edi; this
0x7F3D7E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F3D86: call    NiSmartPointer_Set??
0x7F3D8B: mov     ecx, [edi]
0x7F3D8D: mov     edx, [ecx]
0x7F3D8F: mov     edx, [edx+18h]
0x7F3D92: push    0
0x7F3D94: lea     eax, [esi+17Ch]
0x7F3D9A: push    eax
0x7F3D9B: push    4
0x7F3D9D: push    10h
0x7F3D9F: push    offset EmptyString
0x7F3DA4: push    1
0x7F3DA6: push    0
0x7F3DA8: push    0
0x7F3DAA: push    10000007h
0x7F3DAF: push    offset aCorecolor; "CoreColor"
0x7F3DB4: call    edx
0x7F3DB6: mov     ecx, [edi]
0x7F3DB8: mov     eax, [ecx]
0x7F3DBA: mov     edx, [eax+18h]
0x7F3DBD: push    0
0x7F3DBF: add     esi, 18Ch
0x7F3DC5: push    esi
0x7F3DC6: push    4
0x7F3DC8: push    10h
0x7F3DCA: push    offset EmptyString
0x7F3DCF: push    1
0x7F3DD1: push    1
0x7F3DD3: push    0
0x7F3DD5: push    10000007h
0x7F3DDA: push    offset aGlowcolor; "GlowColor"
0x7F3DDF: call    edx
0x7F3DE1: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7F3DE5: mov     large fs:0, ecx
0x7F3DEC: pop     ecx
0x7F3DED: pop     edi
0x7F3DEE: pop     esi
0x7F3DEF: add     esp, 10h
0x7F3DF2: retn
