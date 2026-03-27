0x8AEAC0: push    ebx
0x8AEAC1: push    esi
0x8AEAC2: mov     esi, [esp+8+arg_0]
0x8AEAC6: push    edi
0x8AEAC7: push    esi
0x8AEAC8: mov     edi, ecx
0x8AEACA: call    sub_8AE9A0
0x8AEACF: mov     eax, ds:0BA7F54h
0x8AEAD4: push    eax; ArgList
0x8AEAD5: call    TESOutput_PrintString
0x8AEADA: movzx   ebx, word ptr [esi+0Ah]
0x8AEADE: movzx   ecx, word ptr [esi+8]
0x8AEAE2: add     esp, 4
0x8AEAE5: cmp     ebx, ecx
0x8AEAE7: mov     [esp+0Ch+arg_0], eax
0x8AEAEB: jb      short loc_8AEAFB
0x8AEAED: movzx   edx, word ptr [esi+0Eh]
0x8AEAF1: add     edx, ebx
0x8AEAF3: push    edx
0x8AEAF4: mov     ecx, esi
0x8AEAF6: call    NiTArray_SetSize
0x8AEAFB: lea     eax, [esp+0Ch+arg_0]
0x8AEAFF: push    eax
0x8AEB00: push    ebx
0x8AEB01: mov     ecx, esi
0x8AEB03: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8AEB08: test    edi, edi
0x8AEB0A: jz      short loc_8AEB18
0x8AEB0C: mov     edi, [edi+8]
0x8AEB0F: test    edi, edi
0x8AEB11: jz      short loc_8AEB18
0x8AEB13: fld     dword ptr [edi+0Ch]
0x8AEB16: jmp     short loc_8AEB1E
0x8AEB18: fld     dword ptr ds:0B2EFC4h
0x8AEB1E: fstp    [esp+0Ch+arg_0]
0x8AEB22: push    ecx
0x8AEB23: fld     [esp+10h+arg_0]
0x8AEB27: fmul    qword ptr ds:0A372E0h
0x8AEB2D: fstp    [esp+10h+arg_0]
0x8AEB31: fld     [esp+10h+arg_0]
0x8AEB35: fstp    [esp+10h+var_10]; float
0x8AEB38: push    offset aRadius; "Radius"
0x8AEB3D: call    TESOutput_PrintLabeledFloat
0x8AEB42: movzx   edi, word ptr [esi+0Ah]
0x8AEB46: movzx   ecx, word ptr [esi+8]
0x8AEB4A: add     esp, 8
0x8AEB4D: cmp     edi, ecx
0x8AEB4F: mov     [esp+0Ch+arg_0], eax
0x8AEB53: jb      short loc_8AEB63
0x8AEB55: movzx   edx, word ptr [esi+0Eh]
0x8AEB59: add     edx, edi
0x8AEB5B: push    edx
0x8AEB5C: mov     ecx, esi
0x8AEB5E: call    NiTArray_SetSize
0x8AEB63: lea     eax, [esp+0Ch+arg_0]
0x8AEB67: push    eax
0x8AEB68: push    edi
0x8AEB69: mov     ecx, esi
0x8AEB6B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8AEB70: pop     edi
0x8AEB71: pop     esi
0x8AEB72: pop     ebx
0x8AEB73: retn    4
