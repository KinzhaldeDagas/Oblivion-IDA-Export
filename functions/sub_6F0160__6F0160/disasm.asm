0x6F0160: push    ebp
0x6F0161: mov     ebp, esp
0x6F0163: push    0FFFFFFFFh
0x6F0165: push    offset SEH_6F0160
0x6F016A: mov     eax, large fs:0
0x6F0170: push    eax
0x6F0171: sub     esp, 10h
0x6F0174: push    ebx
0x6F0175: push    esi
0x6F0176: push    edi
0x6F0177: mov     eax, ds:0B30AACh
0x6F017C: xor     eax, ebp
0x6F017E: push    eax
0x6F017F: lea     eax, [ebp+var_C]
0x6F0182: mov     large fs:0, eax
0x6F0188: mov     [ebp+var_10], esp
0x6F018B: mov     esi, ecx
0x6F018D: mov     eax, [ebp+arg_C]
0x6F0190: mov     ebx, [esi+4]
0x6F0193: test    ebx, ebx
0x6F0195: mov     ecx, [eax]
0x6F0197: mov     dx, [eax+4]
0x6F019B: mov     [ebp+var_1C], ecx
0x6F019E: mov     [ebp+var_18], dx
0x6F01A2: jnz     short loc_6F01A8
0x6F01A4: xor     ecx, ecx
0x6F01A6: jmp     short loc_6F01BB
0x6F01A8: mov     ecx, [esi+0Ch]
0x6F01AB: sub     ecx, ebx
0x6F01AD: mov     eax, 2AAAAAABh
0x6F01B2: imul    ecx
0x6F01B4: mov     ecx, edx
0x6F01B6: shr     ecx, 1Fh
0x6F01B9: add     ecx, edx
0x6F01BB: mov     edi, [ebp+arg_8]
0x6F01BE: test    edi, edi
0x6F01C0: jz      loc_6F03E0
0x6F01C6: test    ebx, ebx
0x6F01C8: jnz     short loc_6F01CE
0x6F01CA: xor     eax, eax
0x6F01CC: jmp     short loc_6F01E1
0x6F01CE: mov     edx, [esi+8]
0x6F01D1: sub     edx, ebx
0x6F01D3: mov     eax, 2AAAAAABh
0x6F01D8: imul    edx
0x6F01DA: mov     eax, edx
0x6F01DC: shr     eax, 1Fh
0x6F01DF: add     eax, edx
0x6F01E1: or      edx, 0FFFFFFFFh
0x6F01E4: sub     edx, eax
0x6F01E6: cmp     edx, edi
0x6F01E8: jnb     short loc_6F01EF
0x6F01EA: call    sub_790B90
0x6F01EF: test    ebx, ebx
0x6F01F1: jnz     short loc_6F01F7
0x6F01F3: xor     eax, eax
0x6F01F5: jmp     short loc_6F020A
0x6F01F7: mov     edx, [esi+8]
0x6F01FA: sub     edx, ebx
0x6F01FC: mov     eax, 2AAAAAABh
0x6F0201: imul    edx
0x6F0203: mov     eax, edx
0x6F0205: shr     eax, 1Fh
0x6F0208: add     eax, edx
0x6F020A: add     eax, edi
0x6F020C: cmp     ecx, eax
0x6F020E: jnb     loc_6F031E
0x6F0214: mov     eax, ecx
0x6F0216: shr     eax, 1
0x6F0218: or      edx, 0FFFFFFFFh
0x6F021B: sub     edx, eax
0x6F021D: cmp     edx, ecx
0x6F021F: jnb     short loc_6F0225
0x6F0221: xor     ecx, ecx
0x6F0223: jmp     short loc_6F0227
0x6F0225: add     ecx, eax
0x6F0227: test    ebx, ebx
0x6F0229: jnz     short loc_6F022F
0x6F022B: xor     eax, eax
0x6F022D: jmp     short loc_6F0242
0x6F022F: mov     edx, [esi+8]
0x6F0232: sub     edx, ebx
0x6F0234: mov     eax, 2AAAAAABh
0x6F0239: imul    edx
0x6F023B: mov     eax, edx
0x6F023D: shr     eax, 1Fh
0x6F0240: add     eax, edx
0x6F0242: add     eax, edi
0x6F0244: cmp     ecx, eax
0x6F0246: jnb     short loc_6F0253
0x6F0248: mov     ecx, esi
0x6F024A: call    sub_54F700
0x6F024F: mov     ecx, eax
0x6F0251: add     ecx, edi
0x6F0253: lea     ecx, [ecx+ecx*2]
0x6F0256: add     ecx, ecx
0x6F0258: push    ecx; Size
0x6F0259: mov     [ebp+var_14], ecx
0x6F025C: call    FormHeapAlloc
0x6F0261: mov     ebx, [ebp+arg_4]
0x6F0264: mov     ecx, [esi+4]
0x6F0267: mov     byte ptr [ebp+arg_8], 0
0x6F026B: mov     edx, [ebp+arg_8]
0x6F026E: push    edx
0x6F026F: mov     [ebp+arg_C], eax
0x6F0272: mov     edx, [ebp+arg_C]
0x6F0275: push    edx
0x6F0276: push    esi
0x6F0277: push    eax
0x6F0278: push    ebx
0x6F0279: push    ecx
0x6F027A: mov     [ebp+var_4], 0
0x6F0281: call    sub_5567D0
0x6F0286: add     esp, 1Ch
0x6F0289: lea     ecx, [ebp+var_1C]
0x6F028C: push    ecx
0x6F028D: push    edi
0x6F028E: push    eax
0x6F028F: mov     ecx, esi
0x6F0291: call    sub_6F00C0
0x6F0296: mov     ecx, [esi+8]
0x6F0299: mov     byte ptr [ebp+arg_8], 0
0x6F029D: mov     edx, [ebp+arg_8]
0x6F02A0: push    edx
0x6F02A1: mov     edx, [ebp+arg_C]
0x6F02A4: push    edx
0x6F02A5: push    esi
0x6F02A6: push    eax
0x6F02A7: push    ecx
0x6F02A8: push    ebx
0x6F02A9: call    sub_5567D0
0x6F02AE: mov     ebx, [esi+4]
0x6F02B1: add     esp, 18h
0x6F02B4: test    ebx, ebx
0x6F02B6: jnz     short loc_6F02BC
0x6F02B8: xor     eax, eax
0x6F02BA: jmp     short loc_6F02CF
0x6F02BC: mov     ecx, [esi+8]
0x6F02BF: sub     ecx, ebx
0x6F02C1: mov     eax, 2AAAAAABh
0x6F02C6: imul    ecx
0x6F02C8: mov     eax, edx
0x6F02CA: shr     eax, 1Fh
0x6F02CD: add     eax, edx
0x6F02CF: add     edi, eax
0x6F02D1: test    ebx, ebx
0x6F02D3: jz      short loc_6F02DE
0x6F02D5: push    ebx
0x6F02D6: call    FormHeapFree
0x6F02DB: add     esp, 4
0x6F02DE: mov     eax, [ebp+arg_C]
0x6F02E1: mov     ecx, [ebp+var_14]
0x6F02E4: add     ecx, eax
0x6F02E6: lea     edx, [edi+edi*2]
0x6F02E9: mov     [esi+0Ch], ecx
0x6F02EC: lea     ecx, [eax+edx*2]
0x6F02EF: mov     [esi+8], ecx
0x6F02F2: mov     [esi+4], eax
0x6F02F5: mov     ecx, [ebp+var_C]
0x6F02F8: mov     large fs:0, ecx
0x6F02FF: pop     ecx
0x6F0300: pop     edi
0x6F0301: pop     esi
0x6F0302: pop     ebx
0x6F0303: mov     esp, ebp
0x6F0305: pop     ebp
0x6F0306: retn    10h
0x6F0309: mov     edx, [ebp+arg_C]
0x6F030C: push    edx
0x6F030D: call    FormHeapFree
0x6F0312: add     esp, 4
0x6F0315: push    0
0x6F0317: push    0
0x6F0319: call    ThrowException??
0x6F031E: mov     ecx, [esi+8]
0x6F0321: mov     ebx, [ebp+arg_4]
0x6F0324: mov     edx, ecx
0x6F0326: sub     edx, ebx
0x6F0328: mov     eax, 2AAAAAABh
0x6F032D: imul    edx
0x6F032F: mov     eax, edx
0x6F0331: shr     eax, 1Fh
0x6F0334: add     eax, edx
0x6F0336: cmp     eax, edi
0x6F0338: mov     [ebp+arg_C], ecx
0x6F033B: jnb     short loc_6F03A9
0x6F033D: lea     eax, [edi+edi*2]
0x6F0340: add     eax, eax
0x6F0342: mov     [ebp+arg_C], eax
0x6F0345: add     eax, ebx
0x6F0347: push    eax
0x6F0348: push    ecx
0x6F0349: push    ebx
0x6F034A: mov     ecx, esi
0x6F034C: call    sub_6F0130
0x6F0351: mov     ecx, [esi+8]
0x6F0354: lea     edx, [ebp+var_1C]
0x6F0357: push    edx
0x6F0358: mov     edx, ecx
0x6F035A: sub     edx, ebx
0x6F035C: mov     eax, 2AAAAAABh
0x6F0361: imul    edx
0x6F0363: mov     eax, edx
0x6F0365: shr     eax, 1Fh
0x6F0368: add     eax, edx
0x6F036A: sub     edi, eax
0x6F036C: push    edi
0x6F036D: push    ecx
0x6F036E: mov     ecx, esi
0x6F0370: mov     [ebp+var_4], 2
0x6F0377: call    sub_6F00C0
0x6F037C: mov     eax, [ebp+arg_C]
0x6F037F: add     [esi+8], eax
0x6F0382: mov     esi, [esi+8]
0x6F0385: lea     ecx, [ebp+var_1C]
0x6F0388: push    ecx
0x6F0389: sub     esi, eax
0x6F038B: push    esi
0x6F038C: push    ebx
0x6F038D: call    sub_6F0090
0x6F0392: add     esp, 0Ch
0x6F0395: mov     ecx, [ebp+var_C]
0x6F0398: mov     large fs:0, ecx
0x6F039F: pop     ecx
0x6F03A0: pop     edi
0x6F03A1: pop     esi
0x6F03A2: pop     ebx
0x6F03A3: mov     esp, ebp
0x6F03A5: pop     ebp
0x6F03A6: retn    10h
0x6F03A9: push    ecx
0x6F03AA: lea     edi, [edi+edi*2]
0x6F03AD: mov     eax, ecx
0x6F03AF: add     edi, edi
0x6F03B1: sub     eax, edi
0x6F03B3: push    ecx
0x6F03B4: push    eax
0x6F03B5: mov     ecx, esi
0x6F03B7: mov     [ebp+arg_8], eax
0x6F03BA: call    sub_6F0130
0x6F03BF: mov     edx, [ebp+arg_C]
0x6F03C2: mov     [esi+8], eax
0x6F03C5: mov     eax, [ebp+arg_8]
0x6F03C8: push    edx
0x6F03C9: push    eax
0x6F03CA: push    ebx
0x6F03CB: call    sub_6F0100
0x6F03D0: lea     ecx, [ebp+var_1C]
0x6F03D3: push    ecx
0x6F03D4: add     edi, ebx
0x6F03D6: push    edi
0x6F03D7: push    ebx
0x6F03D8: call    sub_6F0090
0x6F03DD: add     esp, 18h
0x6F03E0: mov     ecx, [ebp+var_C]
0x6F03E3: mov     large fs:0, ecx
0x6F03EA: pop     ecx
0x6F03EB: pop     edi
0x6F03EC: pop     esi
0x6F03ED: pop     ebx
0x6F03EE: mov     esp, ebp
0x6F03F0: pop     ebp
0x6F03F1: retn    10h
