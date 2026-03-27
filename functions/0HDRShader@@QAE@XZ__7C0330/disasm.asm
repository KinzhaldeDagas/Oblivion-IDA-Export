0x7C0330: push    0FFFFFFFFh
0x7C0332: push    offset ??0HDRShader@@QAE@XZ_SEH
0x7C0337: mov     eax, large fs:0
0x7C033D: push    eax
0x7C033E: sub     esp, 8
0x7C0341: push    ebx
0x7C0342: push    ebp
0x7C0343: push    esi
0x7C0344: push    edi
0x7C0345: mov     eax, ds:0B30AACh
0x7C034A: xor     eax, esp
0x7C034C: push    eax
0x7C034D: lea     eax, [esp+28h+var_C]
0x7C0351: mov     large fs:0, eax
0x7C0357: mov     esi, ecx
0x7C0359: mov     [esp+28h+var_10], esi
0x7C035D: call    ??0BSImageSpaceShader@@QAE@XZ; BSImageSpaceShader::BSImageSpaceShader(void)
0x7C0362: push    offset sub_7016A0; a5
0x7C0367: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7C036C: push    8; size
0x7C036E: push    4; a2
0x7C0370: lea     eax, [esi+90h]
0x7C0376: xor     ebp, ebp
0x7C0378: push    eax; a1
0x7C0379: mov     [esp+3Ch+var_4], ebp
0x7C037D: mov     dword ptr [esi], offset ??_7HDRShader@@6B@; const HDRShader::`vftable'
0x7C0383: call    ArrayConstructor
0x7C0388: push    offset sub_7016A0; a5
0x7C038D: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7C0392: push    8; size
0x7C0394: push    4; a2
0x7C0396: lea     edi, [esi+0B0h]
0x7C039C: push    edi; a1
0x7C039D: mov     byte ptr [esp+3Ch+var_4], 1
0x7C03A2: call    ArrayConstructor
0x7C03A7: push    offset sub_4027D0; a5
0x7C03AC: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7C03B1: push    0Dh; size
0x7C03B3: push    4; a2
0x7C03B5: lea     ebx, [esi+0D4h]
0x7C03BB: push    ebx; a1
0x7C03BC: mov     byte ptr [esp+3Ch+var_4], 2
0x7C03C1: call    ArrayConstructor
0x7C03C6: mov     [esi+118h], ebp
0x7C03CC: mov     [esi+11Ch], ebp
0x7C03D2: mov     byte ptr [esp+28h+var_4], 5
0x7C03D7: mov     [esi+0D0h], ebp
0x7C03DD: mov     [esp+28h+var_14], 8
0x7C03E5: mov     ebp, [edi-20h]
0x7C03E8: test    ebp, ebp
0x7C03EA: jz      short loc_7C0410
0x7C03EC: lea     ecx, [ebp+4]
0x7C03EF: push    ecx; lpAddend
0x7C03F0: call    dword ptr ds:0A2807Ch
0x7C03F6: test    eax, eax
0x7C03F8: jnz     short loc_7C0409
0x7C03FA: test    ebp, ebp
0x7C03FC: jz      short loc_7C0409
0x7C03FE: mov     edx, [ebp+0]
0x7C0401: mov     eax, [edx]
0x7C0403: push    1
0x7C0405: mov     ecx, ebp
0x7C0407: call    eax
0x7C0409: mov     dword ptr [edi-20h], 0
0x7C0410: mov     ebp, [edi]
0x7C0412: test    ebp, ebp
0x7C0414: jz      short loc_7C0439
0x7C0416: lea     ecx, [ebp+4]
0x7C0419: push    ecx; lpAddend
0x7C041A: call    dword ptr ds:0A2807Ch
0x7C0420: test    eax, eax
0x7C0422: jnz     short loc_7C0433
0x7C0424: test    ebp, ebp
0x7C0426: jz      short loc_7C0433
0x7C0428: mov     edx, [ebp+0]
0x7C042B: mov     eax, [edx]
0x7C042D: push    1
0x7C042F: mov     ecx, ebp
0x7C0431: call    eax
0x7C0433: mov     dword ptr [edi], 0
0x7C0439: add     edi, 4
0x7C043C: sub     [esp+28h+var_14], 1
0x7C0441: jnz     short loc_7C03E5
0x7C0443: mov     edi, ebx
0x7C0445: mov     ebp, 0Dh
0x7C044A: or      ebx, 0FFFFFFFFh
0x7C044D: lea     ecx, [ecx+0]
0x7C0450: mov     ecx, [edi]
0x7C0452: test    ecx, ecx
0x7C0454: jz      short loc_7C0466
0x7C0456: add     [ecx+60h], ebx
0x7C0459: jnz     short loc_7C0460
0x7C045B: call    sub_7604D0
0x7C0460: mov     dword ptr [edi], 0
0x7C0466: add     edi, 4
0x7C0469: sub     ebp, 1
0x7C046C: jnz     short loc_7C0450
0x7C046E: mov     ebp, ds:0A2807Ch
0x7C0474: mov     byte ptr [esi+20h], 1
0x7C0478: mov     edi, [esi+118h]
0x7C047E: test    edi, edi
0x7C0480: jz      short loc_7C04A4
0x7C0482: lea     ecx, [edi+4]
0x7C0485: push    ecx; lpAddend
0x7C0486: call    ebp ; InterlockedDecrement
0x7C0488: test    eax, eax
0x7C048A: jnz     short loc_7C049A
0x7C048C: test    edi, edi
0x7C048E: jz      short loc_7C049A
0x7C0490: mov     edx, [edi]
0x7C0492: mov     eax, [edx]
0x7C0494: push    1
0x7C0496: mov     ecx, edi
0x7C0498: call    eax
0x7C049A: mov     dword ptr [esi+118h], 0
0x7C04A4: mov     edi, [esi+11Ch]
0x7C04AA: test    edi, edi
0x7C04AC: jz      short loc_7C04D0
0x7C04AE: lea     ecx, [edi+4]
0x7C04B1: push    ecx; lpAddend
0x7C04B2: call    ebp ; InterlockedDecrement
0x7C04B4: test    eax, eax
0x7C04B6: jnz     short loc_7C04C6
0x7C04B8: test    edi, edi
0x7C04BA: jz      short loc_7C04C6
0x7C04BC: mov     edx, [edi]
0x7C04BE: mov     eax, [edx]
0x7C04C0: push    1
0x7C04C2: mov     ecx, edi
0x7C04C4: call    eax
0x7C04C6: mov     dword ptr [esi+11Ch], 0
0x7C04D0: mov     edi, ds:0B43328h
0x7C04D6: test    edi, edi
0x7C04D8: jz      short loc_7C04FC
0x7C04DA: lea     ecx, [edi+4]
0x7C04DD: push    ecx; lpAddend
0x7C04DE: call    ebp ; InterlockedDecrement
0x7C04E0: test    eax, eax
0x7C04E2: jnz     short loc_7C04F2
0x7C04E4: test    edi, edi
0x7C04E6: jz      short loc_7C04F2
0x7C04E8: mov     edx, [edi]
0x7C04EA: mov     eax, [edx]
0x7C04EC: push    1
0x7C04EE: mov     ecx, edi
0x7C04F0: call    eax
0x7C04F2: mov     dword ptr ds:0B43328h, 0
0x7C04FC: cmp     byte ptr ds:0B43071h, 0
0x7C0503: jz      short loc_7C0515
0x7C0505: cmp     byte ptr ds:0B43072h, 0
0x7C050C: jz      short loc_7C0515
0x7C050E: mov     eax, 1
0x7C0513: jmp     short loc_7C0517
0x7C0515: xor     eax, eax
0x7C0517: mov     [esi+120h], al
0x7C051D: mov     eax, esi
0x7C051F: mov     ecx, dword ptr [esp+28h+var_C]
0x7C0523: mov     large fs:0, ecx
0x7C052A: pop     ecx
0x7C052B: pop     edi
0x7C052C: pop     esi
0x7C052D: pop     ebp
0x7C052E: pop     ebx
0x7C052F: add     esp, 14h
0x7C0532: retn
