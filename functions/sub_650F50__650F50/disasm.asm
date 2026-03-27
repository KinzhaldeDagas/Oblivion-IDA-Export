0x650F50: push    ecx
0x650F51: push    ebx
0x650F52: mov     ebx, [esp+8+arg_4]
0x650F56: push    ebp
0x650F57: push    esi
0x650F58: push    edi
0x650F59: push    0; int
0x650F5B: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x650F60: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x650F65: push    0; int
0x650F67: push    ebx; void *
0x650F68: mov     esi, ecx
0x650F6A: call    OblivionDynamicCast
0x650F6F: mov     ebp, [esp+28h+arg_0]
0x650F73: add     esp, 14h
0x650F76: push    ebx
0x650F77: push    ebp
0x650F78: mov     ecx, esi
0x650F7A: mov     [esp+1Ch+var_4], eax
0x650F7E: call    sub_658BC0
0x650F83: mov     ecx, ds:0B33B00h
0x650F89: movzx   edi, ax
0x650F8C: movzx   eax, di
0x650F8F: mov     [esp+14h+arg_4], edi
0x650F93: mov     [esp+14h+arg_0], eax
0x650F97: call    sub_45A170
0x650F9C: test    al, al
0x650F9E: jz      short loc_650FA3
0x650FA0: add     edi, 6
0x650FA3: mov     ecx, ds:0B33B00h
0x650FA9: mov     al, [ecx+7Ch]
0x650FAC: add     edi, 2
0x650FAF: cmp     al, 34h ; '4'
0x650FB1: jb      short loc_650FB6
0x650FB3: add     edi, 5
0x650FB6: cmp     al, 4Dh ; 'M'
0x650FB8: jb      short loc_650FBD
0x650FBA: add     edi, 4
0x650FBD: test    ebp, 80000h
0x650FC3: jz      short loc_650FF2
0x650FC5: add     edi, 4
0x650FC8: cmp     dword ptr [esi+0C0h], 0
0x650FCF: mov     [esp+14h+arg_4], edi
0x650FD3: jz      short loc_650FF2
0x650FD5: mov     ecx, [esi+0C0h]
0x650FDB: mov     edx, [ecx]
0x650FDD: mov     eax, [edx+0DCh]
0x650FE3: call    eax
0x650FE5: add     ax, 5
0x650FE9: add     word ptr [esp+14h+arg_4], ax
0x650FEE: mov     edi, [esp+14h+arg_4]
0x650FF2: add     edi, 33h ; '3'
0x650FF5: test    ebp, 2000000h
0x650FFB: mov     [esp+14h+arg_4], edi
0x650FFF: jz      short loc_651016
0x651001: mov     ecx, [esi+17Ch]
0x651007: push    ecx
0x651008: push    ebx
0x651009: call    sub_473BF0
0x65100E: add     esp, 8
0x651011: add     word ptr [esp+14h+arg_4], ax
0x651016: mov     edx, [esp+14h+var_4]
0x65101A: mov     eax, [esi+174h]
0x651020: push    edx
0x651021: push    eax
0x651022: call    ActiveEffect_Base_GetAEListSaveSize?
0x651027: mov     edi, ds:0B33B00h
0x65102D: mov     dl, [edi+7Ch]
0x651030: add     ax, 8
0x651034: add     word ptr [esp+1Ch+arg_4], ax
0x651039: add     esp, 8
0x65103C: cmp     dl, 45h ; 'E'
0x65103F: mov     ebp, 1
0x651044: jb      short loc_65104A
0x651046: add     [esp+14h+arg_4], ebp
0x65104A: cmp     dl, 49h ; 'I'
0x65104D: jb      short loc_651054
0x65104F: add     [esp+14h+arg_4], 2
0x651054: cmp     dl, 65h ; 'e'
0x651057: jb      short loc_651085
0x651059: mov     ebx, [esp+14h+arg_4]
0x65105D: lea     eax, [esi+0A8h]
0x651063: add     ebx, 0Ah
0x651066: xor     ecx, ecx
0x651068: test    eax, eax
0x65106A: jz      short loc_65107E
0x65106C: lea     esp, [esp+0]
0x651070: cmp     dword ptr [eax], 0
0x651073: jz      short loc_651077
0x651075: add     ecx, ebp
0x651077: mov     eax, [eax+4]
0x65107A: test    eax, eax
0x65107C: jnz     short loc_651070
0x65107E: lea     ecx, [ebx+ecx*4]
0x651081: mov     [esp+14h+arg_4], ecx
0x651085: cmp     dl, 6Dh ; 'm'
0x651088: jb      short loc_65108E
0x65108A: add     [esp+14h+arg_4], ebp
0x65108E: cmp     dl, 71h ; 'q'
0x651091: jb      short loc_651098
0x651093: add     [esp+14h+arg_4], 4
0x651098: cmp     byte ptr ds:0B05BACh, 0
0x65109F: jz      loc_651132
0x6510A5: mov     esi, [edi+84h]
0x6510AB: test    esi, esi
0x6510AD: jz      short loc_651100
0x6510AF: mov     edx, [esi]
0x6510B1: push    edx; a1
0x6510B2: call    TESForm_LookupByFormID
0x6510B7: mov     ecx, [esi+5]
0x6510BA: mov     edx, [eax]
0x6510BC: add     esp, 4
0x6510BF: push    offset a_AiMiddlehighp; ".\\AI\\MiddleHighProcess.cpp"
0x6510C4: push    19ABh
0x6510C9: push    ecx
0x6510CA: mov     ecx, eax
0x6510CC: mov     eax, [edx+0D4h]
0x6510D2: call    eax
0x6510D4: mov     ecx, [esi]
0x6510D6: mov     si, word ptr [esp+20h+arg_4]
0x6510DB: movzx   edx, word ptr [esp+20h+arg_0]
0x6510E0: push    eax
0x6510E1: movzx   eax, si
0x6510E4: push    ecx
0x6510E5: sub     eax, edx
0x6510E7: push    eax; ArgList
0x6510E8: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x6510ED: call    sub_40FEC0
0x6510F2: add     esp, 1Ch
0x6510F5: pop     edi
0x6510F6: mov     ax, si
0x6510F9: pop     esi
0x6510FA: pop     ebp
0x6510FB: pop     ebx
0x6510FC: pop     ecx
0x6510FD: retn    8
0x651100: mov     si, word ptr [esp+14h+arg_4]
0x651105: movzx   ecx, word ptr [esp+14h+arg_0]
0x65110A: push    offset a_AiMiddlehighp; ".\\AI\\MiddleHighProcess.cpp"
0x65110F: movzx   edx, si
0x651112: push    19ABh
0x651117: sub     edx, ecx
0x651119: push    edx; ArgList
0x65111A: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x65111F: call    sub_40FEC0
0x651124: add     esp, 10h
0x651127: pop     edi
0x651128: mov     ax, si
0x65112B: pop     esi
0x65112C: pop     ebp
0x65112D: pop     ebx
0x65112E: pop     ecx
0x65112F: retn    8
0x651132: mov     ax, word ptr [esp+14h+arg_4]
0x651137: pop     edi
0x651138: pop     esi
0x651139: pop     ebp
0x65113A: pop     ebx
0x65113B: pop     ecx
0x65113C: retn    8
