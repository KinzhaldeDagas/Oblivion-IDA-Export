0x699C10: push    esi
0x699C11: mov     esi, ecx
0x699C13: mov     ecx, [esi+4]
0x699C16: test    ecx, ecx
0x699C18: jz      short loc_699C60
0x699C1A: fld     [esp+4+arg_0]
0x699C1E: push    ecx
0x699C1F: fstp    [esp+8+var_8]; float
0x699C22: call    MagicCaster_CastingVFX_UpdateTimes?
0x699C27: mov     eax, [esi]
0x699C29: mov     edx, [eax+30h]
0x699C2C: mov     ecx, esi
0x699C2E: call    edx
0x699C30: test    eax, eax
0x699C32: jnz     short loc_699C60
0x699C34: fldz
0x699C36: push    edi
0x699C37: mov     edi, [esi+4]
0x699C3A: fcomp   dword ptr [edi+14h]
0x699C3D: fnstsw  ax
0x699C3F: test    ah, 5
0x699C42: jnp     short loc_699C5F
0x699C44: test    edi, edi
0x699C46: jz      short loc_699C58
0x699C48: mov     ecx, edi; this
0x699C4A: call    MagicCaster_CastingVFX_destr
0x699C4F: push    edi
0x699C50: call    FormHeapFree
0x699C55: add     esp, 4
0x699C58: mov     dword ptr [esi+4], 0
0x699C5F: pop     edi
0x699C60: pop     esi
0x699C61: retn    4
