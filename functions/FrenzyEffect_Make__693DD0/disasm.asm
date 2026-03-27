0x693DD0: push    0FFFFFFFFh
0x693DD2: push    offset SEH_8C62B0
0x693DD7: mov     eax, large fs:0
0x693DDD: push    eax
0x693DDE: push    ecx
0x693DDF: push    esi
0x693DE0: mov     eax, ds:0B30AACh
0x693DE5: xor     eax, esp
0x693DE7: push    eax
0x693DE8: lea     eax, [esp+18h+var_C]
0x693DEC: mov     large fs:0, eax
0x693DF2: push    40h ; '@'; Size
0x693DF4: call    FormHeapAlloc
0x693DF9: mov     esi, eax
0x693DFB: add     esp, 4
0x693DFE: mov     [esp+18h+var_10], esi
0x693E02: test    esi, esi
0x693E04: mov     [esp+18h+var_4], 0
0x693E0C: jz      short loc_693E41
0x693E0E: mov     eax, [esp+18h+arg_8]
0x693E12: mov     ecx, [esp+18h+arg_4]
0x693E16: mov     edx, [esp+18h+arg_0]
0x693E1A: push    eax; int
0x693E1B: push    ecx; int
0x693E1C: push    edx; int
0x693E1D: mov     ecx, esi; this
0x693E1F: call    ValueModifierEffect_constr
0x693E24: mov     dword ptr [esi], offset ??_7FrenzyEffect@@6B@; const FrenzyEffect::`vftable'
0x693E2A: mov     byte ptr [esi+3Ch], 0
0x693E2E: mov     eax, esi
0x693E30: mov     ecx, [esp+18h+var_C]
0x693E34: mov     large fs:0, ecx
0x693E3B: pop     ecx
0x693E3C: pop     esi
0x693E3D: add     esp, 10h
0x693E40: retn
0x693E41: xor     eax, eax
0x693E43: mov     ecx, [esp+18h+var_C]
0x693E47: mov     large fs:0, ecx
0x693E4E: pop     ecx
0x693E4F: pop     esi
0x693E50: add     esp, 10h
0x693E53: retn
