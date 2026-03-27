0x41FE90: push    0FFFFFFFFh
0x41FE92: push    offset SEH_8C8970
0x41FE97: mov     eax, large fs:0
0x41FE9D: push    eax
0x41FE9E: push    ecx
0x41FE9F: push    esi
0x41FEA0: push    edi
0x41FEA1: mov     eax, ___security_cookie
0x41FEA6: xor     eax, esp
0x41FEA8: push    eax
0x41FEA9: lea     eax, [esp+1Ch+var_C]
0x41FEAD: mov     large fs:0, eax
0x41FEB3: mov     edi, ecx
0x41FEB5: push    36h ; '6'; a2
0x41FEB7: call    BaseExtraList_GetExtraData
0x41FEBC: test    eax, eax
0x41FEBE: jnz     short loc_41FF14
0x41FEC0: push    14h; Size
0x41FEC2: call    FormHeapAlloc
0x41FEC7: add     esp, 4
0x41FECA: mov     [esp+1Ch+var_10], eax
0x41FECE: test    eax, eax
0x41FED0: mov     [esp+1Ch+var_4], 0
0x41FED8: jz      short loc_41FEEA
0x41FEDA: mov     ecx, [esp+1Ch+arg_0]
0x41FEDE: push    ecx
0x41FEDF: mov     ecx, eax
0x41FEE1: call    ExtraLeveledItem_constr
0x41FEE6: mov     esi, eax
0x41FEE8: jmp     short loc_41FEEC
0x41FEEA: xor     esi, esi
0x41FEEC: push    esi; BSExtraData *
0x41FEED: mov     ecx, edi; ExtraDataList *
0x41FEEF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41FEF7: call    BaseExtraList_AddExtra
0x41FEFC: mov     byte ptr [esi+10h], 0
0x41FF00: mov     ecx, [esp+1Ch+var_C]
0x41FF04: mov     large fs:0, ecx
0x41FF0B: pop     ecx
0x41FF0C: pop     edi
0x41FF0D: pop     esi
0x41FF0E: add     esp, 10h
0x41FF11: retn    4
0x41FF14: mov     edx, [esp+1Ch+arg_0]
0x41FF18: mov     [eax+0Ch], edx
0x41FF1B: mov     byte ptr [eax+10h], 0
0x41FF1F: mov     ecx, [esp+1Ch+var_C]
0x41FF23: mov     large fs:0, ecx
0x41FF2A: pop     ecx
0x41FF2B: pop     edi
0x41FF2C: pop     esi
0x41FF2D: add     esp, 10h
0x41FF30: retn    4
