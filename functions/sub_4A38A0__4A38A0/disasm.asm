0x4A38A0: push    0FFFFFFFFh
0x4A38A2: push    offset SEH_690310
0x4A38A7: mov     eax, large fs:0
0x4A38AD: push    eax
0x4A38AE: push    ecx
0x4A38AF: push    ebx
0x4A38B0: push    ebp
0x4A38B1: push    esi
0x4A38B2: push    edi
0x4A38B3: mov     eax, ds:0B30AACh
0x4A38B8: xor     eax, esp
0x4A38BA: push    eax
0x4A38BB: lea     eax, [esp+24h+var_C]
0x4A38BF: mov     large fs:0, eax
0x4A38C5: mov     [esp+24h+var_10], ecx
0x4A38C9: mov     edi, [esp+24h+a1]
0x4A38CD: test    edi, edi
0x4A38CF: jz      short loc_4A3900
0x4A38D1: mov     ecx, edi
0x4A38D3: call    TESFile_GetChunkType
0x4A38D8: cmp     eax, 53474452h
0x4A38DD: jnz     short loc_4A3900
0x4A38DF: mov     ebx, [edi+254h]
0x4A38E5: mov     esi, ebx
0x4A38E7: shr     esi, 3
0x4A38EA: test    bl, 7
0x4A38ED: jz      short loc_4A3918
0x4A38EF: add     edi, 1Ch
0x4A38F2: push    edi; ArgList
0x4A38F3: push    offset aInvalidRegionG; "Invalid Region Grass Object Data in fil"...
0x4A38F8: call    PrintError
0x4A38FD: add     esp, 8
0x4A3900: xor     al, al
0x4A3902: mov     ecx, [esp+24h+var_C]
0x4A3906: mov     large fs:0, ecx
0x4A390D: pop     ecx
0x4A390E: pop     edi
0x4A390F: pop     esi
0x4A3910: pop     ebp
0x4A3911: pop     ebx
0x4A3912: add     esp, 10h
0x4A3915: retn    4
0x4A3918: test    esi, esi
0x4A391A: jz      loc_4A39BC
0x4A3920: xor     ecx, ecx
0x4A3922: mov     eax, esi
0x4A3924: mov     edx, 8
0x4A3929: mul     edx
0x4A392B: seto    cl
0x4A392E: neg     ecx
0x4A3930: or      ecx, eax
0x4A3932: push    ecx; Size
0x4A3933: call    FormHeapAlloc
0x4A3938: add     esp, 4
0x4A393B: mov     ebp, eax
0x4A393D: push    ebx; a4
0x4A393E: push    ebp; Dst
0x4A393F: mov     ecx, edi; a1
0x4A3941: call    TESFile_GetChunkData
0x4A3946: test    esi, esi
0x4A3948: jbe     short loc_4A39B3
0x4A394A: mov     edi, ebp
0x4A394C: mov     ebx, esi
0x4A394E: mov     edi, edi
0x4A3950: push    0Ch; Size
0x4A3952: call    FormHeapAlloc
0x4A3957: add     esp, 4
0x4A395A: mov     [esp+24h+a1], eax
0x4A395E: xor     esi, esi
0x4A3960: cmp     eax, esi
0x4A3962: mov     [esp+24h+var_4], esi
0x4A3966: jz      short loc_4A3972
0x4A3968: push    edi
0x4A3969: mov     ecx, eax
0x4A396B: call    sub_4A59E0
0x4A3970: mov     esi, eax
0x4A3972: test    esi, esi
0x4A3974: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4A397C: jz      short loc_4A39AB
0x4A397E: mov     eax, [esi]
0x4A3980: mov     edx, [eax+4]
0x4A3983: mov     ecx, esi
0x4A3985: call    edx
0x4A3987: test    eax, eax
0x4A3989: jz      short loc_4A39A0
0x4A398B: mov     ecx, [esp+24h+var_10]
0x4A398F: mov     eax, [ecx]
0x4A3991: mov     edx, [eax+24h]
0x4A3994: push    esi
0x4A3995: call    edx
0x4A3997: mov     ecx, eax
0x4A3999: call    sub_4A5FF0
0x4A399E: jmp     short loc_4A39AB
0x4A39A0: mov     eax, [esi]
0x4A39A2: mov     edx, [eax+8]
0x4A39A5: push    1
0x4A39A7: mov     ecx, esi
0x4A39A9: call    edx
0x4A39AB: add     edi, 8
0x4A39AE: sub     ebx, 1
0x4A39B1: jnz     short loc_4A3950
0x4A39B3: push    ebp
0x4A39B4: call    FormHeapFree
0x4A39B9: add     esp, 4
0x4A39BC: mov     al, 1
0x4A39BE: jmp     loc_4A3902
