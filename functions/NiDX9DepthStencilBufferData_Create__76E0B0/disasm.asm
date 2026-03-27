0x76E0B0: sub     esp, 20h
0x76E0B3: push    ebx
0x76E0B4: push    ebp
0x76E0B5: push    esi
0x76E0B6: push    14h; Size
0x76E0B8: call    FormHeapAlloc
0x76E0BD: mov     esi, eax
0x76E0BF: xor     ebp, ebp
0x76E0C1: add     esp, 4
0x76E0C4: cmp     esi, ebp
0x76E0C6: jz      short loc_76E0ED
0x76E0C8: push    offset NiRefObject_objcount; lpAddend
0x76E0CD: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x76E0D3: mov     [esi+4], ebp
0x76E0D6: call    dword ptr ds:0A28078h
0x76E0DC: mov     [esi+8], ebp
0x76E0DF: mov     [esi+0Ch], ebp
0x76E0E2: mov     [esi+10h], ebp
0x76E0E5: mov     dword ptr [esi], offset ??_7NiDX9ImplicitDepthStencilBufferData@@6B@; const NiDX9ImplicitDepthStencilBufferData::`vftable'
0x76E0EB: jmp     short loc_76E0EF
0x76E0ED: xor     esi, esi
0x76E0EF: mov     eax, [esp+2Ch+arg_0]
0x76E0F3: mov     ecx, [eax]
0x76E0F5: mov     edx, [ecx+0A0h]
0x76E0FB: lea     ebx, [esi+0Ch]
0x76E0FE: push    ebx
0x76E0FF: push    eax
0x76E100: call    edx
0x76E102: test    eax, eax
0x76E104: jge     short loc_76E11D
0x76E106: cmp     esi, ebp
0x76E108: jz      short loc_76E114
0x76E10A: mov     eax, [esi]
0x76E10C: mov     edx, [eax]
0x76E10E: push    1
0x76E110: mov     ecx, esi
0x76E112: call    edx
0x76E114: pop     esi
0x76E115: pop     ebp
0x76E116: xor     eax, eax
0x76E118: pop     ebx
0x76E119: add     esp, 20h
0x76E11C: retn
0x76E11D: mov     eax, [ebx]
0x76E11F: mov     ecx, [eax]
0x76E121: lea     edx, [esp+2Ch+a1]
0x76E125: push    edx
0x76E126: push    eax
0x76E127: mov     eax, [ecx+30h]
0x76E12A: call    eax
0x76E12C: test    eax, eax
0x76E12E: jge     short loc_76E143
0x76E130: mov     edx, [esi]
0x76E132: mov     eax, [edx]
0x76E134: push    1
0x76E136: mov     ecx, esi
0x76E138: call    eax
0x76E13A: pop     esi
0x76E13B: pop     ebp
0x76E13C: xor     eax, eax
0x76E13E: pop     ebx
0x76E13F: add     esp, 20h
0x76E142: retn
0x76E143: mov     ecx, [esp+2Ch+a1]
0x76E147: push    edi
0x76E148: push    ecx; a1
0x76E149: call    CreateSurfaceData
0x76E14E: mov     edi, [esp+34h+arg_4]
0x76E152: mov     [esi+10h], eax
0x76E155: mov     ecx, [edi]; this
0x76E157: add     esp, 4
0x76E15A: cmp     ecx, ebp
0x76E15C: push    esi; a2
0x76E15D: jnz     short loc_76E175
0x76E15F: mov     edx, [esp+34h+var_4]
0x76E163: mov     eax, [esp+34h+var_8]
0x76E167: push    edx
0x76E168: push    eax
0x76E169: call    sub_70BE70
0x76E16E: add     esp, 0Ch
0x76E171: mov     [edi], eax
0x76E173: jmp     short loc_76E17A
0x76E175: call    sub_70BD60
0x76E17A: mov     ecx, [edi]
0x76E17C: mov     edx, [ebx]
0x76E17E: pop     edi
0x76E17F: mov     [esi+8], ecx
0x76E182: mov     eax, esi
0x76E184: pop     esi
0x76E185: pop     ebp
0x76E186: mov     ds:0B42610h, edx
0x76E18C: pop     ebx
0x76E18D: add     esp, 20h
0x76E190: retn
