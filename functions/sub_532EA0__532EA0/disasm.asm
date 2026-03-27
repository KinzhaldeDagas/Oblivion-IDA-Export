0x532EA0: push    esi
0x532EA1: mov     esi, ecx
0x532EA3: mov     eax, [esi+4]
0x532EA6: test    eax, eax
0x532EA8: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VbhkRigidBody@@@@@@6B@; const NiTArray<NiPointer<bhkRigidBody>>::`vftable'
0x532EAE: jz      short loc_532ECF
0x532EB0: mov     ecx, [eax-4]
0x532EB3: push    edi
0x532EB4: lea     edi, [eax-4]
0x532EB7: push    offset sub_7016A0; void (__thiscall *)(void *)
0x532EBC: push    ecx; int
0x532EBD: push    4; unsigned int
0x532EBF: push    eax; void *
0x532EC0: call    $LN21
0x532EC5: push    edi
0x532EC6: call    FormHeapFree
0x532ECB: add     esp, 4
0x532ECE: pop     edi
0x532ECF: test    [esp+4+arg_0], 1
0x532ED4: jz      short loc_532EDF
0x532ED6: push    esi
0x532ED7: call    FormHeapFree
0x532EDC: add     esp, 4
0x532EDF: mov     eax, esi
0x532EE1: pop     esi
0x532EE2: retn    4
