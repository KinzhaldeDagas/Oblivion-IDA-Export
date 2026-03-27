0x523EB0: push    esi
0x523EB1: mov     esi, ecx
0x523EB3: mov     eax, [esi+4]
0x523EB6: test    eax, eax
0x523EB8: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTArray<NiPointer<NiTexture>>::`vftable'
0x523EBE: jz      short loc_523EDF
0x523EC0: mov     ecx, [eax-4]
0x523EC3: push    edi
0x523EC4: lea     edi, [eax-4]
0x523EC7: push    offset sub_7016A0; void (__thiscall *)(void *)
0x523ECC: push    ecx; int
0x523ECD: push    4; unsigned int
0x523ECF: push    eax; void *
0x523ED0: call    $LN21
0x523ED5: push    edi
0x523ED6: call    FormHeapFree
0x523EDB: add     esp, 4
0x523EDE: pop     edi
0x523EDF: test    [esp+4+arg_0], 1
0x523EE4: jz      short loc_523EEF
0x523EE6: push    esi
0x523EE7: call    FormHeapFree
0x523EEC: add     esp, 4
0x523EEF: mov     eax, esi
0x523EF1: pop     esi
0x523EF2: retn    4
