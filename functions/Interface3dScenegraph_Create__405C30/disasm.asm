0x405C30: push    0FFFFFFFFh
0x405C32: push    offset SEH_8C8970
0x405C37: mov     eax, large fs:0
0x405C3D: push    eax
0x405C3E: push    ecx
0x405C3F: push    esi
0x405C40: push    edi
0x405C41: mov     eax, ___security_cookie
0x405C46: xor     eax, esp
0x405C48: push    eax
0x405C49: lea     eax, [esp+1Ch+var_C]
0x405C4D: mov     large fs:0, eax
0x405C53: push    0F0h ; 'ð'; Size
0x405C58: call    FormHeapAlloc
0x405C5D: add     esp, 4
0x405C60: mov     [esp+1Ch+var_10], eax
0x405C64: test    eax, eax
0x405C66: mov     [esp+1Ch+var_4], 0
0x405C6E: jz      short loc_405C84
0x405C70: push    0
0x405C72: push    0
0x405C74: push    offset a3dmenu; "3DMenu"
0x405C79: mov     ecx, eax; this
0x405C7B: call    ??0SceneGraph@@QAE@XZ; SceneGraph::SceneGraph(void)
0x405C80: mov     esi, eax
0x405C82: jmp     short loc_405C86
0x405C84: xor     esi, esi
0x405C86: mov     eax, g_Interface3DScenegraph
0x405C8B: cmp     eax, esi
0x405C8D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x405C95: jz      short loc_405CCD
0x405C97: test    eax, eax
0x405C99: jz      short loc_405CB9
0x405C9B: mov     edi, eax
0x405C9D: add     eax, 4
0x405CA0: push    eax; lpAddend
0x405CA1: call    ds:InterlockedDecrement
0x405CA7: test    eax, eax
0x405CA9: jnz     short loc_405CB9
0x405CAB: test    edi, edi
0x405CAD: jz      short loc_405CB9
0x405CAF: mov     eax, [edi]
0x405CB1: mov     edx, [eax]
0x405CB3: push    1
0x405CB5: mov     ecx, edi
0x405CB7: call    edx
0x405CB9: test    esi, esi
0x405CBB: mov     g_Interface3DScenegraph, esi
0x405CC1: jz      short loc_405CCD
0x405CC3: add     esi, 4
0x405CC6: push    esi; lpAddend
0x405CC7: call    ds:InterlockedIncrement
0x405CCD: mov     ecx, dword ptr [esp+1Ch+var_C]
0x405CD1: mov     large fs:0, ecx
0x405CD8: pop     ecx
0x405CD9: pop     edi
0x405CDA: pop     esi
0x405CDB: add     esp, 10h
0x405CDE: retn
