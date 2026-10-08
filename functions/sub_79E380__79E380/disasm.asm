0x79E380: sub     esp, 8; Oblivion st_vector<SFrondTexture>::clear. Validates begin/end and erases the initialized range while retaining capacity; CFrondEngine::Parse calls it before token 13008 repopulates textures.
0x79E383: push    ebx
0x79E384: push    esi
0x79E385: mov     esi, ecx
0x79E387: mov     ebx, [esi+8]
0x79E38A: cmp     [esi+4], ebx
0x79E38D: push    edi
0x79E38E: jbe     short loc_79E395
0x79E390: call    __invalid_parameter_noinfo
0x79E395: mov     edi, [esi+4]
0x79E398: cmp     edi, [esi+8]
0x79E39B: jbe     short loc_79E3A2
0x79E39D: call    __invalid_parameter_noinfo
0x79E3A2: push    ebx; last
0x79E3A3: push    esi; lastOwner
0x79E3A4: push    edi; first
0x79E3A5: push    esi; firstOwner
0x79E3A6: lea     eax, [esp+24h+result]
0x79E3AA: push    eax; result
0x79E3AB: mov     ecx, esi; this
0x79E3AD: call    OB_stVector_SFrondTexture_EraseRange_010201A0; Checked erase-range for st_vector<SFrondTexture>. Validates iterator owners, deep-moves [last,end) over [first,last), destroys the vacated tail, updates end, and returns {owner,first}.
0x79E3B2: pop     edi
0x79E3B3: pop     esi
0x79E3B4: pop     ebx
0x79E3B5: add     esp, 8
0x79E3B8: retn
