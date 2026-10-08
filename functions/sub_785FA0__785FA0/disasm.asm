0x785FA0: sub     esp, 0Ch; Unique insertion for the spline-cache map. Searches by the 28-byte small-string key, inserts and rebalances only when absent, and returns {iterator, inserted}.
0x785FA3: push    ebx
0x785FA4: mov     ebx, [esp+10h+value]
0x785FA8: push    ebp
0x785FA9: push    esi
0x785FAA: push    edi
0x785FAB: mov     edi, ecx
0x785FAD: mov     eax, [edi+4]
0x785FB0: mov     esi, [eax+4]
0x785FB3: cmp     byte ptr [esi+2Dh], 0
0x785FB7: mov     ebp, eax
0x785FB9: mov     al, 1
0x785FBB: mov     [esp+1Ch+var_8.owner], edi
0x785FBF: mov     byte ptr [esp+1Ch+var_C], al
0x785FC3: jnz     short loc_786036
0x785FC5: cmp     dword ptr [esi+24h], 10h
0x785FC9: mov     ebp, [esi+20h]
0x785FCC: mov     [esp+1Ch+value], esi
0x785FD0: jb      short loc_785FD7
0x785FD2: mov     edx, [esi+10h]
0x785FD5: jmp     short loc_785FDA
0x785FD7: lea     edx, [esi+10h]
0x785FDA: mov     edi, [ebx+14h]
0x785FDD: cmp     edi, ebp
0x785FDF: mov     eax, edi
0x785FE1: mov     ecx, edi
0x785FE3: jb      short loc_785FE7
0x785FE5: mov     ecx, ebp
0x785FE7: cmp     dword ptr [ebx+18h], 10h
0x785FEB: jb      short loc_785FF2
0x785FED: mov     eax, [ebx+4]
0x785FF0: jmp     short loc_785FF5
0x785FF2: lea     eax, [ebx+4]
0x785FF5: push    ecx
0x785FF6: push    edx
0x785FF7: push    eax
0x785FF8: call    sub_6F5CB0
0x785FFD: add     esp, 0Ch
0x786000: test    eax, eax
0x786002: jnz     short loc_786016
0x786004: cmp     edi, ebp
0x786006: jnb     short loc_78600D
0x786008: or      eax, 0FFFFFFFFh
0x78600B: jmp     short loc_786014
0x78600D: xor     eax, eax
0x78600F: cmp     edi, ebp
0x786011: setnz   al
0x786014: test    eax, eax
0x786016: setl    al
0x786019: test    al, al
0x78601B: mov     byte ptr [esp+1Ch+var_C], al
0x78601F: jz      short loc_786025
0x786021: mov     esi, [esi]
0x786023: jmp     short loc_786028
0x786025: mov     esi, [esi+8]
0x786028: cmp     byte ptr [esi+2Dh], 0
0x78602C: jz      short loc_785FC5
0x78602E: mov     edi, [esp+1Ch+var_8.owner]
0x786032: mov     ebp, [esp+1Ch+value]
0x786036: test    al, al
0x786038: mov     esi, ebp
0x78603A: mov     [esp+1Ch+var_8.node], esi
0x78603E: mov     [esp+1Ch+var_8.owner], edi
0x786042: jz      short loc_786082
0x786044: mov     eax, [edi+4]
0x786047: cmp     ebp, [eax]
0x786049: lea     ecx, [esp+1Ch+var_8]; this
0x78604D: jnz     short loc_786079
0x78604F: push    ebx; value
0x786050: push    ebp; parent
0x786051: push    1; insertLeft
0x786053: push    ecx; result
0x786054: mov     ecx, edi; this
0x786056: call    OB_stBezierSplineCacheMap_InsertNodeAndRebalance_010201A0; Links a newly allocated spline-cache node beneath the selected parent, increments map size, performs standard red-black insertion recoloring/rotations, forces the root black, and returns {map,node}.
0x78605B: pop     edi
0x78605C: mov     ecx, eax
0x78605E: mov     edx, [ecx]
0x786060: mov     eax, [esp+18h+result]
0x786064: mov     ecx, [ecx+4]
0x786067: pop     esi
0x786068: pop     ebp
0x786069: mov     [eax+4], ecx
0x78606C: mov     byte ptr [eax+8], 1
0x786070: mov     [eax], edx
0x786072: pop     ebx
0x786073: add     esp, 0Ch
0x786076: retn    8
0x786079: call    OB_stBezierSplineCacheIterator_Decrement_010201A0; Oblivion 1.2.0.416: checked spline-cache iterator pre-decrement using parent/left-subtree traversal and nil-node validation.
0x78607E: mov     esi, [esp+1Ch+var_8.node]
0x786082: cmp     dword ptr [ebx+18h], 10h
0x786086: mov     edx, [ebx+14h]
0x786089: lea     ecx, [esi+0Ch]
0x78608C: jb      short loc_786093
0x78608E: mov     eax, [ebx+4]
0x786091: jmp     short loc_786096
0x786093: lea     eax, [ebx+4]
0x786096: push    edx
0x786097: mov     edx, [ecx+14h]
0x78609A: push    eax
0x78609B: push    edx
0x78609C: push    0
0x78609E: call    sub_6F5DE0
0x7860A3: test    eax, eax
0x7860A5: jge     short loc_7860B4
0x7860A7: mov     eax, [esp+1Ch+var_C]
0x7860AB: push    ebx
0x7860AC: push    ebp
0x7860AD: push    eax
0x7860AE: lea     ecx, [esp+28h+var_8]
0x7860B2: jmp     short loc_786053
0x7860B4: mov     eax, [esp+1Ch+result]
0x7860B8: mov     edx, [esp+1Ch+var_8.owner]
0x7860BC: pop     edi
0x7860BD: mov     [eax+4], esi
0x7860C0: pop     esi
0x7860C1: pop     ebp
0x7860C2: mov     byte ptr [eax+8], 0
0x7860C6: mov     [eax], edx
0x7860C8: pop     ebx
0x7860C9: add     esp, 0Ch
0x7860CC: retn    8
