0x4134E0: push    ebx
0x4134E1: mov     ebx, [esp+4+arg_0]
0x4134E5: push    esi
0x4134E6: mov     esi, ecx
0x4134E8: cmp     [esi+14h], ebx
0x4134EB: push    edi
0x4134EC: jnb     short loc_4134F3
0x4134EE: call    ?_Xran@_String_base@std@@SAXXZ; std::_String_base::_Xran(void)
0x4134F3: mov     eax, [esi+14h]
0x4134F6: mov     edi, [esp+0Ch+arg_4]
0x4134FA: sub     eax, ebx
0x4134FC: cmp     eax, edi
0x4134FE: jnb     short loc_413502
0x413500: mov     edi, eax
0x413502: test    edi, edi
0x413504: jbe     short loc_41355B
0x413506: mov     ecx, [esi+18h]
0x413509: cmp     ecx, 10h
0x41350C: push    ebp; MaxCount
0x41350D: lea     ebp, [esi+4]
0x413510: jb      short loc_41351B
0x413512: mov     edx, [ebp+0]
0x413515: mov     [esp+10h+arg_0], edx
0x413519: jmp     short loc_41351F
0x41351B: mov     [esp+10h+arg_0], ebp
0x41351F: cmp     ecx, 10h
0x413522: jb      short loc_413529
0x413524: mov     edx, [ebp+0]
0x413527: jmp     short loc_41352B
0x413529: mov     edx, ebp
0x41352B: sub     eax, edi
0x41352D: push    eax; Src
0x41352E: mov     eax, [esp+14h+arg_0]
0x413532: add     eax, ebx
0x413534: add     eax, edi
0x413536: push    eax; Src
0x413537: sub     ecx, ebx
0x413539: push    ecx; DstSize
0x41353A: add     edx, ebx
0x41353C: push    edx; Dst
0x41353D: call    _memmove_s
0x413542: mov     eax, [esi+14h]
0x413545: sub     eax, edi
0x413547: add     esp, 10h
0x41354A: cmp     dword ptr [esi+18h], 10h
0x41354E: mov     [esi+14h], eax
0x413551: jb      short loc_413556
0x413553: mov     ebp, [ebp+0]
0x413556: mov     byte ptr [eax+ebp], 0
0x41355A: pop     ebp
0x41355B: pop     edi
0x41355C: mov     eax, esi
0x41355E: pop     esi
0x41355F: pop     ebx
0x413560: retn    8
