0x6A8B40: push    ecx
0x6A8B41: push    edi
0x6A8B42: mov     edi, ecx
0x6A8B44: mov     ecx, [edi+20h]; this
0x6A8B47: test    ecx, ecx
0x6A8B49: jz      short loc_6A8BC1
0x6A8B4B: push    esi
0x6A8B4C: call    MagicTarget_GetParentActor
0x6A8B51: mov     esi, eax
0x6A8B53: test    esi, esi
0x6A8B55: jz      short loc_6A8BC0
0x6A8B57: cmp     esi, ds:0B333C4h
0x6A8B5D: jnz     short loc_6A8B74
0x6A8B5F: fld     dword ptr [edi+18h]
0x6A8B62: mov     eax, [esi]
0x6A8B64: mov     edx, [eax+2ACh]
0x6A8B6A: push    ecx
0x6A8B6B: fstp    [esp+10h+var_10]
0x6A8B6E: push    45h ; 'E'
0x6A8B70: mov     ecx, esi
0x6A8B72: call    edx
0x6A8B74: mov     eax, [esi]
0x6A8B76: mov     edx, [eax+284h]
0x6A8B7C: push    45h ; 'E'
0x6A8B7E: mov     ecx, esi
0x6A8B80: call    edx
0x6A8B82: mov     [esp+0Ch+var_4], eax
0x6A8B86: fild    [esp+0Ch+var_4]
0x6A8B8A: push    ecx
0x6A8B8B: mov     ecx, esi
0x6A8B8D: fstp    [esp+10h+var_10]; float
0x6A8B90: call    sub_60E2E0
0x6A8B95: mov     byte ptr ds:0B33D80h, 1
0x6A8B9C: mov     ecx, [esi+58h]
0x6A8B9F: mov     eax, [ecx]
0x6A8BA1: mov     edx, [eax+31Ch]
0x6A8BA7: push    1
0x6A8BA9: call    edx
0x6A8BAB: mov     ecx, [esi+58h]
0x6A8BAE: mov     eax, [ecx]
0x6A8BB0: mov     edx, [eax+318h]
0x6A8BB6: push    esi
0x6A8BB7: call    edx
0x6A8BB9: mov     byte ptr ds:0B33D80h, 0
0x6A8BC0: pop     esi
0x6A8BC1: pop     edi
0x6A8BC2: pop     ecx
0x6A8BC3: retn
