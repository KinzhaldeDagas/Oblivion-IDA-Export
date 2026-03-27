0x7EE800: sub     esp, 0Ch
0x7EE803: push    esi
0x7EE804: mov     esi, ecx
0x7EE806: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x7EE80B: fldz
0x7EE80D: mov     dword ptr [esi], offset ??_7PrecipitationShader@@6B@; const PrecipitationShader::`vftable'
0x7EE813: mov     dword ptr [esi+0ACh], 0
0x7EE81D: fst     dword ptr [esi+0B0h]
0x7EE823: fst     dword ptr [esi+0B4h]
0x7EE829: fst     dword ptr [esi+0B8h]
0x7EE82F: fst     [esp+10h+var_C]
0x7EE833: mov     eax, [esp+10h+var_C]
0x7EE837: mov     [esi+0A0h], eax
0x7EE83D: fst     [esp+10h+var_8]
0x7EE841: mov     ecx, [esp+10h+var_8]
0x7EE845: fstp    [esp+10h+var_4]
0x7EE849: mov     edx, [esp+10h+var_4]
0x7EE84D: mov     [esi+0A4h], ecx
0x7EE853: mov     [esi+0A8h], edx
0x7EE859: mov     eax, ds:0B25AC4h
0x7EE85E: mov     [esi+0B0h], eax
0x7EE864: mov     ecx, ds:0B25AC8h
0x7EE86A: mov     [esi+0B4h], ecx
0x7EE870: mov     edx, ds:0B25ACCh
0x7EE876: mov     [esi+0B8h], edx
0x7EE87C: mov     byte ptr [esi+20h], 1
0x7EE880: mov     eax, esi
0x7EE882: pop     esi
0x7EE883: add     esp, 0Ch
0x7EE886: retn
