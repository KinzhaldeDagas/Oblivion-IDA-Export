0x405090: push    ecx
0x405091: mov     ecx, TES
0x405097: call    sub_43FD20
0x40509C: mov     ecx, TES
0x4050A2: cmp     dword ptr [ecx+34h], 0
0x4050A6: mov     [esp+4+var_4], eax
0x4050A9: jz      short loc_4050B2
0x4050AB: mov     [esp+4+var_4], 1
0x4050B2: push    ebx
0x4050B3: xor     ebx, ebx
0x4050B5: cmp     [esp+8+var_4], ebx
0x4050B9: jbe     short loc_405139
0x4050BB: push    ebp
0x4050BC: push    esi
0x4050BD: push    edi
0x4050BE: mov     edi, edi
0x4050C0: mov     esi, [ecx+34h]
0x4050C3: test    esi, esi
0x4050C5: jnz     short loc_4050D1
0x4050C7: mov     eax, [ecx+3Ch]
0x4050CA: mov     esi, [eax+ebx*4]
0x4050CD: test    esi, esi
0x4050CF: jz      short loc_40512D
0x4050D1: cmp     [esp+14h+arg_0], 0
0x4050D6: jz      short loc_40510E
0x4050D8: mov     ecx, esi; this
0x4050DA: call    TESObjectCELL_GetXCoordinate
0x4050DF: mov     ecx, esi; this
0x4050E1: mov     edi, eax
0x4050E3: call    TESObjectCELL_GetYCoordinate
0x4050E8: mov     ecx, TES
0x4050EE: mov     ebp, eax
0x4050F0: mov     eax, [ecx+20h]
0x4050F3: sub     eax, edi
0x4050F5: cdq
0x4050F6: xor     eax, edx
0x4050F8: sub     eax, edx
0x4050FA: cmp     eax, 2
0x4050FD: jge     short loc_40510E
0x4050FF: mov     eax, [ecx+24h]
0x405102: sub     eax, ebp
0x405104: cdq
0x405105: xor     eax, edx
0x405107: sub     eax, edx
0x405109: cmp     eax, 2
0x40510C: jl      short loc_40512D
0x40510E: fld     [esp+14h+arg_8]
0x405112: sub     esp, 8
0x405115: fstp    [esp+1Ch+var_18]; float
0x405119: mov     ecx, esi
0x40511B: fld     [esp+1Ch+arg_4]
0x40511F: fstp    [esp+1Ch+var_1C]; float
0x405122: call    sub_4D1A90
0x405127: mov     ecx, TES; this
0x40512D: add     ebx, 1
0x405130: cmp     ebx, [esp+14h+var_4]
0x405134: jb      short loc_4050C0
0x405136: pop     edi
0x405137: pop     esi
0x405138: pop     ebp
0x405139: push    1; a2
0x40513B: call    sub_43FC20
0x405140: pop     ebx
0x405141: pop     ecx
0x405142: retn
