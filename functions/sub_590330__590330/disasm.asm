0x590330: push    ecx
0x590331: mov     eax, [esp+4+arg_0]
0x590335: push    ebx
0x590336: mov     ebx, [eax+10h]
0x590339: test    ebx, ebx
0x59033B: push    ebp
0x59033C: push    esi
0x59033D: push    edi; ArgList
0x59033E: mov     ebp, ecx
0x590340: mov     [esp+14h+var_4], 0
0x590348: jz      short loc_5903B1
0x59034A: lea     ebx, [ebx+0]
0x590350: mov     edi, [ebx+8]
0x590353: lea     eax, [ebx+8]
0x590356: mov     eax, [edi]
0x590358: cmp     eax, 28h ; '('
0x59035B: mov     ebx, [ebx]
0x59035D: jnz     short loc_5903A5
0x59035F: fld     dword ptr [edi+4]
0x590362: call    Double_To_SInt32
0x590367: push    eax; int
0x590368: push    ebp; TileWindow *
0x590369: call    sub_5902A0
0x59036E: mov     esi, eax
0x590370: add     esp, 8
0x590373: test    esi, esi
0x590375: jz      short loc_5903BD
0x590377: mov     edx, [esi]
0x590379: mov     eax, [edx+4]
0x59037C: push    0
0x59037E: push    0
0x590380: push    ebp
0x590381: mov     ecx, esi
0x590383: call    eax
0x590385: mov     ecx, [edi+8]
0x590388: push    0; a3
0x59038A: push    ecx; a2
0x59038B: lea     ecx, [esi+8]; this
0x59038E: call    BSStringT_Set
0x590393: cmp     [esp+14h+var_4], 0
0x590398: jnz     short loc_59039E
0x59039A: mov     [esp+14h+var_4], esi
0x59039E: mov     [edi+10h], esi
0x5903A1: mov     ebp, esi
0x5903A3: jmp     short loc_5903AD
0x5903A5: cmp     eax, 2Dh ; '-'
0x5903A8: jnz     short loc_5903AD
0x5903AA: mov     ebp, [ebp+10h]
0x5903AD: test    ebx, ebx
0x5903AF: jnz     short loc_590350
0x5903B1: mov     eax, [esp+14h+var_4]
0x5903B5: pop     edi
0x5903B6: pop     esi
0x5903B7: pop     ebp
0x5903B8: pop     ebx
0x5903B9: pop     ecx
0x5903BA: retn    4
0x5903BD: push    offset aUnableToCreate; "Unable to create tile. Aborting menu cr"...
0x5903C2: call    PrintError
0x5903C7: add     esp, 4
0x5903CA: pop     edi
0x5903CB: pop     esi
0x5903CC: pop     ebp
0x5903CD: xor     eax, eax
0x5903CF: pop     ebx
0x5903D0: pop     ecx
0x5903D1: retn    4
