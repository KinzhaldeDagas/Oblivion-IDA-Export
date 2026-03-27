0x4810E0: push    edi
0x4810E1: mov     edi, [esp+4+arg_0]
0x4810E5: test    edi, edi
0x4810E7: jz      loc_481200
0x4810ED: mov     eax, [edi]
0x4810EF: mov     edx, [eax+10h]
0x4810F2: push    ebx
0x4810F3: push    ebp
0x4810F4: push    esi
0x4810F5: mov     ecx, edi
0x4810F7: call    edx
0x4810F9: mov     ebp, [esp+10h+arg_8]
0x4810FD: mov     ebx, [esp+10h+arg_10]
0x481101: mov     esi, eax
0x481103: test    esi, esi
0x481105: jz      loc_4811A1
0x48110B: push    4
0x48110D: mov     ecx, esi
0x48110F: call    NiNode_GetNiPropertyByID
0x481114: test    eax, eax
0x481116: jz      short loc_481151
0x481118: push    4
0x48111A: mov     ecx, esi
0x48111C: call    NiNode_GetNiPropertyByID
0x481121: mov     edx, [eax]
0x481123: mov     ecx, eax
0x481125: mov     eax, [edx+54h]
0x481128: call    eax
0x48112A: cmp     eax, 1
0x48112D: jl      short loc_481151
0x48112F: push    4
0x481131: mov     ecx, esi
0x481133: call    NiNode_GetNiPropertyByID
0x481138: mov     edx, [eax]
0x48113A: mov     ecx, eax
0x48113C: mov     eax, [edx+54h]
0x48113F: call    eax
0x481141: cmp     eax, 0Ah
0x481144: jg      short loc_481151
0x481146: push    4
0x481148: mov     ecx, esi
0x48114A: call    NiNode_GetNiPropertyByID
0x48114F: jmp     short loc_481153
0x481151: xor     eax, eax
0x481153: cmp     eax, [esp+10h+arg_4]
0x481157: jnz     short loc_481160
0x481159: mov     al, 1
0x48115B: pop     esi
0x48115C: pop     ebp
0x48115D: pop     ebx
0x48115E: pop     edi
0x48115F: retn
0x481160: cmp     byte ptr [esp+10h+arg_C], 0
0x481165: jz      short loc_481182
0x481167: mov     eax, [edi+8]
0x48116A: test    eax, eax
0x48116C: jz      short loc_4811A1
0x48116E: push    5; MaxCount
0x481170: push    offset aDecal; "Decal"
0x481175: push    eax; Str1
0x481176: call    _strncmp
0x48117B: add     esp, 0Ch
0x48117E: test    eax, eax
0x481180: jz      short loc_4811A1
0x481182: test    bl, bl
0x481184: jz      short loc_48119D
0x481186: mov     eax, [edi+8]
0x481189: push    7; MaxCount
0x48118B: push    offset aBlock_1; "Block ("
0x481190: push    eax; Str1
0x481191: call    _strncmp
0x481196: add     esp, 0Ch
0x481199: test    eax, eax
0x48119B: jnz     short loc_4811A1
0x48119D: add     dword ptr [ebp+0], 1
0x4811A1: mov     edx, [edi]
0x4811A3: mov     eax, [edx+8]
0x4811A6: mov     ecx, edi
0x4811A8: call    eax
0x4811AA: mov     edi, eax
0x4811AC: test    edi, edi
0x4811AE: jz      short loc_4811F9
0x4811B0: movzx   eax, word ptr [edi+0B6h]
0x4811B7: xor     esi, esi
0x4811B9: test    eax, eax
0x4811BB: jbe     short loc_4811F9
0x4811BD: cmp     eax, esi
0x4811BF: ja      short loc_4811C5
0x4811C1: xor     eax, eax
0x4811C3: jmp     short loc_4811CE
0x4811C5: mov     ecx, [edi+0B0h]
0x4811CB: mov     eax, [ecx+esi*4]
0x4811CE: mov     edx, [esp+10h+arg_C]
0x4811D2: mov     ecx, [esp+10h+arg_4]
0x4811D6: push    ebx
0x4811D7: push    edx
0x4811D8: push    ebp
0x4811D9: push    ecx
0x4811DA: push    eax
0x4811DB: call    sub_4810E0
0x4811E0: add     esp, 14h
0x4811E3: test    al, al
0x4811E5: jnz     loc_48115B
0x4811EB: movzx   eax, word ptr [edi+0B6h]
0x4811F2: add     esi, 1
0x4811F5: cmp     eax, esi
0x4811F7: ja      short loc_4811C5
0x4811F9: pop     esi
0x4811FA: pop     ebp
0x4811FB: pop     ebx
0x4811FC: xor     al, al
0x4811FE: pop     edi
0x4811FF: retn
0x481200: xor     al, al
0x481202: pop     edi
0x481203: retn
