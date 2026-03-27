0x626C10: sub     esp, 0Ch
0x626C13: push    esi
0x626C14: push    edi
0x626C15: mov     edi, [esp+14h+arg_0]
0x626C19: mov     eax, [edi]
0x626C1B: mov     edx, [eax+174h]
0x626C21: mov     esi, ecx
0x626C23: mov     ecx, edi
0x626C25: call    edx
0x626C27: push    eax
0x626C28: lea     eax, [esp+18h+var_C]
0x626C2C: push    eax
0x626C2D: mov     ecx, edi
0x626C2F: call    sub_5E03E0
0x626C34: mov     ecx, [eax]
0x626C36: mov     [esi+40h], ecx
0x626C39: mov     edx, [eax+4]
0x626C3C: mov     [esi+44h], edx
0x626C3F: mov     eax, [eax+8]
0x626C42: pop     edi
0x626C43: mov     [esi+48h], eax
0x626C46: pop     esi
0x626C47: add     esp, 0Ch
0x626C4A: retn    4
