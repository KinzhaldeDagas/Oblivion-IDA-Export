0x69DF23: push    114h; Size
0x69DF28: call    FormHeapAlloc
0x69DF2D: mov     esi, eax
0x69DF2F: add     esp, 4
0x69DF32: mov     [esp+arg_24], esi
0x69DF36: test    esi, esi
0x69DF38: mov     [esp+arg_1C], 0
0x69DF40: jz      short loc_69DF69
0x69DF42: mov     ecx, esi; this
0x69DF44: call    ??0NiLight@@QAE@XZ; NiLight::NiLight(void)
0x69DF49: fldz
0x69DF4B: fst     dword ptr [esi+108h]
0x69DF51: mov     dword ptr [esi], offset ??_7NiPointLight@@6B@; const NiPointLight::`vftable'
0x69DF57: fld1
0x69DF59: mov     eax, esi
0x69DF5B: fstp    dword ptr [esi+10Ch]
0x69DF61: fstp    dword ptr [esi+110h]
0x69DF67: jmp     short MagicCaster_CastingVFX_initialize??___CopyLIGHColorToPointLight
0x69DF69: xor     eax, eax
