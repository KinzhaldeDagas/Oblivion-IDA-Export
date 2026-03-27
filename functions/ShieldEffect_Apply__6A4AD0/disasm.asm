0x6A4AD0: push    esi
0x6A4AD1: mov     esi, ecx
0x6A4AD3: call    ValueModifierEffect_Apply
0x6A4AD8: mov     eax, [esi+0Ch]
0x6A4ADB: mov     ecx, [eax+1Ch]
0x6A4ADE: mov     edx, [ecx+58h]
0x6A4AE1: shr     edx, 1
0x6A4AE3: test    dl, 1
0x6A4AE6: jnz     short loc_6A4AF4
0x6A4AE8: fldz
0x6A4AEA: fcomp   dword ptr [esi+1Ch]
0x6A4AED: fnstsw  ax
0x6A4AEF: test    ah, 44h
0x6A4AF2: jp      short ShieldEffect_Apply___Done
0x6A4AF4: mov     ecx, [esi+20h]; this
0x6A4AF7: test    ecx, ecx
0x6A4AF9: jz      short loc_6A4B11
0x6A4AFB: call    MagicTarget_GetParentActor
0x6A4B00: fld     dword ptr [esi+18h]
0x6A4B03: push    ecx
0x6A4B04: fstp    [esp+8+var_8]; float
0x6A4B07: push    eax; int
0x6A4B08: mov     ecx, esi
0x6A4B0A: call    ShieldEffect_ModSecondaryAV
0x6A4B0F: pop     esi
0x6A4B10: retn
0x6A4B11: fld     dword ptr [esi+18h]
0x6A4B14: push    ecx
0x6A4B15: xor     eax, eax
0x6A4B17: fstp    [esp+8+var_8]; float
0x6A4B1A: push    eax; int
0x6A4B1B: mov     ecx, esi
0x6A4B1D: call    ShieldEffect_ModSecondaryAV
