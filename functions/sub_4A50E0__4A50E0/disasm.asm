0x4A50E0: push    0FFFFFFFFh
0x4A50E2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x4A50E7: mov     eax, large fs:0
0x4A50ED: push    eax
0x4A50EE: push    ecx
0x4A50EF: push    ebx
0x4A50F0: push    ebp
0x4A50F1: push    esi
0x4A50F2: push    edi
0x4A50F3: mov     eax, ds:0B30AACh
0x4A50F8: xor     eax, esp
0x4A50FA: push    eax
0x4A50FB: lea     eax, [esp+24h+var_C]
0x4A50FF: mov     large fs:0, eax
0x4A5105: mov     esi, ecx
0x4A5107: call    sub_4A3560
0x4A510C: mov     eax, [esi]
0x4A510E: mov     edx, [eax+24h]
0x4A5111: mov     ecx, esi
0x4A5113: call    edx
0x4A5115: push    eax
0x4A5116: push    444D4452h
0x4A511B: call    TESForm_PutCurrentChunkData4
0x4A5120: add     esp, 8
0x4A5123: xor     ebp, ebp
0x4A5125: add     esi, 0Ch
0x4A5128: mov     eax, esi
0x4A512A: jz      short loc_4A513F
0x4A512C: lea     esp, [esp+0]
0x4A5130: cmp     dword ptr [eax], 0
0x4A5133: jz      short loc_4A5138
0x4A5135: add     ebp, 1
0x4A5138: mov     eax, [eax+4]
0x4A513B: test    eax, eax
0x4A513D: jnz     short loc_4A5130
0x4A513F: xor     ecx, ecx
0x4A5141: mov     eax, ebp
0x4A5143: mov     edx, 0Ch
0x4A5148: mul     edx
0x4A514A: seto    cl
0x4A514D: neg     ecx
0x4A514F: or      ecx, eax
0x4A5151: push    ecx; Size
0x4A5152: call    FormHeapAlloc
0x4A5157: mov     edi, eax
0x4A5159: add     esp, 4
0x4A515C: mov     [esp+24h+var_10], edi
0x4A5160: test    edi, edi
0x4A5162: mov     [esp+24h+var_4], 0
0x4A516A: jz      short loc_4A517C
0x4A516C: push    offset sub_4A5040
0x4A5171: push    ebp
0x4A5172: push    0Ch
0x4A5174: push    edi
0x4A5175: call    sub_401080
0x4A517A: jmp     short loc_4A517E
0x4A517C: xor     edi, edi
0x4A517E: xor     edx, edx
0x4A5180: test    esi, esi
0x4A5182: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4A518A: jz      short loc_4A51B7
0x4A518C: mov     eax, edi
0x4A518E: mov     edi, edi
0x4A5190: mov     ecx, [esi]
0x4A5192: test    ecx, ecx
0x4A5194: jz      short loc_4A51B7
0x4A5196: cmp     edx, ebp
0x4A5198: jnb     short loc_4A51B7
0x4A519A: mov     ebx, [ecx]
0x4A519C: mov     [eax], ebx
0x4A519E: mov     ebx, [ecx+4]
0x4A51A1: mov     [eax+4], ebx
0x4A51A4: mov     ecx, [ecx+8]
0x4A51A7: mov     [eax+8], ecx
0x4A51AA: mov     esi, [esi+4]
0x4A51AD: add     edx, 1
0x4A51B0: add     eax, 0Ch
0x4A51B3: test    esi, esi
0x4A51B5: jnz     short loc_4A5190
0x4A51B7: lea     edx, [ebp+ebp*2+0]
0x4A51BB: add     edx, edx
0x4A51BD: add     edx, edx
0x4A51BF: push    edx; Size
0x4A51C0: push    edi; Src
0x4A51C1: push    44534452h; int
0x4A51C6: call    TESForm_PutFormRecordChunkData
0x4A51CB: push    edi
0x4A51CC: call    FormHeapFree
0x4A51D1: add     esp, 10h
0x4A51D4: mov     ecx, [esp+24h+var_C]
0x4A51D8: mov     large fs:0, ecx
0x4A51DF: pop     ecx
0x4A51E0: pop     edi
0x4A51E1: pop     esi
0x4A51E2: pop     ebp
0x4A51E3: pop     ebx
0x4A51E4: add     esp, 10h
0x4A51E7: retn
