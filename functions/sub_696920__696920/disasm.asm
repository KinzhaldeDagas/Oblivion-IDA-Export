0x696920: sub     esp, 8
0x696923: push    esi
0x696924: mov     esi, ecx
0x696926: mov     eax, [esi]
0x696928: mov     edx, [eax+148h]
0x69692E: push    edi
0x69692F: call    edx
0x696931: mov     eax, [esp+10h+arg_4]
0x696935: mov     ecx, [esp+10h+arg_0]
0x696939: push    eax
0x69693A: push    ecx
0x69693B: mov     ecx, esi
0x69693D: call    sub_69F800
0x696942: mov     ecx, ds:0B33B00h
0x696948: push    4; Size
0x69694A: lea     edx, [esi+80h]
0x696950: push    edx; Dst
0x696951: call    SaveLoad_LoadData
0x696956: push    4; a2
0x696958: lea     eax, [esi+5Ch]
0x69695B: push    eax; a1
0x69695C: mov     ecx, esi
0x69695E: call    TESForm_LoadDataFromCurrentSaveGame
0x696963: push    24h ; '$'; Size
0x696965: call    FormHeapAlloc
0x69696A: add     esp, 4
0x69696D: test    eax, eax
0x69696F: jz      short loc_69697C
0x696971: mov     dword ptr [eax+20h], 0
0x696978: mov     edi, eax
0x69697A: jmp     short loc_69697E
0x69697C: xor     edi, edi
0x69697E: mov     ecx, ds:0B33B00h
0x696984: cmp     byte ptr [ecx+7Ch], 30h ; '0'
0x696988: jb      short loc_6969B2
0x69698A: push    0Ch; a2
0x69698C: push    edi; a1
0x69698D: mov     ecx, esi
0x69698F: call    TESForm_LoadDataFromCurrentSaveGame
0x696994: mov     ecx, ds:0B33B00h
0x69699A: push    10h; Size
0x69699C: lea     edx, [edi+0Ch]
0x69699F: push    edx; Dst
0x6969A0: call    SaveLoad_LoadData
0x6969A5: push    4; a2
0x6969A7: lea     eax, [edi+1Ch]
0x6969AA: push    eax; a1
0x6969AB: mov     ecx, esi
0x6969AD: call    TESForm_LoadDataFromCurrentSaveGame
0x6969B2: mov     ecx, ds:0B33B00h
0x6969B8: cmp     byte ptr [ecx+7Ch], 30h ; '0'
0x6969BC: jnb     short loc_696A01
0x6969BE: mov     ecx, ds:0B333C4h
0x6969C4: mov     edx, [ecx]
0x6969C6: mov     eax, [edx+174h]
0x6969CC: call    eax
0x6969CE: mov     ecx, [eax]
0x6969D0: mov     [edi], ecx
0x6969D2: mov     edx, [eax+4]
0x6969D5: mov     [edi+4], edx
0x6969D8: mov     eax, [eax+8]
0x6969DB: mov     [edi+8], eax
0x6969DE: mov     ecx, ds:0B27110h
0x6969E4: mov     [edi+0Ch], ecx
0x6969E7: mov     edx, ds:0B27114h
0x6969ED: mov     [edi+10h], edx
0x6969F0: mov     eax, ds:0B27118h
0x6969F5: mov     [edi+14h], eax
0x6969F8: mov     ecx, ds:0B2711Ch
0x6969FE: mov     [edi+18h], ecx
0x696A01: push    4; a2
0x696A03: lea     edx, [esp+14h+var_4]
0x696A07: push    edx; a1
0x696A08: mov     ecx, esi
0x696A0A: call    TESForm_LoadFormIDFromCurrentSaveGame
0x696A0F: mov     eax, [esp+18h+var_C]
0x696A13: push    2; a2
0x696A15: lea     ecx, [esp+1Ch+var_10]
0x696A19: push    ecx; a1
0x696A1A: mov     ecx, esi
0x696A1C: mov     [esi+98h], eax
0x696A22: call    TESForm_LoadDataFromCurrentSaveGame
0x696A27: mov     ax, word ptr [esp+18h+var_10]
0x696A2C: test    ax, ax
0x696A2F: jz      short loc_696A72
0x696A31: movzx   eax, ax
0x696A34: xor     ecx, ecx
0x696A36: add     eax, 1
0x696A39: mov     edx, 4
0x696A3E: mul     edx
0x696A40: seto    cl
0x696A43: neg     ecx
0x696A45: or      ecx, eax
0x696A47: push    ecx; Size
0x696A48: call    FormHeapAlloc
0x696A4D: mov     [edi+20h], eax
0x696A50: movzx   ecx, word ptr [esp+1Ch+var_10]
0x696A55: mov     [eax], ecx
0x696A57: movzx   edx, word ptr [esp+1Ch+var_10]
0x696A5C: mov     eax, [edi+20h]
0x696A5F: add     edx, edx
0x696A61: add     esp, 4
0x696A64: add     edx, edx
0x696A66: push    edx; a2
0x696A67: add     eax, 4
0x696A6A: push    eax; a1
0x696A6B: mov     ecx, esi
0x696A6D: call    TESForm_LoadFormIDFromCurrentSaveGame
0x696A72: mov     [esi+84h], edi
0x696A78: mov     ecx, ds:0B33B00h
0x696A7E: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x696A82: jb      short loc_696A94
0x696A84: push    4; a2
0x696A86: lea     edx, [esi+0A0h]
0x696A8C: push    edx; a1
0x696A8D: mov     ecx, esi
0x696A8F: call    TESForm_LoadDataFromCurrentSaveGame
0x696A94: pop     edi
0x696A95: pop     esi
0x696A96: add     esp, 8
0x696A99: retn    8
