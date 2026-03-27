0x6FF390: push    ebx
0x6FF391: push    esi
0x6FF392: mov     esi, [esp+8+arg_0]
0x6FF396: push    edi
0x6FF397: push    esi
0x6FF398: mov     ebx, ecx
0x6FF39A: call    sub_752EC0
0x6FF39F: mov     eax, ds:0B3F554h
0x6FF3A4: push    eax; ArgList
0x6FF3A5: call    TESOutput_PrintString
0x6FF3AA: movzx   edi, word ptr [esi+0Ah]
0x6FF3AE: movzx   ecx, word ptr [esi+8]
0x6FF3B2: add     esp, 4
0x6FF3B5: cmp     edi, ecx
0x6FF3B7: mov     [esp+0Ch+arg_0], eax
0x6FF3BB: jb      short loc_6FF3CB
0x6FF3BD: movzx   edx, word ptr [esi+0Eh]
0x6FF3C1: add     edx, edi
0x6FF3C3: push    edx
0x6FF3C4: mov     ecx, esi
0x6FF3C6: call    NiTArray_SetSize
0x6FF3CB: lea     eax, [esp+0Ch+arg_0]
0x6FF3CF: push    eax
0x6FF3D0: push    edi
0x6FF3D1: mov     ecx, esi
0x6FF3D3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FF3D8: fld     dword ptr [ebx+20h]
0x6FF3DB: push    ecx
0x6FF3DC: fstp    [esp+10h+var_10]; float
0x6FF3DF: push    offset aDamping; "Damping"
0x6FF3E4: call    TESOutput_PrintLabeledFloat
0x6FF3E9: movzx   edi, word ptr [esi+0Ah]
0x6FF3ED: movzx   ecx, word ptr [esi+8]
0x6FF3F1: add     esp, 8
0x6FF3F4: cmp     edi, ecx
0x6FF3F6: mov     [esp+0Ch+arg_0], eax
0x6FF3FA: jb      short loc_6FF40A
0x6FF3FC: movzx   edx, word ptr [esi+0Eh]
0x6FF400: add     edx, edi
0x6FF402: push    edx
0x6FF403: mov     ecx, esi
0x6FF405: call    NiTArray_SetSize
0x6FF40A: lea     eax, [esp+0Ch+arg_0]
0x6FF40E: push    eax
0x6FF40F: push    edi
0x6FF410: mov     ecx, esi
0x6FF412: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FF417: pop     edi
0x6FF418: pop     esi
0x6FF419: pop     ebx
0x6FF41A: retn    4
