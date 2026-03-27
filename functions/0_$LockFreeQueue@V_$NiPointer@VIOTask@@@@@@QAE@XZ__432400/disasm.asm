0x432400: push    0FFFFFFFFh
0x432402: push    offset SEH_864830
0x432407: mov     eax, large fs:0
0x43240D: push    eax
0x43240E: push    esi
0x43240F: push    edi
0x432410: mov     eax, ___security_cookie
0x432415: xor     eax, esp
0x432417: push    eax
0x432418: lea     eax, [esp+18h+var_C]
0x43241C: mov     large fs:0, eax
0x432422: mov     esi, ecx
0x432424: mov     dword ptr [esi], offset ??_7?$LockFreeQueue@V?$NiPointer@VIOTask@@@@@@6B@; const LockFreeQueue<NiPointer<IOTask>>::`vftable'
0x43242A: push    8; Size
0x43242C: mov     dword ptr [esi+18h], 0
0x432433: call    FormHeapAlloc
0x432438: add     esp, 4
0x43243B: test    eax, eax
0x43243D: jz      short loc_43244E
0x43243F: mov     dword ptr [eax], 0
0x432445: mov     dword ptr [eax+4], 0
0x43244C: jmp     short loc_432450
0x43244E: xor     eax, eax
0x432450: mov     edi, [esp+18h+a2]
0x432454: mov     [esi+4], eax
0x432457: mov     [esi+8], eax
0x43245A: mov     eax, [esp+18h+arg_4]
0x43245E: mov     [esi+0Ch], eax
0x432461: xor     ecx, ecx
0x432463: lea     eax, [edi+edi]
0x432466: mov     edx, 4
0x43246B: mul     edx
0x43246D: seto    cl
0x432470: neg     ecx
0x432472: or      ecx, eax
0x432474: push    ecx; Size
0x432475: call    FormHeapAlloc
0x43247A: push    10h; Size
0x43247C: mov     [esi+10h], eax
0x43247F: call    FormHeapAlloc
0x432484: add     esp, 8
0x432487: mov     [esp+18h+arg_4], eax
0x43248B: test    eax, eax
0x43248D: mov     [esp+18h+var_4], 0
0x432495: jz      short loc_4324A1
0x432497: push    edi; a2
0x432498: mov     ecx, eax; this
0x43249A: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x43249F: jmp     short loc_4324A3
0x4324A1: xor     eax, eax
0x4324A3: mov     [esi+14h], eax
0x4324A6: mov     eax, esi
0x4324A8: mov     ecx, [esp+18h+var_C]
0x4324AC: mov     large fs:0, ecx
0x4324B3: pop     ecx
0x4324B4: pop     edi
0x4324B5: pop     esi
0x4324B6: add     esp, 0Ch
0x4324B9: retn    8
