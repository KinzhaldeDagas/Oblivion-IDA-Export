0x8A0610: push    0FFFFFFFFh
0x8A0612: push    offset SEH_8A0610
0x8A0617: mov     eax, large fs:0
0x8A061D: push    eax
0x8A061E: push    ebx
0x8A061F: push    ebp
0x8A0620: push    esi
0x8A0621: push    edi
0x8A0622: mov     eax, ds:0B30AACh
0x8A0627: xor     eax, esp
0x8A0629: push    eax
0x8A062A: lea     eax, [esp+20h+var_C]
0x8A062E: mov     large fs:0, eax
0x8A0634: mov     edi, ecx
0x8A0636: mov     ebp, [esp+20h+arg_0]
0x8A063A: test    ebp, ebp
0x8A063C: jz      short loc_8A06BC
0x8A063E: lea     esi, [ebp-4]
0x8A0641: test    esi, esi
0x8A0643: jz      short loc_8A06BC
0x8A0645: mov     ecx, ds:0BA7D98h
0x8A064B: mov     eax, [ecx]
0x8A064D: mov     edx, [eax+10h]
0x8A0650: push    29h ; ')'
0x8A0652: push    28h ; '('
0x8A0654: call    edx
0x8A0656: mov     word ptr [eax+4], 28h ; '('
0x8A065C: mov     [esp+20h+arg_0], eax
0x8A0660: mov     ecx, [esi+10h]
0x8A0663: mov     ebx, [esi+8]
0x8A0666: mov     edx, [esi+0Ch]
0x8A0669: mov     esi, [esi+4]
0x8A066C: push    1
0x8A066E: push    ebx
0x8A066F: push    esi
0x8A0670: push    ecx
0x8A0671: push    edx
0x8A0672: mov     ecx, eax
0x8A0674: mov     [esp+34h+var_4], 0
0x8A067C: call    sub_8D99A0
0x8A0681: mov     esi, eax
0x8A0683: mov     eax, [edi]
0x8A0685: mov     edx, [eax+4Ch]
0x8A0688: or      ebx, 0FFFFFFFFh
0x8A068B: push    esi
0x8A068C: mov     ecx, edi
0x8A068E: mov     [esp+24h+var_4], ebx
0x8A0692: call    edx
0x8A0694: cmp     word ptr [esi+4], 0
0x8A0699: jz      short loc_8A06B2
0x8A069B: add     [esi+6], bx
0x8A069F: movzx   eax, word ptr [esi+6]
0x8A06A3: test    ax, ax
0x8A06A6: jnz     short loc_8A06B2
0x8A06A8: mov     eax, [esi]
0x8A06AA: mov     edx, [eax]
0x8A06AC: push    1
0x8A06AE: mov     ecx, esi
0x8A06B0: call    edx
0x8A06B2: mov     eax, [edi]
0x8A06B4: mov     edx, [eax+7Ch]
0x8A06B7: push    ebp
0x8A06B8: mov     ecx, edi
0x8A06BA: call    edx
0x8A06BC: mov     ecx, [esp+20h+var_C]
0x8A06C0: mov     large fs:0, ecx
0x8A06C7: pop     ecx
0x8A06C8: pop     edi
0x8A06C9: pop     esi
0x8A06CA: pop     ebp
0x8A06CB: pop     ebx
0x8A06CC: add     esp, 0Ch
0x8A06CF: retn    4
