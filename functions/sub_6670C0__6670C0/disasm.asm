0x6670C0: push    esi
0x6670C1: push    edi
0x6670C2: mov     edi, ecx
0x6670C4: xor     esi, esi
0x6670C6: push    esi
0x6670C7: push    2
0x6670C9: call    ActorValue_GetAVFromGroupOffset
0x6670CE: add     esp, 8
0x6670D1: push    eax; float
0x6670D2: mov     ecx, edi
0x6670D4: call    sub_663C50
0x6670D9: add     esi, 1
0x6670DC: cmp     esi, 15h
0x6670DF: jl      short loc_6670C6
0x6670E1: pop     edi
0x6670E2: pop     esi
0x6670E3: retn
