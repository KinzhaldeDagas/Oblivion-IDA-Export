0x7EE390: mov     eax, ds:0B42EB8h
0x7EE395: mov     ecx, [eax]
0x7EE397: mov     ecx, [ecx+0BCh]
0x7EE39D: mov     edx, [ecx]
0x7EE39F: mov     eax, [edx+1Ch]
0x7EE3A2: call    eax
0x7EE3A4: fld     [esp+arg_8]
0x7EE3A8: cmp     eax, 1Bh
0x7EE3AB: push    ecx
0x7EE3AC: fstp    [esp+4+var_4]; float
0x7EE3AF: jnz     short loc_7EE3C4
0x7EE3B1: mov     ecx, [esp+4+arg_4]
0x7EE3B5: mov     edx, [esp+4+arg_0]
0x7EE3B9: push    ecx; int
0x7EE3BA: push    edx; int
0x7EE3BB: call    sub_7EDCD0
0x7EE3C0: add     esp, 0Ch
0x7EE3C3: retn
0x7EE3C4: mov     eax, [esp+4+arg_4]
0x7EE3C8: mov     ecx, [esp+4+arg_0]
0x7EE3CC: push    eax; int
0x7EE3CD: push    ecx; int
0x7EE3CE: call    sub_7ED6C0
0x7EE3D3: add     esp, 0Ch
0x7EE3D6: retn
