0x67B730: push    ecx
0x67B731: push    esi
0x67B732: mov     esi, ecx
0x67B734: mov     ecx, ds:0B33B00h
0x67B73A: push    edi
0x67B73B: xor     edi, edi
0x67B73D: call    sub_45A170
0x67B742: test    al, al
0x67B744: jz      short loc_67B74B
0x67B746: mov     edi, 6
0x67B74B: mov     eax, ds:0B33B00h
0x67B750: mov     dl, [eax+7Ch]
0x67B753: add     edi, 2
0x67B756: cmp     dl, 39h ; '9'
0x67B759: mov     [esp+0Ch+var_4], edi
0x67B75D: jb      short loc_67B785
0x67B75F: mov     eax, [esi]
0x67B761: xor     ecx, ecx
0x67B763: test    eax, eax
0x67B765: jz      short loc_67B776
0x67B767: cmp     dword ptr [eax], 0
0x67B76A: jz      short loc_67B76F
0x67B76C: add     ecx, 1
0x67B76F: mov     eax, [eax+4]
0x67B772: test    eax, eax
0x67B774: jnz     short loc_67B767
0x67B776: cmp     dl, 39h ; '9'
0x67B779: lea     eax, [ecx+edi]
0x67B77C: lea     edi, [eax+ecx*8]
0x67B77F: mov     [esp+0Ch+var_4], edi
0x67B783: jnb     short loc_67B7A9
0x67B785: mov     eax, [esi]
0x67B787: xor     ecx, ecx
0x67B789: test    eax, eax
0x67B78B: jz      short loc_67B79F
0x67B78D: lea     ecx, [ecx+0]
0x67B790: cmp     dword ptr [eax], 0
0x67B793: jz      short loc_67B798
0x67B795: add     ecx, 1
0x67B798: mov     eax, [eax+4]
0x67B79B: test    eax, eax
0x67B79D: jnz     short loc_67B790
0x67B79F: lea     edx, [ecx+edi]
0x67B7A2: lea     eax, [edx+ecx*4]
0x67B7A5: mov     [esp+0Ch+var_4], eax
0x67B7A9: mov     ecx, [esi+8]
0x67B7AC: mov     edx, [ecx]
0x67B7AE: mov     eax, [edx+0DCh]
0x67B7B4: call    eax
0x67B7B6: mov     di, word ptr [esp+0Ch+var_4]
0x67B7BB: add     ax, 20h ; ' '
0x67B7BF: add     di, ax
0x67B7C2: cmp     byte ptr ds:0B05BACh, 0
0x67B7C9: jz      short loc_67B837
0x67B7CB: mov     ecx, ds:0B33B00h
0x67B7D1: mov     esi, [ecx+84h]
0x67B7D7: test    esi, esi
0x67B7D9: jz      short loc_67B81C
0x67B7DB: mov     edx, [esi]
0x67B7DD: push    edx; a1
0x67B7DE: call    TESForm_LookupByFormID
0x67B7E3: mov     ecx, [esi+5]
0x67B7E6: mov     edx, [eax]
0x67B7E8: add     esp, 4
0x67B7EB: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67B7F0: push    117h
0x67B7F5: push    ecx
0x67B7F6: mov     ecx, eax
0x67B7F8: mov     eax, [edx+0D4h]
0x67B7FE: call    eax
0x67B800: mov     ecx, [esi]
0x67B802: push    eax
0x67B803: movzx   edx, di
0x67B806: push    ecx
0x67B807: push    edx; ArgList
0x67B808: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x67B80D: call    sub_40FEC0
0x67B812: add     esp, 1Ch
0x67B815: mov     ax, di
0x67B818: pop     edi
0x67B819: pop     esi
0x67B81A: pop     ecx
0x67B81B: retn
0x67B81C: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67B821: movzx   eax, di
0x67B824: push    117h
0x67B829: push    eax; ArgList
0x67B82A: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x67B82F: call    sub_40FEC0
0x67B834: add     esp, 10h
0x67B837: mov     ax, di
0x67B83A: pop     edi
0x67B83B: pop     esi
0x67B83C: pop     ecx
0x67B83D: retn
