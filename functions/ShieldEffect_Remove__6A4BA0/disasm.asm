0x6A4BA0: push    esi
0x6A4BA1: mov     esi, ecx
0x6A4BA3: call    ValueModifierEffect_Remove
0x6A4BA8: mov     eax, [esi+0Ch]
0x6A4BAB: mov     ecx, [eax+1Ch]
0x6A4BAE: mov     edx, [ecx+58h]
0x6A4BB1: shr     edx, 1
0x6A4BB3: test    dl, 1
0x6A4BB6: jz      short loc_6A4BEA
0x6A4BB8: mov     ecx, [esi+20h]; this
0x6A4BBB: test    ecx, ecx
0x6A4BBD: jz      short loc_6A4BD7
0x6A4BBF: call    MagicTarget_GetParentActor
0x6A4BC4: fld     dword ptr [esi+18h]
0x6A4BC7: push    ecx
0x6A4BC8: fchs
0x6A4BCA: fstp    [esp+8+var_8]; float
0x6A4BCD: push    eax; int
0x6A4BCE: mov     ecx, esi
0x6A4BD0: call    ShieldEffect_ModSecondaryAV
0x6A4BD5: pop     esi
0x6A4BD6: retn
0x6A4BD7: fld     dword ptr [esi+18h]
0x6A4BDA: push    ecx
0x6A4BDB: xor     eax, eax
0x6A4BDD: fchs
0x6A4BDF: fstp    [esp+8+var_8]; float
0x6A4BE2: push    eax; int
0x6A4BE3: mov     ecx, esi
0x6A4BE5: call    ShieldEffect_ModSecondaryAV
0x6A4BEA: pop     esi
0x6A4BEB: retn
