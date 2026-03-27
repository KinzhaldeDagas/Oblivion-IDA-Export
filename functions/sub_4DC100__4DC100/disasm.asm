0x4DC100: push    ebx
0x4DC101: push    esi
0x4DC102: mov     esi, ecx
0x4DC104: mov     ecx, [esi+1Ch]
0x4DC107: xor     bl, bl
0x4DC109: test    ecx, ecx
0x4DC10B: jz      short loc_4DC13F
0x4DC10D: mov     eax, [ecx]
0x4DC10F: mov     edx, [eax+0F4h]
0x4DC115: call    edx
0x4DC117: test    al, al
0x4DC119: jz      short loc_4DC13F
0x4DC11B: mov     eax, [esi]
0x4DC11D: mov     edx, [eax+170h]
0x4DC123: mov     ecx, esi
0x4DC125: call    edx
0x4DC127: test    eax, eax
0x4DC129: jz      short loc_4DC13F
0x4DC12B: mov     eax, [esi]
0x4DC12D: mov     edx, [eax+170h]
0x4DC133: mov     ecx, esi
0x4DC135: call    edx
0x4DC137: cmp     byte ptr [eax+4], 1Ah
0x4DC13B: jz      short loc_4DC13F
0x4DC13D: mov     bl, 1
0x4DC13F: cmp     dword ptr [esi+3Ch], 0
0x4DC143: jz      short loc_4DC152
0x4DC145: test    dword ptr [esi+8], 80000h
0x4DC14C: jz      loc_4DC1EF
0x4DC152: mov     ecx, ds:0B33A1Ch
0x4DC158: push    esi
0x4DC159: call    sub_4354F0
0x4DC15E: test    al, al
0x4DC160: jnz     loc_4DC1EF
0x4DC166: mov     eax, [esi+8]
0x4DC169: mov     ecx, eax
0x4DC16B: shr     ecx, 5
0x4DC16E: test    cl, 1
0x4DC171: jnz     short loc_4DC1EF
0x4DC173: test    bl, bl
0x4DC175: jnz     short loc_4DC1EF
0x4DC177: shr     eax, 0Bh
0x4DC17A: test    al, 1
0x4DC17C: jnz     short loc_4DC1C5
0x4DC17E: mov     edx, [esi]
0x4DC180: mov     eax, [edx+190h]
0x4DC186: mov     ecx, esi
0x4DC188: call    eax
0x4DC18A: test    al, al
0x4DC18C: jz      short loc_4DC1A5
0x4DC18E: mov     edx, [esi]
0x4DC190: mov     eax, [edx+1A4h]
0x4DC196: mov     ecx, esi
0x4DC198: call    eax
0x4DC19A: push    esi
0x4DC19B: mov     ecx, offset ActorProcessManager_ptr
0x4DC1A0: call    sub_674E10
0x4DC1A5: mov     eax, [esi+40h]
0x4DC1A8: mov     ecx, ds:0B333A0h
0x4DC1AE: push    0
0x4DC1B0: push    eax
0x4DC1B1: call    sub_440C80
0x4DC1B6: mov     ecx, ds:0B33A1Ch
0x4DC1BC: push    eax
0x4DC1BD: push    esi
0x4DC1BE: call    sub_438060
0x4DC1C3: jmp     short loc_4DC1EF
0x4DC1C5: mov     ecx, ds:0B33B00h
0x4DC1CB: call    sub_45A500
0x4DC1D0: test    al, al
0x4DC1D2: jnz     short loc_4DC1EF
0x4DC1D4: push    edi
0x4DC1D5: lea     edi, [esi+44h]
0x4DC1D8: push    edi
0x4DC1D9: push    esi
0x4DC1DA: call    sub_4F9EC0
0x4DC1DF: push    1000h
0x4DC1E4: push    edi
0x4DC1E5: push    esi
0x4DC1E6: call    Script_AddEventToExtraScript
0x4DC1EB: add     esp, 14h
0x4DC1EE: pop     edi
0x4DC1EF: push    1
0x4DC1F1: mov     ecx, esi
0x4DC1F3: call    sub_4D9310
0x4DC1F8: mov     ecx, [esi+3Ch]; this
0x4DC1FB: test    ecx, ecx
0x4DC1FD: jz      short loc_4DC26A
0x4DC1FF: fldz
0x4DC201: push    0; a3
0x4DC203: push    ecx
0x4DC204: fstp    [esp+10h+a2]; a2
0x4DC207: call    NiAVObject_UpdateNiAVObject
0x4DC20C: mov     edx, [esi]
0x4DC20E: mov     eax, [edx+148h]
0x4DC214: mov     ecx, esi
0x4DC216: call    eax
0x4DC218: mov     edx, [esi]
0x4DC21A: mov     eax, [edx+190h]
0x4DC220: mov     ecx, esi
0x4DC222: call    eax
0x4DC224: test    al, al
0x4DC226: jz      short loc_4DC24F
0x4DC228: push    0FFFFFFFFh
0x4DC22A: mov     ecx, esi
0x4DC22C: call    sub_5F0310
0x4DC231: test    al, al
0x4DC233: jnz     short loc_4DC24F
0x4DC235: mov     edx, [esi]
0x4DC237: mov     eax, [edx+284h]
0x4DC23D: push    0Ah
0x4DC23F: mov     ecx, esi
0x4DC241: call    eax
0x4DC243: test    eax, eax
0x4DC245: jle     short loc_4DC24F
0x4DC247: lea     ecx, [esi+44h]
0x4DC24A: call    sub_4212E0
0x4DC24F: mov     eax, [esi+40h]
0x4DC252: test    eax, eax
0x4DC254: jz      short loc_4DC26A
0x4DC256: mov     al, [eax+26h]
0x4DC259: cmp     al, 6
0x4DC25B: jz      short loc_4DC261
0x4DC25D: cmp     al, 5
0x4DC25F: jnz     short loc_4DC26A
0x4DC261: push    esi
0x4DC262: lea     ecx, [esi+44h]
0x4DC265: call    ExtraDataList_RestoreSavedHavokData
0x4DC26A: pop     esi
0x4DC26B: pop     ebx
0x4DC26C: retn
