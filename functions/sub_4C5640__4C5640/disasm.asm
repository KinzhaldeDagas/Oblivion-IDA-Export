0x4C5640: sub     esp, 18h
0x4C5643: push    edi
0x4C5644: mov     edi, ecx
0x4C5646: mov     ecx, [edi+20h]; this
0x4C5649: test    ecx, ecx
0x4C564B: jz      loc_4C58C5
0x4C5651: call    TESObjectCELL_GetNiNode?
0x4C5656: test    eax, eax
0x4C5658: jz      loc_4C58C5
0x4C565E: mov     eax, [edi+24h]
0x4C5661: cmp     dword ptr [eax], 0
0x4C5664: jnz     loc_4C5880
0x4C566A: push    ebx
0x4C566B: push    ebp; int
0x4C566C: push    esi; int
0x4C566D: push    10h; Size
0x4C566F: call    FormHeapAlloc
0x4C5674: mov     ecx, [edi+24h]
0x4C5677: mov     [ecx], eax
0x4C5679: xor     eax, eax
0x4C567B: add     esp, 4
0x4C567E: mov     [esp+28h+var_18], 0
0x4C5686: mov     [esp+28h+var_10], eax
0x4C568A: mov     [esp+28h+var_C], eax
0x4C568E: mov     [esp+28h+var_8], eax
0x4C5692: mov     [esp+28h+var_4], eax
0x4C5696: xor     esi, esi
0x4C5698: mov     ecx, [edi+20h]
0x4C569B: xor     eax, eax
0x4C569D: test    ecx, ecx
0x4C569F: jz      short loc_4C56AD
0x4C56A1: cmp     esi, 4
0x4C56A4: jge     short loc_4C56AD
0x4C56A6: push    eax
0x4C56A7: push    esi
0x4C56A8: call    sub_441800
0x4C56AD: mov     edx, [edi+24h]
0x4C56B0: mov     ecx, [edx]
0x4C56B2: mov     [ecx+esi*4], eax
0x4C56B5: mov     edx, [edi+24h]
0x4C56B8: mov     eax, [edx]
0x4C56BA: cmp     dword ptr [eax+esi*4], 0
0x4C56BE: jz      loc_4C575E
0x4C56C4: mov     ecx, edx
0x4C56C6: mov     edx, [ecx]
0x4C56C8: mov     eax, [edx+esi*4]
0x4C56CB: mov     cl, [eax+18h]
0x4C56CE: or      word ptr [eax+18h], 1
0x4C56D3: mov     eax, [edi+24h]
0x4C56D6: mov     edx, ds:0B35BECh
0x4C56DC: and     cl, 1
0x4C56DF: mov     byte ptr [esp+esi+28h+var_18], cl
0x4C56E3: mov     ecx, [eax]
0x4C56E5: mov     ecx, [ecx+esi*4]; this
0x4C56E8: push    edx; a2
0x4C56E9: call    sub_405680
0x4C56EE: push    esi
0x4C56EF: mov     ecx, edi
0x4C56F1: call    sub_4BFF00
0x4C56F6: mov     edx, [edi+24h]
0x4C56F9: mov     ebp, eax
0x4C56FB: mov     [esp+esi*4+28h+var_10], ebp
0x4C56FF: mov     eax, [edx]
0x4C5701: mov     ecx, [eax+esi*4]
0x4C5704: mov     edx, [ecx]
0x4C5706: mov     edx, [edx+90h]
0x4C570C: push    ebp
0x4C570D: push    0
0x4C570F: lea     eax, [esp+30h+var_14]
0x4C5713: push    eax
0x4C5714: call    edx
0x4C5716: mov     eax, dword ptr [esp+28h+var_14]
0x4C571A: test    eax, eax
0x4C571C: jz      short loc_4C573C
0x4C571E: mov     ebx, eax
0x4C5720: add     eax, 4
0x4C5723: push    eax; lpAddend
0x4C5724: call    dword ptr ds:0A2807Ch
0x4C572A: test    eax, eax
0x4C572C: jnz     short loc_4C573C
0x4C572E: test    ebx, ebx
0x4C5730: jz      short loc_4C573C
0x4C5732: mov     eax, [ebx]
0x4C5734: mov     edx, [eax]
0x4C5736: push    1
0x4C5738: mov     ecx, ebx
0x4C573A: call    edx
0x4C573C: mov     eax, [ebp+0B4h]
0x4C5742: mov     ecx, [eax+1Ch]
0x4C5745: movzx   edx, word ptr [eax+8]
0x4C5749: push    ecx
0x4C574A: push    edx
0x4C574B: lea     ecx, [eax+0Ch]
0x4C574E: call    sub_72A0F0
0x4C5753: mov     ebp, [ebp+0B4h]
0x4C5759: or      word ptr [ebp+2Eh], 0Fh
0x4C575E: add     esi, 1
0x4C5761: cmp     esi, 4
0x4C5764: jl      loc_4C5698
0x4C576A: mov     eax, [edi+20h]
0x4C576D: lea     ecx, [eax+28h]
0x4C5770: call    sub_41F950
0x4C5775: mov     esi, eax
0x4C5777: mov     ecx, esi
0x4C5779: call    sub_533400
0x4C577E: push    4
0x4C5780: lea     eax, [esp+2Ch+var_10]
0x4C5784: push    eax
0x4C5785: mov     ecx, esi
0x4C5787: call    sub_5334F0
0x4C578C: mov     ecx, edi
0x4C578E: call    sub_4C0640
0x4C5793: mov     ecx, edi
0x4C5795: call    sub_4BF5C0
0x4C579A: mov     ecx, edi; int
0x4C579C: call    sub_4C2630
0x4C57A1: xor     ebp, ebp
0x4C57A3: mov     eax, [esp+ebp*4+28h+var_10]
0x4C57A7: test    eax, eax
0x4C57A9: jz      short loc_4C581E
0x4C57AB: mov     eax, [eax+0B4h]
0x4C57B1: mov     cx, [eax+2Eh]
0x4C57B5: and     cx, 0FFFh
0x4C57BA: or      cx, 4000h
0x4C57BF: mov     [eax+2Eh], cx
0x4C57C3: mov     byte ptr [eax+31h], 1Fh
0x4C57C7: mov     byte ptr [eax+30h], 17h
0x4C57CB: mov     edx, [esp+ebp*4+28h+var_10]
0x4C57CF: mov     esi, [edx+0BCh]
0x4C57D5: test    esi, esi
0x4C57D7: jz      short loc_4C581E
0x4C57D9: mov     eax, [esi]
0x4C57DB: mov     edx, [eax+1Ch]
0x4C57DE: mov     ecx, esi
0x4C57E0: call    edx
0x4C57E2: cmp     eax, 1
0x4C57E5: jl      short loc_4C581E
0x4C57E7: mov     eax, [esi]
0x4C57E9: mov     edx, [eax+1Ch]
0x4C57EC: mov     ecx, esi
0x4C57EE: call    edx
0x4C57F0: cmp     eax, 5
0x4C57F3: jg      short loc_4C581E
0x4C57F5: mov     ecx, [esi+88h]
0x4C57FB: mov     ebx, ds:0B3F928h
0x4C5801: mov     eax, [ebx]
0x4C5803: mov     edx, [esp+ebp*4+28h+var_10]
0x4C5807: mov     eax, [eax+0B0h]
0x4C580D: push    ecx
0x4C580E: push    0
0x4C5810: push    0
0x4C5812: push    edx
0x4C5813: mov     ecx, ebx
0x4C5815: call    eax
0x4C5817: mov     ecx, ebx; this
0x4C5819: call    sub_769030
0x4C581E: mov     ecx, [edi+24h]
0x4C5821: mov     edx, [ecx]
0x4C5823: cmp     dword ptr [edx+ebp*4], 0
0x4C5827: lea     eax, [edx+ebp*4]
0x4C582A: jz      short loc_4C5871
0x4C582C: cmp     byte ptr [esp+ebp+28h+var_18], 0
0x4C5831: mov     eax, [eax]
0x4C5833: jz      short loc_4C583C
0x4C5835: or      word ptr [eax+18h], 1
0x4C583A: jmp     short loc_4C5842
0x4C583C: and     word ptr [eax+18h], 0FFFEh
0x4C5842: mov     eax, [edi+24h]
0x4C5845: fldz
0x4C5847: push    0; a3
0x4C5849: push    ecx
0x4C584A: mov     ecx, [eax]
0x4C584C: fstp    [esp+30h+a2]; a2
0x4C584F: mov     ecx, [ecx+ebp*4]; this
0x4C5852: call    NiAVObject_UpdateNiAVObject
0x4C5857: mov     edx, [edi+24h]
0x4C585A: mov     eax, [edx]
0x4C585C: mov     ecx, [eax+ebp*4]
0x4C585F: call    NiNode_UpdateDynamicEffectState
0x4C5864: mov     ecx, [edi+24h]
0x4C5867: mov     edx, [ecx]
0x4C5869: mov     ecx, [edx+ebp*4]; this
0x4C586C: call    NiAVObject_InitializePropertyState
0x4C5871: add     ebp, 1
0x4C5874: cmp     ebp, 4
0x4C5877: jl      loc_4C57A3
0x4C587D: pop     esi
0x4C587E: pop     ebp
0x4C587F: pop     ebx
0x4C5880: mov     eax, [edi+24h]
0x4C5883: cmp     dword ptr [eax], 0
0x4C5886: jz      short loc_4C58C5
0x4C5888: test    dword ptr [edi+1Ch], 400h
0x4C588F: jz      short loc_4C58C5
0x4C5891: mov     ecx, [edi+20h]
0x4C5894: test    ecx, ecx
0x4C5896: jz      short loc_4C58C5
0x4C5898: cmp     dword ptr [ecx+4Ch], 0
0x4C589C: jnz     short loc_4C58A4
0x4C589E: cmp     dword ptr [ecx+48h], 0
0x4C58A2: jz      short loc_4C58AD
0x4C58A4: call    sub_4C9890
0x4C58A9: test    al, al
0x4C58AB: jz      short loc_4C58C5
0x4C58AD: xor     eax, eax
0x4C58AF: nop
0x4C58B0: mov     ecx, [edi+24h]
0x4C58B3: mov     edx, [ecx]
0x4C58B5: mov     ecx, [eax+edx]
0x4C58B8: or      word ptr [ecx+18h], 1
0x4C58BD: add     eax, 4
0x4C58C0: cmp     eax, 10h
0x4C58C3: jl      short loc_4C58B0
0x4C58C5: pop     edi
0x4C58C6: add     esp, 18h
0x4C58C9: retn
