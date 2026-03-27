0x6C61AA: mov     eax, [esp+arg_C]; jumptable 006C6172 default case
0x6C61AE: push    eax
0x6C61AF: push    edi
0x6C61B0: push    offset aSS_6; "%s = %s"
0x6C61B5: push    esi
0x6C61B6: call    __sprintf
0x6C61BB: add     esp, 10h
0x6C61BE: pop     edi
0x6C61BF: mov     eax, esi
0x6C61C1: pop     esi
0x6C61C2: retn
