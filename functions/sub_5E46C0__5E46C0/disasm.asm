0x5E46C0: sub     esp, 0Ch
0x5E46C3: push    ebx
0x5E46C4: mov     ebx, [esp+10h+arg_0]
0x5E46C8: test    ebx, ebx
0x5E46CA: push    ebp
0x5E46CB: mov     ebp, [esp+14h+arg_C]
0x5E46CF: push    esi
0x5E46D0: mov     esi, [esp+18h+arg_8]
0x5E46D4: mov     [esp+18h+var_C], ecx
0x5E46D8: mov     byte ptr [ebp+0], 0
0x5E46DC: jnz     short loc_5E46ED
0x5E46DE: test    esi, esi
0x5E46E0: jnz     short loc_5E46ED
0x5E46E2: pop     esi
0x5E46E3: pop     ebp
0x5E46E4: xor     al, al
0x5E46E6: pop     ebx
0x5E46E7: add     esp, 0Ch
0x5E46EA: retn    10h
0x5E46ED: push    edi
0x5E46EE: xor     edi, edi
0x5E46F0: test    ebx, ebx
0x5E46F2: jz      short loc_5E471F
0x5E46F4: mov     eax, [ebx+8]
0x5E46F7: test    eax, eax
0x5E46F9: jz      short loc_5E471F
0x5E46FB: cmp     byte ptr [eax+4], 21h ; '!'
0x5E46FF: jnz     short loc_5E471F
0x5E4701: test    esi, esi
0x5E4703: mov     edi, eax
0x5E4705: jz      short loc_5E472F
0x5E4707: mov     ecx, esi
0x5E4709: call    sub_607410
0x5E470E: test    esi, esi
0x5E4710: mov     [esp+1Ch+arg_C], eax
0x5E4714: jz      short loc_5E473A
0x5E4716: mov     ecx, esi
0x5E4718: call    TESWorldSpace_GetParentWorldpsace
0x5E471D: jmp     short loc_5E473D
0x5E471F: test    esi, esi
0x5E4721: jnz     short loc_5E4707
0x5E4723: pop     edi
0x5E4724: pop     esi
0x5E4725: pop     ebp
0x5E4726: xor     al, al
0x5E4728: pop     ebx
0x5E4729: add     esp, 0Ch
0x5E472C: retn    10h
0x5E472F: mov     ecx, ebx
0x5E4731: call    sub_484DF0
0x5E4736: mov     [esp+1Ch+arg_C], eax
0x5E473A: mov     eax, [edi+64h]
0x5E473D: test    esi, esi
0x5E473F: mov     edi, eax
0x5E4741: jz      short loc_5E4750
0x5E4743: mov     ecx, esi
0x5E4745: call    sub_607400
0x5E474A: mov     [esp+1Ch+arg_8], eax
0x5E474E: jmp     short loc_5E4758
0x5E4750: mov     [esp+1Ch+arg_8], 0
0x5E4758: test    edi, edi
0x5E475A: jnz     short loc_5E4768
0x5E475C: cmp     [esp+1Ch+arg_C], edi
0x5E4760: jnz     short loc_5E4768
0x5E4762: cmp     [esp+1Ch+arg_8], edi
0x5E4766: jz      short loc_5E4723
0x5E4768: test    esi, esi
0x5E476A: jnz     loc_5E4809
0x5E4770: test    edi, edi
0x5E4772: jz      short loc_5E47D8
0x5E4774: mov     ecx, ebx
0x5E4776: call    sub_4849C0
0x5E477B: fstp    [esp+1Ch+var_8]
0x5E477F: mov     eax, [edi+24h]
0x5E4782: mov     edx, [eax]
0x5E4784: lea     ecx, [edi+24h]
0x5E4787: push    esi
0x5E4788: call    edx
0x5E478A: push    ecx
0x5E478B: fstp    [esp+20h+var_20]; float
0x5E478E: call    FloatFloor
0x5E4793: fstp    [esp+20h+var_4]
0x5E4797: add     esp, 4
0x5E479A: fld     [esp+1Ch+var_8]
0x5E479E: fld     [esp+1Ch+var_4]
0x5E47A2: fcompp
0x5E47A4: fnstsw  ax
0x5E47A6: test    ah, 41h
0x5E47A9: jp      short loc_5E4801
0x5E47AB: mov     eax, [ebx]
0x5E47AD: mov     eax, [eax]
0x5E47AF: mov     ecx, [esp+1Ch+var_C]
0x5E47B3: push    eax; int
0x5E47B4: add     ecx, 44h ; 'D'; this
0x5E47B7: call    ExtraDataList_GetContainerChanges
0x5E47BC: fld     [esp+20h+var_8]
0x5E47C0: fsub    [esp+20h+var_4]
0x5E47C4: push    eax; int
0x5E47C5: push    ecx
0x5E47C6: mov     ecx, ebx
0x5E47C8: fstp    [esp+28h+var_4]
0x5E47CC: fld     [esp+28h+var_4]
0x5E47D0: fstp    [esp+28h+var_28]; float
0x5E47D3: call    sub_488AA0
0x5E47D8: mov     ebp, [ebx+8]
0x5E47DB: test    edi, edi
0x5E47DD: mov     ebx, [esp+1Ch+arg_4]
0x5E47E1: jz      short loc_5E483B
0x5E47E3: mov     esi, [esp+1Ch+var_C]
0x5E47E7: mov     edx, [esi+5Ch]
0x5E47EA: mov     eax, [edx+34h]
0x5E47ED: add     esi, 5Ch ; '\'
0x5E47F0: add     edi, 18h
0x5E47F3: push    edi
0x5E47F4: mov     ecx, esi
0x5E47F6: call    eax
0x5E47F8: test    ebx, ebx
0x5E47FA: jz      short loc_5E4827
0x5E47FC: lea     eax, [ebx+68h]
0x5E47FF: jmp     short loc_5E4829
0x5E4801: mov     byte ptr [ebp+0], 1
0x5E4805: xor     edi, edi
0x5E4807: jmp     short loc_5E47D8
0x5E4809: mov     edx, [esi]
0x5E480B: mov     eax, [edx+8Ch]
0x5E4811: push    1
0x5E4813: mov     ecx, esi
0x5E4815: call    eax
0x5E4817: mov     edx, [esi]
0x5E4819: mov     eax, [edx+170h]
0x5E481F: mov     ecx, esi
0x5E4821: call    eax
0x5E4823: mov     ebp, eax
0x5E4825: jmp     short loc_5E47DB
0x5E4827: xor     eax, eax
0x5E4829: mov     edx, [esi]
0x5E482B: push    eax
0x5E482C: mov     eax, [edx+3Ch]
0x5E482F: mov     ecx, esi
0x5E4831: call    eax
0x5E4833: push    ebp
0x5E4834: mov     ecx, esi
0x5E4836: call    MagicCaster_UseActiveMagicItem
0x5E483B: mov     eax, [esp+1Ch+arg_C]
0x5E483F: test    eax, eax
0x5E4841: jz      short loc_5E4882
0x5E4843: mov     esi, [esp+1Ch+var_C]
0x5E4847: mov     edx, [esi+5Ch]
0x5E484A: add     esi, 5Ch ; '\'
0x5E484D: add     eax, 24h ; '$'
0x5E4850: push    eax
0x5E4851: mov     eax, [edx+34h]
0x5E4854: mov     ecx, esi
0x5E4856: call    eax
0x5E4858: test    ebx, ebx
0x5E485A: jz      short loc_5E4861
0x5E485C: lea     eax, [ebx+68h]
0x5E485F: jmp     short loc_5E4863
0x5E4861: xor     eax, eax
0x5E4863: mov     edx, [esi]
0x5E4865: push    eax
0x5E4866: mov     eax, [edx+3Ch]
0x5E4869: mov     ecx, esi
0x5E486B: call    eax
0x5E486D: push    ebp
0x5E486E: mov     ecx, esi
0x5E4870: call    MagicCaster_UseActiveMagicItem
0x5E4875: mov     ecx, [esp+1Ch+arg_0]
0x5E4879: test    ecx, ecx
0x5E487B: jz      short loc_5E4882
0x5E487D: call    sub_484E50
0x5E4882: mov     eax, [esp+1Ch+arg_8]
0x5E4886: test    eax, eax
0x5E4888: jz      short loc_5E48BC
0x5E488A: mov     esi, [esp+1Ch+var_C]
0x5E488E: mov     edx, [esi+5Ch]
0x5E4891: add     esi, 5Ch ; '\'
0x5E4894: add     eax, 18h
0x5E4897: push    eax
0x5E4898: mov     eax, [edx+34h]
0x5E489B: mov     ecx, esi
0x5E489D: call    eax
0x5E489F: test    ebx, ebx
0x5E48A1: jz      short loc_5E48A8
0x5E48A3: lea     eax, [ebx+68h]
0x5E48A6: jmp     short loc_5E48AA
0x5E48A8: xor     eax, eax
0x5E48AA: mov     edx, [esi]
0x5E48AC: push    eax
0x5E48AD: mov     eax, [edx+3Ch]
0x5E48B0: mov     ecx, esi
0x5E48B2: call    eax
0x5E48B4: push    ebp
0x5E48B5: mov     ecx, esi
0x5E48B7: call    MagicCaster_UseActiveMagicItem
0x5E48BC: pop     edi
0x5E48BD: pop     esi
0x5E48BE: pop     ebp
0x5E48BF: mov     al, 1
0x5E48C1: pop     ebx
0x5E48C2: add     esp, 0Ch
0x5E48C5: retn    10h
