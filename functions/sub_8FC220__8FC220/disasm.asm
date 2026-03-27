0x8FC220: push    ebp
0x8FC221: mov     ebp, esp
0x8FC223: and     esp, 0FFFFFFF0h
0x8FC226: sub     esp, 54h
0x8FC229: mov     edx, ds:0BA9DE4h
0x8FC22F: push    ebx
0x8FC230: mov     [esp+58h+var_4C], ecx
0x8FC234: mov     ecx, large fs:2Ch
0x8FC23B: mov     eax, [ecx+edx*4]
0x8FC23E: push    esi
0x8FC23F: mov     esi, [eax+1A4h]
0x8FC245: push    edi
0x8FC246: cmp     esi, [eax+1A8h]
0x8FC24C: jnb     short loc_8FC272
0x8FC24E: mov     esi, eax
0x8FC250: mov     ecx, [esi+1A4h]
0x8FC256: mov     dword ptr [ecx], offset aTtspherecapsul; "TtSphereCapsule"
0x8FC25C: rdtsc
0x8FC25E: mov     [esp+60h+var_50], eax
0x8FC262: mov     eax, [esp+60h+var_50]
0x8FC266: mov     [ecx+4], eax
0x8FC269: add     ecx, 0Ch
0x8FC26C: mov     [esi+1A4h], ecx
0x8FC272: mov     ecx, [ebp+arg_C]
0x8FC275: mov     eax, [ebp+arg_0]
0x8FC278: mov     edx, [eax]
0x8FC27A: mov     esi, [ecx]
0x8FC27C: mov     ecx, [ebp+arg_4]
0x8FC27F: mov     edi, [eax+8]
0x8FC282: mov     eax, [ecx+8]
0x8FC285: mov     ebx, [ecx]
0x8FC287: movaps  xmm1, xmmword ptr [eax]
0x8FC28A: movaps  xmm2, xmmword ptr [eax+10h]
0x8FC28E: movaps  xmm3, xmmword ptr [eax+20h]
0x8FC292: movaps  xmm4, xmmword ptr [eax+30h]
0x8FC296: lea     ecx, [ebx+10h]
0x8FC299: lea     eax, [esp+60h+var_20]
0x8FC29D: mov     [esp+60h+var_50], edx
0x8FC2A1: add     edi, 30h ; '0'
0x8FC2A4: sub     eax, ecx
0x8FC2A6: mov     edx, 2
0x8FC2AB: jmp     short loc_8FC2B0
0x8FC2AD: align 10h
0x8FC2B0: movaps  xmm0, xmmword ptr [ecx]
0x8FC2B3: movaps  xmm5, xmm0
0x8FC2B6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FC2BA: movaps  xmm6, xmm3
0x8FC2BD: mulps   xmm6, xmm5
0x8FC2C0: movaps  xmm5, xmm0
0x8FC2C3: shufps  xmm5, xmm0, 55h ; 'U'
0x8FC2C7: movaps  xmm7, xmm2
0x8FC2CA: mulps   xmm7, xmm5
0x8FC2CD: movaps  xmm5, xmm0
0x8FC2D0: shufps  xmm5, xmm0, 0
0x8FC2D4: movaps  xmm0, xmm1
0x8FC2D7: mulps   xmm0, xmm5
0x8FC2DA: addps   xmm6, xmm4
0x8FC2DD: addps   xmm0, xmm7
0x8FC2E0: addps   xmm0, xmm6
0x8FC2E3: movaps  xmmword ptr [eax+ecx], xmm0
0x8FC2E7: add     ecx, 10h
0x8FC2EA: dec     edx
0x8FC2EB: jnz     short loc_8FC2B0
0x8FC2ED: lea     eax, [esp+60h+var_30]
0x8FC2F1: push    eax
0x8FC2F2: lea     ecx, [esp+64h+var_10]
0x8FC2F6: push    ecx
0x8FC2F7: lea     edx, [esp+68h+var_20]
0x8FC2FB: push    edx
0x8FC2FC: push    edi
0x8FC2FD: call    sub_8D1CD0
0x8FC302: mov     eax, [esp+70h+var_50]
0x8FC306: fld     dword ptr [eax+0Ch]
0x8FC309: movaps  xmm0, [esp+70h+var_30]
0x8FC30E: fadd    dword ptr [ebx+0Ch]
0x8FC311: mov     ecx, [ebp+arg_8]
0x8FC314: movaps  xmm1, xmmword ptr [edi]
0x8FC317: subps   xmm1, xmm0
0x8FC31A: fld     st
0x8FC31C: movaps  xmm0, xmm1
0x8FC31F: fadd    dword ptr [ecx+8]
0x8FC322: mulps   xmm0, xmm1
0x8FC325: movaps  xmm2, xmm0
0x8FC328: shufps  xmm2, xmm0, 55h ; 'U'
0x8FC32C: fld     st
0x8FC32E: movaps  xmm3, xmm0
0x8FC331: fmul    st, st(1)
0x8FC333: addss   xmm2, xmm0
0x8FC337: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8FC33B: lea     edx, [esp+70h+var_50]
0x8FC33F: addss   xmm3, xmm2
0x8FC343: movss   dword ptr [edx], xmm3
0x8FC347: fld     [esp+70h+var_50]
0x8FC34B: fcompp
0x8FC34D: add     esp, 10h
0x8FC350: fnstsw  ax
0x8FC352: fstp    st
0x8FC354: test    ah, 1
0x8FC357: jz      loc_8FC4F9
0x8FC35D: fld     [esp+60h+var_50]
0x8FC361: fcomp   dword ptr ds:0A2FAA8h
0x8FC367: fnstsw  ax
0x8FC369: test    ah, 41h
0x8FC36C: jnz     short loc_8FC37D
0x8FC36E: fld     [esp+60h+var_50]
0x8FC372: movaps  xmmword ptr [esi+10h], xmm1
0x8FC376: fsqrt
0x8FC378: jmp     loc_8FC41B
0x8FC37D: movaps  xmm0, [esp+60h+var_20]
0x8FC382: fld     dword ptr ds:0A2FAA8h
0x8FC388: movaps  xmm1, [esp+60h+var_10]
0x8FC38D: subps   xmm1, xmm0
0x8FC390: movaps  [esp+60h+var_40], xmm1
0x8FC395: fld     dword ptr [esp+60h+var_40]
0x8FC399: fabs
0x8FC39B: xor     ecx, ecx
0x8FC39D: fld     dword ptr [esp+60h+var_40+4]
0x8FC3A1: fabs
0x8FC3A3: mov     edx, 1
0x8FC3A8: fst     [esp+60h+var_50]
0x8FC3AC: fld     dword ptr [esp+60h+var_40+8]
0x8FC3B0: mov     [esp+60h+var_44], 2
0x8FC3B8: fabs
0x8FC3BA: fstp    [esp+60h+var_48]
0x8FC3BE: fcomp   st(1)
0x8FC3C0: fnstsw  ax
0x8FC3C2: test    ah, 5
0x8FC3C5: jp      short loc_8FC3D4
0x8FC3C7: fstp    st
0x8FC3C9: xor     edx, edx
0x8FC3CB: fld     [esp+60h+var_50]
0x8FC3CF: mov     ecx, 1
0x8FC3D4: fld     [esp+60h+var_48]
0x8FC3D8: fcomp   st(1)
0x8FC3DA: fnstsw  ax
0x8FC3DC: fstp    st
0x8FC3DE: test    ah, 5
0x8FC3E1: jp      short loc_8FC3EC
0x8FC3E3: mov     eax, ecx
0x8FC3E5: mov     ecx, 2
0x8FC3EA: jmp     short loc_8FC3F0
0x8FC3EC: mov     eax, [esp+60h+var_44]
0x8FC3F0: mov     dword ptr [esi+ecx*4+10h], 0
0x8FC3F8: lea     ecx, ds:0[edx*4]
0x8FC3FF: fld     dword ptr [esp+ecx+60h+var_40]
0x8FC403: shl     eax, 2
0x8FC406: mov     edx, dword ptr [esp+eax+60h+var_40]
0x8FC40A: fchs
0x8FC40C: mov     dword ptr [esi+1Ch], 0
0x8FC413: mov     [ecx+esi+10h], edx
0x8FC417: fstp    dword ptr [eax+esi+10h]
0x8FC41B: movaps  xmm1, xmmword ptr [esi+10h]
0x8FC41F: movaps  xmm0, xmm1
0x8FC422: mulps   xmm0, xmm1
0x8FC425: movaps  xmm2, xmm0
0x8FC428: shufps  xmm2, xmm0, 55h ; 'U'
0x8FC42C: addss   xmm2, xmm0
0x8FC430: movaps  xmm3, xmm0
0x8FC433: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8FC437: movaps  xmm0, xmm3
0x8FC43A: addss   xmm0, xmm2
0x8FC43E: movaps  [esp+60h+var_40], xmm0
0x8FC443: rsqrtss xmm2, xmm0
0x8FC447: movss   dword ptr [esp+60h+var_40], xmm2
0x8FC44D: movaps  xmm2, [esp+60h+var_40]
0x8FC452: mulss   xmm0, xmm2
0x8FC456: mulss   xmm0, xmm2
0x8FC45A: mov     [esp+60h+var_44], 40400000h
0x8FC462: movss   xmm3, [esp+60h+var_44]
0x8FC468: subss   xmm3, xmm0
0x8FC46C: mov     [esp+60h+var_44], 3F000000h
0x8FC474: movss   xmm0, [esp+60h+var_44]
0x8FC47A: mulss   xmm0, xmm2
0x8FC47E: mulss   xmm0, xmm3
0x8FC482: movaps  xmm2, xmm0
0x8FC485: shufps  xmm2, xmm0, 0
0x8FC489: mulps   xmm2, xmm1
0x8FC48C: movaps  xmmword ptr [esi+10h], xmm2
0x8FC490: fld     dword ptr [ebx+0Ch]
0x8FC493: movaps  xmm1, xmmword ptr [esi+10h]
0x8FC497: fsub    st, st(1)
0x8FC499: fstp    [esp+60h+var_44]
0x8FC49D: movss   xmm0, [esp+60h+var_44]
0x8FC4A3: movaps  xmm2, xmm0
0x8FC4A6: shufps  xmm2, xmm0, 0
0x8FC4AA: fsub    st, st(1)
0x8FC4AC: movaps  xmm0, xmmword ptr [edi]
0x8FC4AF: mov     edi, [esp+60h+var_4C]
0x8FC4B3: mulps   xmm2, xmm1
0x8FC4B6: addps   xmm0, xmm2
0x8FC4B9: movaps  xmmword ptr [esi], xmm0
0x8FC4BC: fstp    dword ptr [esi+1Ch]
0x8FC4BF: cmp     word ptr [edi+0Ch], 0FFFFh
0x8FC4C5: fstp    st
0x8FC4C7: jnz     short loc_8FC4E2
0x8FC4C9: mov     edx, [ebp+arg_8]
0x8FC4CC: mov     ecx, [edi+8]
0x8FC4CF: mov     eax, [ecx]
0x8FC4D1: push    esi
0x8FC4D2: push    edx
0x8FC4D3: mov     edx, [ebp+arg_4]
0x8FC4D6: push    edx
0x8FC4D7: mov     edx, [ebp+arg_0]
0x8FC4DA: push    edx
0x8FC4DB: call    dword ptr [eax+8]
0x8FC4DE: mov     [edi+0Ch], ax
0x8FC4E2: mov     di, [edi+0Ch]
0x8FC4E6: cmp     di, 0FFFFh
0x8FC4EB: jz      short loc_8FC51A
0x8FC4ED: mov     eax, [ebp+arg_C]
0x8FC4F0: mov     [esi+20h], di
0x8FC4F4: add     dword ptr [eax], 30h ; '0'
0x8FC4F7: jmp     short loc_8FC51A
0x8FC4F9: mov     esi, [esp+60h+var_4C]
0x8FC4FD: fstp    st
0x8FC4FF: xor     eax, eax
0x8FC501: mov     ax, [esi+0Ch]
0x8FC505: cmp     ax, 0FFFFh
0x8FC509: jz      short loc_8FC51A
0x8FC50B: mov     ecx, [esi+8]
0x8FC50E: mov     edx, [ecx]
0x8FC510: push    eax
0x8FC511: call    dword ptr [edx+10h]
0x8FC514: mov     word ptr [esi+0Ch], 0FFFFh
0x8FC51A: mov     ecx, large fs:2Ch
0x8FC521: mov     edx, ds:0BA9DE4h
0x8FC527: mov     eax, [ecx+edx*4]
0x8FC52A: mov     esi, [eax+1A4h]
0x8FC530: cmp     esi, [eax+1A8h]
0x8FC536: jnb     short loc_8FC55C
0x8FC538: mov     esi, eax
0x8FC53A: mov     ecx, [esi+1A4h]
0x8FC540: mov     dword ptr [ecx], offset aEt; "Et"
0x8FC546: rdtsc
0x8FC548: mov     [esp+60h+var_44], eax
0x8FC54C: mov     eax, [esp+60h+var_44]
0x8FC550: mov     [ecx+4], eax
0x8FC553: add     ecx, 0Ch
0x8FC556: mov     [esi+1A4h], ecx
0x8FC55C: pop     edi
0x8FC55D: pop     esi
0x8FC55E: pop     ebx
0x8FC55F: mov     esp, ebp
0x8FC561: pop     ebp
0x8FC562: retn    10h
