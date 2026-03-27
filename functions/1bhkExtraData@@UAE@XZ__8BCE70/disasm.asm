0x8BCE70: push    0FFFFFFFFh
0x8BCE72: push    offset ??1bhkExtraData@@UAE@XZ_SEH
0x8BCE77: mov     eax, large fs:0
0x8BCE7D: push    eax
0x8BCE7E: push    ecx
0x8BCE7F: push    ebx
0x8BCE80: push    esi
0x8BCE81: push    edi
0x8BCE82: mov     eax, ds:0B30AACh
0x8BCE87: xor     eax, esp
0x8BCE89: push    eax
0x8BCE8A: lea     eax, [esp+20h+var_C]
0x8BCE8E: mov     large fs:0, eax
0x8BCE94: mov     edi, ecx
0x8BCE96: mov     [esp+20h+var_10], edi
0x8BCE9A: mov     dword ptr [edi], offset ??_7bhkExtraData@@6B@; const bhkExtraData::`vftable'
0x8BCEA0: lea     esi, [edi+0Ch]
0x8BCEA3: mov     ecx, esi
0x8BCEA5: mov     [esp+20h+var_4], 1
0x8BCEAD: call    sub_8BCC50
0x8BCEB2: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@V?$NiPointer@VNiTimeController@@@@@@6B@; const NiTLargeArray<NiPointer<NiTimeController>>::`vftable'
0x8BCEB8: mov     esi, [esi+4]
0x8BCEBB: test    esi, esi
0x8BCEBD: mov     byte ptr [esp+20h+var_4], 0
0x8BCEC2: jz      short loc_8BCEE1
0x8BCEC4: mov     eax, [esi-4]
0x8BCEC7: push    offset sub_7016A0; void (__thiscall *)(void *)
0x8BCECC: lea     ebx, [esi-4]
0x8BCECF: push    eax; int
0x8BCED0: push    4; unsigned int
0x8BCED2: push    esi; void *
0x8BCED3: call    $LN21
0x8BCED8: push    ebx
0x8BCED9: call    FormHeapFree
0x8BCEDE: add     esp, 4
0x8BCEE1: mov     ecx, edi
0x8BCEE3: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8BCEEB: call    NiExtraData_dtor
0x8BCEF0: mov     ecx, [esp+20h+var_C]
0x8BCEF4: mov     large fs:0, ecx
0x8BCEFB: pop     ecx
0x8BCEFC: pop     edi
0x8BCEFD: pop     esi
0x8BCEFE: pop     ebx
0x8BCEFF: add     esp, 10h
0x8BCF02: retn
