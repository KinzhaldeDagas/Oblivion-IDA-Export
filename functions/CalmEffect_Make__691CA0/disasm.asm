0x691CA0: push    0FFFFFFFFh
0x691CA2: push    offset SEH_8C62B0
0x691CA7: mov     eax, large fs:0
0x691CAD: push    eax
0x691CAE: push    ecx
0x691CAF: push    esi
0x691CB0: mov     eax, ds:0B30AACh
0x691CB5: xor     eax, esp
0x691CB7: push    eax
0x691CB8: lea     eax, [esp+18h+var_C]
0x691CBC: mov     large fs:0, eax
0x691CC2: push    3Ch ; '<'; Size
0x691CC4: call    FormHeapAlloc
0x691CC9: mov     esi, eax
0x691CCB: add     esp, 4
0x691CCE: mov     [esp+18h+var_10], esi
0x691CD2: xor     eax, eax
0x691CD4: cmp     esi, eax
0x691CD6: mov     [esp+18h+var_4], eax
0x691CDA: jz      short loc_691CFA
0x691CDC: mov     eax, [esp+18h+arg_8]
0x691CE0: mov     ecx, [esp+18h+arg_4]
0x691CE4: mov     edx, [esp+18h+arg_0]
0x691CE8: push    eax; int
0x691CE9: push    ecx; int
0x691CEA: push    edx; int
0x691CEB: mov     ecx, esi; this
0x691CED: call    ValueModifierEffect_constr
0x691CF2: mov     dword ptr [esi], offset ??_7CalmEffect@@6B@; const CalmEffect::`vftable'
0x691CF8: mov     eax, esi
0x691CFA: mov     ecx, dword ptr [esp+18h+var_C]
0x691CFE: mov     large fs:0, ecx
0x691D05: pop     ecx
0x691D06: pop     esi
0x691D07: add     esp, 10h
0x691D0A: retn
