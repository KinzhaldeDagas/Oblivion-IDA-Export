0x446B90: push    esi
0x446B91: mov     esi, [esp+4+arg_0]
0x446B95: test    esi, esi
0x446B97: jz      short loc_446C0C
0x446B99: push    edi
0x446B9A: mov     edi, [esp+8+a6]
0x446B9E: test    edi, edi
0x446BA0: jz      short loc_446C0B
0x446BA2: mov     ecx, esi; this
0x446BA4: call    TESObjectCELL_IsInterior
0x446BA9: test    al, al
0x446BAB: jnz     short loc_446BE4
0x446BAD: mov     ecx, esi; this
0x446BAF: call    TESObjectCELL_GetWorldSpace
0x446BB4: test    eax, eax
0x446BB6: jz      short loc_446C0B
0x446BB8: mov     ecx, [esp+8+a7]
0x446BBC: fld     [esp+8+arg_10]
0x446BC0: mov     edx, [esp+8+a4]
0x446BC4: push    ecx; int
0x446BC5: push    edi; int
0x446BC6: push    ecx
0x446BC7: fstp    [esp+14h+a5]; float
0x446BCA: push    edx; int
0x446BCB: fld     [esp+18h+arg_8]
0x446BCF: push    ecx
0x446BD0: mov     ecx, [esp+1Ch+a2]
0x446BD4: fstp    [esp+1Ch+a3]; float
0x446BD7: push    ecx; int
0x446BD8: mov     ecx, eax
0x446BDA: call    sub_4F0750
0x446BDF: pop     edi
0x446BE0: pop     esi
0x446BE1: retn    1Ch
0x446BE4: mov     edx, [esp+8+a7]
0x446BE8: fld     [esp+8+arg_10]
0x446BEC: mov     eax, [esp+8+a4]
0x446BF0: push    edx; a7
0x446BF1: push    edi; a6
0x446BF2: push    ecx
0x446BF3: fstp    [esp+14h+a5]; a5
0x446BF6: push    eax; a4
0x446BF7: fld     [esp+18h+arg_8]
0x446BFB: push    ecx
0x446BFC: mov     ecx, [esp+1Ch+a2]
0x446C00: fstp    [esp+1Ch+a3]; a3
0x446C03: push    ecx; a2
0x446C04: mov     ecx, esi; this
0x446C06: call    sub_4CBC20
0x446C0B: pop     edi
0x446C0C: pop     esi
0x446C0D: retn    1Ch
