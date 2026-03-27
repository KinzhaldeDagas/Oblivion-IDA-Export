0x6F9030: push    esi
0x6F9031: mov     esi, ecx
0x6F9033: call    sub_6F8AF0
0x6F9038: mov     eax, [esp+4+arg_0]
0x6F903C: push    20h ; ' '
0x6F903E: mov     ecx, esi
0x6F9040: mov     [esi+28h], eax
0x6F9043: mov     dword ptr [esi+2Ch], 0
0x6F904A: call    sub_6F8F00
0x6F904F: cmp     dword ptr [esi+28h], 0
0x6F9053: mov     [esi+30h], al
0x6F9056: jnz     short loc_6F9068
0x6F9058: mov     eax, [esi+8]
0x6F905B: or      eax, 4
0x6F905E: push    0
0x6F9060: push    eax
0x6F9061: mov     ecx, esi
0x6F9063: call    sub_6F89A0
0x6F9068: cmp     [esp+4+arg_4], 0
0x6F906D: jz      short loc_6F907C
0x6F906F: push    esi; struct std::ios_base *
0x6F9070: call    ?_Addstd@ios_base@std@@SAXPAV12@@Z; std::ios_base::_Addstd(std::ios_base *)
0x6F9075: add     esp, 4
0x6F9078: pop     esi
0x6F9079: retn    8
0x6F907C: mov     dword ptr [esi+4], 0
0x6F9083: pop     esi
0x6F9084: retn    8
