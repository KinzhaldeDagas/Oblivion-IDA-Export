0x5CFCE0: push    edi
0x5CFCE1: mov     edi, [esp+4+arg_0]
0x5CFCE5: test    edi, edi
0x5CFCE7: jnz     short loc_5CFCED
0x5CFCE9: xor     eax, eax
0x5CFCEB: pop     edi
0x5CFCEC: retn
0x5CFCED: push    ebx
0x5CFCEE: call    sub_5CE840
0x5CFCF3: mov     ebx, eax
0x5CFCF5: test    ebx, ebx
0x5CFCF7: jz      loc_5CFD88
0x5CFCFD: push    esi
0x5CFCFE: push    0; int
0x5CFD00: push    offset ??_R0?AVRechargeMenu@@@8; struct TypeDescriptor *
0x5CFD05: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5CFD0A: push    0; int
0x5CFD0C: mov     ecx, ebx
0x5CFD0E: call    Tile_GetParentMenu
0x5CFD13: push    eax; void *
0x5CFD14: call    OblivionDynamicCast
0x5CFD19: mov     esi, eax
0x5CFD1B: add     esp, 14h
0x5CFD1E: test    esi, esi
0x5CFD20: jz      short loc_5CFD87
0x5CFD22: mov     [esi+48h], edi
0x5CFD25: mov     eax, ds:0B33398h
0x5CFD2A: mov     ecx, [eax+24h]
0x5CFD2D: call    sub_6AC3D0
0x5CFD32: push    0Bh
0x5CFD34: push    5
0x5CFD36: call    TESTopic__GEtTopic
0x5CFD3B: mov     ecx, ds:0B333C4h
0x5CFD41: mov     edx, [edi]
0x5CFD43: mov     edx, [edx+0DCh]
0x5CFD49: add     esp, 8
0x5CFD4C: push    0; a3
0x5CFD4E: push    1
0x5CFD50: push    1
0x5CFD52: push    ecx
0x5CFD53: push    eax
0x5CFD54: mov     ecx, edi
0x5CFD56: call    edx
0x5CFD58: fstp    st
0x5CFD5A: fld1
0x5CFD5C: push    ecx
0x5CFD5D: fstp    [esp+10h+a3]; a3
0x5CFD60: mov     ecx, ebx; this
0x5CFD62: push    0FAEh; a2
0x5CFD67: call    Tile_SetFloat
0x5CFD6C: push    0; ArgList
0x5CFD6E: mov     ecx, esi
0x5CFD70: call    sub_5CEF60
0x5CFD75: push    1
0x5CFD77: mov     ecx, esi
0x5CFD79: call    ??0?$NiTPointerListBase@V?$DFALL@PAVRechargeItemAndIndex@@@@PAVRechargeItemAndIndex@@@@QAE@XZ; NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(void)
0x5CFD7E: push    0; char
0x5CFD80: mov     ecx, esi; int
0x5CFD82: call    EnableMenu
0x5CFD87: pop     esi
0x5CFD88: mov     eax, ebx
0x5CFD8A: pop     ebx
0x5CFD8B: pop     edi
0x5CFD8C: retn
