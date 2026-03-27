0x5F4565: mov     eax, [edi+0Ch]
0x5F4568: mov     edx, [eax]
0x5F456A: add     edi, 0Ch
0x5F456D: push    esi
0x5F456E: mov     ecx, edi
0x5F4570: call    edx
0x5F4572: fstp    [esp+4+arg_18]
0x5F4576: cmp     byte ptr [esp+4+arg_24], 0
0x5F457B: push    9
0x5F457D: mov     ecx, esi
0x5F457F: jz      short loc_5F4590
0x5F4581: call    Actor_GetBaseCalcAVi
0x5F4586: mov     [esp+4+arg_24], eax
0x5F458A: fild    [esp+4+arg_24]
0x5F458E: jmp     short loc_5F45A2
0x5F4590: mov     eax, [esi]
0x5F4592: mov     edx, [eax+284h]
0x5F4598: call    edx
0x5F459A: mov     [esp+8+arg_20], eax
0x5F459E: fild    [esp+8+arg_20]
0x5F45A2: fld     [esp+4+arg_18]
0x5F45A6: mov     byte ptr [esp+4+arg_18], 1
0x5F45AB: fcompp
0x5F45AD: fnstsw  ax
0x5F45AF: test    ah, 41h
0x5F45B2: jnp     short Actor_MagicCaster_IsMagicItemUseable___CheckMasteryLevel
0x5F45B4: mov     byte ptr [esp+4+arg_18], 0
