0x7A8E90: mov     eax, [esp+value]; OBLIVION AUTHORITY (2026-08-30): Validates the begin/end debug iterators and dispatches the packed vector<bool> range fill.
0x7A8E94: mov     ecx, [esp+last.word]
0x7A8E98: mov     edx, [esp+last.bitOffset]
0x7A8E9C: push    esi
0x7A8E9D: push    edi
0x7A8E9E: mov     edi, [esp+8+last.owner]
0x7A8EA2: push    eax; value
0x7A8EA3: sub     esp, 0Ch
0x7A8EA6: test    edi, edi
0x7A8EA8: mov     esi, esp
0x7A8EAA: mov     dword ptr [esi], 0
0x7A8EB0: mov     [esi+4], ecx
0x7A8EB3: mov     [esi+8], edx
0x7A8EB6: jnz     short loc_7A8EBD
0x7A8EB8: call    __invalid_parameter_noinfo
0x7A8EBD: mov     eax, [esp+18h+first.word]
0x7A8EC1: mov     ecx, [esp+18h+first.bitOffset]
0x7A8EC5: mov     [esi], edi
0x7A8EC7: mov     edi, [esp+18h+first.owner]
0x7A8ECB: sub     esp, 0Ch
0x7A8ECE: test    edi, edi
0x7A8ED0: mov     esi, esp
0x7A8ED2: mov     dword ptr [esi], 0
0x7A8ED8: mov     [esi+4], eax
0x7A8EDB: mov     [esi+8], ecx
0x7A8EDE: jnz     short loc_7A8EE5
0x7A8EE0: call    __invalid_parameter_noinfo
0x7A8EE5: mov     [esi], edi
0x7A8EE7: call    OB_stVectorBool_FillRangeCore_010201A0; OBLIVION AUTHORITY (2026-08-30): Fills a vector<bool> iterator range one packed bit at a time, setting or clearing the selected bit in each 32-bit word.
0x7A8EEC: add     esp, 1Ch
0x7A8EEF: pop     edi
0x7A8EF0: pop     esi
0x7A8EF1: retn
