0x411B70: push    0FFFFFFFFh
0x411B72: push    offset Screenshot_RenderTexture_SEH
0x411B77: mov     eax, large fs:0
0x411B7D: push    eax
0x411B7E: sub     esp, 9Ch
0x411B84: push    ebx
0x411B85: push    ebp
0x411B86: push    esi
0x411B87: push    edi
0x411B88: mov     eax, ___security_cookie
0x411B8D: xor     eax, esp
0x411B8F: push    eax; ArgList
0x411B90: lea     eax, [esp+0BCh+var_C]
0x411B97: mov     large fs:0, eax
0x411B9D: mov     ecx, dword_B350D8
0x411BA3: mov     eax, [ecx]
0x411BA5: mov     edx, [eax+8Ch]
0x411BAB: mov     ebp, [ecx+280h]
0x411BB1: call    edx
0x411BB3: mov     ecx, [eax+10h]
0x411BB6: xor     esi, esi
0x411BB8: cmp     ecx, esi
0x411BBA: jz      short loc_411BC5
0x411BBC: mov     eax, [ecx]
0x411BBE: mov     edx, [eax+0Ch]
0x411BC1: call    edx
0x411BC3: jmp     short loc_411BC7
0x411BC5: xor     eax, eax
0x411BC7: push    eax
0x411BC8: lea     ecx, [esp+0C0h+var_50]
0x411BCC: call    sub_70F010
0x411BD1: mov     ebx, [esp+0BCh+arg_0]
0x411BD8: mov     ecx, [ebx]
0x411BDA: mov     edi, [esp+0BCh+arg_4]
0x411BE1: mov     edx, [edi]
0x411BE3: push    esi
0x411BE4: push    1
0x411BE6: lea     eax, [esp+0C4h+var_84]
0x411BEA: push    eax
0x411BEB: push    ecx
0x411BEC: push    edx
0x411BED: mov     [esp+0D0h+var_84], 6
0x411BF5: mov     [esp+0D0h+var_7C], esi
0x411BF9: mov     [esp+0D0h+var_80], esi
0x411BFD: call    sub_7D6F40
0x411C02: mov     esi, eax
0x411C04: add     esp, 14h
0x411C07: test    esi, esi
0x411C09: mov     [esp+0BCh+var_88], esi
0x411C0D: jz      short loc_411C19
0x411C0F: lea     eax, [esi+4]
0x411C12: push    eax; lpAddend
0x411C13: call    ds:InterlockedIncrement
0x411C19: test    esi, esi
0x411C1B: mov     [esp+0BCh+var_4], 0
0x411C26: jnz     short loc_411C3C
0x411C28: push    offset aScreenshotUn_2; "ScreenShot: Unable to create render tex"...
0x411C2D: call    PrintError
0x411C32: add     esp, 4
0x411C35: xor     eax, eax
0x411C37: jmp     loc_411EA5
0x411C3C: fild    nHeight
0x411C42: fidiv   nWidth
0x411C48: fstp    [esp+0BCh+var_90]
0x411C4C: fild    dword ptr [edi]
0x411C4E: fmul    [esp+0BCh+var_90]
0x411C52: call    Double_To_SInt32
0x411C57: mov     ecx, TESDataHandler_g_PlayerRef
0x411C5D: push    0
0x411C5F: mov     [esp+0C0h+var_94], eax
0x411C63: call    sub_66B710
0x411C68: fldz
0x411C6A: mov     ecx, g_worldScenegraph
0x411C70: fstp    [esp+0BCh+var_A4]
0x411C74: fld1
0x411C76: mov     eax, [ecx+0DCh]
0x411C7C: mov     edx, [esp+0BCh+var_A4]
0x411C80: fst     [esp+0BCh+var_A0]
0x411C84: fstp    [esp+0BCh+var_9C]
0x411C88: mov     [eax+110h], edx
0x411C8E: fld     [esp+0BCh+var_90]
0x411C92: mov     ecx, [esp+0BCh+var_A0]
0x411C96: fld1
0x411C98: mov     edx, [esp+0BCh+var_9C]
0x411C9C: mov     [eax+114h], ecx
0x411CA2: fsubrp  st(1), st
0x411CA4: mov     [eax+118h], edx
0x411CAA: push    esi; a2
0x411CAB: fstp    [esp+0C0h+var_98]
0x411CAF: mov     ecx, [esp+0C0h+var_98]
0x411CB3: mov     [eax+11Ch], ecx
0x411CB9: mov     ecx, OSGlobals; this
0x411CBF: call    NiRenderer_Render
0x411CC4: fldz
0x411CC6: mov     edx, g_worldScenegraph
0x411CCC: fst     [esp+0BCh+var_A4]
0x411CD0: mov     eax, [edx+0DCh]
0x411CD6: fld1
0x411CD8: mov     ecx, [esp+0BCh+var_A4]
0x411CDC: fst     [esp+0BCh+var_A0]
0x411CE0: mov     [eax+110h], ecx
0x411CE6: fstp    [esp+0BCh+var_9C]
0x411CEA: mov     edx, [esp+0BCh+var_A0]
0x411CEE: mov     ecx, [esp+0BCh+var_9C]
0x411CF2: mov     [eax+114h], edx
0x411CF8: mov     [eax+118h], ecx
0x411CFE: fstp    [esp+0BCh+var_98]
0x411D02: mov     edx, [esp+0BCh+var_98]
0x411D06: mov     ecx, esi; this
0x411D08: mov     [eax+11Ch], edx
0x411D0E: call    BSRenderedTexture__GetInnerTexture
0x411D13: mov     ecx, [eax+24h]
0x411D16: mov     eax, [ecx]
0x411D18: mov     edx, [eax+18h]
0x411D1B: call    edx
0x411D1D: mov     edx, [eax]
0x411D1F: mov     ecx, eax
0x411D21: mov     eax, [edx+14h]
0x411D24: call    eax
0x411D26: mov     esi, eax
0x411D28: mov     ecx, [esi]
0x411D2A: mov     eax, [ecx+44h]
0x411D2D: lea     edx, [esp+0BCh+var_70]
0x411D31: push    edx
0x411D32: push    0
0x411D34: push    esi
0x411D35: call    eax
0x411D37: mov     ecx, [esi]
0x411D39: mov     eax, [ecx+48h]
0x411D3C: lea     edx, [esp+0BCh+var_8C]
0x411D40: push    edx
0x411D41: push    0
0x411D43: push    esi
0x411D44: call    eax
0x411D46: mov     eax, [esp+0BCh+var_70]
0x411D4A: mov     ecx, [ebp+0]
0x411D4D: push    0
0x411D4F: lea     edx, [esp+0C0h+var_A8]
0x411D53: push    edx
0x411D54: mov     edx, [ebx]
0x411D56: push    2
0x411D58: push    eax
0x411D59: mov     eax, [edi]
0x411D5B: mov     ecx, [ecx+90h]
0x411D61: push    edx
0x411D62: push    eax
0x411D63: push    ebp
0x411D64: call    ecx
0x411D66: test    eax, eax
0x411D68: jz      short loc_411DA5
0x411D6A: push    offset aScreenshotUn_3; "ScreenShot: Unable to create image surf"...
0x411D6F: call    PrintError
0x411D74: mov     esi, [esp+0C0h+var_88]
0x411D78: add     esp, 4
0x411D7B: lea     edx, [esi+4]
0x411D7E: push    edx; lpAddend
0x411D7F: mov     [esp+0C0h+var_4], 0FFFFFFFFh
0x411D8A: call    ds:InterlockedDecrement
0x411D90: test    eax, eax
0x411D92: jnz     short loc_411D9E
0x411D94: mov     eax, [esi]
0x411D96: mov     edx, [eax]
0x411D98: push    1
0x411D9A: mov     ecx, esi
0x411D9C: call    edx
0x411D9E: xor     eax, eax
0x411DA0: jmp     loc_411EA5
0x411DA5: mov     ecx, [esp+0BCh+var_A8]
0x411DA9: mov     edx, [esp+0BCh+var_8C]
0x411DAD: mov     eax, [ebp+0]
0x411DB0: mov     eax, [eax+80h]
0x411DB6: push    ecx
0x411DB7: push    edx
0x411DB8: push    ebp
0x411DB9: call    eax
0x411DBB: mov     eax, [esp+0BCh+var_8C]
0x411DBF: mov     ecx, [eax]
0x411DC1: mov     edx, [ecx+8]
0x411DC4: push    eax
0x411DC5: call    edx
0x411DC7: mov     eax, [esp+0BCh+var_A8]
0x411DCB: mov     ecx, [eax]
0x411DCD: push    800h
0x411DD2: push    0
0x411DD4: lea     edx, [esp+0C4h+var_78]
0x411DD8: push    edx
0x411DD9: push    eax
0x411DDA: mov     eax, [ecx+34h]
0x411DDD: call    eax
0x411DDF: mov     ecx, [esp+0BCh+var_94]
0x411DE3: push    70h ; 'p'; Size
0x411DE5: mov     [edi], ecx
0x411DE7: call    FormHeapAlloc
0x411DEC: add     esp, 4
0x411DEF: mov     [esp+0BCh+var_94], eax
0x411DF3: test    eax, eax
0x411DF5: mov     byte ptr [esp+0BCh+var_4], 1
0x411DFD: jz      short loc_411E19
0x411DFF: mov     edx, [edi]
0x411E01: mov     ecx, [ebx]
0x411E03: push    1
0x411E05: push    1
0x411E07: push    offset unk_B25E48
0x411E0C: push    edx
0x411E0D: push    ecx
0x411E0E: mov     ecx, eax
0x411E10: call    NiPixelData__NiPixelData
0x411E15: mov     ebp, eax
0x411E17: jmp     short loc_411E1B
0x411E19: xor     ebp, ebp
0x411E1B: mov     edx, [ebp+5Ch]
0x411E1E: mov     eax, [edx]
0x411E20: mov     edx, [ebx]
0x411E22: imul    edx, [edi]
0x411E25: add     eax, [ebp+50h]
0x411E28: add     edx, edx
0x411E2A: add     edx, edx
0x411E2C: xor     ecx, ecx
0x411E2E: test    edx, edx
0x411E30: mov     byte ptr [esp+0BCh+var_4], 0
0x411E38: jle     short loc_411E6F
0x411E3A: mov     esi, [esp+0BCh+var_74]
0x411E3E: add     esi, 1
0x411E41: movzx   edx, byte ptr [esi+ecx+1]
0x411E46: mov     [eax], dl
0x411E48: movzx   edx, byte ptr [esi+ecx]
0x411E4C: mov     [eax+1], dl
0x411E4F: movzx   edx, byte ptr [esi+ecx-1]
0x411E54: add     eax, 1
0x411E57: add     eax, 1
0x411E5A: mov     [eax], dl
0x411E5C: mov     edx, [ebx]
0x411E5E: imul    edx, [edi]
0x411E61: add     edx, edx
0x411E63: add     ecx, 4
0x411E66: add     edx, edx
0x411E68: add     eax, 1
0x411E6B: cmp     ecx, edx
0x411E6D: jl      short loc_411E41
0x411E6F: mov     eax, [esp+0BCh+var_A8]
0x411E73: mov     ecx, [eax]
0x411E75: mov     edx, [ecx+38h]
0x411E78: push    eax
0x411E79: call    edx
0x411E7B: mov     eax, [esp+0BCh+var_A8]
0x411E7F: mov     ecx, [eax]
0x411E81: mov     edx, [ecx+8]
0x411E84: push    eax
0x411E85: call    edx
0x411E87: mov     esi, [esp+0BCh+var_88]
0x411E8B: lea     eax, [esi+4]
0x411E8E: push    eax; lpAddend
0x411E8F: call    ds:InterlockedDecrement
0x411E95: test    eax, eax
0x411E97: jnz     short loc_411EA3
0x411E99: mov     edx, [esi]
0x411E9B: mov     eax, [edx]
0x411E9D: push    1
0x411E9F: mov     ecx, esi
0x411EA1: call    eax
0x411EA3: mov     eax, ebp
0x411EA5: mov     ecx, dword ptr [esp+0BCh+var_C]
0x411EAC: mov     large fs:0, ecx
0x411EB3: pop     ecx
0x411EB4: pop     edi
0x411EB5: pop     esi
0x411EB6: pop     ebp
0x411EB7: pop     ebx
0x411EB8: add     esp, 0A8h
0x411EBE: retn
