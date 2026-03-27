0x4170D3: mov     ecx, dword_B3350C
0x4170D9: xor     eax, eax
0x4170DB: test    ecx, ecx
0x4170DD: jbe     short loc_4170F2
0x4170DF: mov     edx, dword_B33510
0x4170E5: cmp     dword ptr [edx+eax*4], 0
0x4170E9: jnz     short loc_41710D
0x4170EB: add     eax, 1
0x4170EE: cmp     eax, ecx
0x4170F0: jb      short loc_4170E5
0x4170F2: xor     eax, eax
0x4170F4: test    eax, eax
0x4170F6: mov     esi, eax
0x4170F8: jz      loc_4171C5
0x4170FE: push    edi
0x4170FF: nop
0x417100: mov     eax, [esi]
0x417102: test    eax, eax
0x417104: mov     edi, [esi+8]
0x417107: jz      short loc_417112
0x417109: mov     esi, eax
0x41710B: jmp     short loc_417150
0x41710D: mov     eax, [edx+eax*4]
0x417110: jmp     short loc_4170F4
0x417112: mov     eax, [esi+4]
0x417115: mov     edx, EffectSettingCollection
0x41711B: push    eax
0x41711C: mov     eax, [edx+4]
0x41711F: mov     ecx, offset EffectSettingCollection
0x417124: call    eax
0x417126: mov     edx, dword_B3350C
0x41712C: add     eax, 1
0x41712F: cmp     eax, edx
0x417131: jnb     short loc_41714E
0x417133: mov     esi, dword_B33510
0x417139: lea     esp, [esp+0]
0x417140: mov     ecx, [esi+eax*4]
0x417143: test    ecx, ecx
0x417145: jnz     short loc_417184
0x417147: add     eax, 1
0x41714A: cmp     eax, edx
0x41714C: jb      short loc_417140
0x41714E: xor     esi, esi
0x417150: mov     eax, [esp+4+arg_8]
0x417154: test    eax, eax
0x417156: jz      short loc_41716E
0x417158: mov     ecx, dword ptr [esp+4+arg_10]
0x41715C: mov     edx, [esp+4+arg_C]
0x417160: push    ecx
0x417161: push    edx
0x417162: push    eax
0x417163: mov     ecx, edi
0x417165: call    EffectSetting_Filter
0x41716A: test    al, al
0x41716C: jz      short loc_4171BC
0x41716E: cmp     [esp+4+arg_14], 0
0x417173: jz      short EffectSettingCollection_FilteredEffectList___InsertNodeFront
0x417175: push    offset EffectSettingCollection_Comparator
0x41717A: push    edi
0x41717B: mov     ecx, ebp
0x41717D: call    BSSimpleList_InsertSorted
0x417182: jmp     short loc_4171BC
0x417184: mov     esi, ecx
0x417186: jmp     short loc_417150
