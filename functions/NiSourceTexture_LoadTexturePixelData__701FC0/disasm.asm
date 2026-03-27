0x701FC0: push    0FFFFFFFFh
0x701FC2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x701FC7: mov     eax, large fs:0
0x701FCD: push    eax
0x701FCE: push    ecx
0x701FCF: push    ebx
0x701FD0: push    esi
0x701FD1: push    edi
0x701FD2: mov     eax, ds:0B30AACh
0x701FD7: xor     eax, esp
0x701FD9: push    eax
0x701FDA: lea     eax, [esp+20h+var_C]
0x701FDE: mov     large fs:0, eax
0x701FE4: push    48h ; 'H'; Size
0x701FE6: call    FormHeapAlloc
0x701FEB: add     esp, 4
0x701FEE: mov     [esp+20h+var_10], eax
0x701FF2: test    eax, eax
0x701FF4: mov     [esp+20h+var_4], 0
0x701FFC: jz      short loc_702009
0x701FFE: mov     ecx, eax; this
0x702000: call    ??0NiSourceTexture@@QAE@XZ; NiSourceTexture::NiSourceTexture(void)
0x702005: mov     esi, eax
0x702007: jmp     short loc_70200B
0x702009: xor     esi, esi
0x70200B: mov     eax, [esp+20h+arg_4]
0x70200F: mov     ecx, [eax]
0x702011: mov     ebx, [esp+20h+arg_0]
0x702015: mov     [esi+18h], ecx
0x702018: mov     edx, [eax+4]
0x70201B: mov     [esi+1Ch], edx
0x70201E: mov     eax, [eax+8]
0x702021: mov     [esi+20h], eax
0x702024: mov     edi, [esi+3Ch]
0x702027: cmp     edi, ebx
0x702029: mov     [esp+20h+var_4], 0FFFFFFFFh
0x702031: jz      short loc_702064
0x702033: test    edi, edi
0x702035: jz      short loc_702053
0x702037: lea     ecx, [edi+4]
0x70203A: push    ecx; lpAddend
0x70203B: call    dword ptr ds:0A2807Ch
0x702041: test    eax, eax
0x702043: jnz     short loc_702053
0x702045: test    edi, edi
0x702047: jz      short loc_702053
0x702049: mov     edx, [edi]
0x70204B: mov     eax, [edx]
0x70204D: push    1
0x70204F: mov     ecx, edi
0x702051: call    eax
0x702053: test    ebx, ebx
0x702055: mov     [esi+3Ch], ebx
0x702058: jz      short loc_702064
0x70205A: add     ebx, 4
0x70205D: push    ebx; lpAddend
0x70205E: call    dword ptr ds:0A28078h
0x702064: cmp     byte ptr ds:0B256CCh, 0
0x70206B: jz      short loc_702099
0x70206D: mov     edx, [esi]
0x70206F: mov     eax, [edx+5Ch]
0x702072: mov     ecx, esi
0x702074: call    eax
0x702076: test    al, al
0x702078: jnz     short loc_702099
0x70207A: mov     edx, [esi]
0x70207C: mov     eax, [edx]
0x70207E: push    1
0x702080: mov     ecx, esi
0x702082: call    eax
0x702084: xor     eax, eax
0x702086: mov     ecx, dword ptr [esp+20h+var_C]
0x70208A: mov     large fs:0, ecx
0x702091: pop     ecx
0x702092: pop     edi
0x702093: pop     esi
0x702094: pop     ebx
0x702095: add     esp, 10h
0x702098: retn
0x702099: mov     eax, esi
0x70209B: mov     ecx, dword ptr [esp+20h+var_C]
0x70209F: mov     large fs:0, ecx
0x7020A6: pop     ecx
0x7020A7: pop     edi
0x7020A8: pop     esi
0x7020A9: pop     ebx
0x7020AA: add     esp, 10h
0x7020AD: retn
