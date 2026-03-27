0x51B490: push    0FFFFFFFFh
0x51B492: push    offset SEH_51B490
0x51B497: mov     eax, large fs:0
0x51B49D: push    eax
0x51B49E: sub     esp, 1A0h
0x51B4A4: mov     eax, ds:0B30AACh
0x51B4A9: xor     eax, esp
0x51B4AB: mov     [esp+1ACh+var_10], eax
0x51B4B2: push    ebx
0x51B4B3: push    ebp
0x51B4B4: push    esi
0x51B4B5: push    edi
0x51B4B6: mov     eax, ds:0B30AACh
0x51B4BB: xor     eax, esp
0x51B4BD: push    eax
0x51B4BE: lea     eax, [esp+1C0h+var_C]
0x51B4C5: mov     large fs:0, eax
0x51B4CB: mov     eax, [esp+1C0h+Str]
0x51B4D2: mov     cl, ds:0B06B18h
0x51B4D8: mov     edi, [esp+1C0h+arg_0]
0x51B4DF: xor     esi, esi
0x51B4E1: push    5Ch ; '\'; Ch
0x51B4E3: push    eax; Str
0x51B4E4: mov     [esp+1C8h+var_1A0], edi
0x51B4E8: mov     dword ptr [esp+1C8h+var_190], eax
0x51B4EC: mov     [esp+1C8h+var_189], cl
0x51B4F0: mov     [esp+1C8h+var_1A9], 0
0x51B4F5: mov     [esp+1C8h+var_1A4], esi
0x51B4F9: mov     [esp+1C8h+var_174], 0FFh
0x51B501: mov     [esp+1C8h+var_184], esi
0x51B505: mov     [esp+1C8h+var_160], esi
0x51B509: mov     [esp+1C8h+var_16C], esi
0x51B50D: call    _strrchr
0x51B512: mov     byte ptr ds:0B06B18h, 1
0x51B519: mov     edi, [edi+5Ch]
0x51B51C: push    edi
0x51B51D: lea     edx, [esp+1CCh+var_154]
0x51B521: push    offset aSNonaccum; "%s NonAccum"
0x51B526: push    edx
0x51B527: mov     [esp+1D4h+Str1], eax
0x51B52B: or      ebx, 0FFFFFFFFh
0x51B52E: or      ebp, 0FFFFFFFFh
0x51B531: call    __sprintf
0x51B536: mov     eax, [esp+1D4h+var_1A0]
0x51B53A: add     esp, 14h
0x51B53D: cmp     [eax+0Ch], esi
0x51B540: jbe     loc_51B5D3
0x51B546: lea     ecx, [esp+1C0h+Str2]
0x51B54A: push    ecx
0x51B54B: mov     ecx, [esp+1C4h+var_1A0]
0x51B54F: push    esi
0x51B550: call    sub_6C66B0
0x51B555: mov     edx, [esp+1C0h+Str2]
0x51B559: push    edx; Str2
0x51B55A: push    edi; Str1
0x51B55B: call    __strcmp
0x51B560: add     esp, 8
0x51B563: test    eax, eax
0x51B565: jnz     short loc_51B56B
0x51B567: mov     ebx, esi
0x51B569: jmp     short loc_51B583
0x51B56B: mov     eax, [esp+1C0h+Str2]
0x51B56F: push    eax; Str2
0x51B570: lea     ecx, [esp+1C4h+var_154]
0x51B574: push    ecx; Str1
0x51B575: call    __strcmp
0x51B57A: add     esp, 8
0x51B57D: test    eax, eax
0x51B57F: jnz     short loc_51B583
0x51B581: mov     ebp, esi
0x51B583: mov     edx, [esp+1C0h+Str2]
0x51B587: push    edx
0x51B588: call    FormHeapFree
0x51B58D: add     esp, 4
0x51B590: cmp     ebx, 0FFFFFFFFh
0x51B593: jz      short loc_51B59A
0x51B595: cmp     ebp, 0FFFFFFFFh
0x51B598: jnz     short loc_51B5A8
0x51B59A: mov     eax, [esp+1C0h+var_1A0]
0x51B59E: add     esi, 1
0x51B5A1: cmp     esi, [eax+0Ch]
0x51B5A4: jb      short loc_51B546
0x51B5A6: jmp     short loc_51B5D3
0x51B5A8: mov     edx, [esp+1C0h+var_1A0]
0x51B5AC: mov     ecx, [edx+0Ch]
0x51B5AF: cmp     ebx, ecx
0x51B5B1: jnb     short loc_51B5C0
0x51B5B3: mov     eax, [edx+14h]
0x51B5B6: shl     ebx, 4
0x51B5B9: movzx   eax, byte ptr [eax+ebx+0Dh]
0x51B5BE: jmp     short loc_51B5C5
0x51B5C0: mov     eax, 0FFh
0x51B5C5: cmp     ebp, ecx
0x51B5C7: jnb     short loc_51B5D3
0x51B5C9: mov     ecx, [edx+14h]
0x51B5CC: shl     ebp, 4
0x51B5CF: mov     [ecx+ebp+0Dh], al
0x51B5D3: cmp     [esp+1C0h+Str1], 0
0x51B5D8: jz      loc_51B688
0x51B5DE: mov     esi, 1
0x51B5E3: add     [esp+1C0h+Str1], esi
0x51B5E7: jmp     short loc_51B5F0
0x51B5E9: align 10h
0x51B5F0: mov     edx, ds:0B102B8h[esi*4]
0x51B5F7: mov     eax, edx
0x51B5F9: lea     edi, [eax+1]
0x51B5FC: lea     esp, [esp+0]
0x51B600: mov     cl, [eax]
0x51B602: add     eax, 1
0x51B605: test    cl, cl
0x51B607: jnz     short loc_51B600
0x51B609: mov     ebx, [esp+1C0h+Str1]
0x51B60D: sub     eax, edi
0x51B60F: push    eax; MaxCount
0x51B610: push    edx; Str2
0x51B611: push    ebx; Str1
0x51B612: call    __strnicmp
0x51B617: add     esp, 0Ch
0x51B61A: test    eax, eax
0x51B61C: jz      short loc_51B628
0x51B61E: add     esi, 1
0x51B621: cmp     esi, 4
0x51B624: jl      short loc_51B5F0
0x51B626: jmp     short loc_51B643
0x51B628: mov     eax, ds:0B102B8h[esi*4]
0x51B62F: mov     [esp+1C0h+var_160], esi
0x51B633: lea     edx, [eax+1]
0x51B636: mov     cl, [eax]
0x51B638: add     eax, 1
0x51B63B: test    cl, cl
0x51B63D: jnz     short loc_51B636
0x51B63F: sub     eax, edx
0x51B641: add     ebx, eax
0x51B643: mov     esi, 1
0x51B648: jmp     short loc_51B650
0x51B64A: align 10h
0x51B650: mov     edx, ds:0B102C8h[esi*4]
0x51B657: mov     eax, edx
0x51B659: lea     edi, [eax+1]
0x51B65C: lea     esp, [esp+0]
0x51B660: mov     cl, [eax]
0x51B662: add     eax, 1
0x51B665: test    cl, cl
0x51B667: jnz     short loc_51B660
0x51B669: sub     eax, edi
0x51B66B: push    eax; MaxCount
0x51B66C: push    edx; Str2
0x51B66D: push    ebx; Str1
0x51B66E: call    __strnicmp
0x51B673: add     esp, 0Ch
0x51B676: test    eax, eax
0x51B678: jz      short loc_51B684
0x51B67A: add     esi, 1
0x51B67D: cmp     esi, 6
0x51B680: jl      short loc_51B650
0x51B682: jmp     short loc_51B688
0x51B684: mov     [esp+1C0h+var_16C], esi
0x51B688: mov     edx, [esp+1C0h+var_1A0]
0x51B68C: mov     eax, [edx+20h]
0x51B68F: test    eax, eax
0x51B691: jz      loc_51BDDB
0x51B697: mov     edx, [eax+0Ch]
0x51B69A: mov     eax, [eax+10h]
0x51B69D: xor     ecx, ecx
0x51B69F: test    edx, edx
0x51B6A1: mov     [esp+1C0h+var_170], edx
0x51B6A5: mov     [esp+1C0h+var_158], eax
0x51B6A9: mov     [esp+1C0h+Str2], ecx
0x51B6AD: jbe     loc_51BDDB
0x51B6B3: jmp     short loc_51B6B9
0x51B6B5: mov     eax, [esp+1C0h+var_158]
0x51B6B9: mov     ebp, [eax+ecx*8+4]
0x51B6BD: fld     dword ptr [eax+ecx*8]
0x51B6C0: test    ebp, ebp
0x51B6C2: fstp    [esp+1C0h+Str1]
0x51B6C6: mov     [esp+1C0h+var_19C], ebp
0x51B6CA: mov     [esp+1C0h+var_15C], ebp
0x51B6CE: jnz     short loc_51B700
0x51B6D0: mov     ecx, dword ptr [esp+1C0h+var_190]
0x51B6D4: fld     [esp+1C0h+Str1]
0x51B6D8: mov     eax, [esp+1C0h+var_1A0]
0x51B6DC: mov     eax, [eax+8]
0x51B6DF: push    ecx
0x51B6E0: push    eax
0x51B6E1: sub     esp, 8
0x51B6E4: fstp    qword ptr [esp+1D0h+ArgList]; ArgList
0x51B6E7: push    offset aAnimgroupEmpty; "AnimGroup empty note key at time %.2f i"...
0x51B6EC: call    PrintError
0x51B6F1: add     esp, 14h
0x51B6F4: jmp     loc_51BA36
0x51B6F9: align 10h
0x51B700: mov     eax, ebp
0x51B702: lea     edx, [eax+1]
0x51B705: mov     cl, [eax]
0x51B707: add     eax, 1
0x51B70A: test    cl, cl
0x51B70C: jnz     short loc_51B705
0x51B70E: sub     eax, edx
0x51B710: jz      loc_51BA3B
0x51B716: cmp     byte ptr [ebp+0], 0Dh
0x51B71A: jnz     short loc_51B74B
0x51B71C: push    0Ah; Val
0x51B71E: push    ebp; Str
0x51B71F: call    _strchr
0x51B724: add     esp, 8
0x51B727: test    eax, eax
0x51B729: jz      short loc_51B745
0x51B72B: jmp     short loc_51B730
0x51B72D: align 10h
0x51B730: mov     cl, [eax]
0x51B732: test    cl, cl
0x51B734: jz      short loc_51B745
0x51B736: cmp     cl, 0Dh
0x51B739: jz      short loc_51B740
0x51B73B: cmp     cl, 0Ah
0x51B73E: jnz     short loc_51B78D
0x51B740: add     eax, 1
0x51B743: jnz     short loc_51B730
0x51B745: xor     ebp, ebp
0x51B747: mov     [esp+1C0h+var_19C], ebp
0x51B74B: mov     edx, ds:0B241C4h
0x51B751: mov     eax, edx
0x51B753: lea     esi, [eax+1]
0x51B756: mov     cl, [eax]
0x51B758: add     eax, 1
0x51B75B: test    cl, cl
0x51B75D: jnz     short loc_51B756
0x51B75F: sub     eax, esi
0x51B761: push    eax; MaxCount
0x51B762: push    edx; Str2
0x51B763: push    ebp; Str1
0x51B764: call    __strnicmp
0x51B769: add     esp, 0Ch
0x51B76C: test    eax, eax
0x51B76E: jnz     short loc_51B796
0x51B770: mov     eax, [esp+1C0h+var_1A4]
0x51B774: cmp     byte ptr [eax+20h], 0
0x51B778: jnz     loc_51BBDA
0x51B77E: mov     edx, [esp+1C0h+var_19C]
0x51B782: mov     cl, [edx+2]
0x51B785: mov     [eax+20h], cl
0x51B788: jmp     loc_51BBDA
0x51B78D: cmp     byte ptr [eax], 0
0x51B790: jz      short loc_51B745
0x51B792: mov     ebp, eax
0x51B794: jmp     short loc_51B747
0x51B796: push    6; MaxCount
0x51B798: push    offset aBlend_0; "Blend:"
0x51B79D: push    ebp; Str1
0x51B79E: call    __strnicmp
0x51B7A3: add     esp, 0Ch
0x51B7A6: test    eax, eax
0x51B7A8: jnz     short loc_51B7E0
0x51B7AA: cmp     byte ptr [ebp+6], 20h ; ' '
0x51B7AE: lea     eax, [ebp+6]
0x51B7B1: jz      short loc_51B7C8
0x51B7B3: push    eax; Str
0x51B7B4: call    j__atol
0x51B7B9: mov     edx, [esp+1C4h+var_1A4]
0x51B7BD: add     esp, 4
0x51B7C0: mov     [edx+21h], al
0x51B7C3: jmp     loc_51BBDA
0x51B7C8: add     ebp, 7
0x51B7CB: push    ebp; Str
0x51B7CC: call    j__atol
0x51B7D1: mov     ecx, [esp+1C4h+var_1A4]
0x51B7D5: add     esp, 4
0x51B7D8: mov     [ecx+21h], al
0x51B7DB: jmp     loc_51BBDA
0x51B7E0: push    6; MaxCount
0x51B7E2: push    offset aSound; "Sound:"
0x51B7E7: push    ebp; Str1
0x51B7E8: call    __strnicmp
0x51B7ED: add     esp, 0Ch
0x51B7F0: test    eax, eax
0x51B7F2: jz      loc_51BA82
0x51B7F8: push    5; MaxCount
0x51B7FA: push    offset aEnum; "Enum:"
0x51B7FF: push    ebp; Str1
0x51B800: call    __strnicmp
0x51B805: add     esp, 0Ch
0x51B808: test    eax, eax
0x51B80A: jz      loc_51BA82
0x51B810: mov     edi, [esp+1C0h+var_174]
0x51B814: xor     esi, esi
0x51B816: cmp     edi, 0FFh
0x51B81C: jz      short loc_51B820
0x51B81E: mov     esi, edi
0x51B820: mov     edx, [esp+1C0h+var_1A0]
0x51B824: mov     eax, [edx+8]
0x51B827: lea     ecx, [esi+esi*8]
0x51B82A: mov     edx, ds:0B102E0h[ecx*4]
0x51B831: push    edx; Str2
0x51B832: push    eax; Str1
0x51B833: call    __strcmp
0x51B838: add     esp, 8
0x51B83B: test    eax, eax
0x51B83D: jz      short loc_51B854
0x51B83F: cmp     esi, edi
0x51B841: jz      loc_51BA0B
0x51B847: add     esi, 1
0x51B84A: cmp     esi, 2Bh ; '+'
0x51B84D: jl      short loc_51B816
0x51B84F: jmp     loc_51BA0B
0x51B854: mov     eax, [esp+1C0h+var_184]
0x51B858: lea     ebx, [eax+esi*8]
0x51B85B: add     ebx, esi
0x51B85D: mov     eax, ds:0B102F0h[ebx*4]
0x51B864: cmp     eax, 0FFFFFFFFh
0x51B867: lea     ebx, ds:0B102F0h[ebx*4]
0x51B86E: mov     [esp+1C0h+var_174], esi
0x51B872: mov     [esp+1C0h+String], eax
0x51B876: jz      loc_51BA0B
0x51B87C: mov     edx, [esp+1C0h+String]
0x51B880: lea     eax, [esi+esi*8]
0x51B883: mov     ecx, ds:0B102ECh[eax*4]
0x51B88A: lea     eax, [ecx+edx*8]
0x51B88D: mov     ecx, ds:0B10900h[eax*4]
0x51B894: mov     eax, ecx
0x51B896: lea     edi, [eax+1]
0x51B899: lea     esp, [esp+0]
0x51B8A0: mov     dl, [eax]
0x51B8A2: add     eax, 1
0x51B8A5: test    dl, dl
0x51B8A7: jnz     short loc_51B8A0
0x51B8A9: sub     eax, edi
0x51B8AB: push    eax; MaxCount
0x51B8AC: push    ecx; Str2
0x51B8AD: push    ebp; Str1
0x51B8AE: call    __strnicmp
0x51B8B3: add     esp, 0Ch
0x51B8B6: test    eax, eax
0x51B8B8: jnz     loc_51B9B1
0x51B8BE: mov     ecx, [esp+1C0h+var_1A4]
0x51B8C2: test    ecx, ecx
0x51B8C4: jnz     short loc_51B92E
0x51B8C6: push    2Ch ; ','; Size
0x51B8C8: call    FormHeapAlloc
0x51B8CD: add     esp, 4
0x51B8D0: cmp     esi, 2
0x51B8D3: mov     dword ptr [esp+1C0h+var_17C], eax
0x51B8D7: jnz     short loc_51B8F2
0x51B8D9: test    eax, eax
0x51B8DB: mov     [esp+1C0h+var_4], 0
0x51B8E6: jz      short loc_51B91B
0x51B8E8: push    esi
0x51B8E9: mov     ecx, eax; this
0x51B8EB: call    ??0TESAnimGroup@@QAE@XZ; TESAnimGroup::TESAnimGroup(void)
0x51B8F0: jmp     short loc_51B91D
0x51B8F2: test    eax, eax
0x51B8F4: mov     [esp+1C0h+var_4], 1
0x51B8FF: jz      short loc_51B91B
0x51B901: mov     ecx, [esp+1C0h+var_160]
0x51B905: shl     ecx, 4
0x51B908: add     ecx, [esp+1C0h+var_16C]
0x51B90C: shl     ecx, 8
0x51B90F: add     ecx, esi
0x51B911: push    ecx
0x51B912: mov     ecx, eax; this
0x51B914: call    ??0TESAnimGroup@@QAE@XZ; TESAnimGroup::TESAnimGroup(void)
0x51B919: jmp     short loc_51B91D
0x51B91B: xor     eax, eax
0x51B91D: mov     ecx, eax
0x51B91F: mov     [esp+1C0h+var_1A4], ecx
0x51B923: mov     [esp+1C0h+var_4], 0FFFFFFFFh
0x51B92E: fld     dword ptr ds:0A30634h
0x51B934: fld     [esp+1C0h+Str1]
0x51B938: fcom    st(1)
0x51B93A: fnstsw  ax
0x51B93C: fstp    st(1)
0x51B93E: test    ah, 41h
0x51B941: jnz     short loc_51B958
0x51B943: mov     eax, [ecx+10h]
0x51B946: test    eax, eax
0x51B948: jz      short loc_51B958
0x51B94A: mov     edx, [esp+1C0h+String]
0x51B94E: cmp     edx, [ecx+0Ch]
0x51B951: jnb     short loc_51B958
0x51B953: fstp    dword ptr [eax+edx*4]
0x51B956: jmp     short loc_51B95A
0x51B958: fstp    st
0x51B95A: cmp     esi, 2
0x51B95D: jz      short loc_51B9AA
0x51B95F: lea     eax, [esi+esi*8]
0x51B962: mov     eax, ds:0B102ECh[eax*4]
0x51B969: cmp     eax, 1
0x51B96C: jnz     short loc_51B989
0x51B96E: mov     edx, [esp+1C0h+var_1A0]
0x51B972: cmp     dword ptr [edx+24h], 0
0x51B976: jz      short loc_51B984
0x51B978: mov     eax, dword ptr [esp+1C0h+var_190]
0x51B97C: push    eax
0x51B97D: push    offset aSShouldBeALoop; "'%s' should be a looping animation."
0x51B982: jmp     short loc_51B99D
0x51B984: cmp     eax, 1
0x51B987: jz      short loc_51B9AA
0x51B989: mov     ecx, [esp+1C0h+var_1A0]
0x51B98D: cmp     dword ptr [ecx+24h], 0
0x51B991: jnz     short loc_51B9AA
0x51B993: mov     edx, dword ptr [esp+1C0h+var_190]
0x51B997: push    edx; ArgList
0x51B998: push    offset aSShouldNotBeAL; "'%s' should NOT be a looping animation."
0x51B99D: call    PrintError
0x51B9A2: mov     [esp+1C8h+var_1A9], 1
0x51B9A7: add     esp, 8
0x51B9AA: add     [esp+1C0h+var_184], 1
0x51B9AF: jmp     short loc_51BA0B
0x51B9B1: cmp     [esp+1C0h+var_184], 5
0x51B9B6: jz      short loc_51B9BD
0x51B9B8: cmp     dword ptr [ebx], 0FFFFFFFFh
0x51B9BB: jnz     short loc_51BA0B
0x51B9BD: push    0Dh; Val
0x51B9BF: push    ebp; Str
0x51B9C0: call    _strchr
0x51B9C5: mov     edi, eax
0x51B9C7: add     esp, 8
0x51B9CA: test    edi, edi
0x51B9CC: jz      short loc_51B9D1
0x51B9CE: mov     byte ptr [edi], 0
0x51B9D1: fld     [esp+1C0h+Str1]
0x51B9D5: fmul    qword ptr ds:0A3AA50h
0x51B9DB: fstp    [esp+1C0h+String]
0x51B9DF: fld     [esp+1C0h+String]
0x51B9E3: fistp   [esp+1C0h+var_168]
0x51B9E7: mov     eax, dword ptr [esp+1C0h+var_190]
0x51B9EB: mov     ecx, [esp+1C0h+var_168]
0x51B9EF: push    eax
0x51B9F0: push    ecx
0x51B9F1: push    ebp; ArgList
0x51B9F2: push    offset aBadNoteStringS; "Bad note string \"%s\" frame %d in \"%s"...
0x51B9F7: call    PrintError
0x51B9FC: add     esp, 10h
0x51B9FF: test    edi, edi
0x51BA01: jz      short loc_51BA06
0x51BA03: mov     byte ptr [edi], 0Dh
0x51BA06: mov     [esp+1C0h+var_1A9], 1
0x51BA0B: cmp     esi, 2Bh ; '+'
0x51BA0E: jnz     loc_51BBDA
0x51BA14: mov     edx, dword ptr [esp+1C0h+var_190]
0x51BA18: mov     eax, [esp+1C0h+var_1A0]
0x51BA1C: mov     ecx, [eax+8]
0x51BA1F: push    edx
0x51BA20: push    ecx; ArgList
0x51BA21: push    offset aAnimgroupUnabl; "AnimGroup unable to find sequence '%s' "...
0x51BA26: call    PrintError
0x51BA2B: mov     edx, [esp+1CCh+var_170]
0x51BA2F: add     esp, 0Ch
0x51BA32: mov     [esp+1C0h+Str2], edx
0x51BA36: mov     [esp+1C0h+var_1A9], 1
0x51BA3B: mov     ecx, [esp+1C0h+Str2]
0x51BA3F: add     ecx, 1
0x51BA42: cmp     ecx, [esp+1C0h+var_170]
0x51BA46: mov     [esp+1C0h+Str2], ecx
0x51BA4A: jb      loc_51B6B5
0x51BA50: mov     esi, [esp+1C0h+var_1A4]
0x51BA54: test    esi, esi
0x51BA56: jz      loc_51BDDB
0x51BA5C: movzx   eax, byte ptr [esi+8]
0x51BA60: lea     eax, [eax+eax*8]
0x51BA63: mov     eax, ds:0B102ECh[eax*4]
0x51BA6A: add     eax, 0FFFFFFFEh; switch 6 cases
0x51BA6D: cmp     eax, 5
0x51BA70: mov     ecx, 1
0x51BA75: ja      def_51BA7B; jumptable 0051BA7B default case, case 6
0x51BA7B: jmp     ds:jpt_51BA7B[eax*4]; switch jump
0x51BA82: push    5; MaxCount
0x51BA84: push    offset aEnum; "Enum:"
0x51BA89: push    ebp; Str1
0x51BA8A: xor     bl, bl
0x51BA8C: call    __strnicmp
0x51BA91: add     esp, 0Ch
0x51BA94: test    eax, eax
0x51BA96: jnz     short loc_51BA9A
0x51BA98: mov     bl, 1
0x51BA9A: mov     ebp, [esp+1C0h+var_1A4]
0x51BA9E: test    ebp, ebp
0x51BAA0: jz      loc_51BBDA
0x51BAA6: mov     esi, [esp+1C0h+var_19C]
0x51BAAA: push    0Dh; Val
0x51BAAC: push    esi; Str
0x51BAAD: call    _strchr
0x51BAB2: add     esp, 8
0x51BAB5: test    eax, eax
0x51BAB7: mov     dword ptr [esp+1C0h+var_17C], eax
0x51BABB: jz      short loc_51BAC0
0x51BABD: mov     byte ptr [eax], 0
0x51BAC0: test    bl, bl
0x51BAC2: lea     eax, [esi+6]
0x51BAC5: jnz     short loc_51BACA
0x51BAC7: lea     eax, [esi+7]
0x51BACA: lea     edx, [esp+1C0h+var_114]
0x51BAD1: sub     edx, eax
0x51BAD3: mov     cl, [eax]
0x51BAD5: mov     [edx+eax], cl
0x51BAD8: add     eax, 1
0x51BADB: test    cl, cl
0x51BADD: jnz     short loc_51BAD3
0x51BADF: lea     edx, [esp+1C0h+var_114]
0x51BAE6: push    2Ch ; ','; Val
0x51BAE8: xor     esi, esi
0x51BAEA: push    edx; Str
0x51BAEB: mov     [esp+1C8h+String], esi
0x51BAEF: call    _strchr
0x51BAF4: add     esp, 8
0x51BAF7: test    eax, eax
0x51BAF9: jnz     short loc_51BB11
0x51BAFB: lea     eax, [esp+1C0h+var_114]
0x51BB02: push    20h ; ' '; Val
0x51BB04: push    eax; Str
0x51BB05: call    _strchr
0x51BB0A: add     esp, 8
0x51BB0D: test    eax, eax
0x51BB0F: jz      short loc_51BB60
0x51BB11: lea     esi, [eax+1]
0x51BB14: test    esi, esi
0x51BB16: mov     byte ptr [eax], 0
0x51BB19: jz      short loc_51BB60
0x51BB1B: mov     al, [esi]
0x51BB1D: cmp     al, 20h ; ' '
0x51BB1F: jnz     short loc_51BB2F
0x51BB21: cmp     al, 0Dh
0x51BB23: jz      short loc_51BB2F
0x51BB25: mov     al, [esi+1]
0x51BB28: add     esi, 1
0x51BB2B: cmp     al, 20h ; ' '
0x51BB2D: jz      short loc_51BB21
0x51BB2F: push    2Ch ; ','; Val
0x51BB31: push    esi; Str
0x51BB32: call    _strchr
0x51BB37: add     esp, 8
0x51BB3A: test    eax, eax
0x51BB3C: jz      short loc_51BB47
0x51BB3E: lea     ecx, [eax+1]
0x51BB41: mov     [esp+1C0h+String], ecx
0x51BB45: jmp     short loc_51BB5D
0x51BB47: push    20h ; ' '; Val
0x51BB49: push    esi; Str
0x51BB4A: call    _strchr
0x51BB4F: add     esp, 8
0x51BB52: test    eax, eax
0x51BB54: jz      short loc_51BB60
0x51BB56: lea     edx, [eax+1]
0x51BB59: mov     [esp+1C0h+String], edx
0x51BB5D: mov     byte ptr [eax], 0
0x51BB60: test    bl, bl
0x51BB62: jz      loc_51BC87
0x51BB68: xor     ebx, ebx
0x51BB6A: lea     ebx, [ebx+0]
0x51BB70: mov     ecx, ds:0B109C0h[ebx*4]
0x51BB77: lea     eax, [esp+1C0h+var_114]
0x51BB7E: push    eax; Str2
0x51BB7F: push    ecx; Str1
0x51BB80: call    __strcmp
0x51BB85: add     esp, 8
0x51BB88: test    eax, eax
0x51BB8A: jz      loc_51BC22
0x51BB90: add     ebx, 1
0x51BB93: cmp     ebx, 10h
0x51BB96: jl      short loc_51BB70
0x51BB98: fld     [esp+1C0h+Str1]
0x51BB9C: fmul    qword ptr ds:0A3AA50h
0x51BBA2: fstp    [esp+1C0h+var_188]
0x51BBA6: fld     [esp+1C0h+var_188]
0x51BBAA: fistp   [esp+1C0h+var_164]
0x51BBAE: mov     ecx, dword ptr [esp+1C0h+var_190]
0x51BBB2: mov     edx, [esp+1C0h+var_164]
0x51BBB6: mov     eax, [esp+1C0h+var_19C]
0x51BBBA: push    ecx
0x51BBBB: push    edx
0x51BBBC: push    eax; ArgList
0x51BBBD: push    offset aBadNoteStringS; "Bad note string \"%s\" frame %d in \"%s"...
0x51BBC2: call    PrintError
0x51BBC7: add     esp, 10h
0x51BBCA: mov     [esp+1C0h+var_1A9], 1
0x51BBCF: mov     eax, dword ptr [esp+1C0h+var_17C]
0x51BBD3: test    eax, eax
0x51BBD5: jz      short loc_51BBDA
0x51BBD7: mov     byte ptr [eax], 0Dh
0x51BBDA: cmp     [esp+1C0h+var_19C], 0
0x51BBDF: jz      loc_51BA3B
0x51BBE5: mov     ecx, [esp+1C0h+var_19C]
0x51BBE9: push    0Ah; Val
0x51BBEB: push    ecx; Str
0x51BBEC: call    _strchr
0x51BBF1: add     esp, 8
0x51BBF4: test    eax, eax
0x51BBF6: jz      loc_51BA3B
0x51BBFC: lea     esp, [esp+0]
0x51BC00: mov     cl, [eax]
0x51BC02: test    cl, cl
0x51BC04: jz      loc_51BA3B
0x51BC0A: cmp     cl, 0Dh
0x51BC0D: jz      short loc_51BC18
0x51BC0F: cmp     cl, 0Ah
0x51BC12: jnz     loc_51BD6E
0x51BC18: add     eax, 1
0x51BC1B: jnz     short loc_51BC00
0x51BC1D: jmp     loc_51BA3B
0x51BC22: cmp     ebx, 10h
0x51BC25: jge     loc_51BB98
0x51BC2B: mov     edi, [esp+1C0h+var_19C]
0x51BC2F: sub     edi, [esp+1C0h+var_15C]
0x51BC33: mov     esi, [ebp+24h]
0x51BC36: lea     edx, [esi+1]
0x51BC39: shl     edi, 8
0x51BC3C: or      edi, [esp+1C0h+Str2]
0x51BC40: push    edx
0x51BC41: mov     ecx, ebp
0x51BC43: call    sub_51ACF0
0x51BC48: cmp     esi, [ebp+24h]
0x51BC4B: jnb     short loc_51BC63
0x51BC4D: mov     eax, [ebp+28h]
0x51BC50: test    eax, eax
0x51BC52: jz      short loc_51BC60
0x51BC54: fld     [esp+1C0h+Str1]
0x51BC58: mov     ecx, esi
0x51BC5A: shl     ecx, 4
0x51BC5D: fstp    dword ptr [ecx+eax]
0x51BC60: cmp     esi, [ebp+24h]
0x51BC63: ja      loc_51BBCF
0x51BC69: mov     eax, [ebp+28h]
0x51BC6C: test    eax, eax
0x51BC6E: jz      loc_51BBCF
0x51BC74: shl     esi, 4
0x51BC77: mov     [esi+eax+4], bl
0x51BC7B: mov     edx, [ebp+28h]
0x51BC7E: mov     [esi+edx+8], edi
0x51BC82: jmp     loc_51BBCF
0x51BC87: mov     ecx, ds:0B33A98h
0x51BC8D: lea     eax, [esp+1C0h+var_114]
0x51BC94: push    eax
0x51BC95: call    sub_447490
0x51BC9A: mov     ebx, eax
0x51BC9C: test    ebx, ebx
0x51BC9E: jz      loc_51BB98
0x51BCA4: mov     edi, [ebp+24h]
0x51BCA7: lea     ecx, [edi+1]
0x51BCAA: push    ecx
0x51BCAB: mov     ecx, ebp
0x51BCAD: call    sub_51ACF0
0x51BCB2: cmp     edi, [ebp+24h]
0x51BCB5: jnb     short loc_51BCDF
0x51BCB7: mov     eax, [ebp+28h]
0x51BCBA: test    eax, eax
0x51BCBC: jz      short loc_51BCCA
0x51BCBE: fld     [esp+1C0h+Str1]
0x51BCC2: mov     edx, edi
0x51BCC4: shl     edx, 4
0x51BCC7: fstp    dword ptr [edx+eax]
0x51BCCA: cmp     edi, [ebp+24h]
0x51BCCD: jnb     short loc_51BCDF
0x51BCCF: mov     eax, [ebp+28h]
0x51BCD2: test    eax, eax
0x51BCD4: jz      short loc_51BCDF
0x51BCD6: mov     ecx, edi
0x51BCD8: shl     ecx, 4
0x51BCDB: mov     [ecx+eax+0Ch], ebx
0x51BCDF: test    esi, esi
0x51BCE1: jz      short loc_51BD31
0x51BCE3: push    esi; String
0x51BCE4: call    _atof
0x51BCE9: fstp    [esp+1C4h+var_180]
0x51BCED: add     esp, 4
0x51BCF0: cmp     edi, [ebp+24h]
0x51BCF3: jnb     short loc_51BD31
0x51BCF5: mov     ecx, [ebp+28h]
0x51BCF8: test    ecx, ecx
0x51BCFA: jz      short loc_51BD31
0x51BCFC: fld     [esp+1C0h+var_180]
0x51BD00: fmul    qword ptr ds:0A529C0h
0x51BD06: fnstcw  word ptr [esp+1C0h+var_180]
0x51BD0A: movzx   eax, word ptr [esp+1C0h+var_180]
0x51BD0F: or      eax, 0C00h
0x51BD14: mov     [esp+1C0h+var_188], eax
0x51BD18: mov     eax, edi
0x51BD1A: fldcw   word ptr [esp+1C0h+var_188]
0x51BD1E: shl     eax, 4
0x51BD21: fistp   [esp+1C0h+var_188]
0x51BD25: mov     dl, byte ptr [esp+1C0h+var_188]
0x51BD29: mov     [eax+ecx+4], dl
0x51BD2D: fldcw   word ptr [esp+1C0h+var_180]
0x51BD31: mov     eax, [esp+1C0h+String]
0x51BD35: test    eax, eax
0x51BD37: jz      loc_51BBCF
0x51BD3D: push    eax; String
0x51BD3E: call    _atof
0x51BD43: fstp    [esp+1C4h+var_188]
0x51BD47: add     esp, 4
0x51BD4A: cmp     edi, [ebp+24h]
0x51BD4D: jnb     loc_51BBCF
0x51BD53: mov     eax, [ebp+28h]
0x51BD56: test    eax, eax
0x51BD58: jz      loc_51BBCF
0x51BD5E: fld     [esp+1C0h+var_188]
0x51BD62: shl     edi, 4
0x51BD65: fstp    dword ptr [edi+eax+8]
0x51BD69: jmp     loc_51BBCF
0x51BD6E: cmp     byte ptr [eax], 0
0x51BD71: jz      loc_51BA3B
0x51BD77: mov     [esp+1C0h+var_19C], eax
0x51BD7B: mov     ebp, eax
0x51BD7D: jmp     loc_51B700
0x51BD82: mov     ecx, 3; jumptable 0051BA7B case 4
0x51BD87: jmp     short def_51BA7B; jumptable 0051BA7B default case, case 6
0x51BD89: mov     ecx, 4; jumptable 0051BA7B case 7
0x51BD8E: jmp     short def_51BA7B; jumptable 0051BA7B default case, case 6
0x51BD90: mov     ecx, 2; jumptable 0051BA7B cases 2,3,5
0x51BD95: push    ecx; jumptable 0051BA7B default case, case 6
0x51BD96: mov     ecx, esi
0x51BD98: call    sub_51AE20
0x51BD9D: fstp    [esp+1C0h+var_17C]
0x51BDA1: push    0; ArgList
0x51BDA3: mov     ecx, esi
0x51BDA5: call    sub_51AE20
0x51BDAA: fcomp   [esp+1C0h+var_17C]
0x51BDAE: fnstsw  ax
0x51BDB0: test    ah, 1
0x51BDB3: jnz     short loc_51BDDB
0x51BDB5: movzx   eax, byte ptr [esi+8]
0x51BDB9: mov     ecx, dword ptr [esp+1C0h+var_190]
0x51BDBD: lea     edx, [eax+eax*8]
0x51BDC0: mov     eax, ds:0B102E0h[edx*4]
0x51BDC7: push    ecx
0x51BDC8: push    eax; ArgList
0x51BDC9: push    offset aSEndFrameIsLes; "%s: End frame is less than or equal to "...
0x51BDCE: call    PrintError
0x51BDD3: add     esp, 0Ch
0x51BDD6: mov     [esp+1C0h+var_1A9], 1
0x51BDDB: cmp     [esp+1C0h+var_1A9], 0
0x51BDE0: mov     cl, [esp+1C0h+var_189]
0x51BDE4: mov     ds:0B06B18h, cl
0x51BDEA: jz      short loc_51BDFF
0x51BDEC: call    sub_494480
0x51BDF1: push    eax; ArgList
0x51BDF2: push    offset aAnimationGroup; "Animation group note problem. See %s fi"...
0x51BDF7: call    PrintError
0x51BDFC: add     esp, 8
0x51BDFF: mov     eax, [esp+1C0h+var_1A4]
0x51BE03: mov     ecx, [esp+1C0h+var_C]
0x51BE0A: mov     large fs:0, ecx
0x51BE11: pop     ecx
0x51BE12: pop     edi
0x51BE13: pop     esi
0x51BE14: pop     ebp
0x51BE15: pop     ebx
0x51BE16: mov     ecx, [esp+1ACh+var_10]
0x51BE1D: xor     ecx, esp
0x51BE1F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51BE24: add     esp, 1ACh
0x51BE2A: retn
