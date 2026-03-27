0x471840: push    0FFFFFFFFh
0x471842: push    offset ??1AnimSequenceMultiple@@UAE@XZ_SEH
0x471847: mov     eax, large fs:0
0x47184D: push    eax
0x47184E: sub     esp, 0Ch
0x471851: push    ebx
0x471852: push    ebp
0x471853: push    esi
0x471854: push    edi
0x471855: mov     eax, ds:0B30AACh
0x47185A: xor     eax, esp
0x47185C: push    eax
0x47185D: lea     eax, [esp+2Ch+var_C]
0x471861: mov     large fs:0, eax
0x471867: mov     esi, ecx
0x471869: mov     [esp+2Ch+var_18], esi
0x47186D: mov     dword ptr [esi], offset ??_7AnimSequenceMultiple@@6B@; const AnimSequenceMultiple::`vftable'
0x471873: mov     eax, [esi+4]
0x471876: xor     ebx, ebx
0x471878: cmp     eax, ebx
0x47187A: mov     [esp+2Ch+var_4], ebx
0x47187E: jz      loc_47190F
0x471884: mov     edi, [eax+4]
0x471887: cmp     edi, ebx
0x471889: jz      short loc_471900
0x47188B: mov     ebp, ds:0A2807Ch
0x471891: mov     esi, [edi+8]
0x471894: mov     [esp+2Ch+var_14.m_data], ebx
0x471898: mov     [esp+2Ch+var_14.m_dataLen], bx
0x47189D: mov     [esp+2Ch+var_14.m_bufLen], bx
0x4718A2: mov     eax, [esi+8]
0x4718A5: push    ebx; a3
0x4718A6: push    eax; a2
0x4718A7: lea     ecx, [esp+34h+var_14]; this
0x4718AB: mov     byte ptr [esp+34h+var_4], 1
0x4718B0: call    BSStringT_Set
0x4718B5: lea     eax, [esi+4]
0x4718B8: push    eax; lpAddend
0x4718B9: call    ebp ; InterlockedDecrement
0x4718BB: test    eax, eax
0x4718BD: jnz     short loc_4718C9
0x4718BF: mov     edx, [esi]
0x4718C1: mov     eax, [edx]
0x4718C3: push    1
0x4718C5: mov     ecx, esi
0x4718C7: call    eax
0x4718C9: mov     esi, [esp+2Ch+var_14.m_data]
0x4718CD: mov     ecx, ds:0B33A1Ch
0x4718D3: push    1
0x4718D5: push    esi
0x4718D6: call    sub_438540
0x4718DB: mov     edi, [edi]
0x4718DD: push    esi
0x4718DE: mov     byte ptr [esp+30h+var_4], bl
0x4718E2: call    FormHeapFree
0x4718E7: add     esp, 4
0x4718EA: cmp     edi, ebx
0x4718EC: mov     [esp+2Ch+var_14.m_data], ebx
0x4718F0: mov     [esp+2Ch+var_14.m_bufLen], bx
0x4718F5: mov     [esp+2Ch+var_14.m_dataLen], bx
0x4718FA: jnz     short loc_471891
0x4718FC: mov     esi, [esp+2Ch+var_18]
0x471900: mov     ecx, [esi+4]
0x471903: cmp     ecx, ebx
0x471905: jz      short loc_47190F
0x471907: mov     edx, [ecx]
0x471909: mov     eax, [edx]
0x47190B: push    1
0x47190D: call    eax
0x47190F: mov     dword ptr [esi], offset ??_7AnimSequenceBase@@6B@; const AnimSequenceBase::`vftable'
0x471915: mov     ecx, dword ptr [esp+2Ch+var_C]
0x471919: mov     large fs:0, ecx
0x471920: pop     ecx
0x471921: pop     edi
0x471922: pop     esi
0x471923: pop     ebp
0x471924: pop     ebx
0x471925: add     esp, 18h
0x471928: retn
