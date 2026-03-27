0x8CF3B0: push    ebp
0x8CF3B1: mov     ebp, esp
0x8CF3B3: and     esp, 0FFFFFFF0h
0x8CF3B6: sub     esp, 0C8h
0x8CF3BC: mov     eax, ds:0B30AACh
0x8CF3C1: xor     eax, esp
0x8CF3C3: mov     [esp+0C8h+var_4], eax
0x8CF3CA: fld     dword ptr ds:0A6A044h
0x8CF3D0: push    esi
0x8CF3D1: mov     esi, [ebp+arg_0]
0x8CF3D4: movaps  xmm0, xmmword ptr [esi+2E0h]
0x8CF3DB: push    edi
0x8CF3DC: lea     edi, [esi+2E0h]
0x8CF3E2: movss   [esp+0D0h+var_C0], xmm0
0x8CF3E8: fcomp   [esp+0D0h+var_C0]
0x8CF3EC: movaps  xmm0, xmmword ptr [esi+2C0h]
0x8CF3F3: movaps  [esp+0D0h+var_80], xmm0
0x8CF3F8: movaps  xmm0, xmmword ptr [esi+2B0h]
0x8CF3FF: fnstsw  ax
0x8CF401: movaps  [esp+0D0h+var_70], xmm0
0x8CF406: movaps  [esp+0D0h+var_60], xmm0
0x8CF40B: test    ah, 41h
0x8CF40E: push    edi
0x8CF40F: jnz     loc_8CF4AF
0x8CF415: fldz
0x8CF417: lea     eax, [esp+0D4h+var_90]
0x8CF41B: fst     dword ptr [edi]
0x8CF41D: push    eax
0x8CF41E: movaps  xmm0, xmmword ptr [edi]
0x8CF421: fld1
0x8CF423: movaps  [esp+0D8h+var_50], xmm0
0x8CF42B: fstp    dword ptr [esp+0D8h+var_90]
0x8CF42F: movaps  xmm0, xmmword ptr [esi+290h]
0x8CF436: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CF43A: movss   dword ptr [esp+0D8h+var_B0], xmm0
0x8CF440: movaps  xmm0, xmmword ptr [esi+290h]
0x8CF447: movss   dword ptr [esp+0D8h+var_A0], xmm0
0x8CF44D: movaps  xmm0, xmmword ptr [esi+290h]
0x8CF454: shufps  xmm0, xmm0, 55h ; 'U'
0x8CF458: movss   [esp+0D8h+var_C0], xmm0
0x8CF45E: fld     [esp+0D8h+var_C0]
0x8CF462: movaps  xmm0, xmmword ptr [esi+280h]
0x8CF469: fstp    [esp+0D8h+var_40]
0x8CF470: fld     dword ptr [esp+0D8h+var_A0]
0x8CF474: movaps  [esp+0D8h+var_20], xmm0
0x8CF47C: fstp    [esp+0D8h+var_3C]
0x8CF483: fld     dword ptr [esp+0D8h+var_B0]
0x8CF487: fstp    [esp+0D8h+var_38]
0x8CF48E: fstp    [esp+0D8h+var_34]
0x8CF495: fld     dword ptr ds:0A3F3D8h
0x8CF49B: fstp    [esp+0D8h+var_30]
0x8CF4A2: call    sub_91F430
0x8CF4A7: add     esp, 8
0x8CF4AA: jmp     loc_8CF683
0x8CF4AF: movaps  xmm0, xmmword ptr [edi]
0x8CF4B2: fld     dword ptr [esi+310h]
0x8CF4B8: movaps  [esp+0D4h+var_50], xmm0
0x8CF4C0: fstp    dword ptr [esp+0D4h+var_90]
0x8CF4C4: movaps  xmm0, xmmword ptr [esi+290h]
0x8CF4CB: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CF4CF: movss   [esp+0D4h+var_C0], xmm0
0x8CF4D5: movaps  xmm0, xmmword ptr [esi+290h]
0x8CF4DC: movss   dword ptr [esp+0D4h+var_A0], xmm0
0x8CF4E2: movaps  xmm0, xmmword ptr [esi+290h]
0x8CF4E9: shufps  xmm0, xmm0, 55h ; 'U'
0x8CF4ED: movss   dword ptr [esp+0D4h+var_B0], xmm0
0x8CF4F3: fld     dword ptr [esp+0D4h+var_B0]
0x8CF4F7: movaps  xmm0, xmmword ptr [esi+280h]
0x8CF4FE: fstp    [esp+0D4h+var_40]
0x8CF505: fld     dword ptr [esp+0D4h+var_A0]
0x8CF509: lea     ecx, [esp+0D4h+var_90]
0x8CF50D: fstp    [esp+0D4h+var_3C]
0x8CF514: push    ecx
0x8CF515: fld     [esp+0D8h+var_C0]
0x8CF519: movaps  [esp+0D8h+var_20], xmm0
0x8CF521: fstp    [esp+0D8h+var_38]
0x8CF528: fldz
0x8CF52A: fstp    [esp+0D8h+var_34]
0x8CF531: fld     dword ptr ds:0A3F3D8h
0x8CF537: fstp    [esp+0D8h+var_30]
0x8CF53E: call    sub_91F430
0x8CF543: movaps  xmm1, xmmword ptr [esi+2B0h]
0x8CF54A: movaps  xmm2, xmmword ptr [edi]
0x8CF54D: movaps  xmm0, xmm1
0x8CF550: mulps   xmm0, xmm2
0x8CF553: movaps  xmm2, xmm0
0x8CF556: shufps  xmm2, xmm0, 55h ; 'U'
0x8CF55A: addss   xmm2, xmm0
0x8CF55E: movaps  xmm3, xmm0
0x8CF561: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8CF565: movss   xmm0, dword ptr ds:0A99E34h
0x8CF56D: addss   xmm3, xmm2
0x8CF571: xorps   xmm2, xmm2
0x8CF574: movss   dword ptr [esp+0D8h+var_B0], xmm3
0x8CF57A: subss   xmm0, dword ptr [esp+0D8h+var_B0]
0x8CF580: movss   xmm2, xmm0
0x8CF584: movaps  xmm0, xmm2
0x8CF587: movaps  xmm2, xmm0
0x8CF58A: shufps  xmm2, xmm0, 0
0x8CF58E: movaps  xmm0, xmmword ptr [edi]
0x8CF591: mulps   xmm2, xmm1
0x8CF594: addps   xmm2, xmm0
0x8CF597: movaps  xmmword ptr [edi], xmm2
0x8CF59A: movaps  xmm1, xmmword ptr [esi+2B0h]
0x8CF5A1: movaps  xmm2, [esp+0D8h+var_50]
0x8CF5A9: movaps  xmm0, xmm1
0x8CF5AC: mulps   xmm0, xmm2
0x8CF5AF: movaps  xmm2, xmm0
0x8CF5B2: shufps  xmm2, xmm0, 55h ; 'U'
0x8CF5B6: addss   xmm2, xmm0
0x8CF5BA: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CF5BE: addss   xmm0, xmm2
0x8CF5C2: movaps  xmm2, xmm0
0x8CF5C5: shufps  xmm2, xmm0, 0
0x8CF5C9: movaps  xmm0, xmmword ptr [edi]
0x8CF5CC: mulps   xmm2, xmm1
0x8CF5CF: addps   xmm2, xmm0
0x8CF5D2: movaps  xmmword ptr [edi], xmm2
0x8CF5D5: movss   xmm1, dword ptr [esi+324h]
0x8CF5DD: xorps   xmm0, xmm0
0x8CF5E0: movss   xmm0, xmm1
0x8CF5E4: movaps  xmm1, xmm0
0x8CF5E7: shufps  xmm1, xmm0, 0
0x8CF5EB: movaps  xmm0, xmmword ptr [edi]
0x8CF5EE: add     esp, 8
0x8CF5F1: lea     edx, [esp+0D0h+var_A0]
0x8CF5F5: mulps   xmm1, xmm0
0x8CF5F8: push    edx
0x8CF5F9: mov     ecx, esi
0x8CF5FB: movaps  xmmword ptr [edi], xmm1
0x8CF5FE: call    sub_891440
0x8CF603: movaps  xmm0, [esp+0D0h+var_A0]
0x8CF608: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CF60C: movss   dword ptr [esp+0D0h+var_B0], xmm0
0x8CF612: fld     dword ptr [esp+0D0h+var_B0]
0x8CF616: fld     dword ptr [esi+318h]
0x8CF61C: fcompp
0x8CF61E: fnstsw  ax
0x8CF620: test    ah, 5
0x8CF623: jp      short loc_8CF683
0x8CF625: mov     eax, [esi]
0x8CF627: mov     edx, [eax+58h]
0x8CF62A: mov     ecx, esi
0x8CF62C: call    edx
0x8CF62E: mov     eax, [esi]
0x8CF630: mov     edx, [eax+58h]
0x8CF633: mov     ecx, esi
0x8CF635: call    edx
0x8CF637: movaps  xmm0, xmmword ptr [eax+20h]
0x8CF63B: mov     eax, [esi]
0x8CF63D: mov     edx, [eax+58h]
0x8CF640: mov     ecx, esi
0x8CF642: movaps  [esp+0D0h+var_B0], xmm0
0x8CF647: call    edx
0x8CF649: movss   xmm0, dword ptr [esi+328h]
0x8CF651: movss   xmm2, dword ptr [esi+2D8h]
0x8CF659: xorps   xmm1, xmm1
0x8CF65C: movss   xmm1, xmm0
0x8CF660: xorps   xmm0, xmm0
0x8CF663: movss   xmm0, xmm2
0x8CF667: movaps  xmm2, xmm1
0x8CF66A: shufps  xmm2, xmm1, 0
0x8CF66E: mulps   xmm2, [esp+0D0h+var_B0]
0x8CF673: shufps  xmm0, xmm0, 0
0x8CF677: mulps   xmm2, xmm0
0x8CF67A: movaps  xmm0, xmmword ptr [edi]
0x8CF67D: addps   xmm2, xmm0
0x8CF680: movaps  xmmword ptr [edi], xmm2
0x8CF683: cmp     dword ptr [esi+2A0h], 0Bh
0x8CF68A: jz      short loc_8CF693
0x8CF68C: mov     ecx, esi
0x8CF68E: call    sub_890720
0x8CF693: mov     ecx, [esp+0D0h+var_4]
0x8CF69A: pop     edi
0x8CF69B: pop     esi
0x8CF69C: xor     ecx, esp
0x8CF69E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CF6A3: mov     esp, ebp
0x8CF6A5: pop     ebp
0x8CF6A6: retn    4
