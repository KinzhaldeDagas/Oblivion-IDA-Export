0x693450: push    0FFFFFFFFh
0x693452: push    offset SEH_8C62B0
0x693457: mov     eax, large fs:0
0x69345D: push    eax
0x69345E: push    ecx
0x69345F: push    esi
0x693460: mov     eax, ds:0B30AACh
0x693465: xor     eax, esp
0x693467: push    eax
0x693468: lea     eax, [esp+18h+var_C]
0x69346C: mov     large fs:0, eax
0x693472: push    3Ch ; '<'; Size
0x693474: call    FormHeapAlloc
0x693479: mov     esi, eax
0x69347B: add     esp, 4
0x69347E: mov     [esp+18h+var_10], esi
0x693482: xor     eax, eax
0x693484: cmp     esi, eax
0x693486: mov     [esp+18h+var_4], eax
0x69348A: jz      short loc_6934AA
0x69348C: mov     eax, [esp+18h+arg_8]
0x693490: mov     ecx, [esp+18h+arg_4]
0x693494: mov     edx, [esp+18h+arg_0]
0x693498: push    eax; int
0x693499: push    ecx; int
0x69349A: push    edx; int
0x69349B: mov     ecx, esi; this
0x69349D: call    ValueModifierEffect_constr
0x6934A2: mov     dword ptr [esi], offset ??_7DetectLifeEffect@@6B@; const DetectLifeEffect::`vftable'
0x6934A8: mov     eax, esi
0x6934AA: mov     ecx, dword ptr [esp+18h+var_C]
0x6934AE: mov     large fs:0, ecx
0x6934B5: pop     ecx
0x6934B6: pop     esi
0x6934B7: add     esp, 10h
0x6934BA: retn
