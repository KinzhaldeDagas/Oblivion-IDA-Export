0x6E10B0: push    0FFFFFFFFh
0x6E10B2: push    offset SEH_6E10B0
0x6E10B7: mov     eax, large fs:0
0x6E10BD: push    eax
0x6E10BE: push    ebx
0x6E10BF: push    ebp
0x6E10C0: push    esi
0x6E10C1: push    edi
0x6E10C2: mov     eax, ds:0B30AACh
0x6E10C7: xor     eax, esp
0x6E10C9: push    eax
0x6E10CA: lea     eax, [esp+20h+var_C]
0x6E10CE: mov     large fs:0, eax
0x6E10D4: cmp     byte ptr [ecx+10h], 0
0x6E10D8: mov     [esp+20h+var_4], 0
0x6E10E0: jz      short loc_6E1118
0x6E10E2: mov     edi, [esp+20h+Src]
0x6E10E6: mov     eax, edi
0x6E10E8: lea     edx, [eax+1]
0x6E10EB: jmp     short loc_6E10F0
0x6E10ED: align 10h
0x6E10F0: mov     cl, [eax]
0x6E10F2: add     eax, 1
0x6E10F5: test    cl, cl
0x6E10F7: jnz     short loc_6E10F0
0x6E10F9: sub     eax, edx
0x6E10FB: lea     esi, [eax+1]
0x6E10FE: push    esi; Size
0x6E10FF: call    FormHeapAlloc
0x6E1104: mov     ebx, [esp+24h+arg_0]
0x6E1108: push    edi; Src
0x6E1109: push    esi; SizeInBytes
0x6E110A: push    eax; Dst
0x6E110B: mov     [ebx+4], eax
0x6E110E: call    _strcpy_s
0x6E1113: add     esp, 10h
0x6E1116: jmp     short loc_6E1123
0x6E1118: mov     ebx, [esp+20h+arg_0]
0x6E111C: mov     eax, [esp+20h+Src]
0x6E1120: mov     [ebx+4], eax
0x6E1123: mov     esi, [ebx+8]
0x6E1126: mov     edi, [esp+20h+arg_8]
0x6E112A: cmp     esi, edi
0x6E112C: mov     ebp, ds:0A2807Ch
0x6E1132: jz      short loc_6E1161
0x6E1134: test    esi, esi
0x6E1136: jz      short loc_6E1150
0x6E1138: lea     ecx, [esi+4]
0x6E113B: push    ecx; lpAddend
0x6E113C: call    ebp ; InterlockedDecrement
0x6E113E: test    eax, eax
0x6E1140: jnz     short loc_6E1150
0x6E1142: test    esi, esi
0x6E1144: jz      short loc_6E1150
0x6E1146: mov     edx, [esi]
0x6E1148: mov     eax, [edx]
0x6E114A: push    1
0x6E114C: mov     ecx, esi
0x6E114E: call    eax
0x6E1150: test    edi, edi
0x6E1152: mov     [ebx+8], edi
0x6E1155: jz      short loc_6E1161
0x6E1157: lea     ecx, [edi+4]
0x6E115A: push    ecx; lpAddend
0x6E115B: call    dword ptr ds:0A28078h
0x6E1161: test    edi, edi
0x6E1163: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6E116B: jz      short loc_6E1181
0x6E116D: lea     edx, [edi+4]
0x6E1170: push    edx; lpAddend
0x6E1171: call    ebp ; InterlockedDecrement
0x6E1173: test    eax, eax
0x6E1175: jnz     short loc_6E1181
0x6E1177: mov     eax, [edi]
0x6E1179: mov     edx, [eax]
0x6E117B: push    1
0x6E117D: mov     ecx, edi
0x6E117F: call    edx
0x6E1181: mov     ecx, dword ptr [esp+20h+var_C]
0x6E1185: mov     large fs:0, ecx
0x6E118C: pop     ecx
0x6E118D: pop     edi
0x6E118E: pop     esi
0x6E118F: pop     ebp
0x6E1190: pop     ebx
0x6E1191: add     esp, 0Ch
0x6E1194: retn    0Ch
