0x749BC0: push    esi
0x749BC1: push    edi
0x749BC2: mov     edi, [esp+8+arg_0]
0x749BC6: push    edi
0x749BC7: mov     esi, ecx
0x749BC9: call    sub_717900
0x749BCE: mov     ecx, edi
0x749BD0: call    sub_7124D0
0x749BD5: test    eax, eax
0x749BD7: jbe     short loc_749BF5
0x749BD9: push    ebx
0x749BDA: mov     ebx, eax
0x749BDC: lea     esp, [esp+0]
0x749BE0: mov     ecx, edi
0x749BE2: call    sub_7124A0
0x749BE7: push    eax
0x749BE8: mov     ecx, esi
0x749BEA: call    sub_749990
0x749BEF: sub     ebx, 1
0x749BF2: jnz     short loc_749BE0
0x749BF4: pop     ebx
0x749BF5: pop     edi
0x749BF6: pop     esi
0x749BF7: retn    4
