0x6768C0: push    edi
0x6768C1: add     ecx, 68h ; 'h'; this
0x6768C4: call    sub_7616D0
0x6768C9: mov     edi, eax
0x6768CB: test    edi, edi
0x6768CD: jz      short loc_67693E
0x6768CF: push    esi
0x6768D0: mov     ecx, [edi]
0x6768D2: test    ecx, ecx
0x6768D4: jz      short loc_67693D
0x6768D6: mov     eax, [ecx]
0x6768D8: mov     edx, [eax+190h]
0x6768DE: xor     esi, esi
0x6768E0: call    edx
0x6768E2: test    al, al
0x6768E4: jz      short loc_6768E8
0x6768E6: mov     esi, [edi]
0x6768E8: test    esi, esi
0x6768EA: mov     edi, [edi+4]
0x6768ED: jz      short loc_676939
0x6768EF: mov     eax, [esi]
0x6768F1: mov     edx, [eax+198h]
0x6768F7: push    0
0x6768F9: mov     ecx, esi
0x6768FB: call    edx
0x6768FD: test    al, al
0x6768FF: jnz     short loc_676939
0x676901: mov     ecx, ds:0B333C4h
0x676907: push    esi; Concurrency::details::SchedulerBase *
0x676908: call    sub_660E90
0x67690D: test    al, al
0x67690F: jz      short loc_676939
0x676911: mov     ecx, ds:0B333C4h
0x676917: push    0
0x676919: push    esi
0x67691A: call    TesObjectREF_GetDistance
0x67691F: fcomp   dword ptr ds:0A44F64h
0x676925: fnstsw  ax
0x676927: test    ah, 41h
0x67692A: jnz     short loc_676939
0x67692C: mov     eax, ds:0B333C4h
0x676931: push    eax; int
0x676932: mov     ecx, esi; int
0x676934: call    sub_5F9200
0x676939: test    edi, edi
0x67693B: jnz     short loc_6768D0
0x67693D: pop     esi
0x67693E: pop     edi
0x67693F: retn
