0x668030: push    esi
0x668031: push    edi
0x668032: mov     edi, ecx
0x668034: xor     esi, esi
0x668036: push    esi
0x668037: push    2
0x668039: call    ActorValue_GetAVFromGroupOffset
0x66803E: lea     ecx, [eax-0Ch]
0x668041: add     esp, 8
0x668044: cmp     ecx, 14h
0x668047: ja      short loc_668060
0x668049: push    eax
0x66804A: push    2
0x66804C: call    ActorValue_GetGroupOffsetFromAV
0x668051: fldz
0x668053: movsx   edx, al
0x668056: add     esp, 8
0x668059: fstp    dword ptr [edi+edx*4+130h]
0x668060: add     esi, 1
0x668063: cmp     esi, 15h
0x668066: jl      short loc_668036
0x668068: pop     edi
0x668069: pop     esi
0x66806A: retn
