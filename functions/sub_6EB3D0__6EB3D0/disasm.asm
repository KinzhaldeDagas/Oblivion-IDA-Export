0x6EB3D0: push    ebx
0x6EB3D1: push    esi
0x6EB3D2: mov     esi, [esp+8+arg_0]
0x6EB3D6: push    edi
0x6EB3D7: push    esi
0x6EB3D8: mov     ebx, ecx
0x6EB3DA: call    sub_6CDDB0
0x6EB3DF: mov     eax, ds:0B3E9C4h
0x6EB3E4: push    eax; ArgList
0x6EB3E5: call    TESOutput_PrintString
0x6EB3EA: movzx   edi, word ptr [esi+0Ah]
0x6EB3EE: movzx   ecx, word ptr [esi+8]
0x6EB3F2: add     esp, 4
0x6EB3F5: cmp     edi, ecx
0x6EB3F7: mov     [esp+0Ch+arg_0], eax
0x6EB3FB: jb      short loc_6EB40B
0x6EB3FD: movzx   edx, word ptr [esi+0Eh]
0x6EB401: add     edx, edi
0x6EB403: push    edx
0x6EB404: mov     ecx, esi
0x6EB406: call    NiTArray_SetSize
0x6EB40B: lea     eax, [esp+0Ch+arg_0]
0x6EB40F: push    eax
0x6EB410: push    edi
0x6EB411: mov     ecx, esi
0x6EB413: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EB418: push    offset aM_kcolorvalue; "m_kColorValue"
0x6EB41D: lea     ecx, [ebx+30h]
0x6EB420: call    sub_7093D0
0x6EB425: movzx   edi, word ptr [esi+0Ah]
0x6EB429: movzx   ecx, word ptr [esi+8]
0x6EB42D: cmp     edi, ecx
0x6EB42F: mov     [esp+0Ch+arg_0], eax
0x6EB433: jb      short loc_6EB443
0x6EB435: movzx   edx, word ptr [esi+0Eh]
0x6EB439: add     edx, edi
0x6EB43B: push    edx
0x6EB43C: mov     ecx, esi
0x6EB43E: call    NiTArray_SetSize
0x6EB443: lea     eax, [esp+0Ch+arg_0]
0x6EB447: push    eax
0x6EB448: push    edi
0x6EB449: mov     ecx, esi
0x6EB44B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EB450: pop     edi
0x6EB451: pop     esi
0x6EB452: pop     ebx
0x6EB453: retn    4
