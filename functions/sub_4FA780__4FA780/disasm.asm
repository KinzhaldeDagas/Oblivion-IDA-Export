0x4FA780: push    0FFFFFFFFh
0x4FA782: push    offset SEH_864830
0x4FA787: mov     eax, large fs:0
0x4FA78D: push    eax
0x4FA78E: push    ebx
0x4FA78F: push    esi
0x4FA790: mov     eax, ds:0B30AACh
0x4FA795: xor     eax, esp
0x4FA797: push    eax
0x4FA798: lea     eax, [esp+18h+var_C]
0x4FA79C: mov     large fs:0, eax
0x4FA7A2: mov     ebx, [esp+18h+arg_4]
0x4FA7A6: test    ebx, ebx
0x4FA7A8: jz      short loc_4FA7FC
0x4FA7AA: mov     esi, [esp+18h+arg_0]
0x4FA7AE: test    esi, esi
0x4FA7B0: jz      short loc_4FA7FC
0x4FA7B2: cmp     dword ptr [esi+4], 0
0x4FA7B6: jnz     short loc_4FA7BD
0x4FA7B8: cmp     dword ptr [esi], 0
0x4FA7BB: jz      short loc_4FA7FC
0x4FA7BD: push    20h ; ' '; Size
0x4FA7BF: call    FormHeapAlloc
0x4FA7C4: add     esp, 4
0x4FA7C7: mov     [esp+18h+arg_4], eax
0x4FA7CB: test    eax, eax
0x4FA7CD: mov     [esp+18h+var_4], 0
0x4FA7D5: jz      short loc_4FA7E3
0x4FA7D7: mov     ecx, [esi]
0x4FA7D9: push    ecx
0x4FA7DA: mov     ecx, eax
0x4FA7DC: call    sub_517AA0
0x4FA7E1: jmp     short loc_4FA7E5
0x4FA7E3: xor     eax, eax
0x4FA7E5: push    eax
0x4FA7E6: mov     ecx, ebx
0x4FA7E8: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4FA7F0: call    BSSimpleList_PushBack
0x4FA7F5: mov     esi, [esi+4]
0x4FA7F8: test    esi, esi
0x4FA7FA: jnz     short loc_4FA7B2
0x4FA7FC: mov     ecx, [esp+18h+var_C]
0x4FA800: mov     large fs:0, ecx
0x4FA807: pop     ecx
0x4FA808: pop     esi
0x4FA809: pop     ebx
0x4FA80A: add     esp, 0Ch
0x4FA80D: retn
