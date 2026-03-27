0x724760: push    ecx
0x724761: push    ebx
0x724762: mov     ebx, [esp+8+arg_4]
0x724766: push    esi
0x724767: xor     eax, eax
0x724769: push    edi
0x72476A: mov     edi, ecx
0x72476C: mov     [esp+10h+var_4], eax
0x724770: lea     esi, [edi+0ECh]
0x724776: mov     dword ptr [edi+0E8h], 1
0x724780: mov     [esp+10h+var_4], eax
0x724784: movzx   eax, word ptr [esi+8]
0x724788: cmp     ebx, eax
0x72478A: jb      short loc_72479A
0x72478C: movzx   ecx, word ptr [esi+0Eh]
0x724790: add     ecx, ebx
0x724792: push    ecx
0x724793: mov     ecx, esi
0x724795: call    NiTArray_SetSize
0x72479A: lea     edx, [esp+10h+var_4]
0x72479E: push    edx
0x72479F: push    ebx
0x7247A0: mov     ecx, esi
0x7247A2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7247A7: mov     eax, [esp+10h+arg_8]
0x7247AB: mov     esi, [esp+10h+arg_0]
0x7247AF: push    eax
0x7247B0: push    ebx
0x7247B1: push    esi
0x7247B2: mov     ecx, edi
0x7247B4: call    NiNode__SetObjectAt
0x7247B9: pop     edi
0x7247BA: mov     eax, esi
0x7247BC: pop     esi
0x7247BD: pop     ebx
0x7247BE: pop     ecx
0x7247BF: retn    0Ch
