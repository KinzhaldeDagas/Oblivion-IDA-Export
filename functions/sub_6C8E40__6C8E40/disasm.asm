0x6C8E40: push    0FFFFFFFFh
0x6C8E42: push    offset SEH_6C8E40
0x6C8E47: mov     eax, large fs:0
0x6C8E4D: push    eax
0x6C8E4E: sub     esp, 10h
0x6C8E51: push    ebx
0x6C8E52: push    ebp
0x6C8E53: push    esi
0x6C8E54: push    edi
0x6C8E55: mov     eax, ds:0B30AACh
0x6C8E5A: xor     eax, esp
0x6C8E5C: push    eax
0x6C8E5D: lea     eax, [esp+30h+var_C]
0x6C8E61: mov     large fs:0, eax
0x6C8E67: mov     esi, ecx
0x6C8E69: mov     edi, [esp+30h+a2]
0x6C8E6D: push    edi; a2
0x6C8E6E: call    sub_7008A0
0x6C8E73: cmp     dword ptr [edi+0D8h], 0A010068h
0x6C8E7D: mov     ecx, edi
0x6C8E7F: jnb     loc_6C909A
0x6C8E85: lea     eax, [esi+8]
0x6C8E88: push    eax
0x6C8E89: call    sub_713620
0x6C8E8E: lea     ecx, [esi+5Ch]
0x6C8E91: push    ecx
0x6C8E92: mov     ecx, edi
0x6C8E94: call    sub_713620
0x6C8E99: mov     ecx, edi
0x6C8E9B: call    sub_712A20
0x6C8EA0: mov     eax, [edi+21Ch]
0x6C8EA6: push    1
0x6C8EA8: lea     edx, [esp+34h+var_14]
0x6C8EAC: push    edx
0x6C8EAD: push    4
0x6C8EAF: lea     ebp, [esi+0Ch]
0x6C8EB2: push    ebp
0x6C8EB3: push    eax
0x6C8EB4: mov     eax, [eax+4]
0x6C8EB7: mov     [esp+44h+var_14], 4
0x6C8EBF: call    eax
0x6C8EC1: mov     ebx, [ebp+0]
0x6C8EC4: xor     ecx, ecx
0x6C8EC6: mov     eax, ebx
0x6C8EC8: mov     edx, 10h
0x6C8ECD: mul     edx
0x6C8ECF: seto    cl
0x6C8ED2: mov     dword ptr [esi+10h], 0Ch
0x6C8ED9: neg     ecx
0x6C8EDB: or      ecx, eax
0x6C8EDD: xor     eax, eax
0x6C8EDF: add     ecx, 4
0x6C8EE2: setb    al
0x6C8EE5: neg     eax
0x6C8EE7: or      eax, ecx
0x6C8EE9: push    eax; Size
0x6C8EEA: call    FormHeapAlloc
0x6C8EEF: add     esp, 18h
0x6C8EF2: mov     [esp+30h+var_10], eax
0x6C8EF6: test    eax, eax
0x6C8EF8: mov     [esp+30h+var_4], 0
0x6C8F00: jz      short loc_6C8F24
0x6C8F02: push    offset sub_6C64C0; a5
0x6C8F07: push    offset sub_6C62E0; a4
0x6C8F0C: push    ebx; size
0x6C8F0D: mov     [eax], ebx
0x6C8F0F: add     eax, 4
0x6C8F12: push    10h; a2
0x6C8F14: push    eax; a1
0x6C8F15: mov     [esp+44h+a2], eax
0x6C8F19: call    ArrayConstructor
0x6C8F1E: mov     eax, [esp+30h+a2]
0x6C8F22: jmp     short loc_6C8F26
0x6C8F24: xor     eax, eax
0x6C8F26: mov     ebx, [ebp+0]
0x6C8F29: mov     [esi+14h], eax
0x6C8F2C: xor     ecx, ecx
0x6C8F2E: mov     eax, ebx
0x6C8F30: mov     edx, 10h
0x6C8F35: mul     edx
0x6C8F37: seto    cl
0x6C8F3A: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6C8F42: neg     ecx
0x6C8F44: or      ecx, eax
0x6C8F46: xor     eax, eax
0x6C8F48: add     ecx, 4
0x6C8F4B: setb    al
0x6C8F4E: neg     eax
0x6C8F50: or      eax, ecx
0x6C8F52: push    eax; Size
0x6C8F53: call    FormHeapAlloc
0x6C8F58: add     esp, 4
0x6C8F5B: mov     [esp+30h+var_10], eax
0x6C8F5F: test    eax, eax
0x6C8F61: mov     [esp+30h+var_4], 1
0x6C8F69: jz      short loc_6C8F8D
0x6C8F6B: push    offset sub_7016A0; a5
0x6C8F70: push    offset sub_6C6370; a4
0x6C8F75: push    ebx; size
0x6C8F76: mov     [eax], ebx
0x6C8F78: add     eax, 4
0x6C8F7B: push    10h; a2
0x6C8F7D: push    eax; a1
0x6C8F7E: mov     [esp+44h+a2], eax
0x6C8F82: call    ArrayConstructor
0x6C8F87: mov     eax, [esp+30h+a2]
0x6C8F8B: jmp     short loc_6C8F8F
0x6C8F8D: xor     eax, eax
0x6C8F8F: or      ebx, 0FFFFFFFFh
0x6C8F92: push    14h; Size
0x6C8F94: mov     [esp+34h+var_4], ebx
0x6C8F98: mov     [esi+18h], eax
0x6C8F9B: call    FormHeapAlloc
0x6C8FA0: add     esp, 4
0x6C8FA3: mov     [esp+30h+a2], eax
0x6C8FA7: test    eax, eax
0x6C8FA9: mov     [esp+30h+var_4], 2
0x6C8FB1: jz      short loc_6C8FC6
0x6C8FB3: mov     ecx, [ebp+0]
0x6C8FB6: lea     ecx, [ecx+ecx*4]
0x6C8FB9: shl     ecx, 6
0x6C8FBC: push    ecx; Size
0x6C8FBD: mov     ecx, eax
0x6C8FBF: call    sub_6C5D80
0x6C8FC4: jmp     short loc_6C8FC8
0x6C8FC6: xor     eax, eax
0x6C8FC8: lea     ecx, [esi+64h]; this
0x6C8FCB: push    eax; a2
0x6C8FCC: mov     [esp+34h+var_4], ebx
0x6C8FD0: call    NiSmartPointer_Set??
0x6C8FD5: xor     eax, eax
0x6C8FD7: cmp     [ebp+0], eax
0x6C8FDA: mov     [esp+30h+var_14], eax
0x6C8FDE: jbe     loc_6C9400
0x6C8FE4: mov     [esp+30h+a2], eax
0x6C8FE8: mov     ebx, [esi+18h]
0x6C8FEB: add     ebx, [esp+30h+a2]
0x6C8FEF: mov     eax, [esi+64h]
0x6C8FF2: mov     ebp, [ebx]
0x6C8FF4: cmp     ebp, eax
0x6C8FF6: mov     [esp+30h+var_18], eax
0x6C8FFA: jz      short loc_6C9031
0x6C8FFC: test    ebp, ebp
0x6C8FFE: jz      short loc_6C9021
0x6C9000: lea     edx, [ebp+4]
0x6C9003: push    edx; lpAddend
0x6C9004: call    dword ptr ds:0A2807Ch
0x6C900A: test    eax, eax
0x6C900C: jnz     short loc_6C901D
0x6C900E: test    ebp, ebp
0x6C9010: jz      short loc_6C901D
0x6C9012: mov     eax, [ebp+0]
0x6C9015: mov     edx, [eax]
0x6C9017: push    1
0x6C9019: mov     ecx, ebp
0x6C901B: call    edx
0x6C901D: mov     eax, [esp+30h+var_18]
0x6C9021: test    eax, eax
0x6C9023: mov     [ebx], eax
0x6C9025: jz      short loc_6C9031
0x6C9027: add     eax, 4
0x6C902A: push    eax; lpAddend
0x6C902B: call    dword ptr ds:0A28078h
0x6C9031: lea     eax, [esp+30h+var_1C]
0x6C9035: push    eax
0x6C9036: mov     ecx, edi
0x6C9038: mov     [esp+34h+var_1C], 0
0x6C9040: call    sub_713620
0x6C9045: mov     ebx, [esi+18h]
0x6C9048: mov     eax, [esp+30h+var_1C]
0x6C904C: add     ebx, [esp+30h+a2]
0x6C9050: test    eax, eax
0x6C9052: jnz     short loc_6C905C
0x6C9054: mov     word ptr [ebx+4], 0FFFFh
0x6C905A: jmp     short loc_6C9068
0x6C905C: mov     ecx, [ebx]
0x6C905E: push    eax
0x6C905F: call    sub_6C6270
0x6C9064: mov     [ebx+4], ax
0x6C9068: mov     ecx, [esp+30h+var_1C]
0x6C906C: push    ecx
0x6C906D: call    FormHeapFree
0x6C9072: add     esp, 4
0x6C9075: mov     ecx, edi
0x6C9077: call    sub_712A20
0x6C907C: mov     eax, [esp+30h+var_14]
0x6C9080: add     [esp+30h+a2], 10h
0x6C9085: add     eax, 1
0x6C9088: cmp     eax, [esi+0Ch]
0x6C908B: mov     [esp+30h+var_14], eax
0x6C908F: jb      loc_6C8FE8
0x6C9095: jmp     loc_6C9400
0x6C909A: lea     edx, [esi+8]
0x6C909D: push    edx
0x6C909E: call    sub_713620
0x6C90A3: mov     eax, [edi+21Ch]
0x6C90A9: mov     edx, [eax+4]
0x6C90AC: push    1
0x6C90AE: lea     ecx, [esp+34h+var_14]
0x6C90B2: push    ecx
0x6C90B3: mov     ebx, 4
0x6C90B8: push    ebx
0x6C90B9: lea     ebp, [esi+0Ch]
0x6C90BC: push    ebp
0x6C90BD: push    eax
0x6C90BE: mov     [esp+44h+var_14], ebx
0x6C90C2: call    edx
0x6C90C4: mov     eax, [edi+21Ch]
0x6C90CA: push    1
0x6C90CC: lea     ecx, [esp+48h+var_14]
0x6C90D0: push    ecx
0x6C90D1: push    ebx
0x6C90D2: lea     edx, [esi+10h]
0x6C90D5: push    edx
0x6C90D6: push    eax
0x6C90D7: mov     eax, [eax+4]
0x6C90DA: mov     [esp+58h+var_14], ebx
0x6C90DE: call    eax
0x6C90E0: mov     ebx, [ebp+0]
0x6C90E3: xor     ecx, ecx
0x6C90E5: mov     eax, ebx
0x6C90E7: mov     edx, 10h
0x6C90EC: mul     edx
0x6C90EE: seto    cl
0x6C90F1: neg     ecx
0x6C90F3: or      ecx, eax
0x6C90F5: xor     eax, eax
0x6C90F7: add     ecx, 4
0x6C90FA: setb    al
0x6C90FD: neg     eax
0x6C90FF: or      eax, ecx
0x6C9101: push    eax; Size
0x6C9102: call    FormHeapAlloc
0x6C9107: add     esp, 2Ch
0x6C910A: mov     [esp+30h+var_10], eax
0x6C910E: test    eax, eax
0x6C9110: mov     [esp+30h+var_4], 3
0x6C9118: jz      short loc_6C913C
0x6C911A: push    offset sub_6C64C0; a5
0x6C911F: push    offset sub_6C62E0; a4
0x6C9124: push    ebx; size
0x6C9125: mov     [eax], ebx
0x6C9127: add     eax, 4
0x6C912A: push    10h; a2
0x6C912C: push    eax; a1
0x6C912D: mov     [esp+44h+a2], eax
0x6C9131: call    ArrayConstructor
0x6C9136: mov     eax, [esp+30h+a2]
0x6C913A: jmp     short loc_6C913E
0x6C913C: xor     eax, eax
0x6C913E: mov     ebx, [ebp+0]
0x6C9141: mov     [esi+14h], eax
0x6C9144: xor     ecx, ecx
0x6C9146: mov     eax, ebx
0x6C9148: mov     edx, 10h
0x6C914D: mul     edx
0x6C914F: seto    cl
0x6C9152: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6C915A: neg     ecx
0x6C915C: or      ecx, eax
0x6C915E: xor     eax, eax
0x6C9160: add     ecx, 4
0x6C9163: setb    al
0x6C9166: neg     eax
0x6C9168: or      eax, ecx
0x6C916A: push    eax; Size
0x6C916B: call    FormHeapAlloc
0x6C9170: add     esp, 4
0x6C9173: mov     [esp+30h+var_10], eax
0x6C9177: test    eax, eax
0x6C9179: mov     [esp+30h+var_4], 4
0x6C9181: jz      short loc_6C91A5
0x6C9183: push    offset sub_7016A0; a5
0x6C9188: push    offset sub_6C6370; a4
0x6C918D: push    ebx; size
0x6C918E: mov     [eax], ebx
0x6C9190: add     eax, 4
0x6C9193: push    10h; a2
0x6C9195: push    eax; a1
0x6C9196: mov     [esp+44h+a2], eax
0x6C919A: call    ArrayConstructor
0x6C919F: mov     eax, [esp+30h+a2]
0x6C91A3: jmp     short loc_6C91A7
0x6C91A5: xor     eax, eax
0x6C91A7: mov     [esi+18h], eax
0x6C91AA: mov     eax, [edi+0D8h]
0x6C91B0: or      ebx, 0FFFFFFFFh
0x6C91B3: cmp     eax, 0A010071h
0x6C91B8: mov     [esp+30h+var_4], ebx
0x6C91BC: jnb     short loc_6C91FA
0x6C91BE: push    14h; Size
0x6C91C0: call    FormHeapAlloc
0x6C91C5: add     esp, 4
0x6C91C8: mov     [esp+30h+a2], eax
0x6C91CC: test    eax, eax
0x6C91CE: mov     [esp+30h+var_4], 5
0x6C91D6: jz      short loc_6C91EB
0x6C91D8: mov     edx, [ebp+0]
0x6C91DB: lea     ecx, [edx+edx*4]
0x6C91DE: shl     ecx, 6
0x6C91E1: push    ecx; Size
0x6C91E2: mov     ecx, eax
0x6C91E4: call    sub_6C5D80
0x6C91E9: jmp     short loc_6C91ED
0x6C91EB: xor     eax, eax
0x6C91ED: push    eax; a2
0x6C91EE: lea     ecx, [esi+64h]; this
0x6C91F1: mov     [esp+34h+var_4], ebx
0x6C91F5: call    NiSmartPointer_Set??
0x6C91FA: cmp     dword ptr [ebp+0], 0
0x6C91FE: mov     [esp+30h+var_18], 0
0x6C9206: jbe     loc_6C9296
0x6C920C: xor     ebp, ebp
0x6C920E: cmp     dword ptr [edi+0D8h], 0A010071h
0x6C9218: jnb     short loc_6C9269
0x6C921A: mov     eax, [esi+18h]
0x6C921D: mov     ecx, [esi+64h]
0x6C9220: mov     ebx, [eax+ebp]
0x6C9223: add     eax, ebp
0x6C9225: cmp     ebx, ecx
0x6C9227: mov     [esp+30h+var_14], ecx
0x6C922B: mov     [esp+30h+a2], eax
0x6C922F: jz      short loc_6C9269
0x6C9231: test    ebx, ebx
0x6C9233: jz      short loc_6C9259
0x6C9235: lea     edx, [ebx+4]
0x6C9238: push    edx; lpAddend
0x6C9239: call    dword ptr ds:0A2807Ch
0x6C923F: test    eax, eax
0x6C9241: jnz     short loc_6C9251
0x6C9243: test    ebx, ebx
0x6C9245: jz      short loc_6C9251
0x6C9247: mov     eax, [ebx]
0x6C9249: mov     edx, [eax]
0x6C924B: push    1
0x6C924D: mov     ecx, ebx
0x6C924F: call    edx
0x6C9251: mov     ecx, [esp+30h+var_14]
0x6C9255: mov     eax, [esp+30h+a2]
0x6C9259: test    ecx, ecx
0x6C925B: mov     [eax], ecx
0x6C925D: jz      short loc_6C9269
0x6C925F: add     ecx, 4
0x6C9262: push    ecx; lpAddend
0x6C9263: call    dword ptr ds:0A28078h
0x6C9269: mov     ecx, [esi+14h]
0x6C926C: push    edi
0x6C926D: add     ecx, ebp
0x6C926F: call    sub_6C8820
0x6C9274: mov     ecx, [esi+18h]
0x6C9277: push    edi
0x6C9278: add     ecx, ebp
0x6C927A: call    sub_6C8A60
0x6C927F: mov     eax, [esp+30h+var_18]
0x6C9283: add     eax, 1
0x6C9286: add     ebp, 10h
0x6C9289: cmp     eax, [esi+0Ch]
0x6C928C: mov     [esp+30h+var_18], eax
0x6C9290: jb      loc_6C920E
0x6C9296: mov     eax, [edi+21Ch]
0x6C929C: push    1
0x6C929E: lea     ecx, [esp+34h+var_14]
0x6C92A2: push    ecx
0x6C92A3: push    4
0x6C92A5: lea     edx, [esi+1Ch]
0x6C92A8: push    edx
0x6C92A9: push    eax
0x6C92AA: mov     eax, [eax+4]
0x6C92AD: mov     [esp+44h+var_14], 4
0x6C92B5: call    eax
0x6C92B7: add     esp, 14h
0x6C92BA: mov     ecx, edi
0x6C92BC: call    sub_712A20
0x6C92C1: mov     eax, [edi+21Ch]
0x6C92C7: push    1
0x6C92C9: lea     ecx, [esp+34h+var_14]
0x6C92CD: push    ecx
0x6C92CE: mov     ebx, 4
0x6C92D3: push    ebx
0x6C92D4: lea     edx, [esp+3Ch+var_18]
0x6C92D8: push    edx
0x6C92D9: push    eax
0x6C92DA: mov     eax, [eax+4]
0x6C92DD: mov     [esp+44h+var_14], ebx
0x6C92E1: call    eax
0x6C92E3: mov     ecx, [esp+44h+var_18]
0x6C92E7: push    1
0x6C92E9: lea     edx, [esp+48h+var_14]
0x6C92ED: push    edx
0x6C92EE: mov     [esi+24h], ecx
0x6C92F1: mov     eax, [edi+21Ch]
0x6C92F7: mov     edx, [eax+4]
0x6C92FA: push    ebx
0x6C92FB: lea     ecx, [esi+28h]
0x6C92FE: push    ecx
0x6C92FF: push    eax
0x6C9300: mov     [esp+58h+var_14], ebx
0x6C9304: call    edx
0x6C9306: add     esp, 28h
0x6C9309: cmp     dword ptr [edi+0D8h], 0A030001h
0x6C9313: jnb     short loc_6C9335
0x6C9315: mov     eax, [edi+21Ch]
0x6C931B: push    1
0x6C931D: lea     ecx, [esp+34h+var_14]
0x6C9321: push    ecx
0x6C9322: push    ebx
0x6C9323: lea     edx, [esp+3Ch+var_18]
0x6C9327: push    edx
0x6C9328: push    eax
0x6C9329: mov     eax, [eax+4]
0x6C932C: mov     [esp+44h+var_14], ebx
0x6C9330: call    eax
0x6C9332: add     esp, 14h
0x6C9335: mov     eax, [edi+21Ch]
0x6C933B: push    1
0x6C933D: lea     ecx, [esp+34h+var_14]
0x6C9341: push    ecx
0x6C9342: push    ebx
0x6C9343: lea     edx, [esi+2Ch]
0x6C9346: push    edx
0x6C9347: push    eax
0x6C9348: mov     eax, [eax+4]
0x6C934B: mov     [esp+44h+var_14], ebx
0x6C934F: call    eax
0x6C9351: mov     eax, [edi+21Ch]
0x6C9357: push    1
0x6C9359: lea     ecx, [esp+48h+var_14]
0x6C935D: push    ecx
0x6C935E: push    ebx
0x6C935F: lea     edx, [esi+30h]
0x6C9362: push    edx
0x6C9363: push    eax
0x6C9364: mov     eax, [eax+4]
0x6C9367: mov     [esp+58h+var_14], ebx
0x6C936B: call    eax
0x6C936D: add     esp, 28h
0x6C9370: cmp     dword ptr [edi+0D8h], 0A01006Bh
0x6C937A: jnb     short loc_6C93A1
0x6C937C: mov     eax, [edi+21Ch]
0x6C9382: push    1
0x6C9384: lea     ecx, [esp+34h+var_10]
0x6C9388: push    ecx
0x6C9389: push    1
0x6C938B: lea     edx, [esp+3Ch+a2]
0x6C938F: push    edx
0x6C9390: push    eax
0x6C9391: mov     eax, [eax+4]
0x6C9394: mov     [esp+44h+var_10], 1
0x6C939C: call    eax
0x6C939E: add     esp, 14h
0x6C93A1: mov     ecx, edi
0x6C93A3: call    sub_712A20
0x6C93A8: lea     ecx, [esi+5Ch]
0x6C93AB: push    ecx
0x6C93AC: mov     ecx, edi
0x6C93AE: call    sub_713620
0x6C93B3: cmp     dword ptr [edi+0D8h], 0A010071h
0x6C93BD: jb      short loc_6C9400
0x6C93BF: mov     ecx, edi
0x6C93C1: call    sub_712A90
0x6C93C6: mov     edi, [esi+64h]
0x6C93C9: mov     ebx, eax
0x6C93CB: cmp     edi, ebx
0x6C93CD: jz      short loc_6C9400
0x6C93CF: test    edi, edi
0x6C93D1: jz      short loc_6C93EF
0x6C93D3: lea     edx, [edi+4]
0x6C93D6: push    edx; lpAddend
0x6C93D7: call    dword ptr ds:0A2807Ch
0x6C93DD: test    eax, eax
0x6C93DF: jnz     short loc_6C93EF
0x6C93E1: test    edi, edi
0x6C93E3: jz      short loc_6C93EF
0x6C93E5: mov     eax, [edi]
0x6C93E7: mov     edx, [eax]
0x6C93E9: push    1
0x6C93EB: mov     ecx, edi
0x6C93ED: call    edx
0x6C93EF: test    ebx, ebx
0x6C93F1: mov     [esi+64h], ebx
0x6C93F4: jz      short loc_6C9400
0x6C93F6: add     ebx, 4
0x6C93F9: push    ebx; lpAddend
0x6C93FA: call    dword ptr ds:0A28078h
0x6C9400: mov     ecx, dword ptr [esp+30h+var_C]
0x6C9404: mov     large fs:0, ecx
0x6C940B: pop     ecx
0x6C940C: pop     edi
0x6C940D: pop     esi
0x6C940E: pop     ebp
0x6C940F: pop     ebx
0x6C9410: add     esp, 1Ch
0x6C9413: retn    4
