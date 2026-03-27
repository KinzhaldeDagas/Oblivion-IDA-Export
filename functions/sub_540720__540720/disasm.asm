0x540720: sub     esp, 10h
0x540723: push    esi
0x540724: mov     esi, ecx
0x540726: mov     eax, [esi+10h]
0x540729: push    edi
0x54072A: xor     edi, edi
0x54072C: cmp     eax, edi
0x54072E: mov     [esp+18h+var_10], edi
0x540732: jz      short loc_54073B
0x540734: mov     eax, [eax+0Ch]
0x540737: mov     [esp+18h+var_10], eax
0x54073B: push    4
0x54073D: lea     ecx, [esp+1Ch+var_10]
0x540741: push    ecx
0x540742: mov     ecx, ds:0B33B00h
0x540748: call    SaveLoad_SaveFormID
0x54074D: mov     eax, [esi+14h]
0x540750: cmp     eax, edi
0x540752: mov     [esp+18h+var_C], edi
0x540756: jz      short loc_54075F
0x540758: mov     edx, [eax+0Ch]
0x54075B: mov     [esp+18h+var_C], edx
0x54075F: mov     ecx, ds:0B33B00h
0x540765: push    4
0x540767: lea     eax, [esp+1Ch+var_C]
0x54076B: push    eax
0x54076C: call    SaveLoad_SaveFormID
0x540771: mov     eax, [esi+18h]
0x540774: cmp     eax, edi
0x540776: mov     [esp+18h+var_8], edi
0x54077A: jz      short loc_540783
0x54077C: mov     ecx, [eax+0Ch]
0x54077F: mov     [esp+18h+var_8], ecx
0x540783: mov     ecx, ds:0B33B00h
0x540789: push    4
0x54078B: lea     edx, [esp+1Ch+var_8]
0x54078F: push    edx
0x540790: call    SaveLoad_SaveFormID
0x540795: mov     ecx, ds:0B33B00h
0x54079B: cmp     byte ptr [ecx+7Ch], 5Dh ; ']'
0x54079F: jb      short loc_5407C5
0x5407A1: mov     eax, [esi+1Ch]
0x5407A4: cmp     eax, edi
0x5407A6: mov     [esp+18h+var_4], edi
0x5407AA: jz      short loc_5407B3
0x5407AC: mov     eax, [eax+0Ch]
0x5407AF: mov     [esp+18h+var_4], eax
0x5407B3: push    4
0x5407B5: lea     edx, [esp+1Ch+var_4]
0x5407B9: push    edx
0x5407BA: call    SaveLoad_SaveFormID
0x5407BF: mov     ecx, ds:0B33B00h
0x5407C5: push    4; Size
0x5407C7: lea     eax, [esi+0D0h]
0x5407CD: push    eax; Src
0x5407CE: call    SaveLoad_SaveData
0x5407D3: push    4; Size
0x5407D5: lea     ecx, [esi+0D4h]
0x5407DB: push    ecx; Src
0x5407DC: mov     ecx, ds:0B33B00h
0x5407E2: call    SaveLoad_SaveData
0x5407E7: mov     ecx, ds:0B33B00h
0x5407ED: push    4; Size
0x5407EF: lea     edx, [esi+0D8h]
0x5407F5: push    edx; Src
0x5407F6: call    SaveLoad_SaveData
0x5407FB: mov     ecx, ds:0B33B00h
0x540801: push    4; Size
0x540803: lea     eax, [esi+0DCh]
0x540809: push    eax; Src
0x54080A: call    SaveLoad_SaveData
0x54080F: mov     ecx, ds:0B33B00h
0x540815: cmp     byte ptr [ecx+7Ch], 69h ; 'i'
0x540819: jb      short loc_54083D
0x54081B: push    4; Size
0x54081D: lea     edx, [esi+0FCh]
0x540823: push    edx; Src
0x540824: call    SaveLoad_SaveData
0x540829: mov     ecx, ds:0B33B00h
0x54082F: push    4; Size
0x540831: add     esi, 0F4h ; 'ô'
0x540837: push    esi; Src
0x540838: call    SaveLoad_SaveData
0x54083D: pop     edi
0x54083E: pop     esi
0x54083F: add     esp, 10h
0x540842: retn
