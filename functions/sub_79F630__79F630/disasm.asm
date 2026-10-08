0x79F630: sub     esp, 8; Oblivion st_vector<SFrondGuide>::clear. Validates begin/end and erases the entire initialized range while retaining capacity.
0x79F633: push    ebx
0x79F634: push    esi
0x79F635: mov     esi, ecx
0x79F637: mov     ebx, [esi+8]
0x79F63A: cmp     [esi+4], ebx
0x79F63D: push    edi
0x79F63E: jbe     short loc_79F645
0x79F640: call    __invalid_parameter_noinfo
0x79F645: mov     edi, [esi+4]
0x79F648: cmp     edi, [esi+8]
0x79F64B: jbe     short loc_79F652
0x79F64D: call    __invalid_parameter_noinfo
0x79F652: push    ebx; last
0x79F653: push    esi; lastOwner
0x79F654: push    edi; first
0x79F655: push    esi; firstOwner
0x79F656: lea     eax, [esp+24h+result]
0x79F65A: push    eax; result
0x79F65B: mov     ecx, esi; this
0x79F65D: call    OB_stVector_SFrondGuide_EraseRange_010201A0; Checked erase-range for st_vector<SFrondGuide>. Validates iterator owners, deep-moves [last,end) over [first,last), destroys the vacated tail, updates end, and returns {owner,first}.
0x79F662: pop     edi
0x79F663: pop     esi
0x79F664: pop     ebx
0x79F665: add     esp, 8
0x79F668: retn
