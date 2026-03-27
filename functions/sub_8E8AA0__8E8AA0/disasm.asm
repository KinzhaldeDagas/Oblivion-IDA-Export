0x8E8AA0: push    esi
0x8E8AA1: mov     esi, [esp+4+arg_0]
0x8E8AA5: mov     eax, [esi]
0x8E8AA7: push    edi
0x8E8AA8: mov     edi, ecx
0x8E8AAA: push    edi
0x8E8AAB: push    1
0x8E8AAD: push    offset aTransformshp; "TransformShp"
0x8E8AB2: mov     ecx, esi
0x8E8AB4: call    dword ptr [eax]
0x8E8AB6: mov     eax, [edi+0Ch]
0x8E8AB9: mov     edx, [esi]
0x8E8ABB: push    eax
0x8E8ABC: push    1
0x8E8ABE: push    offset aChildshape; "ChildShape"
0x8E8AC3: mov     ecx, esi
0x8E8AC5: call    dword ptr [edx+8]
0x8E8AC8: mov     edx, [esi]
0x8E8ACA: mov     ecx, esi
0x8E8ACC: call    dword ptr [edx+14h]
0x8E8ACF: pop     edi
0x8E8AD0: pop     esi
0x8E8AD1: retn    4
