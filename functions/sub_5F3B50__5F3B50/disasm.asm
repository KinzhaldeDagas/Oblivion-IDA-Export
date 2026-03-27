0x5F3B50: push    esi
0x5F3B51: push    edi
0x5F3B52: xor     edi, edi
0x5F3B54: cmp     byte ptr ds:0B333B8h, 0
0x5F3B5B: mov     esi, ecx
0x5F3B5D: jz      short loc_5F3B67
0x5F3B5F: pop     edi
0x5F3B60: mov     eax, 5
0x5F3B65: pop     esi
0x5F3B66: retn
0x5F3B67: cmp     [esi+58h], edi
0x5F3B6A: jz      short loc_5F3BAE
0x5F3B6C: mov     ecx, [esi+58h]
0x5F3B6F: mov     eax, [ecx]
0x5F3B71: mov     edx, [eax+2C0h]
0x5F3B77: call    edx
0x5F3B79: test    ax, 400h
0x5F3B7D: jz      short loc_5F3BAE
0x5F3B7F: mov     ecx, [esi+58h]
0x5F3B82: mov     eax, [ecx]
0x5F3B84: mov     edx, [eax+2C0h]
0x5F3B8A: call    edx
0x5F3B8C: test    ax, 800h
0x5F3B90: jnz     short loc_5F3BAE
0x5F3B92: push    1Fh
0x5F3B94: mov     ecx, esi
0x5F3B96: call    Actor_GetBaseCalcAVi
0x5F3B9B: push    eax
0x5F3B9C: call    Calc_MasteryFromSkill
0x5F3BA1: add     esp, 4
0x5F3BA4: cmp     eax, 2
0x5F3BA7: jl      short loc_5F3BAE
0x5F3BA9: pop     edi
0x5F3BAA: xor     eax, eax
0x5F3BAC: pop     esi
0x5F3BAD: retn
0x5F3BAE: mov     eax, [esi]
0x5F3BB0: mov     edx, [eax+170h]
0x5F3BB6: mov     ecx, esi
0x5F3BB8: call    edx
0x5F3BBA: cmp     byte ptr [eax+4], 24h ; '$'
0x5F3BBE: jnz     short loc_5F3BE0
0x5F3BC0: mov     eax, [esi]
0x5F3BC2: mov     edx, [eax+170h]
0x5F3BC8: mov     ecx, esi
0x5F3BCA: call    edx
0x5F3BCC: test    eax, eax
0x5F3BCE: jz      short loc_5F3C1E
0x5F3BD0: fld     dword ptr [eax+110h]
0x5F3BD6: call    Double_To_SInt32
0x5F3BDB: mov     edi, eax
0x5F3BDD: pop     edi
0x5F3BDE: pop     esi
0x5F3BDF: retn
0x5F3BE0: lea     ecx, [esi+44h]; this
0x5F3BE3: call    ExtraDataList_GetContainerChanges
0x5F3BE8: test    eax, eax
0x5F3BEA: jz      short loc_5F3C1E
0x5F3BEC: push    0
0x5F3BEE: push    5
0x5F3BF0: mov     ecx, eax
0x5F3BF2: call    ContainerExtraData_GetEquippedInstance
0x5F3BF7: mov     esi, eax
0x5F3BF9: test    esi, esi
0x5F3BFB: jz      short loc_5F3C1E
0x5F3BFD: mov     eax, [esi+8]
0x5F3C00: test    eax, eax
0x5F3C02: jz      short loc_5F3C0E
0x5F3C04: fld     dword ptr [eax+58h]
0x5F3C07: call    Double_To_SInt32
0x5F3C0C: mov     edi, eax
0x5F3C0E: mov     ecx, esi
0x5F3C10: call    ContainerEntryExtraData_DestroyDataTable
0x5F3C15: push    esi
0x5F3C16: call    FormHeapFree
0x5F3C1B: add     esp, 4
0x5F3C1E: mov     eax, edi
0x5F3C20: pop     edi
0x5F3C21: pop     esi
0x5F3C22: retn
