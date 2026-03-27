0x6A28E0: mov     eax, [esi]
0x6A28E2: mov     edx, [eax+18h]
0x6A28E5: mov     ecx, esi
0x6A28E7: call    edx
0x6A28E9: cmp     eax, 4
0x6A28EC: jz      short MagicTarget_AddEffect___ResistanceExempt
0x6A28EE: mov     eax, [esi]
0x6A28F0: mov     edx, [eax+18h]
0x6A28F3: mov     ecx, esi
0x6A28F5: call    edx
0x6A28F7: cmp     eax, 1
0x6A28FA: jz      short MagicTarget_AddEffect___ResistanceExempt
0x6A28FC: cmp     [esp+arg_13], 0
0x6A2901: jnz     short MagicTarget_AddEffect___ResistanceExempt
0x6A2903: mov     eax, [edi]
0x6A2905: mov     ebx, [esp+arg_28]
0x6A2909: mov     edx, [eax+20h]
0x6A290C: push    ebp
0x6A290D: push    esi
0x6A290E: push    ebx
0x6A290F: mov     ecx, edi
0x6A2911: call    edx
0x6A2913: fstp    [esp+0Ch+arg_14]
0x6A2917: fldz
0x6A2919: fcomp   [esp+0Ch+arg_14]
0x6A291D: fnstsw  ax
0x6A291F: test    ah, 1
0x6A2922: jnz     short MagicTarget_AddEffect___GetPlayerTarget
