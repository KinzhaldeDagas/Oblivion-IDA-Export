0x692C90: push    0FFFFFFFFh
0x692C92: push    offset SEH_8C62B0
0x692C97: mov     eax, large fs:0
0x692C9D: push    eax
0x692C9E: push    ecx
0x692C9F: push    esi
0x692CA0: mov     eax, ds:0B30AACh
0x692CA5: xor     eax, esp
0x692CA7: push    eax
0x692CA8: lea     eax, [esp+18h+var_C]
0x692CAC: mov     large fs:0, eax
0x692CB2: push    3Ch ; '<'; Size
0x692CB4: call    FormHeapAlloc
0x692CB9: mov     esi, eax
0x692CBB: add     esp, 4
0x692CBE: mov     [esp+18h+var_10], esi
0x692CC2: xor     eax, eax
0x692CC4: cmp     esi, eax
0x692CC6: mov     [esp+18h+var_4], eax
0x692CCA: jz      short loc_692CEA
0x692CCC: mov     eax, [esp+18h+arg_8]
0x692CD0: mov     ecx, [esp+18h+arg_4]
0x692CD4: mov     edx, [esp+18h+arg_0]
0x692CD8: push    eax; int
0x692CD9: push    ecx; int
0x692CDA: push    edx; int
0x692CDB: mov     ecx, esi; this
0x692CDD: call    ValueModifierEffect_constr
0x692CE2: mov     dword ptr [esi], offset ??_7DarknessEffect@@6B@; const DarknessEffect::`vftable'
0x692CE8: mov     eax, esi
0x692CEA: mov     ecx, dword ptr [esp+18h+var_C]
0x692CEE: mov     large fs:0, ecx
0x692CF5: pop     ecx
0x692CF6: pop     esi
0x692CF7: add     esp, 10h
0x692CFA: retn
