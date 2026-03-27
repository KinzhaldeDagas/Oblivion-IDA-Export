0x721A20: fld     [esp+arg_0]
0x721A24: push    esi
0x721A25: mov     esi, ecx
0x721A27: push    ecx
0x721A28: fst     dword ptr [esi+0E0h]
0x721A2E: fstp    [esp+8+var_8]; float
0x721A31: call    sub_70A280
0x721A36: mov     eax, [esi]
0x721A38: mov     edx, [eax+78h]
0x721A3B: mov     ecx, esi
0x721A3D: call    edx
0x721A3F: pop     esi
0x721A40: retn    4
