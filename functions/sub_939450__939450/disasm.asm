0x939450: push    ebp
0x939451: mov     ebp, esp
0x939453: and     esp, 0FFFFFFF0h
0x939456: sub     esp, 1D4h
0x93945C: mov     eax, [ebp+arg_0]
0x93945F: push    ebx
0x939460: push    esi
0x939461: push    edi
0x939462: mov     edi, ecx
0x939464: mov     edx, [edi+8]
0x939467: mov     ecx, [ebp+arg_4]
0x93946A: mov     [esp+1E0h+var_194], edx
0x93946E: mov     edx, [ebp+arg_8]
0x939471: mov     [esp+1E0h+var_19C], ecx
0x939475: mov     ecx, [ecx+8]
0x939478: mov     [esp+1E0h+var_198], edx
0x93947C: mov     edx, [eax+8]
0x93947F: push    ecx
0x939480: push    edx
0x939481: lea     ecx, [esp+1E8h+var_190]
0x939485: mov     [esp+1E8h+var_1A0], eax
0x939489: call    sub_8B1FF0
0x93948E: mov     eax, [esp+1E0h+var_1A0]
0x939492: mov     ecx, [eax]
0x939494: mov     edx, [esp+1E0h+var_19C]
0x939498: mov     [esp+1E0h+var_1AC], ecx
0x93949C: mov     ecx, [edx]
0x93949E: mov     [esp+1E0h+var_1A8], ecx
0x9394A2: mov     ecx, [esp+1E0h+var_198]
0x9394A6: lea     edx, [esp+1E0h+var_190]
0x9394AA: mov     [esp+1E0h+var_1B4], edx
0x9394AE: mov     eax, [eax+8]
0x9394B1: mov     [esp+1E0h+var_1B0], eax
0x9394B5: mov     edx, [ecx+8]
0x9394B8: lea     eax, [esp+1E0h+var_130]
0x9394BF: push    eax
0x9394C0: lea     ebx, [edi+20h]
0x9394C3: lea     esi, [edi+30h]
0x9394C6: add     edi, 0Ch
0x9394C9: push    ebx
0x9394CA: lea     ecx, [esp+1E8h+var_1B4]
0x9394CE: push    edi
0x9394CF: push    ecx
0x9394D0: mov     [esp+1F0h+var_1C8], ebx
0x9394D4: mov     [esp+1F0h+var_1BC], edi
0x9394D8: mov     [esp+1F0h+var_1A4], edx
0x9394DC: call    sub_93D4A0
0x9394E1: add     esp, 10h
0x9394E4: cmp     eax, 1
0x9394E7: jnz     short loc_93950B
0x9394E9: mov     al, [esi+2]
0x9394EC: test    al, al
0x9394EE: jz      loc_9397E4
0x9394F4: mov     edx, [esp+1E0h+var_194]
0x9394F8: push    edx
0x9394F9: push    esi
0x9394FA: call    sub_939B60
0x9394FF: add     esp, 8
0x939502: pop     edi
0x939503: pop     esi
0x939504: pop     ebx
0x939505: mov     esp, ebp
0x939507: pop     ebp
0x939508: retn    10h
0x93950B: push    edi
0x93950C: push    esi
0x93950D: call    sub_93A620
0x939512: movzx   edx, al
0x939515: mov     eax, [ebp+arg_C]
0x939518: mov     ecx, [eax]
0x93951A: mov     al, [esi+2]
0x93951D: mov     [esp+1E8h+var_1D0], ecx
0x939521: movzx   ecx, al
0x939524: add     esp, 8
0x939527: cmp     ecx, edx
0x939529: mov     [esp+1E0h+var_1C4], edx
0x93952D: mov     [esp+1E0h+var_1CC], ecx
0x939531: jle     loc_9396C6
0x939537: test    al, al
0x939539: mov     ebx, [esp+1E0h+var_198]
0x93953D: mov     ebx, [ebx+8]
0x939540: mov     ecx, [esp+1E0h+var_1A0]
0x939544: mov     edi, [esp+1E0h+var_19C]
0x939548: mov     [esp+1E0h+var_8], ebx
0x93954F: mov     ebx, [edi]
0x939551: mov     [esp+1E0h+var_1C0], edi
0x939555: mov     [esp+1E0h+var_1B8], ecx
0x939559: mov     ecx, [ecx]
0x93955B: mov     edi, [ecx+0Ch]
0x93955E: mov     [esp+1E0h+var_10], edi
0x939565: fld     [esp+1E0h+var_10]
0x93956C: mov     edi, [ebx+0Ch]
0x93956F: mov     [esp+1E0h+var_C], edi
0x939576: fadd    [esp+1E0h+var_C]
0x93957D: mov     edi, [esp+1E0h+var_1C8]
0x939581: movaps  xmm0, xmmword ptr [edi]
0x939584: fadd    [esp+1E0h+var_8]
0x93958B: movaps  [esp+1E0h+var_20], xmm0
0x939593: fld     st
0x939595: fmul    st, st(1)
0x939597: fstp    [esp+1E0h+var_4]
0x93959E: fstp    st
0x9395A0: jz      loc_9396A3
0x9395A6: mov     edx, [esp+1E0h+var_1CC]
0x9395AA: lea     edi, [esp+1E0h+var_120]
0x9395B1: push    edi
0x9395B2: movzx   edi, byte ptr [esi]
0x9395B5: lea     eax, [esi+edx*8+4]
0x9395B9: mov     edx, [ecx]
0x9395BB: push    edi
0x9395BC: push    eax
0x9395BD: mov     [esp+1ECh+var_1CC], eax
0x9395C1: call    dword ptr [edx+28h]
0x9395C4: mov     eax, [esp+1E0h+var_1B8]
0x9395C8: mov     eax, [eax+8]
0x9395CB: movzx   edx, byte ptr [esi]
0x9395CE: movaps  xmm1, xmmword ptr [eax]
0x9395D1: movaps  xmm2, xmmword ptr [eax+10h]
0x9395D5: movaps  xmm3, xmmword ptr [eax+20h]
0x9395D9: movaps  xmm4, xmmword ptr [eax+30h]
0x9395DD: mov     edi, edx
0x9395DF: lea     ecx, [esp+1E0h+var_120]
0x9395E6: movaps  xmm0, xmmword ptr [ecx]
0x9395E9: movaps  xmm5, xmm0
0x9395EC: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x9395F0: movaps  xmm6, xmm3
0x9395F3: mulps   xmm6, xmm5
0x9395F6: movaps  xmm5, xmm0
0x9395F9: shufps  xmm5, xmm0, 55h ; 'U'
0x9395FD: movaps  xmm7, xmm2
0x939600: mulps   xmm7, xmm5
0x939603: movaps  xmm5, xmm0
0x939606: shufps  xmm5, xmm0, 0
0x93960A: movaps  xmm0, xmm1
0x93960D: mulps   xmm0, xmm5
0x939610: addps   xmm6, xmm4
0x939613: addps   xmm0, xmm7
0x939616: addps   xmm0, xmm6
0x939619: movaps  xmmword ptr [ecx], xmm0
0x93961C: add     ecx, 10h
0x93961F: dec     edi
0x939620: test    edi, edi
0x939622: jg      short loc_9395E6
0x939624: mov     eax, [ebx]
0x939626: mov     ecx, edx
0x939628: shl     ecx, 4
0x93962B: lea     edi, [esp+ecx+1E0h+var_120]
0x939632: movzx   ecx, byte ptr [esi+1]
0x939636: push    edi
0x939637: push    ecx
0x939638: mov     ecx, [esp+1E8h+var_1CC]
0x93963C: lea     edx, [ecx+edx*2]
0x93963F: push    edx
0x939640: mov     ecx, ebx
0x939642: call    dword ptr [eax+28h]
0x939645: mov     eax, [esp+1E0h+var_1C0]
0x939649: mov     eax, [eax+8]
0x93964C: movzx   edx, byte ptr [esi+1]
0x939650: movaps  xmm1, xmmword ptr [eax]
0x939653: movaps  xmm2, xmmword ptr [eax+10h]
0x939657: movaps  xmm3, xmmword ptr [eax+20h]
0x93965B: movaps  xmm4, xmmword ptr [eax+30h]
0x93965F: mov     ecx, edi
0x939661: movaps  xmm0, xmmword ptr [ecx]
0x939664: movaps  xmm5, xmm0
0x939667: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x93966B: movaps  xmm6, xmm3
0x93966E: mulps   xmm6, xmm5
0x939671: movaps  xmm5, xmm0
0x939674: shufps  xmm5, xmm0, 55h ; 'U'
0x939678: movaps  xmm7, xmm2
0x93967B: mulps   xmm7, xmm5
0x93967E: movaps  xmm5, xmm0
0x939681: shufps  xmm5, xmm0, 0
0x939685: movaps  xmm0, xmm1
0x939688: mulps   xmm0, xmm5
0x93968B: addps   xmm6, xmm4
0x93968E: addps   xmm0, xmm7
0x939691: addps   xmm0, xmm6
0x939694: movaps  xmmword ptr [ecx], xmm0
0x939697: add     ecx, 10h
0x93969A: dec     edx
0x93969B: test    edx, edx
0x93969D: jg      short loc_939661
0x93969F: mov     edx, [esp+1E0h+var_1C4]
0x9396A3: mov     ecx, [esp+1E0h+var_194]
0x9396A7: mov     eax, [ebp+arg_C]
0x9396AA: push    ecx
0x9396AB: push    eax
0x9396AC: push    edx
0x9396AD: lea     ecx, [esp+1ECh+var_120]
0x9396B4: push    ecx
0x9396B5: push    esi
0x9396B6: call    sub_939BB0
0x9396BB: mov     ebx, [esp+1F4h+var_1C8]
0x9396BF: mov     edx, [esp+1F4h+var_1C4]
0x9396C3: add     esp, 14h
0x9396C6: test    edx, edx
0x9396C8: mov     eax, [ebp+arg_C]
0x9396CB: mov     edi, [eax]
0x9396CD: movaps  xmm0, xmmword ptr [esp+1E0h+var_130]
0x9396D5: movaps  xmmword ptr [edi], xmm0
0x9396D8: movaps  xmm0, xmmword ptr [ebx]
0x9396DB: movaps  xmmword ptr [edi+10h], xmm0
0x9396DF: jz      short loc_9396F1
0x9396E1: mov     cx, [esi+6]
0x9396E5: mov     [edi+20h], cx
0x9396E9: add     dword ptr [eax], 30h ; '0'
0x9396EC: jmp     loc_9397C4
0x9396F1: mov     ecx, [esp+1E0h+var_1BC]
0x9396F5: movsx   eax, byte ptr [ecx+8]
0x9396F9: movsx   edx, byte ptr [ecx+9]
0x9396FD: add     edx, eax
0x9396FF: cmp     edx, 4
0x939702: mov     edx, [esp+1E0h+var_198]
0x939706: mov     eax, [edx+28h]
0x939709: jnz     short loc_939710
0x93970B: fld     dword ptr [eax+4]
0x93970E: jmp     short loc_939713
0x939710: fld     dword ptr [eax+8]
0x939713: fcomp   dword ptr [ebx+0Ch]
0x939716: fnstsw  ax
0x939718: test    ah, 41h
0x93971B: jnz     loc_9397C4
0x939721: mov     eax, [esp+1E0h+var_194]
0x939725: push    1
0x939727: push    eax
0x939728: mov     eax, [esp+1E8h+var_1D0]
0x93972C: push    eax
0x93972D: push    edi
0x93972E: push    ecx
0x93972F: mov     ecx, [esp+1F4h+var_19C]
0x939733: push    edx
0x939734: mov     edx, [esp+1F8h+var_1A0]
0x939738: push    ecx
0x939739: push    edx
0x93973A: push    esi
0x93973B: call    sub_93AB40
0x939740: add     esp, 24h
0x939743: cmp     eax, 4
0x939746: jnz     short loc_939798
0x939748: cmp     word ptr [edi+20h], 0FFFFh
0x93974E: jz      short loc_939758
0x939750: mov     eax, [ebp+arg_C]
0x939753: add     dword ptr [eax], 30h ; '0'
0x939756: jmp     short loc_9397C4
0x939758: mov     edx, [esp+1E0h+var_198]
0x93975C: mov     ecx, [esp+1E0h+var_194]
0x939760: mov     eax, [ecx]
0x939762: push    edi
0x939763: push    edx
0x939764: mov     edx, [esp+1E8h+var_19C]
0x939768: push    edx
0x939769: mov     edx, [esp+1ECh+var_1A0]
0x93976D: push    edx
0x93976E: call    dword ptr [eax+8]
0x939771: cmp     ax, 0FFFFh
0x939775: mov     [edi+20h], ax
0x939779: jnz     short loc_93978C
0x93977B: push    0
0x93977D: push    esi
0x93977E: call    sub_939B00
0x939783: mov     edi, [esp+1E8h+var_1D0]
0x939787: add     esp, 8
0x93978A: jmp     short loc_9397C4
0x93978C: mov     [esi+6], ax
0x939790: mov     eax, [ebp+arg_C]
0x939793: add     dword ptr [eax], 30h ; '0'
0x939796: jmp     short loc_9397C4
0x939798: cmp     eax, 5
0x93979B: jnz     short loc_9397A3
0x93979D: mov     edi, [esp+1E0h+var_1D0]
0x9397A1: jmp     short loc_9397C4
0x9397A3: cmp     eax, 6
0x9397A6: jnz     short loc_9397B8
0x9397A8: mov     eax, [ebp+arg_C]
0x9397AB: mov     ecx, [eax]
0x9397AD: mov     edi, [esp+1E0h+var_1D0]
0x9397B1: add     ecx, 0FFFFFFD0h
0x9397B4: mov     [eax], ecx
0x9397B6: jmp     short loc_9397C4
0x9397B8: lea     edi, [eax+eax*2]
0x9397BB: mov     eax, [esp+1E0h+var_1D0]
0x9397BF: shl     edi, 4
0x9397C2: add     edi, eax
0x9397C4: mov     ecx, [ebp+arg_C]
0x9397C7: mov     eax, [ecx+3040h]
0x9397CD: test    eax, eax
0x9397CF: jz      short loc_9397E4
0x9397D1: cmp     edi, [ecx]
0x9397D3: jnb     short loc_9397E4
0x9397D5: mov     eax, [eax+4]
0x9397D8: mov     [eax], edi
0x9397DA: mov     eax, [ecx+3040h]
0x9397E0: add     dword ptr [eax+4], 4
0x9397E4: pop     edi
0x9397E5: pop     esi
0x9397E6: pop     ebx
0x9397E7: mov     esp, ebp
0x9397E9: pop     ebp
0x9397EA: retn    10h
