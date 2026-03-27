0x6A4B30: fld     [esp+arg_0]
0x6A4B34: push    esi
0x6A4B35: push    ecx
0x6A4B36: fstp    [esp+8+var_8]
0x6A4B39: mov     esi, ecx
0x6A4B3B: call    ValueModifierEffect_UpdateEffect
0x6A4B40: mov     eax, [esi+0Ch]
0x6A4B43: mov     ecx, [eax+1Ch]
0x6A4B46: mov     edx, [ecx+58h]
0x6A4B49: shr     edx, 1
0x6A4B4B: test    dl, 1
0x6A4B4E: jnz     short loc_6A4B8F
0x6A4B50: mov     ecx, [esi+20h]; this
0x6A4B53: test    ecx, ecx
0x6A4B55: jz      short loc_6A4B60
0x6A4B57: call    MagicTarget_GetParentActor
0x6A4B5C: mov     ecx, eax
0x6A4B5E: jmp     short loc_6A4B62
0x6A4B60: xor     ecx, ecx
0x6A4B62: fldz
0x6A4B64: fcomp   dword ptr [esi+1Ch]
0x6A4B67: fnstsw  ax
0x6A4B69: test    ah, 5
0x6A4B6C: jnp     short loc_6A4B74
0x6A4B6E: cmp     dword ptr [esi+28h], 4
0x6A4B72: jnz     short loc_6A4B8F
0x6A4B74: fld     dword ptr [esi+18h]
0x6A4B77: push    ecx
0x6A4B78: fmul    [esp+8+arg_0]
0x6A4B7C: fstp    [esp+8+arg_0]
0x6A4B80: fld     [esp+8+arg_0]
0x6A4B84: fstp    [esp+8+var_8]; float
0x6A4B87: push    ecx; int
0x6A4B88: mov     ecx, esi
0x6A4B8A: call    ShieldEffect_ModSecondaryAV
0x6A4B8F: pop     esi
0x6A4B90: retn    4
