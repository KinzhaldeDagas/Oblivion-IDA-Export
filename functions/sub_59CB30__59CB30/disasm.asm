0x59CB30: mov     eax, [esp+arg_0]
0x59CB34: cmp     eax, 0FFFFFFFFh
0x59CB37: jz      short loc_59CB68
0x59CB39: test    eax, eax
0x59CB3B: jz      short loc_59CB68
0x59CB3D: cmp     eax, 2
0x59CB40: jz      short loc_59CB68
0x59CB42: cmp     eax, 4
0x59CB45: jz      short loc_59CB68
0x59CB47: cmp     eax, 3
0x59CB4A: jz      short loc_59CB68
0x59CB4C: cmp     eax, 1
0x59CB4F: jz      short loc_59CB68
0x59CB51: fld1
0x59CB53: fcomp   [esp+arg_4]
0x59CB57: fnstsw  ax
0x59CB59: test    ah, 41h
0x59CB5C: jp      short loc_59CB68
0x59CB5E: call    sub_59C9F0
0x59CB63: mov     al, 1
0x59CB65: retn    8
0x59CB68: xor     al, al
0x59CB6A: retn    8
