0x6B9BD0: push    0FFFFFFFFh
0x6B9BD2: push    offset SEH_6B9BD0
0x6B9BD7: mov     eax, large fs:0
0x6B9BDD: push    eax
0x6B9BDE: push    ecx
0x6B9BDF: push    esi
0x6B9BE0: push    edi
0x6B9BE1: mov     eax, ds:0B30AACh
0x6B9BE6: xor     eax, esp
0x6B9BE8: push    eax
0x6B9BE9: lea     eax, [esp+1Ch+var_C]
0x6B9BED: mov     large fs:0, eax
0x6B9BF3: mov     esi, ecx
0x6B9BF5: mov     [esp+1Ch+var_10], esi
0x6B9BF9: xor     edi, edi
0x6B9BFB: push    offset NiRefObject_objcount; lpAddend
0x6B9C00: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x6B9C06: mov     [esi+4], edi
0x6B9C09: call    dword ptr ds:0A28078h
0x6B9C0F: lea     ecx, [esi+8]; this
0x6B9C12: mov     dword ptr [esi], offset ??_7AverageEntry@@6B@; const AverageEntry::`vftable'
0x6B9C18: mov     [esp+1Ch+var_4], edi
0x6B9C1C: mov     [ecx], edi
0x6B9C1E: mov     [ecx+4], di
0x6B9C22: mov     [ecx+6], di
0x6B9C26: mov     [esi+1Ch], edi
0x6B9C29: mov     [esi+14h], edi
0x6B9C2C: mov     [esi+18h], edi
0x6B9C2F: mov     dword ptr [esi+10h], offset ??_7?$NiTPointerList@V?$NiPointer@VAverageEntry@@@@@@6B@; const NiTPointerList<NiPointer<AverageEntry>>::`vftable'
0x6B9C36: mov     eax, [esp+1Ch+a2]
0x6B9C3A: push    edi; a3
0x6B9C3B: push    eax; a2
0x6B9C3C: mov     byte ptr [esp+24h+var_4], 2
0x6B9C41: call    BSStringT_Set
0x6B9C46: mov     ecx, [esp+1Ch+arg_4]
0x6B9C4A: mov     [esi+20h], ecx
0x6B9C4D: mov     [esi+24h], edi
0x6B9C50: mov     eax, esi
0x6B9C52: mov     ecx, [esp+1Ch+var_C]
0x6B9C56: mov     large fs:0, ecx
0x6B9C5D: pop     ecx
0x6B9C5E: pop     edi
0x6B9C5F: pop     esi
0x6B9C60: add     esp, 10h
0x6B9C63: retn    8
