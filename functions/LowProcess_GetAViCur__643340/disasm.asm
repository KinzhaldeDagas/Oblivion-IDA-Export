0x643340: sub     esp, 0Ch
0x643343: fldz
0x643345: push    ebx
0x643346: push    esi
0x643347: fstp    dword ptr [esp+14h+var_C]
0x64334B: mov     esi, [esp+14h+arg_8]
0x64334F: test    esi, esi
0x643351: push    edi
0x643352: mov     edi, [esp+18h+arg_4]
0x643356: mov     ebx, ecx
0x643358: jz      short loc_64336A
0x64335A: push    edi
0x64335B: lea     ecx, [esi+88h]
0x643361: call    AVCollection_GetAV
0x643366: fstp    dword ptr [esp+18h+var_C]
0x64336A: cmp     edi, 0Bh
0x64336D: jnz     short loc_64339D
0x64336F: test    esi, esi
0x643371: jz      short loc_64339D
0x643373: push    edi
0x643374: lea     ecx, [ebx+70h]
0x643377: call    AVCollection_GetAV
0x64337C: fstp    [esp+18h+var_C+4]
0x643380: mov     ecx, esi
0x643382: call    sub_4D8FB0
0x643387: fadd    dword ptr [esp+18h+var_C]
0x64338B: fadd    [esp+18h+var_C+4]
0x64338F: call    Double_To_SInt32
0x643394: pop     edi
0x643395: pop     esi
0x643396: pop     ebx
0x643397: add     esp, 0Ch
0x64339A: retn    0Ch
0x64339D: push    edi
0x64339E: lea     ecx, [ebx+70h]
0x6433A1: call    AVCollection_GetAV
0x6433A6: fstp    [esp+18h+var_C+4]
0x6433AA: mov     ecx, [esp+18h+arg_0]
0x6433AE: mov     eax, [ecx]
0x6433B0: mov     edx, [eax+128h]
0x6433B6: push    edi
0x6433B7: call    edx
0x6433B9: mov     [esp+18h+arg_8], eax
0x6433BD: fild    [esp+18h+arg_8]
0x6433C1: fadd    dword ptr [esp+18h+var_C]
0x6433C5: fadd    [esp+18h+var_C+4]
0x6433C9: call    Double_To_SInt32
0x6433CE: pop     edi
0x6433CF: pop     esi
0x6433D0: pop     ebx
0x6433D1: add     esp, 0Ch
0x6433D4: retn    0Ch
