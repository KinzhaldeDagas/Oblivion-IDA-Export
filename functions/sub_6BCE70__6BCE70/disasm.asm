0x6BCE70: push    ebx
0x6BCE71: mov     ebx, [esp+4+arg_8]
0x6BCE75: test    ebx, ebx
0x6BCE77: jbe     short loc_6BCEAE
0x6BCE79: push    esi
0x6BCE7A: mov     esi, [esp+8+arg_4]
0x6BCE7E: push    edi
0x6BCE7F: mov     edi, [esp+0Ch+arg_0]
0x6BCE83: add     esi, 1Ch
0x6BCE86: lea     eax, [esi-1Ch]
0x6BCE89: push    eax
0x6BCE8A: push    edi
0x6BCE8B: call    sub_6BC1E0
0x6BCE90: add     esp, 8
0x6BCE93: push    edi
0x6BCE94: lea     ecx, [esi-0Ch]
0x6BCE97: call    sub_7094A0
0x6BCE9C: push    edi
0x6BCE9D: mov     ecx, esi
0x6BCE9F: call    sub_7094A0
0x6BCEA4: add     esi, 40h ; '@'
0x6BCEA7: sub     ebx, 1
0x6BCEAA: jnz     short loc_6BCE86
0x6BCEAC: pop     edi
0x6BCEAD: pop     esi
0x6BCEAE: pop     ebx
0x6BCEAF: retn
