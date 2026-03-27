0x782530: mov     eax, [esp+arg_10]
0x782534: mov     ecx, [esp+arg_14]
0x782538: push    ebx
0x782539: mov     ebx, [esp+4+arg_C]
0x78253D: push    ebp
0x78253E: mov     ebp, [esp+8+Src]
0x782542: test    ebp, ebp
0x782544: push    esi
0x782545: push    edi; ArgList
0x782546: mov     edi, [esp+10h+arg_8]
0x78254A: mov     dword ptr [edi], 0
0x782550: mov     dword ptr [ebx], 0
0x782556: mov     dword ptr [eax], 0
0x78255C: mov     dword ptr [ecx], 0
0x782562: jz      short loc_78258A
0x782564: mov     esi, [esp+10h+Size]
0x782568: test    esi, esi
0x78256A: jz      short loc_78258A
0x78256C: push    esi; Size
0x78256D: call    FormHeapAlloc
0x782572: push    esi; Size
0x782573: push    ebp; Src
0x782574: push    eax; Dst
0x782575: mov     [edi], eax
0x782577: call    _memcpy
0x78257C: add     esp, 10h
0x78257F: pop     edi
0x782580: mov     [ebx], esi
0x782582: pop     esi
0x782583: pop     ebp
0x782584: mov     al, 1
0x782586: pop     ebx
0x782587: retn    18h
0x78258A: push    offset aInvalidShaderB; "Invalid shader buffer\n"
0x78258F: push    0; int
0x782591: push    1; int
0x782593: call    sub_738460
0x782598: add     esp, 0Ch
0x78259B: pop     edi
0x78259C: pop     esi
0x78259D: pop     ebp
0x78259E: xor     al, al
0x7825A0: pop     ebx
0x7825A1: retn    18h
