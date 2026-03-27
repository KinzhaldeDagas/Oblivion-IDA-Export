0x43AF30: push    ecx
0x43AF31: push    ebx
0x43AF32: push    esi
0x43AF33: push    edi
0x43AF34: mov     edi, ecx
0x43AF36: mov     ecx, [edi+20h]; this
0x43AF39: push    0; a2
0x43AF3B: call    TESObjectREFR_GetParentCell
0x43AF40: mov     ecx, TES
0x43AF46: push    eax; a1
0x43AF47: call    TESObjectCELL_IsProcessLevel?LowHigh
0x43AF4C: test    al, al
0x43AF4E: jz      loc_43AFEF
0x43AF54: xor     esi, esi
0x43AF56: cmp     byte_B350D5, 0
0x43AF5D: jz      short loc_43AF8E
0x43AF5F: call    nullsub_returnTrue_0arg
0x43AF64: test    al, al
0x43AF66: jnz     short loc_43AF8E
0x43AF68: mov     ebx, ds:Sleep
0x43AF6E: mov     edi, edi
0x43AF70: cmp     esi, 3
0x43AF73: jge     short loc_43AFCE
0x43AF75: push    5; dwMilliseconds
0x43AF77: call    ebx ; Sleep
0x43AF79: add     esi, 1
0x43AF7C: cmp     byte_B350D5, 0
0x43AF83: jz      short loc_43AF8E
0x43AF85: call    nullsub_returnTrue_0arg
0x43AF8A: test    al, al
0x43AF8C: jz      short loc_43AF70
0x43AF8E: mov     ecx, [edi+20h]
0x43AF91: mov     eax, [ecx]
0x43AF93: mov     edx, [eax+190h]
0x43AF99: call    edx
0x43AF9B: test    al, al
0x43AF9D: jnz     short loc_43AFCE
0x43AF9F: mov     eax, [edi+20h]
0x43AFA2: mov     ecx, TES
0x43AFA8: push    eax
0x43AFA9: call    sub_441E90
0x43AFAE: test    al, al
0x43AFB0: jz      short loc_43AFCE
0x43AFB2: mov     ecx, [edi+20h]
0x43AFB5: cmp     dword ptr [ecx+3Ch], 0
0x43AFB9: jnz     short loc_43AFCE
0x43AFBB: mov     edx, [ecx]
0x43AFBD: mov     eax, [edx+14Ch]
0x43AFC3: call    eax
0x43AFC5: push    eax; a2
0x43AFC6: lea     ecx, [edi+2Ch]; this
0x43AFC9: call    NiSmartPointer_Set??
0x43AFCE: mov     esi, ioManager
0x43AFD4: push    ecx
0x43AFD5: mov     eax, esp
0x43AFD7: mov     [eax], edi
0x43AFD9: mov     [esp+14h+var_4], esp
0x43AFDD: add     edi, 8
0x43AFE0: push    edi; lpAddend
0x43AFE1: call    ds:InterlockedIncrement
0x43AFE7: mov     ecx, [esi+34h]
0x43AFEA: call    sub_43A5F0
0x43AFEF: pop     edi
0x43AFF0: pop     esi
0x43AFF1: pop     ebx
0x43AFF2: pop     ecx
0x43AFF3: retn
