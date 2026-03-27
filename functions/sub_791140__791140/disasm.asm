0x791140: push    ebp
0x791141: mov     ebp, esp
0x791143: push    0FFFFFFFFh
0x791145: push    offset SEH_791140
0x79114A: mov     eax, large fs:0
0x791150: push    eax
0x791151: sub     esp, 1Ch
0x791154: push    ebx
0x791155: push    esi
0x791156: push    edi
0x791157: mov     eax, ds:0B30AACh
0x79115C: xor     eax, ebp
0x79115E: push    eax
0x79115F: lea     eax, [ebp+var_C]
0x791162: mov     large fs:0, eax
0x791168: mov     [ebp+var_10], esp
0x79116B: mov     esi, ecx
0x79116D: mov     eax, [ebp+arg_C]
0x791170: mov     ecx, [eax]
0x791172: mov     edx, [eax+4]
0x791175: mov     [ebp+var_28], ecx
0x791178: mov     ecx, [eax+8]
0x79117B: mov     [ebp+var_20], ecx
0x79117E: mov     ecx, [eax+10h]
0x791181: mov     [ebp+var_24], edx
0x791184: mov     edx, [eax+0Ch]
0x791187: mov     [ebp+var_18], ecx
0x79118A: mov     ecx, [esi+4]
0x79118D: test    ecx, ecx
0x79118F: mov     [ebp+var_1C], edx
0x791192: mov     edx, [eax+14h]
0x791195: mov     [ebp+var_14], edx
0x791198: jnz     short loc_79119E
0x79119A: xor     ebx, ebx
0x79119C: jmp     short loc_7911B4
0x79119E: mov     edx, [esi+0Ch]
0x7911A1: sub     edx, ecx
0x7911A3: mov     eax, 2AAAAAABh
0x7911A8: imul    edx
0x7911AA: sar     edx, 2
0x7911AD: mov     ebx, edx
0x7911AF: shr     ebx, 1Fh
0x7911B2: add     ebx, edx
0x7911B4: mov     edi, [ebp+arg_8]
0x7911B7: test    edi, edi
0x7911B9: jz      loc_7913F5
0x7911BF: test    ecx, ecx
0x7911C1: jnz     short loc_7911C7
0x7911C3: xor     eax, eax
0x7911C5: jmp     short loc_7911DD
0x7911C7: mov     edx, [esi+8]
0x7911CA: sub     edx, ecx
0x7911CC: mov     eax, 2AAAAAABh
0x7911D1: imul    edx
0x7911D3: sar     edx, 2
0x7911D6: mov     eax, edx
0x7911D8: shr     eax, 1Fh
0x7911DB: add     eax, edx
0x7911DD: mov     edx, 0AAAAAAAh
0x7911E2: sub     edx, eax
0x7911E4: cmp     edx, edi
0x7911E6: jnb     short loc_7911ED
0x7911E8: call    sub_790B90
0x7911ED: test    ecx, ecx
0x7911EF: jnz     short loc_7911F5
0x7911F1: xor     eax, eax
0x7911F3: jmp     short loc_79120B
0x7911F5: mov     edx, [esi+8]
0x7911F8: sub     edx, ecx
0x7911FA: mov     eax, 2AAAAAABh
0x7911FF: imul    edx
0x791201: sar     edx, 2
0x791204: mov     eax, edx
0x791206: shr     eax, 1Fh
0x791209: add     eax, edx
0x79120B: add     eax, edi
0x79120D: cmp     ebx, eax
0x79120F: jnb     loc_791325
0x791215: mov     eax, ebx
0x791217: shr     eax, 1
0x791219: mov     edx, 0AAAAAAAh
0x79121E: sub     edx, eax
0x791220: cmp     edx, ebx
0x791222: jnb     short loc_791228
0x791224: xor     ebx, ebx
0x791226: jmp     short loc_79122A
0x791228: add     ebx, eax
0x79122A: test    ecx, ecx
0x79122C: jnz     short loc_791232
0x79122E: xor     eax, eax
0x791230: jmp     short loc_791248
0x791232: mov     edx, [esi+8]
0x791235: sub     edx, ecx
0x791237: mov     eax, 2AAAAAABh
0x79123C: imul    edx
0x79123E: sar     edx, 2
0x791241: mov     eax, edx
0x791243: shr     eax, 1Fh
0x791246: add     eax, edx
0x791248: add     eax, edi
0x79124A: cmp     ebx, eax
0x79124C: jnb     short loc_791259
0x79124E: mov     ecx, esi
0x791250: call    sub_783FE0
0x791255: mov     ebx, eax
0x791257: add     ebx, edi
0x791259: push    0
0x79125B: push    ebx; char *
0x79125C: call    sub_78FB00
0x791261: mov     ecx, [esi+4]
0x791264: mov     byte ptr [ebp+arg_8], 0
0x791268: mov     edx, [ebp+arg_8]
0x79126B: push    edx
0x79126C: mov     [ebp+arg_C], eax
0x79126F: mov     edx, [ebp+arg_C]
0x791272: push    edx
0x791273: push    esi
0x791274: push    eax
0x791275: mov     eax, [ebp+arg_4]
0x791278: push    eax
0x791279: push    ecx
0x79127A: mov     [ebp+var_4], 0
0x791281: call    sub_7847F0
0x791286: add     esp, 20h
0x791289: lea     ecx, [ebp+var_28]
0x79128C: push    ecx
0x79128D: push    edi
0x79128E: push    eax
0x79128F: mov     ecx, esi
0x791291: call    sub_790A70
0x791296: mov     ecx, [esi+8]
0x791299: mov     byte ptr [ebp+arg_8], 0
0x79129D: mov     edx, [ebp+arg_8]
0x7912A0: push    edx
0x7912A1: mov     edx, [ebp+arg_C]
0x7912A4: push    edx
0x7912A5: push    esi
0x7912A6: push    eax
0x7912A7: mov     eax, [ebp+arg_4]
0x7912AA: push    ecx
0x7912AB: push    eax
0x7912AC: call    sub_7847F0
0x7912B1: mov     ecx, [esi+4]
0x7912B4: add     esp, 18h
0x7912B7: test    ecx, ecx
0x7912B9: jnz     short loc_7912BF
0x7912BB: xor     eax, eax
0x7912BD: jmp     short loc_7912D5
0x7912BF: mov     edx, [esi+8]
0x7912C2: sub     edx, ecx
0x7912C4: mov     eax, 2AAAAAABh
0x7912C9: imul    edx
0x7912CB: sar     edx, 2
0x7912CE: mov     eax, edx
0x7912D0: shr     eax, 1Fh
0x7912D3: add     eax, edx
0x7912D5: add     edi, eax
0x7912D7: test    ecx, ecx
0x7912D9: jz      short loc_7912E4
0x7912DB: push    ecx
0x7912DC: call    FormHeapFree
0x7912E1: add     esp, 4
0x7912E4: mov     eax, [ebp+arg_C]
0x7912E7: lea     ecx, [ebx+ebx*2]
0x7912EA: lea     edx, [eax+ecx*8]
0x7912ED: lea     ecx, [edi+edi*2]
0x7912F0: mov     [esi+0Ch], edx
0x7912F3: lea     edx, [eax+ecx*8]
0x7912F6: mov     [esi+8], edx
0x7912F9: mov     [esi+4], eax
0x7912FC: mov     ecx, [ebp+var_C]
0x7912FF: mov     large fs:0, ecx
0x791306: pop     ecx
0x791307: pop     edi
0x791308: pop     esi
0x791309: pop     ebx
0x79130A: mov     esp, ebp
0x79130C: pop     ebp
0x79130D: retn    10h
0x791310: mov     eax, [ebp+arg_C]
0x791313: push    eax
0x791314: call    FormHeapFree
0x791319: add     esp, 4
0x79131C: push    0
0x79131E: push    0
0x791320: call    ThrowException??
0x791325: mov     ecx, [esi+8]
0x791328: mov     ebx, [ebp+arg_4]
0x79132B: mov     edx, ecx
0x79132D: sub     edx, ebx
0x79132F: mov     eax, 2AAAAAABh
0x791334: imul    edx
0x791336: sar     edx, 2
0x791339: mov     eax, edx
0x79133B: shr     eax, 1Fh
0x79133E: add     eax, edx
0x791340: cmp     eax, edi
0x791342: mov     [ebp+arg_C], ecx
0x791345: jnb     short loc_7913BA
0x791347: lea     eax, [edi+edi*2]
0x79134A: add     eax, eax
0x79134C: add     eax, eax
0x79134E: add     eax, eax
0x791350: mov     [ebp+arg_C], eax
0x791353: add     eax, ebx
0x791355: push    eax
0x791356: push    ecx
0x791357: push    ebx
0x791358: mov     ecx, esi
0x79135A: call    sub_7849C0
0x79135F: mov     ecx, [esi+8]
0x791362: lea     edx, [ebp+var_28]
0x791365: push    edx
0x791366: mov     edx, ecx
0x791368: sub     edx, ebx
0x79136A: mov     eax, 2AAAAAABh
0x79136F: imul    edx
0x791371: sar     edx, 2
0x791374: mov     eax, edx
0x791376: shr     eax, 1Fh
0x791379: add     eax, edx
0x79137B: sub     edi, eax
0x79137D: push    edi
0x79137E: push    ecx
0x79137F: mov     ecx, esi
0x791381: mov     [ebp+var_4], 2
0x791388: call    sub_790A70
0x79138D: mov     eax, [ebp+arg_C]
0x791390: add     [esi+8], eax
0x791393: mov     esi, [esi+8]
0x791396: lea     ecx, [ebp+var_28]
0x791399: push    ecx
0x79139A: sub     esi, eax
0x79139C: push    esi
0x79139D: push    ebx
0x79139E: call    sub_784140
0x7913A3: add     esp, 0Ch
0x7913A6: mov     ecx, [ebp+var_C]
0x7913A9: mov     large fs:0, ecx
0x7913B0: pop     ecx
0x7913B1: pop     edi
0x7913B2: pop     esi
0x7913B3: pop     ebx
0x7913B4: mov     esp, ebp
0x7913B6: pop     ebp
0x7913B7: retn    10h
0x7913BA: lea     edi, [edi+edi*2]
0x7913BD: add     edi, edi
0x7913BF: push    ecx
0x7913C0: add     edi, edi
0x7913C2: mov     eax, ecx
0x7913C4: add     edi, edi
0x7913C6: sub     eax, edi
0x7913C8: push    ecx
0x7913C9: push    eax
0x7913CA: mov     ecx, esi
0x7913CC: mov     [ebp+arg_8], eax
0x7913CF: call    sub_7849C0
0x7913D4: mov     edx, [ebp+arg_C]
0x7913D7: mov     [esi+8], eax
0x7913DA: mov     eax, [ebp+arg_8]
0x7913DD: push    edx
0x7913DE: push    eax
0x7913DF: push    ebx
0x7913E0: call    sub_7905A0
0x7913E5: lea     ecx, [ebp+var_28]
0x7913E8: push    ecx
0x7913E9: add     edi, ebx
0x7913EB: push    edi
0x7913EC: push    ebx
0x7913ED: call    sub_784140
0x7913F2: add     esp, 18h
0x7913F5: mov     ecx, [ebp+var_C]
0x7913F8: mov     large fs:0, ecx
0x7913FF: pop     ecx
0x791400: pop     edi
0x791401: pop     esi
0x791402: pop     ebx
0x791403: mov     esp, ebp
0x791405: pop     ebp
0x791406: retn    10h
