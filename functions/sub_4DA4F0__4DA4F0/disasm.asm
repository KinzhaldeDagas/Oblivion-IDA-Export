0x4DA4F0: push    ebp
0x4DA4F1: push    esi
0x4DA4F2: mov     esi, ecx
0x4DA4F4: push    edi
0x4DA4F5: mov     edi, [esi+3Ch]
0x4DA4F8: test    edi, edi
0x4DA4FA: jz      loc_4DA5AE
0x4DA500: lea     ecx, [esi+44h]
0x4DA503: call    sub_420FD0
0x4DA508: test    eax, eax
0x4DA50A: jz      short loc_4DA520
0x4DA50C: mov     ecx, ds:0B10568h
0x4DA512: push    ecx; Str2
0x4DA513: push    eax; Str1
0x4DA514: call    __strcmp
0x4DA519: add     esp, 8
0x4DA51C: test    eax, eax
0x4DA51E: jz      short loc_4DA587
0x4DA520: cmp     word ptr [edi+0B6h], 0
0x4DA528: jbe     short loc_4DA57A
0x4DA52A: mov     edx, [edi+0B0h]
0x4DA530: cmp     dword ptr [edx], 0
0x4DA533: jz      short loc_4DA57A
0x4DA535: push    0
0x4DA537: mov     ecx, edi
0x4DA539: call    sub_405790
0x4DA53E: cmp     dword ptr [eax+0Ch], 0
0x4DA542: jz      short loc_4DA57A
0x4DA544: push    0
0x4DA546: mov     ecx, edi
0x4DA548: call    sub_405790
0x4DA54D: mov     eax, [eax+0Ch]
0x4DA550: push    eax
0x4DA551: push    offset stru_B3CAC0
0x4DA556: call    NiRTTI_Cast
0x4DA55B: add     esp, 8
0x4DA55E: test    eax, eax
0x4DA560: jz      short loc_4DA57A
0x4DA562: mov     ecx, ds:0B10568h
0x4DA568: push    ecx
0x4DA569: mov     ecx, eax
0x4DA56B: call    sub_4715A0
0x4DA570: test    eax, eax
0x4DA572: jz      short loc_4DA57A
0x4DA574: cmp     dword ptr [eax+44h], 0
0x4DA578: jnz     short loc_4DA587
0x4DA57A: push    edi
0x4DA57B: call    sub_480820
0x4DA580: add     esp, 4
0x4DA583: test    al, al
0x4DA585: jz      short loc_4DA5AE
0x4DA587: mov     ecx, [esi+1Ch]
0x4DA58A: mov     edx, [ecx]
0x4DA58C: mov     eax, [edx+114h]
0x4DA592: push    esi
0x4DA593: call    eax
0x4DA595: mov     edx, [esi]
0x4DA597: push    eax
0x4DA598: mov     eax, [edx+150h]
0x4DA59E: mov     ecx, esi
0x4DA5A0: call    eax
0x4DA5A2: mov     edx, [esi]
0x4DA5A4: mov     eax, [edx+148h]
0x4DA5AA: mov     ecx, esi
0x4DA5AC: call    eax
0x4DA5AE: mov     ebp, [esi+3Ch]
0x4DA5B1: test    ebp, ebp
0x4DA5B3: jz      loc_4DA74D
0x4DA5B9: cmp     word ptr [ebp+0B6h], 0
0x4DA5C1: jbe     loc_4DA713
0x4DA5C7: mov     ecx, [ebp+0B0h]
0x4DA5CD: mov     eax, [ecx]
0x4DA5CF: test    eax, eax
0x4DA5D1: jz      loc_4DA713
0x4DA5D7: cmp     dword ptr [eax+0Ch], 0
0x4DA5DB: jz      loc_4DA713
0x4DA5E1: mov     eax, [eax+0Ch]
0x4DA5E4: push    eax
0x4DA5E5: push    offset stru_B3CAC0
0x4DA5EA: call    NiRTTI_Cast
0x4DA5EF: mov     esi, eax
0x4DA5F1: add     esp, 8
0x4DA5F4: test    esi, esi
0x4DA5F6: jz      loc_4DA713
0x4DA5FC: mov     edx, ds:0B102E0h
0x4DA602: push    ebx
0x4DA603: push    edx
0x4DA604: mov     ecx, esi
0x4DA606: call    sub_4715A0
0x4DA60B: mov     edi, eax
0x4DA60D: mov     eax, ds:0B10328h
0x4DA612: push    eax
0x4DA613: mov     ecx, esi
0x4DA615: call    sub_4715A0
0x4DA61A: fldz
0x4DA61C: push    ecx
0x4DA61D: fstp    [esp+14h+var_14]; float
0x4DA620: mov     ecx, esi
0x4DA622: mov     ebx, eax
0x4DA624: call    sub_4715C0
0x4DA629: test    edi, edi
0x4DA62B: jnz     short loc_4DA68B
0x4DA62D: test    ebx, ebx
0x4DA62F: jnz     short loc_4DA68B
0x4DA631: or      word ptr [esi+8], 8
0x4DA636: mov     ecx, [esi+40h]
0x4DA639: mov     edi, [ecx]
0x4DA63B: test    edi, edi
0x4DA63D: jz      short loc_4DA673
0x4DA63F: fldz
0x4DA641: push    ebx; int
0x4DA642: sub     esp, 8
0x4DA645: fstp    [esp+1Ch+a2]; float
0x4DA649: fld1
0x4DA64B: mov     ecx, esi
0x4DA64D: fstp    [esp+1Ch+var_1C]; float
0x4DA650: push    ebx; int
0x4DA651: push    ebx; int
0x4DA652: push    edi; int
0x4DA653: call    sub_470B20
0x4DA658: fld     dword ptr ds:0A7DEB4h
0x4DA65E: fchs
0x4DA660: push    1; a3
0x4DA662: fstp    dword ptr [edi+48h]
0x4DA665: push    ecx
0x4DA666: fld     dword ptr [edi+2Ch]
0x4DA669: mov     ecx, ebp; this
0x4DA66B: fstp    [esp+18h+a2]; a2
0x4DA66E: call    NiAVObject_UpdateNiAVObject
0x4DA673: fldz
0x4DA675: push    ecx
0x4DA676: mov     ecx, esi
0x4DA678: fstp    [esp+14h+var_14]; float
0x4DA67B: call    sub_4715C0
0x4DA680: and     word ptr [esi+8], 0FFF7h
0x4DA686: jmp     loc_4DA712
0x4DA68B: or      word ptr [esi+8], 8
0x4DA690: test    edi, edi
0x4DA692: jz      short loc_4DA6D1
0x4DA694: cmp     dword ptr [edi+44h], 0
0x4DA698: jnz     short loc_4DA6B6
0x4DA69A: fldz
0x4DA69C: push    0; int
0x4DA69E: sub     esp, 8
0x4DA6A1: fstp    [esp+1Ch+a2]; float
0x4DA6A5: fld1
0x4DA6A7: mov     ecx, esi
0x4DA6A9: fstp    [esp+1Ch+var_1C]; float
0x4DA6AC: push    0; int
0x4DA6AE: push    0; int
0x4DA6B0: push    edi; int
0x4DA6B1: call    sub_470B20
0x4DA6B6: fld     dword ptr ds:0A7DEB4h
0x4DA6BC: push    1; a3
0x4DA6BE: fchs
0x4DA6C0: push    ecx
0x4DA6C1: fstp    dword ptr [edi+48h]
0x4DA6C4: mov     ecx, ebp; this
0x4DA6C6: fld     dword ptr [edi+2Ch]
0x4DA6C9: fstp    [esp+18h+a2]; a2
0x4DA6CC: call    NiAVObject_UpdateNiAVObject
0x4DA6D1: test    ebx, ebx
0x4DA6D3: jz      short loc_4DA712
0x4DA6D5: cmp     dword ptr [ebx+44h], 0
0x4DA6D9: jnz     short loc_4DA6F7
0x4DA6DB: fldz
0x4DA6DD: push    0; int
0x4DA6DF: sub     esp, 8
0x4DA6E2: fstp    [esp+1Ch+a2]; float
0x4DA6E6: fld1
0x4DA6E8: mov     ecx, esi
0x4DA6EA: fstp    [esp+1Ch+var_1C]; float
0x4DA6ED: push    0; int
0x4DA6EF: push    0; int
0x4DA6F1: push    ebx; int
0x4DA6F2: call    sub_470B20
0x4DA6F7: fld     dword ptr ds:0A7DEB4h
0x4DA6FD: push    1; a3
0x4DA6FF: fchs
0x4DA701: push    ecx
0x4DA702: fstp    dword ptr [ebx+48h]
0x4DA705: mov     ecx, ebp; this
0x4DA707: fld     dword ptr [ebx+2Ch]
0x4DA70A: fstp    [esp+18h+a2]; a2
0x4DA70D: call    NiAVObject_UpdateNiAVObject
0x4DA712: pop     ebx
0x4DA713: mov     ebp, [ebp+0Ch]
0x4DA716: test    ebp, ebp
0x4DA718: jz      short loc_4DA74D
0x4DA71A: mov     edx, [ebp+0]
0x4DA71D: mov     eax, [edx+4]
0x4DA720: mov     ecx, ebp
0x4DA722: call    eax
0x4DA724: test    eax, eax
0x4DA726: jz      short loc_4DA736
0x4DA728: cmp     eax, offset stru_B3CAC0
0x4DA72D: jz      short loc_4DA751
0x4DA72F: mov     eax, [eax+4]
0x4DA732: test    eax, eax
0x4DA734: jnz     short loc_4DA728
0x4DA736: xor     al, al
0x4DA738: neg     al
0x4DA73A: sbb     eax, eax
0x4DA73C: and     eax, ebp
0x4DA73E: jz      short loc_4DA74D
0x4DA740: fldz
0x4DA742: push    ecx
0x4DA743: mov     ecx, eax
0x4DA745: fstp    [esp+10h+var_10]; float
0x4DA748: call    sub_4715C0
0x4DA74D: pop     edi
0x4DA74E: pop     esi
0x4DA74F: pop     ebp
0x4DA750: retn
0x4DA751: mov     al, 1
0x4DA753: jmp     short loc_4DA738
