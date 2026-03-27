0x675090: sub     esp, 0Ch
0x675093: push    ebx
0x675094: push    ebp
0x675095: push    esi
0x675096: mov     esi, ecx
0x675098: xor     ebx, ebx
0x67509A: push    edi
0x67509B: mov     [esp+1Ch+var_8], esi
0x67509F: mov     [esp+1Ch+var_4], ebx
0x6750A3: test    ebx, ebx
0x6750A5: jnz     short loc_6750AA
0x6750A7: push    ebx
0x6750A8: jmp     short loc_6750BC
0x6750AA: cmp     ebx, 1
0x6750AD: jnz     short loc_6750B2
0x6750AF: push    ebx
0x6750B0: jmp     short loc_6750BC
0x6750B2: cmp     ebx, 2
0x6750B5: jnz     short loc_6750BA
0x6750B7: push    ebx
0x6750B8: jmp     short loc_6750BC
0x6750BA: push    3; a2
0x6750BC: mov     ecx, esi; this
0x6750BE: call    sub_673A50
0x6750C3: mov     ecx, eax; this
0x6750C5: call    sub_7616D0
0x6750CA: test    eax, eax
0x6750CC: mov     [esp+1Ch+var_C], eax
0x6750D0: jz      loc_675200
0x6750D6: mov     edi, [esp+1Ch+var_C]
0x6750DA: cmp     dword ptr [edi+4], 0
0x6750DE: jnz     short loc_6750E9
0x6750E0: cmp     dword ptr [edi], 0
0x6750E3: jz      loc_675200
0x6750E9: mov     ecx, [edi]
0x6750EB: mov     eax, [ecx]
0x6750ED: mov     edx, [eax+190h]
0x6750F3: xor     esi, esi
0x6750F5: call    edx
0x6750F7: test    al, al
0x6750F9: jz      short loc_6750FD
0x6750FB: mov     esi, [edi]
0x6750FD: xor     ebp, ebp
0x6750FF: test    esi, esi
0x675101: jz      loc_6751ED
0x675107: mov     ecx, [esi+58h]
0x67510A: xor     ebx, ebx
0x67510C: test    ecx, ecx
0x67510E: jz      short loc_67511C
0x675110: mov     eax, [ecx]
0x675112: mov     edx, [eax+184h]
0x675118: call    edx
0x67511A: mov     ebx, eax
0x67511C: mov     ecx, [esi+58h]
0x67511F: test    ecx, ecx
0x675121: jz      short loc_675151
0x675123: cmp     ebx, [ecx+8]
0x675126: jz      short loc_675151
0x675128: mov     eax, [ecx]
0x67512A: mov     edx, [eax+8]
0x67512D: xor     edi, edi
0x67512F: call    edx
0x675131: cmp     eax, 1
0x675134: ja      short loc_675139
0x675136: mov     edi, [esi+58h]
0x675139: mov     ecx, [esp+1Ch+arg_0]
0x67513D: cmp     ebx, ecx
0x67513F: jnz     short loc_675155
0x675141: test    edi, edi
0x675143: jz      short loc_675155
0x675145: mov     dword ptr [edi+0C0h], 0
0x67514F: jmp     short loc_675155
0x675151: mov     ecx, [esp+1Ch+arg_0]
0x675155: mov     eax, [esi+58h]
0x675158: test    eax, eax
0x67515A: jz      short loc_67519B
0x67515C: cmp     [eax+8], ecx
0x67515F: jnz     short loc_67519B
0x675161: mov     dword ptr [eax+8], 0
0x675168: call    sub_567770
0x67516D: test    al, al
0x67516F: jz      short loc_67517F
0x675171: mov     eax, [esi]
0x675173: mov     edx, [eax+44h]
0x675176: push    30000h
0x67517B: mov     ecx, esi
0x67517D: call    edx
0x67517F: mov     ecx, ds:0B33B00h
0x675185: call    sub_45A500
0x67518A: test    al, al
0x67518C: jnz     short loc_67519B
0x67518E: mov     ecx, [esi+58h]
0x675191: mov     eax, [ecx]
0x675193: mov     edx, [eax+18h]
0x675196: push    1
0x675198: push    esi
0x675199: call    edx
0x67519B: add     esi, 44h ; 'D'
0x67519E: mov     ecx, esi
0x6751A0: call    ExtraDataList__GetExtraPackage
0x6751A5: cmp     eax, [esp+1Ch+arg_0]
0x6751A9: jnz     short loc_6751BC
0x6751AB: push    0
0x6751AD: push    0
0x6751AF: push    0
0x6751B1: push    0
0x6751B3: push    0
0x6751B5: mov     ecx, esi
0x6751B7: call    sub_4268B0
0x6751BC: test    ebp, ebp
0x6751BE: jz      short loc_6751E5
0x6751C0: mov     ecx, [ebp+0]
0x6751C3: test    ecx, ecx
0x6751C5: jz      short loc_6751E5
0x6751C7: mov     eax, [ecx]
0x6751C9: mov     edx, [eax+190h]
0x6751CF: xor     esi, esi
0x6751D1: call    edx
0x6751D3: test    al, al
0x6751D5: jz      short loc_6751DA
0x6751D7: mov     esi, [ebp+0]
0x6751DA: test    esi, esi
0x6751DC: mov     ebp, [ebp+4]
0x6751DF: jnz     loc_675107
0x6751E5: mov     edi, [esp+1Ch+var_C]
0x6751E9: mov     ebx, [esp+1Ch+var_4]
0x6751ED: mov     eax, [edi+4]
0x6751F0: test    eax, eax
0x6751F2: mov     esi, [esp+1Ch+var_8]
0x6751F6: mov     [esp+1Ch+var_C], eax
0x6751FA: jnz     loc_6750D6
0x675200: add     ebx, 1
0x675203: cmp     ebx, 4
0x675206: mov     [esp+1Ch+var_4], ebx
0x67520A: jl      loc_6750A3
0x675210: pop     edi
0x675211: pop     esi
0x675212: pop     ebp
0x675213: pop     ebx
0x675214: add     esp, 0Ch
0x675217: retn    4
