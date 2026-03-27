0x7234B0: push    0FFFFFFFFh
0x7234B2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x7234B7: mov     eax, large fs:0
0x7234BD: push    eax
0x7234BE: sub     esp, 8
0x7234C1: push    esi
0x7234C2: push    edi
0x7234C3: mov     eax, ds:0B30AACh
0x7234C8: xor     eax, esp
0x7234CA: push    eax
0x7234CB: lea     eax, [esp+20h+var_C]
0x7234CF: mov     large fs:0, eax
0x7234D5: mov     edi, ecx
0x7234D7: mov     esi, [esp+20h+arg_0]
0x7234DB: push    esi
0x7234DC: call    sub_707F00
0x7234E1: mov     ecx, esi
0x7234E3: call    sub_712A20
0x7234E8: mov     ecx, esi
0x7234EA: call    sub_712A20
0x7234EF: cmp     dword ptr [esi+0D8h], 5000015h
0x7234F9: jb      short loc_72356F
0x7234FB: mov     eax, [esi+21Ch]
0x723501: push    1
0x723503: lea     ecx, [esp+24h+var_14]
0x723507: push    ecx
0x723508: push    1
0x72350A: lea     edx, [esp+2Ch+arg_0]
0x72350E: push    edx
0x72350F: mov     byte ptr [esp+30h+arg_0], 0
0x723514: push    eax
0x723515: mov     eax, [eax+4]
0x723518: mov     [esp+34h+var_14], 1
0x723520: call    eax
0x723522: add     esp, 14h
0x723525: cmp     byte ptr [esp+20h+arg_0], 0
0x72352A: jz      short loc_72356F
0x72352C: push    10h; Size
0x72352E: call    FormHeapAlloc
0x723533: add     esp, 4
0x723536: mov     [esp+20h+var_10], eax
0x72353A: test    eax, eax
0x72353C: mov     [esp+20h+var_4], 0
0x723544: jz      short loc_72354F
0x723546: mov     ecx, eax
0x723548: call    sub_7385B0
0x72354D: jmp     short loc_723551
0x72354F: xor     eax, eax
0x723551: add     edi, 0BCh ; '¼'
0x723557: push    eax; a2
0x723558: mov     ecx, edi; this
0x72355A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x723562: call    NiSmartPointer_Set??
0x723567: mov     ecx, [edi]
0x723569: push    esi
0x72356A: call    sub_7386E0
0x72356F: mov     ecx, [esp+20h+var_C]
0x723573: mov     large fs:0, ecx
0x72357A: pop     ecx
0x72357B: pop     edi
0x72357C: pop     esi
0x72357D: add     esp, 14h
0x723580: retn    4
