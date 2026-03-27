0x742020: push    esi
0x742021: mov     esi, [esp+4+arg_0]
0x742025: push    edi
0x742026: push    esi
0x742027: mov     edi, ecx
0x742029: call    NiGeometry__Render
0x74202E: mov     eax, 1
0x742033: cmp     [esi+200h], eax
0x742039: jz      short loc_742043
0x74203B: cmp     [esi+204h], eax
0x742041: jnz     short loc_742058
0x742043: cmp     [esi+20Ch], al
0x742049: jnz     short loc_742058
0x74204B: mov     eax, [esi]
0x74204D: mov     edx, [eax+170h]
0x742053: push    edi
0x742054: mov     ecx, esi
0x742056: call    edx
0x742058: pop     edi
0x742059: pop     esi
0x74205A: retn    4
