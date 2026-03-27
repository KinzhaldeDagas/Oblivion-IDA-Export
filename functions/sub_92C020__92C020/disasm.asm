0x92C020: push    ebp
0x92C021: mov     ebp, esp
0x92C023: and     esp, 0FFFFFFF0h
0x92C026: sub     esp, 64h
0x92C029: push    ebx
0x92C02A: push    esi
0x92C02B: mov     esi, [ebp+arg_0]
0x92C02E: push    edi
0x92C02F: mov     edi, [ebp+arg_8]
0x92C032: mov     eax, [edi+4]
0x92C035: xor     ecx, ecx
0x92C037: test    eax, eax
0x92C039: jle     short loc_92C070
0x92C03B: mov     ebx, [esi]
0x92C03D: mov     eax, [edi]
0x92C03F: nop
0x92C040: mov     edx, [eax]
0x92C042: cmp     edx, ebx
0x92C044: jnz     short loc_92C04E
0x92C046: mov     ebx, [eax+4]
0x92C049: cmp     ebx, [esi+4]
0x92C04C: jz      short loc_92C067
0x92C04E: mov     ebx, [esi]
0x92C050: cmp     [eax+4], ebx
0x92C053: jnz     short loc_92C05A
0x92C055: cmp     edx, [esi+4]
0x92C058: jz      short loc_92C067
0x92C05A: mov     edx, [edi+4]
0x92C05D: inc     ecx
0x92C05E: add     eax, 20h ; ' '
0x92C061: cmp     ecx, edx
0x92C063: jl      short loc_92C040
0x92C065: jmp     short loc_92C070
0x92C067: cmp     ecx, 0FFFFFFFFh
0x92C06A: jnz     loc_92C22D
0x92C070: mov     eax, [edi+8]
0x92C073: mov     ecx, [edi+4]
0x92C076: and     eax, 3FFFFFFFh
0x92C07B: cmp     ecx, eax
0x92C07D: jnz     short loc_92C08A
0x92C07F: push    20h ; ' '
0x92C081: push    edi
0x92C082: call    sub_8A6EE0
0x92C087: add     esp, 8
0x92C08A: mov     ecx, [edi+4]
0x92C08D: mov     edx, [edi]
0x92C08F: mov     eax, ecx
0x92C091: shl     eax, 5
0x92C094: add     eax, edx
0x92C096: inc     ecx
0x92C097: mov     [edi+4], ecx
0x92C09A: mov     ecx, [esi]
0x92C09C: mov     [eax], ecx
0x92C09E: mov     edx, [esi+4]
0x92C0A1: mov     [eax+4], edx
0x92C0A4: mov     ecx, [esi+8]
0x92C0A7: mov     [eax+8], ecx
0x92C0AA: movaps  xmm0, xmmword ptr [esi+10h]
0x92C0AE: movaps  xmmword ptr [eax+10h], xmm0
0x92C0B2: lea     ecx, [esi+10h]
0x92C0B5: xor     eax, eax
0x92C0B7: mov     [esp+70h+var_4C], eax
0x92C0BB: mov     [esp+70h+var_48], eax
0x92C0BF: mov     eax, [esi+8]
0x92C0C2: lea     edx, [esp+70h+var_4C]
0x92C0C6: push    edx
0x92C0C7: mov     edx, [esi+4]
0x92C0CA: push    eax
0x92C0CB: mov     eax, [esi]
0x92C0CD: mov     esi, [ebp+arg_4]
0x92C0D0: push    edx
0x92C0D1: push    eax
0x92C0D2: push    esi
0x92C0D3: push    ecx
0x92C0D4: lea     ecx, [esp+88h+var_55]
0x92C0D8: push    ecx
0x92C0D9: mov     [esp+8Ch+var_44], 80000000h
0x92C0E1: call    sub_92BAE0
0x92C0E6: mov     cl, [eax]
0x92C0E8: add     esp, 1Ch
0x92C0EB: test    cl, cl
0x92C0ED: jz      loc_92C1FB
0x92C0F3: mov     ebx, [ebp+arg_C]
0x92C0F6: mov     eax, [ebx+8]
0x92C0F9: mov     ecx, [ebx+4]
0x92C0FC: mov     edx, [esp+70h+var_4C]
0x92C100: and     eax, 3FFFFFFFh
0x92C105: cmp     ecx, eax
0x92C107: mov     [esp+70h+var_50], edx
0x92C10B: jnz     short loc_92C118
0x92C10D: push    10h
0x92C10F: push    ebx
0x92C110: call    sub_8A6EE0
0x92C115: add     esp, 8
0x92C118: mov     ecx, [ebx+4]
0x92C11B: mov     edx, [ebx]
0x92C11D: mov     eax, ecx
0x92C11F: shl     eax, 4
0x92C122: add     eax, edx
0x92C124: inc     ecx
0x92C125: mov     [ebx+4], ecx
0x92C128: mov     ecx, [esp+70h+var_50]
0x92C12C: movaps  xmm0, xmmword ptr [ecx]
0x92C12F: movaps  xmmword ptr [eax], xmm0
0x92C132: mov     ecx, [esp+70h+var_48]
0x92C136: xor     eax, eax
0x92C138: cmp     ecx, eax
0x92C13A: mov     [esp+70h+var_50], eax
0x92C13E: jle     loc_92C1FB
0x92C144: mov     [esp+70h+var_54], eax
0x92C148: jmp     short loc_92C150
0x92C14A: align 10h
0x92C150: mov     edx, [esp+70h+var_4C]
0x92C154: mov     eax, [esp+70h+var_54]
0x92C158: mov     ecx, [eax+edx+10h]
0x92C15C: add     eax, edx
0x92C15E: mov     [esp+70h+var_40], ecx
0x92C162: mov     edx, [eax+18h]
0x92C165: mov     [esp+70h+var_3C], edx
0x92C169: mov     [esp+70h+var_38], eax
0x92C16D: mov     edx, [eax+14h]
0x92C170: lea     ecx, [esp+70h+var_30]
0x92C174: push    ecx
0x92C175: mov     ecx, [eax+18h]
0x92C178: push    edx
0x92C179: mov     edx, [eax+10h]
0x92C17C: push    ecx
0x92C17D: push    edx
0x92C17E: push    esi
0x92C17F: call    sub_92B580
0x92C184: push    ebx
0x92C185: push    edi
0x92C186: lea     eax, [esp+8Ch+var_40]
0x92C18A: push    esi
0x92C18B: push    eax
0x92C18C: call    sub_92C020
0x92C191: mov     ecx, [esp+94h+var_4C]
0x92C195: mov     edx, [esp+94h+var_54]
0x92C199: lea     eax, [edx+ecx]
0x92C19C: mov     ecx, [eax+14h]
0x92C19F: mov     [esp+94h+var_20], ecx
0x92C1A3: mov     edx, [eax+18h]
0x92C1A6: mov     [esp+94h+var_1C], edx
0x92C1AA: mov     [esp+94h+var_18], eax
0x92C1AE: mov     edx, [eax+10h]
0x92C1B1: lea     ecx, [esp+94h+var_10]
0x92C1B8: push    ecx
0x92C1B9: mov     ecx, [eax+18h]
0x92C1BC: push    edx
0x92C1BD: mov     edx, [eax+14h]
0x92C1C0: push    ecx
0x92C1C1: push    edx
0x92C1C2: push    esi
0x92C1C3: call    sub_92B580
0x92C1C8: push    ebx
0x92C1C9: push    edi
0x92C1CA: lea     eax, [esp+0B0h+var_20]
0x92C1D1: push    esi
0x92C1D2: push    eax
0x92C1D3: call    sub_92C020
0x92C1D8: mov     eax, [esp+0B8h+var_50]
0x92C1DC: mov     edx, [esp+0B8h+var_54]
0x92C1E0: mov     ecx, [esp+0B8h+var_48]
0x92C1E4: add     esp, 48h
0x92C1E7: inc     eax
0x92C1E8: add     edx, 20h ; ' '
0x92C1EB: cmp     eax, ecx
0x92C1ED: mov     [esp+70h+var_50], eax
0x92C1F1: mov     [esp+70h+var_54], edx
0x92C1F5: jl      loc_92C150
0x92C1FB: mov     eax, [esp+70h+var_44]
0x92C1FF: test    eax, eax
0x92C201: js      short loc_92C22D
0x92C203: mov     ecx, [esp+70h+var_4C]
0x92C207: mov     edx, ds:0BA9DE4h
0x92C20D: and     eax, 3FFFFFFFh
0x92C212: push    14h
0x92C214: shl     eax, 5
0x92C217: push    eax
0x92C218: mov     eax, large fs:2Ch
0x92C21E: push    ecx
0x92C21F: mov     ecx, [eax+edx*4]
0x92C222: mov     ecx, [ecx+19Ch]
0x92C228: call    sub_8A75D0
0x92C22D: pop     edi
0x92C22E: pop     esi
0x92C22F: pop     ebx
0x92C230: mov     esp, ebp
0x92C232: pop     ebp
0x92C233: retn
