0x572170: sub     esp, 0Ch
0x572173: call    InterfaceManager_IsMenuMode
0x572178: test    al, al
0x57217A: jnz     loc_5723D6
0x572180: push    ebx
0x572181: push    ebp
0x572182: push    esi
0x572183: push    edi
0x572184: push    1
0x572186: call    sub_571F90
0x57218B: add     esp, 4
0x57218E: mov     [esp+1Ch+var_C], eax
0x572192: lea     esi, [eax+0Ch]
0x572195: mov     ebx, 0C8h ; 'È'
0x57219A: xor     ebp, ebp
0x57219C: lea     esp, [esp+0]
0x5721A0: fldz
0x5721A2: fcom    dword ptr [esi+0Ch]
0x5721A5: fnstsw  ax
0x5721A7: test    ah, 5
0x5721AA: jp      loc_572270
0x5721B0: fld     dword ptr [esi+0Ch]
0x5721B3: fsub    dword ptr ds:0B33E9Ch
0x5721B9: fstp    [esp+1Ch+var_8]
0x5721BD: fld     [esp+1Ch+var_8]
0x5721C1: fst     dword ptr [esi+0Ch]
0x5721C4: fcompp
0x5721C6: fnstsw  ax
0x5721C8: test    ah, 41h
0x5721CB: jp      loc_572272
0x5721D1: cmp     [esi], ebp
0x5721D3: jz      loc_572272
0x5721D9: push    1; arg1
0x5721DB: push    ebp; canCreate
0x5721DC: call    InterfaceManager_GetSingleton
0x5721E1: mov     edx, [esi]
0x5721E3: mov     ecx, [eax+70h]
0x5721E6: mov     eax, [ecx]
0x5721E8: mov     eax, [eax+88h]
0x5721EE: add     esp, 8
0x5721F1: push    edx
0x5721F2: lea     edx, [esp+20h+var_4]
0x5721F6: push    edx
0x5721F7: call    eax
0x5721F9: mov     eax, [esp+1Ch+var_4]
0x5721FD: cmp     eax, ebp
0x5721FF: jz      short loc_57221F
0x572201: mov     edi, eax
0x572203: add     eax, 4
0x572206: push    eax; lpAddend
0x572207: call    dword ptr ds:0A2807Ch
0x57220D: test    eax, eax
0x57220F: jnz     short loc_57221F
0x572211: cmp     edi, ebp
0x572213: jz      short loc_57221F
0x572215: mov     edx, [edi]
0x572217: mov     eax, [edx]
0x572219: push    1
0x57221B: mov     ecx, edi
0x57221D: call    eax
0x57221F: mov     edi, [esi]
0x572221: cmp     edi, ebp
0x572223: jz      short loc_572243
0x572225: lea     ecx, [edi+4]
0x572228: push    ecx; lpAddend
0x572229: call    dword ptr ds:0A2807Ch
0x57222F: test    eax, eax
0x572231: jnz     short loc_572241
0x572233: cmp     edi, ebp
0x572235: jz      short loc_572241
0x572237: mov     edx, [edi]
0x572239: mov     eax, [edx]
0x57223B: push    1
0x57223D: mov     ecx, edi
0x57223F: call    eax
0x572241: mov     [esi], ebp
0x572243: fldz
0x572245: mov     [esi-4], ebp
0x572248: fst     dword ptr [esi-0Ch]
0x57224B: fstp    dword ptr [esi-8]
0x57224E: mov     ecx, [esi+4]
0x572251: push    ecx
0x572252: call    FormHeapFree
0x572257: fld     dword ptr ds:0A30634h
0x57225D: mov     [esi+4], ebp
0x572260: mov     [esi+0Ah], bp
0x572264: mov     [esi+8], bp
0x572268: fstp    dword ptr [esi+0Ch]
0x57226B: add     esp, 4
0x57226E: jmp     short loc_572272
0x572270: fstp    st
0x572272: add     esi, 1Ch
0x572275: sub     ebx, 1
0x572278: jnz     loc_5721A0
0x57227E: mov     edx, [esp+1Ch+var_C]
0x572282: mov     ebx, [edx+15E4h]
0x572288: cmp     ebx, ebp
0x57228A: jz      loc_5723D2
0x572290: mov     esi, [ebx+8]
0x572293: mov     edx, [esi+0Ch]
0x572296: cmp     dword ptr [edx+4], 2
0x57229A: lea     eax, [ebx+8]
0x57229D: mov     ebx, [ebx]
0x57229F: jnb     short loc_5722F8
0x5722A1: mov     ecx, [esp+1Ch+var_C]
0x5722A5: mov     eax, [ecx+15E4h]
0x5722AB: add     ecx, 15E0h
0x5722B1: cmp     eax, ebp
0x5722B3: jz      short loc_5722C5
0x5722B5: cmp     esi, [eax+8]
0x5722B8: lea     edx, [eax+8]
0x5722BB: mov     edi, eax
0x5722BD: mov     eax, [eax]
0x5722BF: jz      short loc_5722C7
0x5722C1: cmp     eax, ebp
0x5722C3: jnz     short loc_5722B5
0x5722C5: xor     edi, edi
0x5722C7: cmp     edi, ebp
0x5722C9: mov     [esp+1Ch+var_4], edi
0x5722CD: jz      short loc_5722DB
0x5722CF: lea     eax, [esp+1Ch+var_4]
0x5722D3: push    eax
0x5722D4: call    sub_7AA860
0x5722D9: mov     esi, eax
0x5722DB: cmp     esi, ebp
0x5722DD: jz      loc_5723CA
0x5722E3: mov     ecx, esi; void *
0x5722E5: call    sub_571DF0
0x5722EA: push    esi
0x5722EB: call    FormHeapFree
0x5722F0: add     esp, 4
0x5722F3: jmp     loc_5723CA
0x5722F8: fldz
0x5722FA: fcom    dword ptr [esi+18h]
0x5722FD: fnstsw  ax
0x5722FF: test    ah, 5
0x572302: jp      loc_5723C8
0x572308: fld     dword ptr [esi+18h]
0x57230B: fsub    dword ptr ds:0B33E9Ch
0x572311: fstp    [esp+1Ch+var_4]
0x572315: fld     [esp+1Ch+var_4]
0x572319: fst     dword ptr [esi+18h]
0x57231C: fcompp
0x57231E: fnstsw  ax
0x572320: test    ah, 5
0x572323: jp      loc_5723CA
0x572329: mov     ecx, [edx+1Ch]
0x57232C: mov     eax, [ecx]
0x57232E: mov     eax, [eax+88h]
0x572334: push    edx
0x572335: lea     edx, [esp+20h+var_8]
0x572339: push    edx
0x57233A: call    eax
0x57233C: mov     eax, [esp+1Ch+var_8]
0x572340: cmp     eax, ebp
0x572342: jz      short loc_572362
0x572344: mov     edi, eax
0x572346: add     eax, 4
0x572349: push    eax; lpAddend
0x57234A: call    dword ptr ds:0A2807Ch
0x572350: test    eax, eax
0x572352: jnz     short loc_572362
0x572354: cmp     edi, ebp
0x572356: jz      short loc_572362
0x572358: mov     edx, [edi]
0x57235A: mov     eax, [edx]
0x57235C: push    1
0x57235E: mov     ecx, edi
0x572360: call    eax
0x572362: mov     edi, [esi+0Ch]
0x572365: cmp     edi, ebp
0x572367: jz      short loc_572388
0x572369: lea     ecx, [edi+4]
0x57236C: push    ecx; lpAddend
0x57236D: call    dword ptr ds:0A2807Ch
0x572373: test    eax, eax
0x572375: jnz     short loc_572385
0x572377: cmp     edi, ebp
0x572379: jz      short loc_572385
0x57237B: mov     edx, [edi]
0x57237D: mov     eax, [edx]
0x57237F: push    1
0x572381: mov     ecx, edi
0x572383: call    eax
0x572385: mov     [esi+0Ch], ebp
0x572388: mov     ecx, [esp+1Ch+var_C]
0x57238C: mov     eax, [ecx+15E4h]
0x572392: add     ecx, 15E0h
0x572398: cmp     eax, ebp
0x57239A: jz      short loc_5723B0
0x57239C: lea     esp, [esp+0]
0x5723A0: cmp     esi, [eax+8]
0x5723A3: lea     edx, [eax+8]
0x5723A6: mov     edi, eax
0x5723A8: mov     eax, [eax]
0x5723AA: jz      short loc_5723B2
0x5723AC: cmp     eax, ebp
0x5723AE: jnz     short loc_5723A0
0x5723B0: xor     edi, edi
0x5723B2: cmp     edi, ebp
0x5723B4: mov     [esp+1Ch+var_4], edi
0x5723B8: jz      loc_5722DB
0x5723BE: lea     edx, [esp+1Ch+var_4]
0x5723C2: push    edx
0x5723C3: jmp     loc_5722D4
0x5723C8: fstp    st
0x5723CA: cmp     ebx, ebp
0x5723CC: jnz     loc_572290
0x5723D2: pop     edi
0x5723D3: pop     esi
0x5723D4: pop     ebp
0x5723D5: pop     ebx
0x5723D6: add     esp, 0Ch
0x5723D9: retn
