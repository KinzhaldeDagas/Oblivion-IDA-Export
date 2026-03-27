0x4CD960: sub     esp, 14h
0x4CD963: push    ebx
0x4CD964: push    ebp
0x4CD965: push    esi
0x4CD966: mov     esi, ecx
0x4CD968: push    edi
0x4CD969: lea     edi, [esi+48h]
0x4CD96C: xor     ebp, ebp
0x4CD96E: test    edi, edi
0x4CD970: jz      loc_4CDA0C
0x4CD976: cmp     dword ptr [edi+4], 0
0x4CD97A: jnz     short loc_4CD985
0x4CD97C: cmp     dword ptr [edi], 0
0x4CD97F: jz      loc_4CDA0C
0x4CD985: mov     ebx, [edi]
0x4CD987: mov     eax, [ebx+8]
0x4CD98A: shr     eax, 3
0x4CD98D: test    al, 1
0x4CD98F: jnz     short loc_4CD9A6
0x4CD991: mov     edx, [ebx]
0x4CD993: mov     eax, [edx+6Ch]
0x4CD996: mov     ecx, ebx
0x4CD998: call    eax
0x4CD99A: mov     ecx, ds:0B33B00h
0x4CD9A0: push    ebx
0x4CD9A1: call    TESSaveLoadGame_LoadForm
0x4CD9A6: test    byte ptr [esi+24h], 1
0x4CD9AA: jz      short loc_4CD9DD
0x4CD9AC: mov     edx, [ebx]
0x4CD9AE: mov     eax, [edx+170h]
0x4CD9B4: mov     ecx, ebx
0x4CD9B6: call    eax
0x4CD9B8: cmp     eax, ds:0B35EB8h
0x4CD9BE: jnz     short loc_4CD9DD
0x4CD9C0: fld     dword ptr [ebx+28h]
0x4CD9C3: push    ecx
0x4CD9C4: fmul    qword ptr ds:0A3D360h
0x4CD9CA: lea     ecx, [esi+28h]
0x4CD9CD: fstp    [esp+28h+var_8]
0x4CD9D1: fld     [esp+28h+var_8]
0x4CD9D5: fstp    [esp+28h+var_28]; float
0x4CD9D8: call    sub_420C60
0x4CD9DD: test    dword ptr [esi+8], 400h
0x4CD9E4: jnz     short loc_4CD9FF
0x4CD9E6: mov     ecx, ebx; this
0x4CD9E8: call    TESObjectREFR_GetParentCell
0x4CD9ED: cmp     eax, esi
0x4CD9EF: jz      short loc_4CD9FF
0x4CD9F1: test    ebp, ebp
0x4CD9F3: jz      short loc_4CD9FA
0x4CD9F5: mov     edi, [ebp+4]
0x4CD9F8: jmp     short loc_4CDA04
0x4CD9FA: lea     edi, [esi+48h]
0x4CD9FD: jmp     short loc_4CDA04
0x4CD9FF: mov     ebp, edi
0x4CDA01: mov     edi, [edi+4]
0x4CDA04: test    edi, edi
0x4CDA06: jnz     loc_4CD976
0x4CDA0C: mov     ecx, ds:0B33B00h
0x4CDA12: call    sub_45A500
0x4CDA17: test    al, al
0x4CDA19: jz      short loc_4CDA80
0x4CDA1B: mov     ecx, ds:0B33B00h
0x4CDA21: push    esi
0x4CDA22: call    sub_464910
0x4CDA27: mov     eax, ds:0B33B00h
0x4CDA2C: mov     ebx, [eax+18h]
0x4CDA2F: mov     ecx, ebx
0x4CDA31: shr     ecx, 8
0x4CDA34: test    cl, 1
0x4CDA37: jnz     short loc_4CDA80
0x4CDA39: cmp     dword ptr [eax+1Ch], 0
0x4CDA3D: jz      short loc_4CDA80
0x4CDA3F: push    0
0x4CDA41: mov     edi, 80h ; '€'
0x4CDA46: or      [eax+18h], edi
0x4CDA49: mov     ecx, ds:0B33B00h
0x4CDA4F: push    0
0x4CDA51: shr     ebx, 7
0x4CDA54: push    0
0x4CDA56: and     bl, 1
0x4CDA59: call    sub_45FDA0
0x4CDA5E: mov     ecx, ds:0B33B00h
0x4CDA64: push    0
0x4CDA66: call    sub_461030
0x4CDA6B: test    bl, bl
0x4CDA6D: mov     eax, ds:0B33B00h
0x4CDA72: jz      short loc_4CDA79
0x4CDA74: or      [eax+18h], edi
0x4CDA77: jmp     short loc_4CDA80
0x4CDA79: and     dword ptr [eax+18h], 0FFFFFF7Fh
0x4CDA80: mov     edx, [esi+8]
0x4CDA83: shr     edx, 3
0x4CDA86: test    dl, 1
0x4CDA89: jnz     loc_4CDC81
0x4CDA8F: mov     ecx, ds:0B34D88h
0x4CDA95: mov     al, ds:0B06B18h
0x4CDA9A: mov     [esp+24h+var_4], ecx
0x4CDA9E: lea     edi, [esi+28h]
0x4CDAA1: xor     ebx, ebx
0x4CDAA3: push    esi
0x4CDAA4: mov     ecx, edi
0x4CDAA6: mov     [esp+28h+var_11], al
0x4CDAAA: mov     byte ptr ds:0B06B18h, 1
0x4CDAB1: mov     ds:0B34D88h, ebx
0x4CDAB7: call    ExtraDataList_Link?
0x4CDABC: test    byte ptr [esi+24h], 1
0x4CDAC0: jnz     loc_4CDB98
0x4CDAC6: mov     ecx, edi
0x4CDAC8: call    ExtraDataList_GetOwner
0x4CDACD: test    eax, eax
0x4CDACF: jz      loc_4CDB77
0x4CDAD5: test    byte ptr [esi+24h], 1
0x4CDAD9: jnz     short loc_4CDAF9
0x4CDADB: mov     ecx, [esi+50h]
0x4CDADE: cmp     ecx, ebx
0x4CDAE0: jz      short loc_4CDAF9
0x4CDAE2: mov     edx, [ecx+0Ch]
0x4CDAE5: mov     eax, [ecx]
0x4CDAE7: mov     [esp+24h+var_10], edx
0x4CDAEB: mov     edx, [eax+0D4h]
0x4CDAF1: call    edx
0x4CDAF3: mov     [esp+24h+var_C], eax
0x4CDAF7: jmp     short loc_4CDB05
0x4CDAF9: mov     [esp+24h+var_10], ebx
0x4CDAFD: mov     [esp+24h+var_C], offset aNone_0; "NONE"
0x4CDB05: mov     cl, [esi+24h]
0x4CDB08: and     cl, 1
0x4CDB0B: jnz     short loc_4CDB1D
0x4CDB0D: mov     eax, [esi+3Ch]
0x4CDB10: cmp     eax, ebx
0x4CDB12: jz      short loc_4CDB1D
0x4CDB14: mov     eax, [eax+4]
0x4CDB17: mov     [esp+24h+var_8], eax
0x4CDB1B: jmp     short loc_4CDB21
0x4CDB1D: mov     [esp+24h+var_8], ebx
0x4CDB21: test    cl, cl
0x4CDB23: jnz     short loc_4CDB2E
0x4CDB25: mov     eax, [esi+3Ch]
0x4CDB28: cmp     eax, ebx
0x4CDB2A: jz      short loc_4CDB2E
0x4CDB2C: mov     ebx, [eax]
0x4CDB2E: mov     edx, [esi]
0x4CDB30: mov     eax, [edx+0D4h]
0x4CDB36: mov     ebp, [esi+0Ch]
0x4CDB39: mov     ecx, esi
0x4CDB3B: call    eax
0x4CDB3D: mov     ecx, [esp+24h+var_10]
0x4CDB41: mov     edx, [esp+24h+var_C]
0x4CDB45: push    ecx
0x4CDB46: mov     ecx, [esp+28h+var_8]
0x4CDB4A: push    edx
0x4CDB4B: push    ecx
0x4CDB4C: push    ebx
0x4CDB4D: push    ebp
0x4CDB4E: push    eax; ArgList
0x4CDB4F: push    offset aRemovingOwners; "Removing ownership data on exterior cel"...
0x4CDB54: call    PrintError
0x4CDB59: add     esp, 1Ch
0x4CDB5C: push    0
0x4CDB5E: mov     ecx, edi
0x4CDB60: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4CDB65: push    0FFFFFFFFh
0x4CDB67: mov     ecx, edi
0x4CDB69: call    sub_4237E0
0x4CDB6E: push    0
0x4CDB70: mov     ecx, edi
0x4CDB72: call    sub_423720
0x4CDB77: test    byte ptr [esi+24h], 1
0x4CDB7B: jnz     short loc_4CDB98
0x4CDB7D: mov     edx, [esi+1Ch]
0x4CDB80: push    edx
0x4CDB81: call    FormHeapFree
0x4CDB86: add     esp, 4
0x4CDB89: xor     ebp, ebp
0x4CDB8B: mov     [esi+1Ch], ebp
0x4CDB8E: mov     [esi+22h], bp
0x4CDB92: mov     [esi+20h], bp
0x4CDB96: jmp     short loc_4CDB9A
0x4CDB98: xor     ebp, ebp
0x4CDB9A: push    1; a2
0x4CDB9C: mov     ecx, esi; this
0x4CDB9E: call    TESForm_SetIsLinked
0x4CDBA3: mov     al, [esp+24h+var_11]
0x4CDBA7: mov     ecx, [esp+24h+var_4]
0x4CDBAB: mov     ds:0B06B18h, al
0x4CDBB0: mov     eax, ds:0B34D88h
0x4CDBB5: cmp     eax, ebp
0x4CDBB7: mov     ds:0B34D88h, ecx
0x4CDBBD: jz      loc_4CDC81
0x4CDBC3: mov     al, [esi+24h]
0x4CDBC6: xor     ecx, ecx
0x4CDBC8: and     al, 1
0x4CDBCA: jnz     short loc_4CDBCF
0x4CDBCC: mov     ecx, [esi+50h]
0x4CDBCF: test    al, al
0x4CDBD1: jnz     loc_4CDC63
0x4CDBD7: cmp     ecx, ebp
0x4CDBD9: mov     eax, [esi+3Ch]
0x4CDBDC: jz      short loc_4CDC26
0x4CDBDE: cmp     eax, ebp
0x4CDBE0: mov     edx, [ecx+0Ch]
0x4CDBE3: jz      short loc_4CDBE8
0x4CDBE5: mov     ebp, [eax+4]
0x4CDBE8: test    eax, eax
0x4CDBEA: jz      short loc_4CDBF0
0x4CDBEC: mov     ebx, [eax]
0x4CDBEE: jmp     short loc_4CDBF2
0x4CDBF0: xor     ebx, ebx
0x4CDBF2: mov     edi, [esi+0Ch]
0x4CDBF5: push    edx
0x4CDBF6: mov     edx, [ecx]
0x4CDBF8: mov     eax, [edx+0D4h]
0x4CDBFE: call    eax
0x4CDC00: mov     edx, [esi]
0x4CDC02: push    eax
0x4CDC03: mov     eax, [edx+0D4h]
0x4CDC09: push    ebp
0x4CDC0A: push    ebx
0x4CDC0B: push    edi
0x4CDC0C: mov     ecx, esi
0x4CDC0E: call    eax
0x4CDC10: push    eax; ArgList
0x4CDC11: push    offset aErrorsWereEn_2; "Errors were encountered during InitItem"...
0x4CDC16: call    PrintError
0x4CDC1B: add     esp, 1Ch
0x4CDC1E: pop     edi
0x4CDC1F: pop     esi
0x4CDC20: pop     ebp
0x4CDC21: pop     ebx
0x4CDC22: add     esp, 14h
0x4CDC25: retn
0x4CDC26: cmp     eax, ebp
0x4CDC28: jz      short loc_4CDC2F
0x4CDC2A: mov     edx, [eax+4]
0x4CDC2D: jmp     short loc_4CDC31
0x4CDC2F: xor     edx, edx
0x4CDC31: cmp     eax, ebp
0x4CDC33: jz      short loc_4CDC39
0x4CDC35: mov     eax, [eax]
0x4CDC37: jmp     short loc_4CDC3B
0x4CDC39: xor     eax, eax
0x4CDC3B: mov     ecx, [esi+0Ch]
0x4CDC3E: push    edx
0x4CDC3F: mov     edx, [esi]
0x4CDC41: push    eax
0x4CDC42: mov     eax, [edx+0D4h]
0x4CDC48: push    ecx
0x4CDC49: mov     ecx, esi
0x4CDC4B: call    eax
0x4CDC4D: push    eax; ArgList
0x4CDC4E: push    offset aErrorsWereEn_3; "Errors were encountered during InitItem"...
0x4CDC53: call    PrintError
0x4CDC58: add     esp, 14h
0x4CDC5B: pop     edi
0x4CDC5C: pop     esi
0x4CDC5D: pop     ebp
0x4CDC5E: pop     ebx
0x4CDC5F: add     esp, 14h
0x4CDC62: retn
0x4CDC63: mov     eax, [esi+0Ch]
0x4CDC66: mov     edx, [esi]
0x4CDC68: push    eax
0x4CDC69: mov     eax, [edx+0D4h]
0x4CDC6F: mov     ecx, esi
0x4CDC71: call    eax
0x4CDC73: push    eax; ArgList
0x4CDC74: push    offset aErrorsWereEn_4; "Errors were encountered during InitItem"...
0x4CDC79: call    PrintError
0x4CDC7E: add     esp, 0Ch
0x4CDC81: pop     edi
0x4CDC82: pop     esi
0x4CDC83: pop     ebp
0x4CDC84: pop     ebx
0x4CDC85: add     esp, 14h
0x4CDC88: retn
