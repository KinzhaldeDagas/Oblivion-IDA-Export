0x41E550: push    ebx
0x41E551: push    esi
0x41E552: push    edi
0x41E553: mov     edi, ecx
0x41E555: push    offset aExtradatalis_5; lpCriticalSection
0x41E55A: mov     ecx, offset BSExtraDataCS
0x41E55F: call    NiEnterCriticalSection
0x41E564: mov     ebx, dword ptr [esp+0Ch+a2]
0x41E568: mov     esi, [ebx+4]
0x41E56B: test    esi, esi
0x41E56D: jz      short loc_41E5A8
0x41E56F: nop
0x41E570: push    esi
0x41E571: mov     ecx, edi
0x41E573: call    sub_41E340
0x41E578: test    al, al
0x41E57A: jz      short loc_41E5A1
0x41E57C: mov     al, [esi+4]
0x41E57F: mov     [esp+0Ch+a2], al
0x41E583: mov     ecx, dword ptr [esp+0Ch+a2]
0x41E587: push    ecx; a2
0x41E588: mov     ecx, edi; this
0x41E58A: call    BaseExtraList_GetExtraData
0x41E58F: test    eax, eax
0x41E591: jz      short loc_41E5FF
0x41E593: mov     edx, [eax]
0x41E595: mov     ecx, eax
0x41E597: mov     eax, [edx+4]
0x41E59A: push    esi
0x41E59B: call    eax
0x41E59D: test    al, al
0x41E59F: jnz     short loc_41E5FF
0x41E5A1: mov     esi, [esi+8]
0x41E5A4: test    esi, esi
0x41E5A6: jnz     short loc_41E570
0x41E5A8: mov     ecx, ebx
0x41E5AA: call    BaseExtraList_Count
0x41E5AF: mov     ecx, edi
0x41E5B1: mov     esi, eax
0x41E5B3: call    BaseExtraList_Count
0x41E5B8: cmp     eax, esi
0x41E5BA: jz      short loc_41E5ED
0x41E5BC: mov     esi, [edi+4]
0x41E5BF: test    esi, esi
0x41E5C1: jz      short loc_41E5ED
0x41E5C3: push    esi
0x41E5C4: mov     ecx, edi
0x41E5C6: call    sub_41E340
0x41E5CB: test    al, al
0x41E5CD: jz      short loc_41E5E6
0x41E5CF: mov     cl, [esi+4]
0x41E5D2: mov     [esp+0Ch+a2], cl
0x41E5D6: mov     edx, dword ptr [esp+0Ch+a2]
0x41E5DA: push    edx; a2
0x41E5DB: mov     ecx, ebx; this
0x41E5DD: call    BaseExtraList_GetExtraData
0x41E5E2: test    eax, eax
0x41E5E4: jz      short loc_41E5FF
0x41E5E6: mov     esi, [esi+8]
0x41E5E9: test    esi, esi
0x41E5EB: jnz     short loc_41E5C3
0x41E5ED: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41E5F2: call    NiLeaveCriticalSection_0
0x41E5F7: pop     edi
0x41E5F8: pop     esi
0x41E5F9: xor     al, al
0x41E5FB: pop     ebx
0x41E5FC: retn    4
0x41E5FF: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41E604: call    NiLeaveCriticalSection_0
0x41E609: pop     edi
0x41E60A: pop     esi
0x41E60B: mov     al, 1
0x41E60D: pop     ebx
0x41E60E: retn    4
