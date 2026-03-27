0x7DD4A0: push    0FFFFFFFFh
0x7DD4A2: push    offset ??1WaterShaderDisplacement@@UAE@XZ_SEH
0x7DD4A7: mov     eax, large fs:0
0x7DD4AD: push    eax
0x7DD4AE: push    ecx
0x7DD4AF: push    ebx
0x7DD4B0: push    ebp
0x7DD4B1: push    esi
0x7DD4B2: push    edi
0x7DD4B3: mov     eax, ds:0B30AACh
0x7DD4B8: xor     eax, esp
0x7DD4BA: push    eax
0x7DD4BB: lea     eax, [esp+24h+var_C]
0x7DD4BF: mov     large fs:0, eax
0x7DD4C5: mov     ebp, ecx
0x7DD4C7: mov     [esp+24h+var_10], ebp
0x7DD4CB: mov     dword ptr [ebp+0], offset ??_7WaterShaderDisplacement@@6B@; const WaterShaderDisplacement::`vftable'
0x7DD4D2: mov     ebx, 8
0x7DD4D7: mov     [esp+24h+var_4], ebx
0x7DD4DB: lea     edi, [ebp+0B4h]
0x7DD4E1: mov     esi, [edi+20h]
0x7DD4E4: test    esi, esi
0x7DD4E6: jz      short loc_7DD50B
0x7DD4E8: lea     eax, [esi+4]
0x7DD4EB: push    eax; lpAddend
0x7DD4EC: call    dword ptr ds:0A2807Ch
0x7DD4F2: test    eax, eax
0x7DD4F4: jnz     short loc_7DD504
0x7DD4F6: test    esi, esi
0x7DD4F8: jz      short loc_7DD504
0x7DD4FA: mov     edx, [esi]
0x7DD4FC: mov     eax, [edx]
0x7DD4FE: push    1
0x7DD500: mov     ecx, esi
0x7DD502: call    eax
0x7DD504: mov     dword ptr [edi+20h], 0
0x7DD50B: mov     esi, [edi]
0x7DD50D: test    esi, esi
0x7DD50F: jz      short loc_7DD533
0x7DD511: lea     ecx, [esi+4]
0x7DD514: push    ecx; lpAddend
0x7DD515: call    dword ptr ds:0A2807Ch
0x7DD51B: test    eax, eax
0x7DD51D: jnz     short loc_7DD52D
0x7DD51F: test    esi, esi
0x7DD521: jz      short loc_7DD52D
0x7DD523: mov     edx, [esi]
0x7DD525: mov     eax, [edx]
0x7DD527: push    1
0x7DD529: mov     ecx, esi
0x7DD52B: call    eax
0x7DD52D: mov     dword ptr [edi], 0
0x7DD533: add     edi, 4
0x7DD536: sub     ebx, 1
0x7DD539: jnz     short loc_7DD4E1
0x7DD53B: mov     ecx, [ebp+0F8h]
0x7DD541: or      ebx, 0FFFFFFFFh
0x7DD544: test    ecx, ecx
0x7DD546: jz      short loc_7DD55C
0x7DD548: add     [ecx+60h], ebx
0x7DD54B: jnz     short loc_7DD552
0x7DD54D: call    sub_7604D0
0x7DD552: mov     dword ptr [ebp+0F8h], 0
0x7DD55C: mov     esi, [ebp+10Ch]
0x7DD562: test    esi, esi
0x7DD564: mov     edi, ds:0A2807Ch
0x7DD56A: mov     byte ptr [esp+24h+var_4], 7
0x7DD56F: jz      short loc_7DD589
0x7DD571: lea     ecx, [esi+4]
0x7DD574: push    ecx; lpAddend
0x7DD575: call    edi ; InterlockedDecrement
0x7DD577: test    eax, eax
0x7DD579: jnz     short loc_7DD589
0x7DD57B: test    esi, esi
0x7DD57D: jz      short loc_7DD589
0x7DD57F: mov     edx, [esi]
0x7DD581: mov     eax, [edx]
0x7DD583: push    1
0x7DD585: mov     ecx, esi
0x7DD587: call    eax
0x7DD589: mov     esi, [ebp+108h]
0x7DD58F: test    esi, esi
0x7DD591: mov     byte ptr [esp+24h+var_4], 6
0x7DD596: jz      short loc_7DD5B0
0x7DD598: lea     ecx, [esi+4]
0x7DD59B: push    ecx; lpAddend
0x7DD59C: call    edi ; InterlockedDecrement
0x7DD59E: test    eax, eax
0x7DD5A0: jnz     short loc_7DD5B0
0x7DD5A2: test    esi, esi
0x7DD5A4: jz      short loc_7DD5B0
0x7DD5A6: mov     edx, [esi]
0x7DD5A8: mov     eax, [edx]
0x7DD5AA: push    1
0x7DD5AC: mov     ecx, esi
0x7DD5AE: call    eax
0x7DD5B0: mov     esi, [ebp+104h]
0x7DD5B6: test    esi, esi
0x7DD5B8: mov     byte ptr [esp+24h+var_4], 5
0x7DD5BD: jz      short loc_7DD5D7
0x7DD5BF: lea     ecx, [esi+4]
0x7DD5C2: push    ecx; lpAddend
0x7DD5C3: call    edi ; InterlockedDecrement
0x7DD5C5: test    eax, eax
0x7DD5C7: jnz     short loc_7DD5D7
0x7DD5C9: test    esi, esi
0x7DD5CB: jz      short loc_7DD5D7
0x7DD5CD: mov     edx, [esi]
0x7DD5CF: mov     eax, [edx]
0x7DD5D1: push    1
0x7DD5D3: mov     ecx, esi
0x7DD5D5: call    eax
0x7DD5D7: mov     esi, [ebp+100h]
0x7DD5DD: test    esi, esi
0x7DD5DF: mov     byte ptr [esp+24h+var_4], 4
0x7DD5E4: jz      short loc_7DD5FE
0x7DD5E6: lea     ecx, [esi+4]
0x7DD5E9: push    ecx; lpAddend
0x7DD5EA: call    edi ; InterlockedDecrement
0x7DD5EC: test    eax, eax
0x7DD5EE: jnz     short loc_7DD5FE
0x7DD5F0: test    esi, esi
0x7DD5F2: jz      short loc_7DD5FE
0x7DD5F4: mov     edx, [esi]
0x7DD5F6: mov     eax, [edx]
0x7DD5F8: push    1
0x7DD5FA: mov     ecx, esi
0x7DD5FC: call    eax
0x7DD5FE: mov     esi, [ebp+0FCh]
0x7DD604: test    esi, esi
0x7DD606: mov     byte ptr [esp+24h+var_4], 3
0x7DD60B: jz      short loc_7DD625
0x7DD60D: lea     ecx, [esi+4]
0x7DD610: push    ecx; lpAddend
0x7DD611: call    edi ; InterlockedDecrement
0x7DD613: test    eax, eax
0x7DD615: jnz     short loc_7DD625
0x7DD617: test    esi, esi
0x7DD619: jz      short loc_7DD625
0x7DD61B: mov     edx, [esi]
0x7DD61D: mov     eax, [edx]
0x7DD61F: push    1
0x7DD621: mov     ecx, esi
0x7DD623: call    eax
0x7DD625: mov     ecx, [ebp+0F8h]
0x7DD62B: test    ecx, ecx
0x7DD62D: mov     byte ptr [esp+24h+var_4], 2
0x7DD632: jz      short loc_7DD63E
0x7DD634: add     [ecx+60h], ebx
0x7DD637: jnz     short loc_7DD63E
0x7DD639: call    sub_7604D0
0x7DD63E: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7DD643: push    8; int
0x7DD645: push    4; unsigned int
0x7DD647: lea     ecx, [ebp+0D4h]
0x7DD64D: push    ecx; void *
0x7DD64E: mov     byte ptr [esp+34h+var_4], 1
0x7DD653: call    $LN21
0x7DD658: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7DD65D: push    8; int
0x7DD65F: push    4; unsigned int
0x7DD661: lea     eax, [ebp+0B4h]
0x7DD667: push    eax; void *
0x7DD668: mov     byte ptr [esp+34h+var_4], 0
0x7DD66D: call    $LN21
0x7DD672: mov     ecx, ebp; this
0x7DD674: mov     [esp+24h+var_4], ebx
0x7DD678: call    ??1BSImageSpaceShader@@UAE@XZ; BSImageSpaceShader::~BSImageSpaceShader(void)
0x7DD67D: mov     ecx, dword ptr [esp+24h+var_C]
0x7DD681: mov     large fs:0, ecx
0x7DD688: pop     ecx
0x7DD689: pop     edi
0x7DD68A: pop     esi
0x7DD68B: pop     ebp
0x7DD68C: pop     ebx
0x7DD68D: add     esp, 10h
0x7DD690: retn
