0x8BCCF0: push    esi
0x8BCCF1: mov     esi, ecx
0x8BCCF3: mov     eax, [esi+4]
0x8BCCF6: test    eax, eax
0x8BCCF8: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@V?$NiPointer@VNiTimeController@@@@@@6B@; const NiTLargeArray<NiPointer<NiTimeController>>::`vftable'
0x8BCCFE: jz      short loc_8BCD1F
0x8BCD00: mov     ecx, [eax-4]
0x8BCD03: push    edi
0x8BCD04: lea     edi, [eax-4]
0x8BCD07: push    offset sub_7016A0; void (__thiscall *)(void *)
0x8BCD0C: push    ecx; int
0x8BCD0D: push    4; unsigned int
0x8BCD0F: push    eax; void *
0x8BCD10: call    $LN21
0x8BCD15: push    edi
0x8BCD16: call    FormHeapFree
0x8BCD1B: add     esp, 4
0x8BCD1E: pop     edi
0x8BCD1F: test    [esp+4+arg_0], 1
0x8BCD24: jz      short loc_8BCD2F
0x8BCD26: push    esi
0x8BCD27: call    FormHeapFree
0x8BCD2C: add     esp, 4
0x8BCD2F: mov     eax, esi
0x8BCD31: pop     esi
0x8BCD32: retn    4
