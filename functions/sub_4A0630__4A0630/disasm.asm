0x4A0630: push    0FFFFFFFFh
0x4A0632: push    offset SEH_7C17D0
0x4A0637: mov     eax, large fs:0
0x4A063D: push    eax
0x4A063E: push    ecx
0x4A063F: push    ebp
0x4A0640: push    esi
0x4A0641: push    edi
0x4A0642: mov     eax, ds:0B30AACh
0x4A0647: xor     eax, esp
0x4A0649: push    eax
0x4A064A: lea     eax, [esp+20h+var_C]
0x4A064E: mov     large fs:0, eax
0x4A0654: mov     esi, ecx
0x4A0656: mov     [esp+20h+var_10], 0
0x4A065E: mov     ecx, [esp+20h+arg_4]
0x4A0662: mov     ebp, [ecx]
0x4A0664: cmp     ebp, [esi+4]
0x4A0667: jnz     short loc_4A0691
0x4A0669: mov     eax, [ebp+0]
0x4A066C: mov     edi, [esp+20h+arg_0]
0x4A0670: mov     [ecx], eax
0x4A0672: push    edi
0x4A0673: mov     ecx, esi
0x4A0675: call    sub_4A0480
0x4A067A: mov     eax, edi
0x4A067C: mov     ecx, [esp+20h+var_C]
0x4A0680: mov     large fs:0, ecx
0x4A0687: pop     ecx
0x4A0688: pop     edi
0x4A0689: pop     esi
0x4A068A: pop     ebp
0x4A068B: add     esp, 10h
0x4A068E: retn    8
0x4A0691: cmp     ebp, [esi+8]
0x4A0694: jnz     short loc_4A06BF
0x4A0696: mov     edi, [esp+20h+arg_0]
0x4A069A: mov     dword ptr [ecx], 0
0x4A06A0: push    edi
0x4A06A1: mov     ecx, esi
0x4A06A3: call    sub_4A0510
0x4A06A8: mov     eax, edi
0x4A06AA: mov     ecx, [esp+20h+var_C]
0x4A06AE: mov     large fs:0, ecx
0x4A06B5: pop     ecx
0x4A06B6: pop     edi
0x4A06B7: pop     esi
0x4A06B8: pop     ebp
0x4A06B9: add     esp, 10h
0x4A06BC: retn    8
0x4A06BF: mov     edx, [ebp+4]
0x4A06C2: test    edx, edx
0x4A06C4: mov     eax, [ebp+0]
0x4A06C7: mov     [ecx], eax
0x4A06C9: jz      short loc_4A06CD
0x4A06CB: mov     [edx], eax
0x4A06CD: test    eax, eax
0x4A06CF: jz      short loc_4A06D4
0x4A06D1: mov     [eax+4], edx
0x4A06D4: mov     edi, [ebp+8]
0x4A06D7: test    edi, edi
0x4A06D9: mov     [esp+20h+arg_4], edi
0x4A06DD: jz      short loc_4A06E9
0x4A06DF: lea     ecx, [edi+4]
0x4A06E2: push    ecx; lpAddend
0x4A06E3: call    dword ptr ds:0A28078h
0x4A06E9: mov     edx, [esi]
0x4A06EB: mov     eax, [edx+8]
0x4A06EE: push    ebp
0x4A06EF: mov     ecx, esi
0x4A06F1: mov     [esp+24h+var_4], 1
0x4A06F9: call    eax
0x4A06FB: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x4A06FF: test    edi, edi
0x4A0701: mov     esi, [esp+20h+arg_0]
0x4A0705: mov     [esi], edi
0x4A0707: jz      short loc_4A0713
0x4A0709: lea     ecx, [edi+4]
0x4A070C: push    ecx; lpAddend
0x4A070D: call    dword ptr ds:0A28078h
0x4A0713: test    edi, edi
0x4A0715: mov     [esp+20h+var_10], 1
0x4A071D: mov     byte ptr [esp+20h+var_4], 0
0x4A0722: jz      short loc_4A073C
0x4A0724: lea     edx, [edi+4]
0x4A0727: push    edx; lpAddend
0x4A0728: call    dword ptr ds:0A2807Ch
0x4A072E: test    eax, eax
0x4A0730: jnz     short loc_4A073C
0x4A0732: mov     eax, [edi]
0x4A0734: mov     edx, [eax]
0x4A0736: push    1
0x4A0738: mov     ecx, edi
0x4A073A: call    edx
0x4A073C: mov     eax, esi
0x4A073E: mov     ecx, [esp+20h+var_C]
0x4A0742: mov     large fs:0, ecx
0x4A0749: pop     ecx
0x4A074A: pop     edi
0x4A074B: pop     esi
0x4A074C: pop     ebp
0x4A074D: add     esp, 10h
0x4A0750: retn    8
