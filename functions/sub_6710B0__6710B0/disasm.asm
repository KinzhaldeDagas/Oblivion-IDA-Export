0x6710B0: mov     eax, [esp+arg_4]
0x6710B4: push    esi
0x6710B5: mov     esi, ecx
0x6710B7: mov     ecx, [esp+4+arg_0]
0x6710BB: push    eax; int
0x6710BC: push    ecx; int
0x6710BD: mov     ecx, esi; int
0x6710BF: call    sub_602A70
0x6710C4: cmp     dword ptr [esi+5D0h], 0
0x6710CB: jz      short loc_6710EF
0x6710CD: cmp     byte ptr [esi+588h], 0
0x6710D4: mov     ecx, esi; this
0x6710D6: setz    dl
0x6710D9: push    edx; a1
0x6710DA: call    TogglePOV
0x6710DF: cmp     byte ptr [esi+589h], 0
0x6710E6: jz      short loc_6710EF
0x6710E8: mov     ecx, esi
0x6710EA: call    RestoreCamera
0x6710EF: mov     eax, [esi+1E4h]
0x6710F5: push    esi
0x6710F6: push    eax
0x6710F7: call    ActiveEffect_Base_PostLinkAEList
0x6710FC: mov     eax, [esi+578h]
0x671102: add     esp, 8
0x671105: test    eax, eax
0x671107: jz      short loc_671127
0x671109: mov     ecx, [esi+57Ch]
0x67110F: cmp     ecx, 3
0x671112: jz      short loc_671127
0x671114: fld     dword ptr [esi+584h]
0x67111A: push    ecx
0x67111B: fstp    [esp+8+var_8]; float
0x67111E: push    ecx; int
0x67111F: push    eax; int
0x671120: mov     ecx, esi
0x671122: call    sub_66D120
0x671127: call    sub_6930F0
0x67112C: call    NightEyeEffect_SetPlayerShader?
0x671131: mov     ecx, esi
0x671133: call    sub_664320
0x671138: fld     dword ptr [esi+598h]
0x67113E: fstp    [esp+4+arg_4]
0x671142: push    0; a3
0x671144: fld     [esp+8+arg_4]
0x671148: push    ecx
0x671149: mov     ecx, ds:0B333CCh; this
0x67114F: fst     [esp+0Ch+arg_4]
0x671153: fstp    [esp+0Ch+a2]; a2
0x671156: call    SetCameraFOV_0
0x67115B: fld     [esp+4+arg_4]
0x67115F: push    ecx
0x671160: fstp    [esp+8+var_8]; float
0x671163: call    UpdateParticleShaderFOVData
0x671168: add     esp, 4
0x67116B: pop     esi
0x67116C: retn    8
