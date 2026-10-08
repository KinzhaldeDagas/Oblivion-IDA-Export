0x785F30: sub     esp, 8; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x785F33: push    esi
0x785F34: mov     esi, ecx
0x785F36: mov     edx, [esi+4]
0x785F39: test    edx, edx
0x785F3B: jnz     short loc_785F41
0x785F3D: xor     ecx, ecx
0x785F3F: jmp     short loc_785F49
0x785F41: mov     ecx, [esi+8]
0x785F44: sub     ecx, edx
0x785F46: sar     ecx, 2
0x785F49: test    edx, edx
0x785F4B: jz      short loc_785F72
0x785F4D: mov     eax, [esi+0Ch]
0x785F50: sub     eax, edx
0x785F52: sar     eax, 2
0x785F55: cmp     ecx, eax
0x785F57: jnb     short loc_785F72
0x785F59: mov     eax, [esi+8]
0x785F5C: mov     ecx, [esp+0Ch+value]
0x785F60: fld     dword ptr [ecx]
0x785F62: add     eax, 4
0x785F65: fstp    dword ptr [eax-4]
0x785F68: mov     [esi+8], eax
0x785F6B: pop     esi
0x785F6C: add     esp, 8
0x785F6F: retn    4
0x785F72: push    edi
0x785F73: mov     edi, [esi+8]
0x785F76: cmp     edx, edi
0x785F78: jbe     short loc_785F7F
0x785F7A: call    __invalid_parameter_noinfo
0x785F7F: mov     edx, [esp+10h+value]
0x785F83: push    edx; value
0x785F84: push    edi; Src
0x785F85: push    esi; position
0x785F86: lea     eax, [esp+1Ch+result]
0x785F8A: push    eax; result
0x785F8B: mov     ecx, esi; this
0x785F8D: call    OB_stVector_float_InsertOne_010201A0; Oblivion 1.2.0.416: vector<float>::insert(position,value) wrapper returning a checked iterator; the called 0x526FA0 helper is the folded 4-byte insert-fill core.
0x785F92: pop     edi
0x785F93: pop     esi
0x785F94: add     esp, 8
0x785F97: retn    4
