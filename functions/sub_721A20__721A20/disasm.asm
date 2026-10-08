0x721A20: fld     [esp+arg_0]
0x721A24: push    esi
0x721A25: mov     esi, ecx
0x721A27: push    ecx
0x721A28: fst     dword ptr [esi+0E0h]
0x721A2E: fstp    [esp+8+var_8]; float
0x721A31: call    sub_70A280; NiNode rigid selected downward: controllers, conditional vfunc+74 and local bound transform, child flag bit1 invokes synchronous vfunc+68 at 70A2F4, then RET 4. No queue/dispatch in this body. Observer completion is not proof of unrelated/async worker completion.
0x721A36: mov     eax, [esi]
0x721A38: mov     edx, [eax+78h]
0x721A3B: mov     ecx, esi
0x721A3D: call    edx
0x721A3F: pop     esi
0x721A40: retn    4
