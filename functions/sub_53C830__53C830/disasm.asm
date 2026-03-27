0x53C830: push    0FFFFFFFFh
0x53C832: push    offset SEH_53C830
0x53C837: mov     eax, large fs:0
0x53C83D: push    eax
0x53C83E: sub     esp, 48h
0x53C841: push    ebx
0x53C842: push    ebp
0x53C843: push    esi
0x53C844: push    edi
0x53C845: mov     eax, ds:0B30AACh
0x53C84A: xor     eax, esp
0x53C84C: push    eax
0x53C84D: lea     eax, [esp+68h+var_C]
0x53C851: mov     large fs:0, eax
0x53C857: mov     ebp, ecx
0x53C859: mov     eax, [esp+68h+arg_0]
0x53C85D: push    eax
0x53C85E: call    sub_543D30
0x53C863: mov     eax, [esp+68h+Src]
0x53C867: test    eax, eax
0x53C869: jnz     short loc_53C870
0x53C86B: mov     eax, offset aMoonRoot; "Moon Root"
0x53C870: mov     ecx, [ebp+4]
0x53C873: push    eax; Src
0x53C874: call    NiObjectNET_SetName
0x53C879: push    30h ; '0'; Size
0x53C87B: call    FormHeapAlloc
0x53C880: push    30h ; '0'; Size
0x53C882: mov     [esp+70h+var_54], eax
0x53C886: call    FormHeapAlloc
0x53C88B: push    30h ; '0'; Size
0x53C88D: mov     ebx, eax
0x53C88F: call    FormHeapAlloc
0x53C894: push    30h ; '0'; Size
0x53C896: mov     [esp+78h+var_48], eax
0x53C89A: call    FormHeapAlloc
0x53C89F: fild    dword ptr [ebp+6Ch]
0x53C8A2: mov     ecx, [ebp+6Ch]
0x53C8A5: test    ecx, ecx
0x53C8A7: mov     [esp+78h+var_44], eax
0x53C8AB: jge     short loc_53C8B3
0x53C8AD: fadd    dword ptr ds:0A2FC78h
0x53C8B3: fstp    [esp+78h+arg_0]
0x53C8B7: fld     [esp+78h+arg_0]
0x53C8BB: fld     st
0x53C8BD: fld     qword ptr ds:0A3D360h
0x53C8C3: fmul    st(1), st
0x53C8C5: fxch    st(1)
0x53C8C7: fstp    [esp+78h+arg_0]
0x53C8CB: fxch    st(1)
0x53C8CD: fstp    [esp+78h+Src]
0x53C8D4: fld     [esp+78h+arg_0]
0x53C8D8: fstp    [esp+78h+var_40]
0x53C8DC: mov     edx, [esp+78h+var_40]
0x53C8E0: fld     [esp+78h+Src]
0x53C8E7: mov     [ebx], edx
0x53C8E9: fstp    [esp+78h+var_3C]
0x53C8ED: mov     ecx, [esp+78h+var_3C]
0x53C8F1: fldz
0x53C8F3: mov     [ebx+4], ecx
0x53C8F6: fst     [esp+78h+var_38]
0x53C8FA: mov     edx, [esp+78h+var_38]
0x53C8FE: mov     [ebx+8], edx
0x53C901: fild    dword ptr [ebp+6Ch]
0x53C904: mov     ecx, [ebp+6Ch]
0x53C907: test    ecx, ecx
0x53C909: jge     short loc_53C911
0x53C90B: fadd    dword ptr ds:0A2FC78h
0x53C911: fmul    st, st(2)
0x53C913: fstp    [esp+78h+arg_0]
0x53C917: fld     [esp+78h+arg_0]
0x53C91B: fst     [esp+78h+arg_0]
0x53C91F: fstp    [esp+78h+Src]
0x53C926: fld     [esp+78h+arg_0]
0x53C92A: fstp    [esp+78h+var_40]
0x53C92E: mov     edx, [esp+78h+var_40]
0x53C932: fld     [esp+78h+Src]
0x53C939: mov     [ebx+0Ch], edx
0x53C93C: fstp    [esp+78h+var_3C]
0x53C940: mov     ecx, [esp+78h+var_3C]
0x53C944: mov     [ebx+10h], ecx
0x53C947: fst     [esp+78h+var_38]
0x53C94B: mov     edx, [esp+78h+var_38]
0x53C94F: mov     [ebx+14h], edx
0x53C952: fild    dword ptr [ebp+6Ch]
0x53C955: mov     ecx, [ebp+6Ch]
0x53C958: test    ecx, ecx
0x53C95A: jge     short loc_53C962
0x53C95C: fadd    dword ptr ds:0A2FC78h
0x53C962: fstp    [esp+78h+arg_0]
0x53C966: fld     [esp+78h+arg_0]
0x53C96A: fst     [esp+78h+arg_0]
0x53C96E: fstp    [esp+78h+Src]
0x53C975: fld     [esp+78h+arg_0]
0x53C979: fstp    [esp+78h+var_40]
0x53C97D: mov     edx, [esp+78h+var_40]
0x53C981: fld     [esp+78h+Src]
0x53C988: mov     [ebx+18h], edx
0x53C98B: fstp    [esp+78h+var_3C]
0x53C98F: mov     ecx, [esp+78h+var_3C]
0x53C993: mov     [ebx+1Ch], ecx
0x53C996: fst     [esp+78h+var_38]
0x53C99A: mov     edx, [esp+78h+var_38]
0x53C99E: mov     [ebx+20h], edx
0x53C9A1: fild    dword ptr [ebp+6Ch]
0x53C9A4: mov     ecx, [ebp+6Ch]
0x53C9A7: test    ecx, ecx
0x53C9A9: jge     short loc_53C9B1
0x53C9AB: fadd    dword ptr ds:0A2FC78h
0x53C9B1: fstp    [esp+78h+arg_0]
0x53C9B5: fld     [esp+78h+arg_0]
0x53C9B9: fst     [esp+78h+arg_0]
0x53C9BD: fmul    st, st(2)
0x53C9BF: fstp    [esp+78h+Src]
0x53C9C6: fld     [esp+78h+arg_0]
0x53C9CA: fstp    [esp+78h+var_40]
0x53C9CE: mov     edx, [esp+78h+var_40]
0x53C9D2: fld     [esp+78h+Src]
0x53C9D9: mov     [ebx+24h], edx
0x53C9DC: fstp    [esp+78h+var_3C]
0x53C9E0: mov     ecx, [esp+78h+var_3C]
0x53C9E4: mov     [ebx+28h], ecx
0x53C9E7: fst     [esp+78h+var_38]
0x53C9EB: mov     edx, [esp+78h+var_38]
0x53C9EF: mov     [ebx+2Ch], edx
0x53C9F2: fild    dword ptr [ebp+6Ch]
0x53C9F5: mov     ecx, [ebp+6Ch]
0x53C9F8: test    ecx, ecx
0x53C9FA: jge     short loc_53CA02
0x53C9FC: fadd    dword ptr ds:0A2FC78h
0x53CA02: fstp    [esp+78h+arg_0]
0x53CA06: fld     [esp+78h+arg_0]
0x53CA0A: fld     st
0x53CA0C: fmul    st, st(3)
0x53CA0E: fstp    [esp+78h+arg_0]
0x53CA12: fstp    [esp+78h+Src]
0x53CA19: fld     [esp+78h+arg_0]
0x53CA1D: fstp    [esp+78h+var_40]
0x53CA21: mov     edx, [esp+78h+var_40]
0x53CA25: fld     [esp+78h+Src]
0x53CA2C: mov     [eax], edx
0x53CA2E: fstp    [esp+78h+var_3C]
0x53CA32: mov     ecx, [esp+78h+var_3C]
0x53CA36: mov     [eax+4], ecx
0x53CA39: fst     [esp+78h+var_38]
0x53CA3D: mov     edx, [esp+78h+var_38]
0x53CA41: mov     [eax+8], edx
0x53CA44: fild    dword ptr [ebp+6Ch]
0x53CA47: mov     ecx, [ebp+6Ch]
0x53CA4A: test    ecx, ecx
0x53CA4C: jge     short loc_53CA54
0x53CA4E: fadd    dword ptr ds:0A2FC78h
0x53CA54: fmul    st, st(2)
0x53CA56: fstp    [esp+78h+arg_0]
0x53CA5A: fld     [esp+78h+arg_0]
0x53CA5E: fst     [esp+78h+arg_0]
0x53CA62: fstp    [esp+78h+Src]
0x53CA69: fld     [esp+78h+arg_0]
0x53CA6D: fstp    [esp+78h+var_40]
0x53CA71: mov     edx, [esp+78h+var_40]
0x53CA75: fld     [esp+78h+Src]
0x53CA7C: mov     [eax+0Ch], edx
0x53CA7F: fstp    [esp+78h+var_3C]
0x53CA83: mov     ecx, [esp+78h+var_3C]
0x53CA87: mov     [eax+10h], ecx
0x53CA8A: fst     [esp+78h+var_38]
0x53CA8E: mov     edx, [esp+78h+var_38]
0x53CA92: mov     [eax+14h], edx
0x53CA95: fild    dword ptr [ebp+6Ch]
0x53CA98: mov     ecx, [ebp+6Ch]
0x53CA9B: test    ecx, ecx
0x53CA9D: jge     short loc_53CAA5
0x53CA9F: fadd    dword ptr ds:0A2FC78h
0x53CAA5: fstp    [esp+78h+arg_0]
0x53CAA9: fld     [esp+78h+arg_0]
0x53CAAD: fst     [esp+78h+arg_0]
0x53CAB1: fstp    [esp+78h+Src]
0x53CAB8: fld     [esp+78h+arg_0]
0x53CABC: fstp    [esp+78h+var_40]
0x53CAC0: mov     edx, [esp+78h+var_40]
0x53CAC4: fld     [esp+78h+Src]
0x53CACB: mov     [eax+18h], edx
0x53CACE: fstp    [esp+78h+var_3C]
0x53CAD2: mov     ecx, [esp+78h+var_3C]
0x53CAD6: mov     [eax+1Ch], ecx
0x53CAD9: fst     [esp+78h+var_38]
0x53CADD: mov     edx, [esp+78h+var_38]
0x53CAE1: mov     [eax+20h], edx
0x53CAE4: fild    dword ptr [ebp+6Ch]
0x53CAE7: mov     ecx, [ebp+6Ch]
0x53CAEA: test    ecx, ecx
0x53CAEC: jge     short loc_53CAF4
0x53CAEE: fadd    dword ptr ds:0A2FC78h
0x53CAF4: fstp    [esp+78h+arg_0]
0x53CAF8: push    20h ; ' '; Size
0x53CAFA: fld     [esp+7Ch+arg_0]
0x53CB01: fst     [esp+7Ch+arg_0]
0x53CB08: fmulp   st(2), st
0x53CB0A: fxch    st(1)
0x53CB0C: fstp    [esp+7Ch+Src]
0x53CB13: fld     [esp+7Ch+arg_0]
0x53CB1A: fstp    [esp+7Ch+var_40]
0x53CB1E: mov     edx, [esp+7Ch+var_40]
0x53CB22: fld     [esp+7Ch+Src]
0x53CB29: mov     [eax+24h], edx
0x53CB2C: fstp    [esp+7Ch+var_3C]
0x53CB30: mov     ecx, [esp+7Ch+var_3C]
0x53CB34: mov     [eax+28h], ecx
0x53CB37: fstp    [esp+7Ch+var_38]
0x53CB3B: mov     edx, [esp+7Ch+var_38]
0x53CB3F: mov     [eax+2Ch], edx
0x53CB42: call    FormHeapAlloc
0x53CB47: mov     esi, eax
0x53CB49: push    20h ; ' '; Size
0x53CB4B: mov     [esp+80h+Src], esi
0x53CB52: call    FormHeapAlloc
0x53CB57: fldz
0x53CB59: fst     [esp+80h+var_40]
0x53CB5D: push    40h ; '@'; Size
0x53CB5F: mov     ecx, [esp+84h+var_40]
0x53CB63: fst     [esp+84h+var_3C]
0x53CB67: mov     edx, [esp+84h+var_3C]
0x53CB6B: fst     [esp+84h+var_40]
0x53CB6F: fld1
0x53CB71: mov     [esi], ecx
0x53CB73: mov     ecx, [esp+84h+var_40]
0x53CB77: fst     [esp+84h+var_3C]
0x53CB7B: mov     [esi+4], edx
0x53CB7E: fst     [esp+84h+var_40]
0x53CB82: mov     edx, [esp+84h+var_3C]
0x53CB86: fxch    st(1)
0x53CB88: mov     [esi+8], ecx
0x53CB8B: fst     [esp+84h+var_3C]
0x53CB8F: mov     ecx, [esp+84h+var_40]
0x53CB93: fxch    st(1)
0x53CB95: mov     [esi+0Ch], edx
0x53CB98: fst     [esp+84h+var_40]
0x53CB9C: mov     edx, [esp+84h+var_3C]
0x53CBA0: fst     [esp+84h+var_3C]
0x53CBA4: mov     [esi+10h], ecx
0x53CBA7: fxch    st(1)
0x53CBA9: mov     ecx, [esp+84h+var_40]
0x53CBAD: fst     [esp+84h+var_40]
0x53CBB1: mov     [esi+14h], edx
0x53CBB4: mov     edx, [esp+84h+var_3C]
0x53CBB8: fst     [esp+84h+var_3C]
0x53CBBC: mov     [esi+18h], ecx
0x53CBBF: mov     ecx, [esp+84h+var_40]
0x53CBC3: fst     [esp+84h+var_40]
0x53CBC7: mov     [esi+1Ch], edx
0x53CBCA: fxch    st(1)
0x53CBCC: mov     edx, [esp+84h+var_3C]
0x53CBD0: fst     [esp+84h+var_3C]
0x53CBD4: mov     [eax], ecx
0x53CBD6: mov     ecx, [esp+84h+var_40]
0x53CBDA: fst     [esp+84h+var_40]
0x53CBDE: mov     [eax+4], edx
0x53CBE1: fxch    st(1)
0x53CBE3: mov     edx, [esp+84h+var_3C]
0x53CBE7: fstp    [esp+84h+var_3C]
0x53CBEB: mov     [eax+8], ecx
0x53CBEE: mov     ecx, [esp+84h+var_40]
0x53CBF2: fst     [esp+84h+var_40]
0x53CBF6: mov     [eax+0Ch], edx
0x53CBF9: mov     edx, [esp+84h+var_3C]
0x53CBFD: fstp    [esp+84h+var_3C]
0x53CC01: mov     [eax+10h], ecx
0x53CC04: mov     ecx, [esp+84h+var_40]
0x53CC08: mov     [eax+14h], edx
0x53CC0B: mov     edx, [esp+84h+var_3C]
0x53CC0F: mov     [esp+84h+var_4C], eax
0x53CC13: mov     [eax+18h], ecx
0x53CC16: mov     [eax+1Ch], edx
0x53CC19: call    FormHeapAlloc
0x53CC1E: mov     esi, eax
0x53CC20: add     esp, 1Ch
0x53CC23: mov     [esp+68h+arg_0], esi
0x53CC27: test    esi, esi
0x53CC29: mov     [esp+68h+var_4], 0
0x53CC31: jz      short loc_53CC44
0x53CC33: push    offset sub_47EA50
0x53CC38: push    4
0x53CC3A: push    10h
0x53CC3C: push    esi
0x53CC3D: call    sub_401080
0x53CC42: jmp     short loc_53CC46
0x53CC44: xor     esi, esi
0x53CC46: push    40h ; '@'; Size
0x53CC48: mov     [esp+6Ch+var_4], 0FFFFFFFFh
0x53CC50: call    FormHeapAlloc
0x53CC55: mov     edi, eax
0x53CC57: add     esp, 4
0x53CC5A: mov     [esp+68h+arg_0], edi
0x53CC5E: test    edi, edi
0x53CC60: mov     [esp+68h+var_4], 1
0x53CC68: jz      short loc_53CC7B
0x53CC6A: push    offset sub_47EA50
0x53CC6F: push    4
0x53CC71: push    10h
0x53CC73: push    edi
0x53CC74: call    sub_401080
0x53CC79: jmp     short loc_53CC7D
0x53CC7B: xor     edi, edi
0x53CC7D: fld1
0x53CC7F: push    0Ch; Size
0x53CC81: fst     [esp+6Ch+var_40]
0x53CC85: mov     [esp+6Ch+var_4], 0FFFFFFFFh
0x53CC8D: mov     eax, [esp+6Ch+var_40]
0x53CC91: fldz
0x53CC93: mov     [esi], eax
0x53CC95: fst     [esp+6Ch+var_3C]
0x53CC99: mov     [esi+10h], eax
0x53CC9C: fstp    [esp+6Ch+var_38]
0x53CCA0: mov     ecx, [esp+6Ch+var_3C]
0x53CCA4: mov     edx, [esp+6Ch+var_38]
0x53CCA8: mov     [esi+4], ecx
0x53CCAB: mov     [esi+8], edx
0x53CCAE: fstp    [esp+6Ch+var_34]
0x53CCB2: mov     edx, [esp+6Ch+var_34]
0x53CCB6: mov     [esi+0Ch], edx
0x53CCB9: mov     edx, [esp+6Ch+var_38]
0x53CCBD: mov     [esi+14h], ecx
0x53CCC0: mov     [esi+18h], edx
0x53CCC3: mov     edx, [esp+6Ch+var_34]
0x53CCC7: mov     [esi+1Ch], edx
0x53CCCA: mov     edx, [esp+6Ch+var_38]
0x53CCCE: mov     [esi+20h], eax
0x53CCD1: mov     [esi+24h], ecx
0x53CCD4: mov     [esi+28h], edx
0x53CCD7: mov     edx, [esp+6Ch+var_34]
0x53CCDB: mov     [esi+2Ch], edx
0x53CCDE: mov     edx, [esp+6Ch+var_38]
0x53CCE2: mov     [esi+30h], eax
0x53CCE5: mov     [esi+34h], ecx
0x53CCE8: mov     [esi+38h], edx
0x53CCEB: mov     edx, [esp+6Ch+var_34]
0x53CCEF: mov     [esi+3Ch], edx
0x53CCF2: mov     edx, [esp+6Ch+var_38]
0x53CCF6: mov     [edi], eax
0x53CCF8: mov     [edi+4], ecx
0x53CCFB: mov     [edi+8], edx
0x53CCFE: mov     edx, [esp+6Ch+var_34]
0x53CD02: mov     [edi+0Ch], edx
0x53CD05: mov     edx, [esp+6Ch+var_38]
0x53CD09: mov     [edi+10h], eax
0x53CD0C: mov     [edi+14h], ecx
0x53CD0F: mov     [edi+18h], edx
0x53CD12: mov     edx, [esp+6Ch+var_34]
0x53CD16: mov     [edi+20h], eax
0x53CD19: mov     [edi+1Ch], edx
0x53CD1C: mov     edx, [esp+6Ch+var_38]
0x53CD20: mov     [edi+30h], eax
0x53CD23: mov     eax, [esp+6Ch+var_38]
0x53CD27: mov     [edi+24h], ecx
0x53CD2A: mov     [edi+28h], edx
0x53CD2D: mov     edx, [esp+6Ch+var_34]
0x53CD31: mov     [edi+34h], ecx
0x53CD34: mov     [edi+38h], eax
0x53CD37: mov     [edi+2Ch], edx
0x53CD3A: mov     [edi+3Ch], edx
0x53CD3D: call    FormHeapAlloc
0x53CD42: push    0Ch; Size
0x53CD44: mov     [esp+70h+arg_0], eax
0x53CD48: call    FormHeapAlloc
0x53CD4D: mov     ecx, [esp+70h+arg_0]
0x53CD51: mov     word ptr [ecx], 0
0x53CD56: mov     word ptr [ecx+4], 2
0x53CD5C: mov     word ptr [ecx+6], 2
0x53CD62: mov     word ptr [ecx+0Ah], 3
0x53CD68: mov     edx, 1
0x53CD6D: mov     [ecx+2], dx
0x53CD71: mov     [ecx+8], dx
0x53CD75: mov     ecx, 2
0x53CD7A: push    0C0h ; 'À'; Size
0x53CD7F: mov     [esp+74h+var_50], eax
0x53CD83: mov     word ptr [eax], 0
0x53CD88: mov     [eax+2], dx
0x53CD8C: mov     [eax+4], cx
0x53CD90: mov     [eax+6], cx
0x53CD94: mov     [eax+8], dx
0x53CD98: mov     word ptr [eax+0Ah], 3
0x53CD9E: call    FormHeapAlloc
0x53CDA3: add     esp, 0Ch
0x53CDA6: mov     [esp+68h+var_40], eax
0x53CDAA: test    eax, eax
0x53CDAC: mov     [esp+68h+var_4], 2
0x53CDB4: jz      short loc_53CDDA
0x53CDB6: mov     ecx, [esp+68h+arg_0]
0x53CDBA: mov     edx, [esp+68h+Src]
0x53CDBE: push    ecx
0x53CDBF: mov     ecx, [esp+6Ch+var_54]
0x53CDC3: push    2
0x53CDC5: push    0
0x53CDC7: push    1
0x53CDC9: push    edx
0x53CDCA: push    esi
0x53CDCB: push    ecx
0x53CDCC: push    ebx
0x53CDCD: push    4
0x53CDCF: mov     ecx, eax
0x53CDD1: call    sub_7174B0
0x53CDD6: mov     esi, eax
0x53CDD8: jmp     short loc_53CDDC
0x53CDDA: xor     esi, esi
0x53CDDC: mov     ebx, [ebp+10h]
0x53CDDF: cmp     ebx, esi
0x53CDE1: mov     [esp+68h+var_4], 0FFFFFFFFh
0x53CDE9: jz      short loc_53CE1C
0x53CDEB: test    ebx, ebx
0x53CDED: jz      short loc_53CE0B
0x53CDEF: lea     edx, [ebx+4]
0x53CDF2: push    edx; lpAddend
0x53CDF3: call    dword ptr ds:0A2807Ch
0x53CDF9: test    eax, eax
0x53CDFB: jnz     short loc_53CE0B
0x53CDFD: test    ebx, ebx
0x53CDFF: jz      short loc_53CE0B
0x53CE01: mov     eax, [ebx]
0x53CE03: mov     edx, [eax]
0x53CE05: push    1
0x53CE07: mov     ecx, ebx
0x53CE09: call    edx
0x53CE0B: test    esi, esi
0x53CE0D: mov     [ebp+10h], esi
0x53CE10: jz      short loc_53CE1C
0x53CE12: add     esi, 4
0x53CE15: push    esi; lpAddend
0x53CE16: call    dword ptr ds:0A28078h
0x53CE1C: mov     ecx, [ebp+10h]
0x53CE1F: push    offset aMoonMesh; "Moon Mesh"
0x53CE24: call    NiObjectNET_SetName
0x53CE29: mov     eax, [ebp+10h]
0x53CE2C: or      word ptr [eax+18h], 2
0x53CE31: push    0C0h ; 'À'; Size
0x53CE36: call    FormHeapAlloc
0x53CE3B: add     esp, 4
0x53CE3E: mov     [esp+68h+arg_0], eax
0x53CE42: test    eax, eax
0x53CE44: mov     ebx, 3
0x53CE49: mov     [esp+68h+var_4], ebx
0x53CE4D: jz      short loc_53CE77
0x53CE4F: mov     ecx, [esp+68h+var_50]
0x53CE53: mov     edx, [esp+68h+var_4C]
0x53CE57: push    ecx
0x53CE58: mov     ecx, [esp+6Ch+var_48]
0x53CE5C: push    2
0x53CE5E: push    0
0x53CE60: push    1
0x53CE62: push    edx
0x53CE63: mov     edx, [esp+7Ch+var_44]
0x53CE67: push    edi
0x53CE68: push    ecx
0x53CE69: push    edx
0x53CE6A: push    4
0x53CE6C: mov     ecx, eax
0x53CE6E: call    sub_7174B0
0x53CE73: mov     esi, eax
0x53CE75: jmp     short loc_53CE79
0x53CE77: xor     esi, esi
0x53CE79: mov     edi, [ebp+14h]
0x53CE7C: cmp     edi, esi
0x53CE7E: mov     [esp+68h+var_4], 0FFFFFFFFh
0x53CE86: jz      short loc_53CEB9
0x53CE88: test    edi, edi
0x53CE8A: jz      short loc_53CEA8
0x53CE8C: lea     eax, [edi+4]
0x53CE8F: push    eax; lpAddend
0x53CE90: call    dword ptr ds:0A2807Ch
0x53CE96: test    eax, eax
0x53CE98: jnz     short loc_53CEA8
0x53CE9A: test    edi, edi
0x53CE9C: jz      short loc_53CEA8
0x53CE9E: mov     edx, [edi]
0x53CEA0: mov     eax, [edx]
0x53CEA2: push    1
0x53CEA4: mov     ecx, edi
0x53CEA6: call    eax
0x53CEA8: test    esi, esi
0x53CEAA: mov     [ebp+14h], esi
0x53CEAD: jz      short loc_53CEB9
0x53CEAF: add     esi, 4
0x53CEB2: push    esi; lpAddend
0x53CEB3: call    dword ptr ds:0A28078h
0x53CEB9: mov     ecx, [ebp+14h]
0x53CEBC: push    offset aShadowMesh; "Shadow Mesh"
0x53CEC1: call    NiObjectNET_SetName
0x53CEC6: mov     eax, [ebp+14h]
0x53CEC9: mov     edi, 2
0x53CECE: or      [eax+18h], di
0x53CED2: push    1Ch; Size
0x53CED4: call    FormHeapAlloc
0x53CED9: mov     esi, eax
0x53CEDB: add     esp, 4
0x53CEDE: mov     [esp+68h+arg_0], esi
0x53CEE2: test    esi, esi
0x53CEE4: mov     [esp+68h+var_4], 4
0x53CEEC: jz      short loc_53CF07
0x53CEEE: mov     ecx, esi; this
0x53CEF0: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x53CEF5: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x53CEFB: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x53CF01: mov     byte ptr [esi+1Ah], 0
0x53CF05: jmp     short loc_53CF09
0x53CF07: xor     esi, esi
0x53CF09: test    esi, esi
0x53CF0B: mov     [esp+68h+arg_0], esi
0x53CF0F: jz      short loc_53CF1B
0x53CF11: lea     ecx, [esi+4]
0x53CF14: push    ecx; lpAddend
0x53CF15: call    dword ptr ds:0A28078h
0x53CF1B: or      word ptr [esi+18h], 1
0x53CF20: mov     dx, [esi+18h]
0x53CF24: and     dx, 0FFEDh
0x53CF29: or      dx, 0Ch
0x53CF2D: mov     [esi+18h], dx
0x53CF31: and     word ptr [esi+18h], 0FE1Fh
0x53CF37: or      word ptr [esi+18h], 2000h
0x53CF3D: mov     ecx, [ebp+10h]; this
0x53CF40: push    esi; a2
0x53CF41: mov     [esp+6Ch+var_4], 5
0x53CF49: call    sub_405680
0x53CF4E: lea     eax, [esi+4]
0x53CF51: push    eax; lpAddend
0x53CF52: call    dword ptr ds:0A2807Ch
0x53CF58: test    eax, eax
0x53CF5A: jnz     short loc_53CF66
0x53CF5C: mov     edx, [esi]
0x53CF5E: mov     eax, [edx]
0x53CF60: push    1
0x53CF62: mov     ecx, esi
0x53CF64: call    eax
0x53CF66: mov     [esp+68h+var_4], 0FFFFFFFFh
0x53CF6E: call    Sky_CreateOrGetGlobalObject
0x53CF73: cmp     [eax+0DCh], ebx
0x53CF79: jz      short loc_53CF88
0x53CF7B: call    Sky_CreateOrGetGlobalObject
0x53CF80: cmp     [eax+0DCh], edi
0x53CF86: jnz     short loc_53CFC1
0x53CF88: xor     esi, esi
0x53CF8A: call    Sky_CreateOrGetGlobalObject
0x53CF8F: cmp     ebp, [eax+30h]
0x53CF92: jnz     short loc_53CF9B
0x53CF94: mov     esi, offset sub_540EF0
0x53CF99: jmp     short loc_53CFAA
0x53CF9B: call    Sky_CreateOrGetGlobalObject
0x53CFA0: cmp     ebp, [eax+34h]
0x53CFA3: jnz     short loc_53CFAA
0x53CFA5: mov     esi, offset sub_540F20
0x53CFAA: mov     eax, [ebp+14h]
0x53CFAD: push    1
0x53CFAF: push    esi
0x53CFB0: push    offset aTexturesSkyMoo; "Textures\\Sky\\MoonShadow.dds"
0x53CFB5: push    eax
0x53CFB6: call    sub_53FBE0
0x53CFBB: add     esp, 10h
0x53CFBE: mov     [ebp+70h], edi
0x53CFC1: push    0DCh ; 'Ü'; Size
0x53CFC6: call    FormHeapAlloc
0x53CFCB: add     esp, 4
0x53CFCE: mov     [esp+68h+arg_0], eax
0x53CFD2: test    eax, eax
0x53CFD4: mov     [esp+68h+var_4], 6
0x53CFDC: jz      short loc_53CFEB
0x53CFDE: push    0
0x53CFE0: mov     ecx, eax; this
0x53CFE2: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x53CFE7: mov     edi, eax
0x53CFE9: jmp     short loc_53CFED
0x53CFEB: xor     edi, edi
0x53CFED: mov     esi, [ebp+8]
0x53CFF0: or      ebx, 0FFFFFFFFh
0x53CFF3: cmp     esi, edi
0x53CFF5: mov     [esp+68h+var_4], ebx
0x53CFF9: jz      short loc_53D02C
0x53CFFB: test    esi, esi
0x53CFFD: jz      short loc_53D01B
0x53CFFF: lea     ecx, [esi+4]
0x53D002: push    ecx; lpAddend
0x53D003: call    dword ptr ds:0A2807Ch
0x53D009: test    eax, eax
0x53D00B: jnz     short loc_53D01B
0x53D00D: test    esi, esi
0x53D00F: jz      short loc_53D01B
0x53D011: mov     edx, [esi]
0x53D013: mov     eax, [edx]
0x53D015: push    1
0x53D017: mov     ecx, esi
0x53D019: call    eax
0x53D01B: test    edi, edi
0x53D01D: mov     [ebp+8], edi
0x53D020: jz      short loc_53D02C
0x53D022: add     edi, 4
0x53D025: push    edi; lpAddend
0x53D026: call    dword ptr ds:0A28078h
0x53D02C: push    0DCh ; 'Ü'; Size
0x53D031: call    FormHeapAlloc
0x53D036: add     esp, 4
0x53D039: mov     [esp+68h+arg_0], eax
0x53D03D: test    eax, eax
0x53D03F: mov     [esp+68h+var_4], 7
0x53D047: jz      short loc_53D056
0x53D049: push    0
0x53D04B: mov     ecx, eax; this
0x53D04D: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x53D052: mov     edi, eax
0x53D054: jmp     short loc_53D058
0x53D056: xor     edi, edi
0x53D058: mov     esi, [ebp+0Ch]
0x53D05B: cmp     esi, edi
0x53D05D: mov     [esp+68h+var_4], ebx
0x53D061: jz      short loc_53D094
0x53D063: test    esi, esi
0x53D065: jz      short loc_53D083
0x53D067: lea     ecx, [esi+4]
0x53D06A: push    ecx; lpAddend
0x53D06B: call    dword ptr ds:0A2807Ch
0x53D071: test    eax, eax
0x53D073: jnz     short loc_53D083
0x53D075: test    esi, esi
0x53D077: jz      short loc_53D083
0x53D079: mov     edx, [esi]
0x53D07B: mov     eax, [edx]
0x53D07D: push    1
0x53D07F: mov     ecx, esi
0x53D081: call    eax
0x53D083: test    edi, edi
0x53D085: mov     [ebp+0Ch], edi
0x53D088: jz      short loc_53D094
0x53D08A: add     edi, 4
0x53D08D: push    edi; lpAddend
0x53D08E: call    dword ptr ds:0A28078h
0x53D094: mov     ecx, [ebp+8]
0x53D097: push    offset aMoonNode; "Moon Node"
0x53D09C: call    NiObjectNET_SetName
0x53D0A1: mov     ecx, [ebp+0Ch]
0x53D0A4: push    offset aShadowNode; "Shadow Node"
0x53D0A9: call    NiObjectNET_SetName
0x53D0AE: mov     eax, [ebp+8]
0x53D0B1: mov     ecx, 2
0x53D0B6: or      [eax+18h], cx
0x53D0BA: mov     eax, [ebp+0Ch]
0x53D0BD: or      [eax+18h], cx
0x53D0C1: mov     ecx, [ebp+8]
0x53D0C4: mov     edx, [ecx]
0x53D0C6: mov     eax, [ebp+10h]
0x53D0C9: mov     edx, [edx+84h]
0x53D0CF: push    1
0x53D0D1: push    eax
0x53D0D2: call    edx
0x53D0D4: mov     ecx, [ebp+0Ch]
0x53D0D7: mov     eax, [ecx]
0x53D0D9: mov     edx, [ebp+14h]
0x53D0DC: mov     eax, [eax+84h]
0x53D0E2: push    1
0x53D0E4: push    edx
0x53D0E5: call    eax
0x53D0E7: mov     ecx, [ebp+4]
0x53D0EA: mov     edx, [ecx]
0x53D0EC: mov     eax, [ebp+0Ch]
0x53D0EF: mov     edx, [edx+84h]
0x53D0F5: push    1
0x53D0F7: push    eax
0x53D0F8: call    edx
0x53D0FA: mov     ecx, [ebp+4]
0x53D0FD: mov     eax, [ecx]
0x53D0FF: mov     edx, [ebp+8]
0x53D102: mov     eax, [eax+84h]
0x53D108: push    1
0x53D10A: push    edx
0x53D10B: call    eax
0x53D10D: fld     dword ptr ds:0A3721Ch
0x53D113: push    ecx
0x53D114: lea     ecx, [esp+6Ch+var_30]
0x53D118: fstp    [esp+6Ch+var_6C]; float
0x53D11B: call    NiMatrix33_InitRotationTransposedTransform???
0x53D120: fldz
0x53D122: mov     eax, [ebp+10h]
0x53D125: fst     [esp+68h+var_40]
0x53D129: fld     dword ptr ds:0A427E0h
0x53D12F: mov     ecx, [esp+68h+var_40]
0x53D133: mov     [eax+54h], ecx
0x53D136: fst     [esp+68h+var_3C]
0x53D13A: mov     edx, [esp+68h+var_3C]
0x53D13E: fxch    st(1)
0x53D140: mov     [eax+58h], edx
0x53D143: fst     [esp+68h+var_38]
0x53D147: mov     ecx, [esp+68h+var_38]
0x53D14B: fst     [esp+68h+var_40]
0x53D14F: mov     edx, [esp+68h+var_40]
0x53D153: fstp    [esp+68h+var_38]
0x53D157: mov     [eax+5Ch], ecx
0x53D15A: mov     edi, [ebp+10h]
0x53D15D: add     eax, 54h ; 'T'
0x53D160: fstp    [esp+68h+var_3C]
0x53D164: add     edi, 30h ; '0'
0x53D167: mov     ecx, 9
0x53D16C: lea     esi, [esp+68h+var_30]
0x53D170: rep movsd
0x53D172: mov     eax, [ebp+14h]
0x53D175: mov     ecx, [esp+68h+var_3C]
0x53D179: add     eax, 54h ; 'T'
0x53D17C: mov     [eax], edx
0x53D17E: mov     edx, [esp+68h+var_38]
0x53D182: mov     [eax+4], ecx
0x53D185: mov     [eax+8], edx
0x53D188: mov     edi, [ebp+14h]
0x53D18B: add     edi, 30h ; '0'
0x53D18E: mov     ecx, 9
0x53D193: lea     esi, [esp+68h+var_30]
0x53D197: push    1
0x53D199: rep movsd
0x53D19B: push    0
0x53D19D: mov     eax, [ebp+4]
0x53D1A0: push    0Ah
0x53D1A2: push    eax
0x53D1A3: call    sub_7B8940
0x53D1A8: mov     ecx, [ebp+10h]
0x53D1AB: add     esp, 10h
0x53D1AE: push    4
0x53D1B0: call    NiNode_GetNiPropertyByID
0x53D1B5: test    eax, eax
0x53D1B7: jz      short loc_53D1F2
0x53D1B9: mov     ecx, [ebp+10h]
0x53D1BC: push    4
0x53D1BE: call    NiNode_GetNiPropertyByID
0x53D1C3: mov     edx, [eax]
0x53D1C5: mov     ecx, eax
0x53D1C7: mov     eax, [edx+54h]
0x53D1CA: call    eax
0x53D1CC: xor     ecx, ecx
0x53D1CE: cmp     eax, 0Bh
0x53D1D1: setz    cl
0x53D1D4: mov     eax, ecx
0x53D1D6: test    eax, eax
0x53D1D8: jz      short loc_53D1F2
0x53D1DA: mov     ecx, [ebp+10h]
0x53D1DD: push    4
0x53D1DF: call    NiNode_GetNiPropertyByID
0x53D1E4: test    eax, eax
0x53D1E6: jz      short loc_53D1F2
0x53D1E8: mov     dword ptr [eax+88h], 6
0x53D1F2: mov     ecx, [ebp+14h]
0x53D1F5: push    4
0x53D1F7: call    NiNode_GetNiPropertyByID
0x53D1FC: test    eax, eax
0x53D1FE: jz      short loc_53D23B
0x53D200: mov     ecx, [ebp+14h]
0x53D203: push    4
0x53D205: call    NiNode_GetNiPropertyByID
0x53D20A: mov     edx, [eax]
0x53D20C: mov     ecx, eax
0x53D20E: mov     eax, [edx+54h]
0x53D211: call    eax
0x53D213: xor     ecx, ecx
0x53D215: cmp     eax, 0Bh
0x53D218: setz    cl
0x53D21B: mov     eax, ecx
0x53D21D: test    eax, eax
0x53D21F: jz      short loc_53D23B
0x53D221: mov     ebp, [ebp+14h]
0x53D224: push    4
0x53D226: mov     ecx, ebp
0x53D228: call    NiNode_GetNiPropertyByID
0x53D22D: test    eax, eax
0x53D22F: jz      short loc_53D23B
0x53D231: mov     dword ptr [eax+88h], 7
0x53D23B: mov     ecx, [esp+68h+var_C]
0x53D23F: mov     large fs:0, ecx
0x53D246: pop     ecx
0x53D247: pop     edi
0x53D248: pop     esi
0x53D249: pop     ebp
0x53D24A: pop     ebx
0x53D24B: add     esp, 54h
0x53D24E: retn    8
