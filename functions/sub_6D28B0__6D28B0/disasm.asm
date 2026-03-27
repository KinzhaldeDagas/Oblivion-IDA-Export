0x6D28B0: push    ebx
0x6D28B1: push    esi
0x6D28B2: mov     esi, [esp+8+arg_0]
0x6D28B6: push    edi
0x6D28B7: push    esi
0x6D28B8: mov     ebx, ecx
0x6D28BA: call    sub_6CDDB0
0x6D28BF: mov     eax, ds:0B3CF5Ch
0x6D28C4: push    eax; ArgList
0x6D28C5: call    TESOutput_PrintString
0x6D28CA: movzx   edi, word ptr [esi+0Ah]
0x6D28CE: movzx   ecx, word ptr [esi+8]
0x6D28D2: add     esp, 4
0x6D28D5: cmp     edi, ecx
0x6D28D7: mov     [esp+0Ch+arg_0], eax
0x6D28DB: jb      short loc_6D28EB
0x6D28DD: movzx   edx, word ptr [esi+0Eh]
0x6D28E1: add     edx, edi
0x6D28E3: push    edx
0x6D28E4: mov     ecx, esi
0x6D28E6: call    NiTArray_SetSize
0x6D28EB: lea     eax, [esp+0Ch+arg_0]
0x6D28EF: push    eax
0x6D28F0: push    edi
0x6D28F1: mov     ecx, esi
0x6D28F3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D28F8: fld     dword ptr [ebx+30h]
0x6D28FB: push    ecx
0x6D28FC: fstp    [esp+10h+var_10]; float
0x6D28FF: push    offset aM_ffloatvalue; "m_fFloatValue"
0x6D2904: call    TESOutput_PrintLabeledFloat
0x6D2909: movzx   edi, word ptr [esi+0Ah]
0x6D290D: movzx   ecx, word ptr [esi+8]
0x6D2911: add     esp, 8
0x6D2914: cmp     edi, ecx
0x6D2916: mov     [esp+0Ch+arg_0], eax
0x6D291A: jb      short loc_6D292A
0x6D291C: movzx   edx, word ptr [esi+0Eh]
0x6D2920: add     edx, edi
0x6D2922: push    edx
0x6D2923: mov     ecx, esi
0x6D2925: call    NiTArray_SetSize
0x6D292A: lea     eax, [esp+0Ch+arg_0]
0x6D292E: push    eax
0x6D292F: push    edi
0x6D2930: mov     ecx, esi
0x6D2932: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D2937: pop     edi
0x6D2938: pop     esi
0x6D2939: pop     ebx
0x6D293A: retn    4
