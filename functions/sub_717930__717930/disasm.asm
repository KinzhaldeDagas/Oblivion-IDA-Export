0x717930: push    esi
0x717931: mov     esi, [esp+4+arg_0]
0x717935: push    edi
0x717936: push    esi
0x717937: mov     edi, ecx
0x717939: call    NiGeometry__Render
0x71793E: mov     eax, 1
0x717943: cmp     [esi+200h], eax
0x717949: jz      short loc_717953
0x71794B: cmp     [esi+204h], eax
0x717951: jnz     short loc_717968
0x717953: cmp     [esi+20Ch], al
0x717959: jnz     short loc_717968
0x71795B: mov     eax, [esi]
0x71795D: mov     edx, [eax+174h]
0x717963: push    edi
0x717964: mov     ecx, esi
0x717966: call    edx
0x717968: pop     edi
0x717969: pop     esi
0x71796A: retn    4
