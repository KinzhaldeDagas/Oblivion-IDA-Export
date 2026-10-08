0x47CE70: fld     [esp+arg_0]
0x47CE74: push    esi
0x47CE75: push    ecx
0x47CE76: fstp    [esp+8+var_8]; float
0x47CE79: mov     esi, ecx
0x47CE7B: call    sub_47CCE0
0x47CE80: fld     [esp+4+arg_0]
0x47CE84: push    ecx
0x47CE85: mov     ecx, esi
0x47CE87: fstp    [esp+8+var_8]; float
0x47CE8A: call    sub_70A280; NiNode rigid selected downward: controllers, conditional vfunc+74 and local bound transform, child flag bit1 invokes synchronous vfunc+68 at 70A2F4, then RET 4. No queue/dispatch in this body. Observer completion is not proof of unrelated/async worker completion.
0x47CE8F: pop     esi
0x47CE90: retn    4
