0x8CF190: push    ebp
0x8CF191: mov     ebp, esp
0x8CF193: and     esp, 0FFFFFFF0h
0x8CF196: sub     esp, 0A8h
0x8CF19C: mov     eax, ds:0B30AACh
0x8CF1A1: xor     eax, esp
0x8CF1A3: mov     [esp+0A8h+var_4], eax
0x8CF1AA: push    esi
0x8CF1AB: mov     esi, [ebp+arg_0]
0x8CF1AE: fld     dword ptr [esi+310h]
0x8CF1B4: mov     eax, [esi+1F4h]
0x8CF1BA: movaps  xmm0, xmmword ptr [esi+2C0h]
0x8CF1C1: fstp    dword ptr [esp+0ACh+var_90]
0x8CF1C5: fld     dword ptr [esi+294h]
0x8CF1CB: movaps  xmm1, xmmword ptr [esi+2E0h]
0x8CF1D2: fstp    [esp+0ACh+var_40]
0x8CF1D6: push    edi
0x8CF1D7: fld     dword ptr [esi+290h]
0x8CF1DD: lea     edi, [esi+2E0h]
0x8CF1E3: fstp    [esp+0B0h+var_3C]
0x8CF1E7: shr     eax, 8
0x8CF1EA: test    al, 1
0x8CF1EC: fld     dword ptr [esi+298h]
0x8CF1F2: fstp    [esp+0B0h+var_38]
0x8CF1F6: movaps  [esp+0B0h+var_80], xmm0
0x8CF1FB: fldz
0x8CF1FD: movaps  xmm0, xmmword ptr [esi+2B0h]
0x8CF204: fstp    [esp+0B0h+var_34]
0x8CF208: movaps  [esp+0B0h+var_50], xmm1
0x8CF20D: fld     dword ptr ds:0A417B4h
0x8CF213: movaps  xmm1, xmmword ptr [esi+280h]
0x8CF21A: fstp    [esp+0B0h+var_30]
0x8CF221: movaps  [esp+0B0h+var_70], xmm0
0x8CF226: movaps  [esp+0B0h+var_20], xmm1
0x8CF22E: jz      short loc_8CF237
0x8CF230: movaps  xmm0, xmmword ptr [esi+230h]
0x8CF237: lea     ecx, [esp+0B0h+var_90]
0x8CF23B: push    edi
0x8CF23C: push    ecx
0x8CF23D: movaps  [esp+0B8h+var_60], xmm0
0x8CF242: call    sub_91F430
0x8CF247: fld     dword ptr [esi+348h]
0x8CF24D: fmul    qword ptr ds:0A6E700h
0x8CF253: mov     ecx, [esi+8]
0x8CF256: add     esp, 8
0x8CF259: test    ecx, ecx
0x8CF25B: fstp    [esp+0B0h+var_A4]
0x8CF25F: jz      short loc_8CF268
0x8CF261: call    sub_8AC070
0x8CF266: jmp     short loc_8CF26D
0x8CF268: mov     eax, offset stru_BA7A40
0x8CF26D: fld     dword ptr [eax+8]
0x8CF270: fadd    [esp+0B0h+var_A4]
0x8CF274: fld     dword ptr [esi+318h]
0x8CF27A: fcompp
0x8CF27C: fnstsw  ax
0x8CF27E: test    ah, 5
0x8CF281: jp      short loc_8CF2FA
0x8CF283: fldz
0x8CF285: fcom    dword ptr [esi+2E8h]
0x8CF28B: fnstsw  ax
0x8CF28D: test    ah, 5
0x8CF290: jp      short loc_8CF29A
0x8CF292: fstp    dword ptr [esi+2E8h]
0x8CF298: jmp     short loc_8CF29C
0x8CF29A: fstp    st
0x8CF29C: mov     edx, [esi]
0x8CF29E: mov     eax, [edx+58h]
0x8CF2A1: mov     ecx, esi
0x8CF2A3: call    eax
0x8CF2A5: mov     edx, [esi]
0x8CF2A7: mov     eax, [edx+58h]
0x8CF2AA: mov     ecx, esi
0x8CF2AC: call    eax
0x8CF2AE: movaps  xmm0, xmmword ptr [eax+20h]
0x8CF2B2: mov     edx, [esi]
0x8CF2B4: mov     eax, [edx+58h]
0x8CF2B7: mov     ecx, esi
0x8CF2B9: movaps  [esp+0B0h+var_A0], xmm0
0x8CF2BE: call    eax
0x8CF2C0: movss   xmm0, dword ptr [esi+328h]
0x8CF2C8: movss   xmm2, dword ptr [esi+2D8h]
0x8CF2D0: xorps   xmm1, xmm1
0x8CF2D3: movss   xmm1, xmm0
0x8CF2D7: xorps   xmm0, xmm0
0x8CF2DA: movss   xmm0, xmm2
0x8CF2DE: movaps  xmm2, xmm1
0x8CF2E1: shufps  xmm2, xmm1, 0
0x8CF2E5: mulps   xmm2, [esp+0B0h+var_A0]
0x8CF2EA: shufps  xmm0, xmm0, 0
0x8CF2EE: mulps   xmm2, xmm0
0x8CF2F1: movaps  xmm0, xmmword ptr [edi]
0x8CF2F4: addps   xmm2, xmm0
0x8CF2F7: movaps  xmmword ptr [edi], xmm2
0x8CF2FA: mov     eax, [esi+2A0h]
0x8CF300: cmp     eax, 0Bh
0x8CF303: jz      short loc_8CF37E
0x8CF305: test    eax, eax
0x8CF307: jnz     short loc_8CF37E
0x8CF309: mov     ecx, esi
0x8CF30B: call    sub_890720
0x8CF310: mov     edx, [esi]
0x8CF312: mov     eax, [edx+58h]
0x8CF315: mov     ecx, esi
0x8CF317: call    eax
0x8CF319: mov     edx, [esi]
0x8CF31B: mov     eax, [edx+58h]
0x8CF31E: mov     ecx, esi
0x8CF320: call    eax
0x8CF322: movaps  xmm0, xmmword ptr [eax+20h]
0x8CF326: mov     edx, [esi]
0x8CF328: mov     eax, [edx+58h]
0x8CF32B: mov     ecx, esi
0x8CF32D: movaps  [esp+0B0h+var_A0], xmm0
0x8CF332: call    eax
0x8CF334: fld     dword ptr [esi+2D8h]
0x8CF33A: movss   xmm0, dword ptr [esi+328h]
0x8CF342: fchs
0x8CF344: fmul    qword ptr ds:0A30E48h
0x8CF34A: xorps   xmm1, xmm1
0x8CF34D: movss   xmm1, xmm0
0x8CF351: fstp    [esp+0B0h+var_A4]
0x8CF355: movss   xmm2, [esp+0B0h+var_A4]
0x8CF35B: xorps   xmm0, xmm0
0x8CF35E: movss   xmm0, xmm2
0x8CF362: movaps  xmm2, xmm1
0x8CF365: shufps  xmm2, xmm1, 0
0x8CF369: mulps   xmm2, [esp+0B0h+var_A0]
0x8CF36E: shufps  xmm0, xmm0, 0
0x8CF372: mulps   xmm2, xmm0
0x8CF375: movaps  xmm0, xmmword ptr [edi]
0x8CF378: addps   xmm2, xmm0
0x8CF37B: movaps  xmmword ptr [edi], xmm2
0x8CF37E: mov     ecx, [esp+0B0h+var_4]
0x8CF385: pop     edi
0x8CF386: pop     esi
0x8CF387: xor     ecx, esp
0x8CF389: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CF38E: mov     esp, ebp
0x8CF390: pop     ebp
0x8CF391: retn    4
