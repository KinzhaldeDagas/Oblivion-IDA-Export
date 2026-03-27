0x8E24A0: push    ebp
0x8E24A1: mov     ebp, esp
0x8E24A3: and     esp, 0FFFFFFF0h
0x8E24A6: sub     esp, 0C4h
0x8E24AC: push    ebx
0x8E24AD: push    esi
0x8E24AE: push    edi
0x8E24AF: mov     edi, ecx
0x8E24B1: mov     [esp+0D0h+var_9C], edi
0x8E24B5: mov     eax, [ebp+arg_0]
0x8E24B8: movaps  xmm5, xmmword ptr [eax]
0x8E24BB: movaps  xmm2, xmmword ptr ds:0B2FC70h
0x8E24C2: movaps  xmm1, xmmword ptr ds:0A9A660h
0x8E24C9: movaps  xmm0, xmmword ptr ds:0A9A650h
0x8E24D0: mov     ebx, large fs:2Ch
0x8E24D7: movaps  xmm4, xmmword ptr [edi+10h]
0x8E24DB: movaps  xmm3, xmmword ptr [edi+30h]
0x8E24DF: addps   xmm5, xmm4
0x8E24E2: mulps   xmm5, xmm3
0x8E24E5: minps   xmm5, xmm2
0x8E24E8: maxps   xmm5, xmm1
0x8E24EB: addps   xmm5, xmm0
0x8E24EE: movaps  [esp+0D0h+var_90], xmm5
0x8E24F3: mov     eax, dword ptr [esp+0D0h+var_90]
0x8E24F7: mov     ecx, dword ptr [esp+0D0h+var_90+4]
0x8E24FB: mov     esi, dword ptr [esp+0D0h+var_90+0Ch]
0x8E24FF: mov     edx, dword ptr [esp+0D0h+var_90+8]
0x8E2503: shr     eax, 7
0x8E2506: movzx   eax, ax
0x8E2509: shr     ecx, 7
0x8E250C: shr     esi, 7
0x8E250F: movzx   ecx, cx
0x8E2512: shr     edx, 7
0x8E2515: mov     dword ptr [esp+0D0h+var_90], eax
0x8E2519: movzx   eax, si
0x8E251C: movzx   edx, dx
0x8E251F: mov     dword ptr [esp+0D0h+var_90+4], ecx
0x8E2523: mov     ecx, ds:0BA9DE4h
0x8E2529: mov     dword ptr [esp+0D0h+var_90+0Ch], eax
0x8E252D: mov     eax, [ebx+ecx*4]
0x8E2530: mov     [esp+0D0h+var_6A], si
0x8E2535: mov     esi, [eax+1A8h]
0x8E253B: mov     dword ptr [esp+0D0h+var_90+8], edx
0x8E253F: mov     edx, [eax+1A4h]
0x8E2545: cmp     edx, esi
0x8E2547: jnb     short loc_8E2574
0x8E2549: mov     esi, eax
0x8E254B: mov     ecx, [esi+1A4h]
0x8E2551: mov     dword ptr [ecx], offset aLthk3axissweep; "Lthk3AxisSweep"
0x8E2557: mov     dword ptr [ecx+0Ch], offset aMemory; "memory"
0x8E255E: rdtsc
0x8E2560: mov     [esp+0D0h+var_C0], eax
0x8E2564: mov     eax, [esp+0D0h+var_C0]
0x8E2568: mov     [ecx+4], eax
0x8E256B: add     ecx, 10h
0x8E256E: mov     [esi+1A4h], ecx
0x8E2574: mov     ecx, ds:0BA9DE4h
0x8E257A: mov     eax, [ebx+ecx*4]
0x8E257D: mov     ecx, [eax+19Ch]
0x8E2583: mov     esi, [ecx+20h]
0x8E2586: mov     [esp+0D0h+var_A0], eax
0x8E258A: mov     eax, [edi+44h]
0x8E258D: add     eax, 20h ; ' '
0x8E2590: and     eax, 0FFFFFFF0h
0x8E2593: lea     edx, [esi+eax]
0x8E2596: cmp     edx, [ecx+2Ch]
0x8E2599: ja      short loc_8E25A0
0x8E259B: mov     [ecx+20h], edx
0x8E259E: jmp     short loc_8E25A8
0x8E25A0: mov     edx, [ecx]
0x8E25A2: push    eax
0x8E25A3: call    dword ptr [edx+0Ch]
0x8E25A6: mov     esi, eax
0x8E25A8: mov     eax, [edi+44h]
0x8E25AB: sar     eax, 4
0x8E25AE: test    eax, eax
0x8E25B0: xorps   xmm0, xmm0
0x8E25B3: mov     ecx, esi
0x8E25B5: jl      short loc_8E25CB
0x8E25B7: lea     edx, [eax+1]
0x8E25BA: lea     ebx, [ebx+0]
0x8E25C0: mov     eax, ecx
0x8E25C2: add     ecx, 10h
0x8E25C5: dec     edx
0x8E25C6: movaps  xmmword ptr [eax], xmm0
0x8E25C9: jnz     short loc_8E25C0
0x8E25CB: mov     eax, ds:0BA9DE4h
0x8E25D0: mov     ebx, [ebx+eax*4]
0x8E25D3: mov     ecx, [ebx+1A4h]
0x8E25D9: cmp     ecx, [ebx+1A8h]
0x8E25DF: jnb     short loc_8E2607
0x8E25E1: mov     ebx, [esp+0D0h+var_A0]
0x8E25E5: mov     ecx, [ebx+1A4h]
0x8E25EB: mov     dword ptr [ecx], offset aStbitfield; "Stbitfield"
0x8E25F1: rdtsc
0x8E25F3: mov     [esp+0D0h+var_C0], eax
0x8E25F7: mov     edx, [esp+0D0h+var_C0]
0x8E25FB: mov     [ecx+4], edx
0x8E25FE: add     ecx, 0Ch
0x8E2601: mov     [ebx+1A4h], ecx
0x8E2607: mov     eax, [ebp+arg_0]
0x8E260A: mov     eax, [eax+1Ch]
0x8E260D: test    eax, eax
0x8E260F: jz      short loc_8E2615
0x8E2611: mov     edi, eax
0x8E2613: jmp     short loc_8E2618
0x8E2615: add     edi, 4Ch ; 'L'
0x8E2618: mov     ecx, 11h
0x8E261D: mov     dword ptr [esp+0D0h+var_B8+4], edi
0x8E2621: mov     dword ptr [esp+0D0h+var_B8], 0
0x8E2629: lea     esp, [esp+0]
0x8E2630: mov     eax, dword ptr [esp+0D0h+var_B8+4]
0x8E2634: mov     edx, [eax+4]
0x8E2637: mov     eax, [eax]
0x8E2639: mov     edi, dword ptr [esp+0D0h+var_B8]
0x8E263D: mov     edi, dword ptr [esp+edi+0D0h+var_90]
0x8E2641: mov     ebx, edx
0x8E2643: sar     ebx, 1
0x8E2645: movzx   ebx, word ptr [eax+ebx*4]
0x8E2649: cmp     edi, ebx
0x8E264B: jnb     short loc_8E26AB
0x8E264D: lea     ebx, [eax+edx*4-10h]
0x8E2651: add     eax, 4
0x8E2654: cmp     eax, ebx
0x8E2656: jnb     short loc_8E268B
0x8E2658: movzx   edx, word ptr [eax+0Ch]
0x8E265C: cmp     edx, edi
0x8E265E: ja      short loc_8E268B
0x8E2660: movzx   edx, word ptr [eax+2]
0x8E2664: xor     [edx+esi], cl
0x8E2667: add     edx, esi
0x8E2669: movzx   edx, word ptr [eax+6]
0x8E266D: xor     [edx+esi], cl
0x8E2670: add     edx, esi
0x8E2672: movzx   edx, word ptr [eax+0Ah]
0x8E2676: xor     [edx+esi], cl
0x8E2679: add     edx, esi
0x8E267B: movzx   edx, word ptr [eax+0Eh]
0x8E267F: xor     [edx+esi], cl
0x8E2682: add     edx, esi
0x8E2684: add     eax, 10h
0x8E2687: cmp     eax, ebx
0x8E2689: jb      short loc_8E2658
0x8E268B: movzx   edx, word ptr [eax]
0x8E268E: cmp     edx, edi
0x8E2690: ja      short loc_8E270A
0x8E2692: movzx   edx, word ptr [eax+2]
0x8E2696: mov     bl, [edx+esi]
0x8E2699: add     edx, esi
0x8E269B: xor     bl, cl
0x8E269D: add     eax, 4
0x8E26A0: mov     [edx], bl
0x8E26A2: movzx   edx, word ptr [eax]
0x8E26A5: cmp     edx, edi
0x8E26A7: jbe     short loc_8E2692
0x8E26A9: jmp     short loc_8E270A
0x8E26AB: lea     ebx, [eax+10h]
0x8E26AE: lea     eax, [eax+edx*4-8]
0x8E26B2: cmp     eax, ebx
0x8E26B4: jb      short loc_8E26E9
0x8E26B6: movzx   edx, word ptr [eax-0Ch]
0x8E26BA: cmp     edx, edi
0x8E26BC: jbe     short loc_8E26E9
0x8E26BE: movzx   edx, word ptr [eax+2]
0x8E26C2: xor     [edx+esi], cl
0x8E26C5: add     edx, esi
0x8E26C7: movzx   edx, word ptr [eax-2]
0x8E26CB: xor     [edx+esi], cl
0x8E26CE: add     edx, esi
0x8E26D0: movzx   edx, word ptr [eax-6]
0x8E26D4: xor     [edx+esi], cl
0x8E26D7: add     edx, esi
0x8E26D9: movzx   edx, word ptr [eax-0Ah]
0x8E26DD: xor     [edx+esi], cl
0x8E26E0: add     edx, esi
0x8E26E2: sub     eax, 10h
0x8E26E5: cmp     eax, ebx
0x8E26E7: jnb     short loc_8E26B6
0x8E26E9: movzx   edx, word ptr [eax]
0x8E26EC: cmp     edx, edi
0x8E26EE: jbe     short loc_8E2707
0x8E26F0: movzx   edx, word ptr [eax+2]
0x8E26F4: mov     bl, [edx+esi]
0x8E26F7: add     edx, esi
0x8E26F9: xor     bl, cl
0x8E26FB: sub     eax, 4
0x8E26FE: mov     [edx], bl
0x8E2700: movzx   edx, word ptr [eax]
0x8E2703: cmp     edx, edi
0x8E2705: ja      short loc_8E26F0
0x8E2707: add     eax, 4
0x8E270A: mov     edx, dword ptr [esp+0D0h+var_B8]
0x8E270E: mov     ebx, dword ptr [esp+0D0h+var_B8+4]
0x8E2712: mov     [esp+edx+0D0h+var_4C], eax
0x8E2719: add     edx, 4
0x8E271C: add     ebx, 0Ch
0x8E271F: shl     ecx, 1
0x8E2721: cmp     edx, 0Ch
0x8E2724: mov     dword ptr [esp+0D0h+var_B8+4], ebx
0x8E2728: mov     dword ptr [esp+0D0h+var_B8], edx
0x8E272C: jl      loc_8E2630
0x8E2732: mov     ecx, ds:0BA9DE4h
0x8E2738: mov     eax, large fs:2Ch
0x8E273E: mov     eax, [eax+ecx*4]
0x8E2741: mov     ecx, [eax+1A8h]
0x8E2747: mov     edx, [eax+1A4h]
0x8E274D: cmp     edx, ecx
0x8E274F: mov     ecx, [esp+0D0h+var_A0]
0x8E2753: jnb     short loc_8E2777
0x8E2755: mov     edi, [ecx+1A4h]
0x8E275B: mov     dword ptr [edi], offset aStstartoverlap; "StStartOverlaps"
0x8E2761: rdtsc
0x8E2763: mov     [esp+0D0h+var_C0], eax
0x8E2767: mov     eax, [esp+0D0h+var_C0]
0x8E276B: mov     [edi+4], eax
0x8E276E: add     edi, 0Ch
0x8E2771: mov     [ecx+1A4h], edi
0x8E2777: mov     edx, [ebp+arg_0]
0x8E277A: mov     eax, [edx+10h]
0x8E277D: mov     ecx, [ecx+19Ch]
0x8E2783: mov     ebx, [ecx+20h]
0x8E2786: mov     edi, [ecx+2Ch]
0x8E2789: lea     eax, ds:10h[eax*4]
0x8E2790: and     eax, 0FFFFFFF0h
0x8E2793: lea     edx, [ebx+eax]
0x8E2796: cmp     edx, edi
0x8E2798: ja      short loc_8E279F
0x8E279A: mov     [ecx+20h], edx
0x8E279D: jmp     short loc_8E27A7
0x8E279F: mov     edx, [ecx]
0x8E27A1: push    eax
0x8E27A2: call    dword ptr [edx+0Ch]
0x8E27A5: mov     ebx, eax
0x8E27A7: mov     ecx, [ebp+arg_0]
0x8E27AA: mov     edx, [ecx+10h]
0x8E27AD: xor     eax, eax
0x8E27AF: test    edx, edx
0x8E27B1: mov     [esp+0D0h+var_94], ebx
0x8E27B5: jle     short loc_8E27CF
0x8E27B7: jmp     short loc_8E27C0
0x8E27B9: align 10h
0x8E27C0: mov     dword ptr [ebx+eax*4], 3F800000h
0x8E27C7: mov     edx, [ecx+10h]
0x8E27CA: inc     eax
0x8E27CB: cmp     eax, edx
0x8E27CD: jl      short loc_8E27C0
0x8E27CF: mov     edi, [esp+0D0h+var_9C]
0x8E27D3: mov     edx, [edi+44h]
0x8E27D6: mov     ecx, [edi+40h]
0x8E27D9: sar     edx, 2
0x8E27DC: lea     edx, [esi+edx*4+4]
0x8E27E0: cmp     esi, edx
0x8E27E2: mov     eax, esi
0x8E27E4: mov     dword ptr [esp+0D0h+var_B8+4], eax
0x8E27E8: mov     [esp+0D0h+var_98], edx
0x8E27EC: jnb     loc_8E2ABF
0x8E27F2: lea     edi, [ecx+3Ch]
0x8E27F5: mov     dword ptr [esp+0D0h+var_B8], edi
0x8E27F9: lea     edi, [ecx+2Ch]
0x8E27FC: mov     dword ptr [esp+0D0h+var_B8+8], edi
0x8E2800: lea     edi, [ecx+1Ch]
0x8E2803: add     ecx, 0Ch
0x8E2806: mov     dword ptr [esp+0D0h+var_B8+0Ch], ecx
0x8E280A: mov     [esp+0D0h+var_A8], edi
0x8E280E: mov     ecx, 0C0h ; 'À'
0x8E2813: jmp     short loc_8E2820
0x8E2815: align 10h
0x8E2820: mov     edi, [eax]
0x8E2822: add     edi, 1010101h
0x8E2828: test    edi, 8080808h
0x8E282E: jnz     loc_8E28BA
0x8E2834: mov     edi, [eax+4]
0x8E2837: add     edi, 1010101h
0x8E283D: test    edi, 8080808h
0x8E2843: jnz     short loc_8E2899
0x8E2845: mov     edi, [eax+8]
0x8E2848: add     edi, 1010101h
0x8E284E: test    edi, 8080808h
0x8E2854: jnz     short loc_8E2878
0x8E2856: add     dword ptr [esp+0D0h+var_B8+0Ch], ecx
0x8E285A: add     [esp+0D0h+var_A8], ecx
0x8E285E: add     dword ptr [esp+0D0h+var_B8+8], ecx
0x8E2862: mov     edi, dword ptr [esp+0D0h+var_B8]
0x8E2866: add     edi, ecx
0x8E2868: add     eax, 0Ch
0x8E286B: mov     dword ptr [esp+0D0h+var_B8], edi
0x8E286F: mov     dword ptr [esp+0D0h+var_B8+4], eax
0x8E2873: jmp     loc_8E2AB3
0x8E2878: mov     edi, 80h ; '€'
0x8E287D: add     dword ptr [esp+0D0h+var_B8+0Ch], edi
0x8E2881: add     [esp+0D0h+var_A8], edi
0x8E2885: add     dword ptr [esp+0D0h+var_B8+8], edi
0x8E2889: add     dword ptr [esp+0D0h+var_B8], edi
0x8E288D: add     eax, 8
0x8E2890: mov     dword ptr [esp+0D0h+var_B8+4], eax
0x8E2894: jmp     loc_8E2AB3
0x8E2899: mov     edi, 40h ; '@'
0x8E289E: add     dword ptr [esp+0D0h+var_B8+0Ch], edi
0x8E28A2: add     [esp+0D0h+var_A8], edi
0x8E28A6: add     dword ptr [esp+0D0h+var_B8+8], edi
0x8E28AA: add     dword ptr [esp+0D0h+var_B8], edi
0x8E28AE: add     eax, 4
0x8E28B1: mov     dword ptr [esp+0D0h+var_B8+4], eax
0x8E28B5: jmp     loc_8E2AB3
0x8E28BA: cmp     byte ptr [eax], 77h ; 'w'
0x8E28BD: jnz     short loc_8E2922
0x8E28BF: mov     eax, dword ptr [esp+0D0h+var_B8+0Ch]
0x8E28C3: test    byte ptr [eax], 1
0x8E28C6: jnz     short loc_8E2922
0x8E28C8: mov     edx, [ebp+arg_0]
0x8E28CB: mov     eax, [edx+10h]
0x8E28CE: mov     ecx, [ebp+arg_4]
0x8E28D1: xor     edi, edi
0x8E28D3: test    eax, eax
0x8E28D5: mov     [esp+0D0h+var_BC], ecx
0x8E28D9: jle     short loc_8E2922
0x8E28DB: jmp     short loc_8E28E0
0x8E28DD: align 10h
0x8E28E0: mov     edx, dword ptr [esp+0D0h+var_B8+0Ch]
0x8E28E4: mov     ecx, [esp+0D0h+var_BC]
0x8E28E8: mov     edx, [edx]
0x8E28EA: mov     eax, [ecx]
0x8E28EC: push    edi
0x8E28ED: push    edx
0x8E28EE: call    dword ptr [eax+4]
0x8E28F1: fld     dword ptr [ebx+edi*4]
0x8E28F4: fst     [esp+0D0h+var_C0]
0x8E28F8: fcomp   st(1)
0x8E28FA: fnstsw  ax
0x8E28FC: test    ah, 5
0x8E28FF: jp      short loc_8E2907
0x8E2901: fstp    st
0x8E2903: fld     [esp+0D0h+var_C0]
0x8E2907: mov     eax, [ebp+arg_8]
0x8E290A: fstp    dword ptr [ebx+edi*4]
0x8E290D: mov     edx, [esp+0D0h+var_BC]
0x8E2911: mov     ecx, [ebp+arg_0]
0x8E2914: add     edx, eax
0x8E2916: mov     eax, [ecx+10h]
0x8E2919: inc     edi
0x8E291A: cmp     edi, eax
0x8E291C: mov     [esp+0D0h+var_BC], edx
0x8E2920: jl      short loc_8E28E0
0x8E2922: mov     edx, dword ptr [esp+0D0h+var_B8+4]
0x8E2926: cmp     byte ptr [edx+1], 77h ; 'w'
0x8E292A: jnz     short loc_8E2992
0x8E292C: mov     eax, [esp+0D0h+var_A8]
0x8E2930: test    byte ptr [eax], 1
0x8E2933: jnz     short loc_8E2992
0x8E2935: mov     edx, [ebp+arg_0]
0x8E2938: mov     eax, [edx+10h]
0x8E293B: mov     ecx, [ebp+arg_4]
0x8E293E: xor     edi, edi
0x8E2940: test    eax, eax
0x8E2942: mov     [esp+0D0h+var_BC], ecx
0x8E2946: jle     short loc_8E2992
0x8E2948: jmp     short loc_8E2950
0x8E294A: align 10h
0x8E2950: mov     edx, [esp+0D0h+var_A8]
0x8E2954: mov     ecx, [esp+0D0h+var_BC]
0x8E2958: mov     edx, [edx]
0x8E295A: mov     eax, [ecx]
0x8E295C: push    edi
0x8E295D: push    edx
0x8E295E: call    dword ptr [eax+4]
0x8E2961: fld     dword ptr [ebx+edi*4]
0x8E2964: fst     [esp+0D0h+var_C0]
0x8E2968: fcomp   st(1)
0x8E296A: fnstsw  ax
0x8E296C: test    ah, 5
0x8E296F: jp      short loc_8E2977
0x8E2971: fstp    st
0x8E2973: fld     [esp+0D0h+var_C0]
0x8E2977: mov     eax, [ebp+arg_8]
0x8E297A: fstp    dword ptr [ebx+edi*4]
0x8E297D: mov     edx, [esp+0D0h+var_BC]
0x8E2981: mov     ecx, [ebp+arg_0]
0x8E2984: add     edx, eax
0x8E2986: mov     eax, [ecx+10h]
0x8E2989: inc     edi
0x8E298A: cmp     edi, eax
0x8E298C: mov     [esp+0D0h+var_BC], edx
0x8E2990: jl      short loc_8E2950
0x8E2992: mov     edx, dword ptr [esp+0D0h+var_B8+4]
0x8E2996: cmp     byte ptr [edx+2], 77h ; 'w'
0x8E299A: jnz     short loc_8E2A02
0x8E299C: mov     eax, dword ptr [esp+0D0h+var_B8+8]
0x8E29A0: test    byte ptr [eax], 1
0x8E29A3: jnz     short loc_8E2A02
0x8E29A5: mov     edx, [ebp+arg_0]
0x8E29A8: mov     eax, [edx+10h]
0x8E29AB: mov     ecx, [ebp+arg_4]
0x8E29AE: xor     edi, edi
0x8E29B0: test    eax, eax
0x8E29B2: mov     [esp+0D0h+var_BC], ecx
0x8E29B6: jle     short loc_8E2A02
0x8E29B8: jmp     short loc_8E29C0
0x8E29BA: align 10h
0x8E29C0: mov     edx, dword ptr [esp+0D0h+var_B8+8]
0x8E29C4: mov     ecx, [esp+0D0h+var_BC]
0x8E29C8: mov     edx, [edx]
0x8E29CA: mov     eax, [ecx]
0x8E29CC: push    edi
0x8E29CD: push    edx
0x8E29CE: call    dword ptr [eax+4]
0x8E29D1: fld     dword ptr [ebx+edi*4]
0x8E29D4: fst     [esp+0D0h+var_C0]
0x8E29D8: fcomp   st(1)
0x8E29DA: fnstsw  ax
0x8E29DC: test    ah, 5
0x8E29DF: jp      short loc_8E29E7
0x8E29E1: fstp    st
0x8E29E3: fld     [esp+0D0h+var_C0]
0x8E29E7: mov     eax, [ebp+arg_8]
0x8E29EA: fstp    dword ptr [ebx+edi*4]
0x8E29ED: mov     edx, [esp+0D0h+var_BC]
0x8E29F1: mov     ecx, [ebp+arg_0]
0x8E29F4: add     edx, eax
0x8E29F6: mov     eax, [ecx+10h]
0x8E29F9: inc     edi
0x8E29FA: cmp     edi, eax
0x8E29FC: mov     [esp+0D0h+var_BC], edx
0x8E2A00: jl      short loc_8E29C0
0x8E2A02: mov     edx, dword ptr [esp+0D0h+var_B8+4]
0x8E2A06: cmp     byte ptr [edx+3], 77h ; 'w'
0x8E2A0A: jnz     short loc_8E2A72
0x8E2A0C: mov     eax, dword ptr [esp+0D0h+var_B8]
0x8E2A10: test    byte ptr [eax], 1
0x8E2A13: jnz     short loc_8E2A72
0x8E2A15: mov     edx, [ebp+arg_0]
0x8E2A18: mov     eax, [edx+10h]
0x8E2A1B: mov     ecx, [ebp+arg_4]
0x8E2A1E: xor     edi, edi
0x8E2A20: test    eax, eax
0x8E2A22: mov     [esp+0D0h+var_BC], ecx
0x8E2A26: jle     short loc_8E2A72
0x8E2A28: jmp     short loc_8E2A30
0x8E2A2A: align 10h
0x8E2A30: mov     edx, dword ptr [esp+0D0h+var_B8]
0x8E2A34: mov     ecx, [esp+0D0h+var_BC]
0x8E2A38: mov     edx, [edx]
0x8E2A3A: mov     eax, [ecx]
0x8E2A3C: push    edi
0x8E2A3D: push    edx
0x8E2A3E: call    dword ptr [eax+4]
0x8E2A41: fld     dword ptr [ebx+edi*4]
0x8E2A44: fst     [esp+0D0h+var_C0]
0x8E2A48: fcomp   st(1)
0x8E2A4A: fnstsw  ax
0x8E2A4C: test    ah, 5
0x8E2A4F: jp      short loc_8E2A57
0x8E2A51: fstp    st
0x8E2A53: fld     [esp+0D0h+var_C0]
0x8E2A57: mov     eax, [ebp+arg_8]
0x8E2A5A: fstp    dword ptr [ebx+edi*4]
0x8E2A5D: mov     edx, [esp+0D0h+var_BC]
0x8E2A61: mov     ecx, [ebp+arg_0]
0x8E2A64: add     edx, eax
0x8E2A66: mov     eax, [ecx+10h]
0x8E2A69: inc     edi
0x8E2A6A: cmp     edi, eax
0x8E2A6C: mov     [esp+0D0h+var_BC], edx
0x8E2A70: jl      short loc_8E2A30
0x8E2A72: mov     ecx, dword ptr [esp+0D0h+var_B8+0Ch]
0x8E2A76: mov     edi, [esp+0D0h+var_A8]
0x8E2A7A: mov     edx, dword ptr [esp+0D0h+var_B8+8]
0x8E2A7E: mov     eax, 40h ; '@'
0x8E2A83: add     ecx, eax
0x8E2A85: mov     dword ptr [esp+0D0h+var_B8+0Ch], ecx
0x8E2A89: mov     ecx, dword ptr [esp+0D0h+var_B8]
0x8E2A8D: add     edx, eax
0x8E2A8F: add     ecx, eax
0x8E2A91: add     edi, eax
0x8E2A93: mov     eax, dword ptr [esp+0D0h+var_B8+4]
0x8E2A97: add     eax, 4
0x8E2A9A: mov     dword ptr [esp+0D0h+var_B8+8], edx
0x8E2A9E: mov     edx, [esp+0D0h+var_98]
0x8E2AA2: mov     dword ptr [esp+0D0h+var_B8], ecx
0x8E2AA6: mov     [esp+0D0h+var_A8], edi
0x8E2AAA: mov     dword ptr [esp+0D0h+var_B8+4], eax
0x8E2AAE: mov     ecx, 0C0h ; 'À'
0x8E2AB3: cmp     eax, edx
0x8E2AB5: jb      loc_8E2820
0x8E2ABB: mov     edi, [esp+0D0h+var_9C]
0x8E2ABF: mov     edx, large fs:2Ch
0x8E2AC6: mov     eax, ds:0BA9DE4h
0x8E2ACB: mov     eax, [edx+eax*4]
0x8E2ACE: mov     byte ptr [esi], 88h ; 'ˆ'
0x8E2AD1: mov     ecx, [eax+1A4h]
0x8E2AD7: cmp     ecx, [eax+1A8h]
0x8E2ADD: jnb     short loc_8E2B05
0x8E2ADF: mov     ebx, [esp+0D0h+var_A0]
0x8E2AE3: mov     ecx, [ebx+1A4h]
0x8E2AE9: mov     dword ptr [ecx], offset aStwalk; "StWalk"
0x8E2AEF: rdtsc
0x8E2AF1: mov     [esp+0D0h+var_C0], eax
0x8E2AF5: mov     edx, [esp+0D0h+var_C0]
0x8E2AF9: mov     [ecx+4], edx
0x8E2AFC: add     ecx, 0Ch
0x8E2AFF: mov     [ebx+1A4h], ecx
0x8E2B05: mov     eax, [ebp+arg_4]
0x8E2B08: mov     edx, [ebp+arg_0]
0x8E2B0B: mov     ecx, [edi+44h]
0x8E2B0E: mov     dword ptr [esp+0D0h+var_B8], eax
0x8E2B12: mov     eax, [edx+10h]
0x8E2B15: test    eax, eax
0x8E2B17: mov     [esp+0D0h+var_70], ecx
0x8E2B1B: mov     dword ptr [esp+0D0h+var_B8+4], 0
0x8E2B23: jle     loc_8E2EA3
0x8E2B29: mov     eax, edx
0x8E2B2B: lea     ecx, [esp+0D0h+var_10]
0x8E2B32: sub     ecx, eax
0x8E2B34: mov     [esp+0D0h+var_50], ecx
0x8E2B3B: lea     ecx, [esp+0D0h+var_90]
0x8E2B3F: sub     ecx, eax
0x8E2B41: mov     [esp+0D0h+var_58], ecx
0x8E2B45: lea     ecx, [esp+0D0h+var_1C]
0x8E2B4C: sub     ecx, eax
0x8E2B4E: mov     [esp+0D0h+var_54], ecx
0x8E2B52: lea     ecx, [esp+0D0h+var_68]
0x8E2B56: sub     ecx, eax
0x8E2B58: mov     [esp+0D0h+var_5C], ecx
0x8E2B5C: lea     ecx, [esp+0D0h+var_38+8]
0x8E2B63: sub     ecx, eax
0x8E2B65: mov     dword ptr [esp+0D0h+var_B8+0Ch], ecx
0x8E2B69: lea     ecx, [esp+0D0h+var_40]
0x8E2B70: sub     ecx, eax
0x8E2B72: mov     [esp+0D0h+var_98], ecx
0x8E2B76: jmp     short loc_8E2B80
0x8E2B78: align 10h
0x8E2B80: mov     eax, dword ptr [esp+0D0h+var_B8+4]
0x8E2B84: mov     ecx, [esp+0D0h+var_94]
0x8E2B88: fld     dword ptr [ecx+eax*4]
0x8E2B8B: mov     edx, [esp+0D0h+var_4C]
0x8E2B92: mov     ecx, [esp+0D0h+var_48]
0x8E2B99: fstp    dword ptr [esp+0D0h+var_B8+8]
0x8E2B9D: mov     [esp+0D0h+var_68], edx
0x8E2BA1: mov     edx, [esp+0D0h+var_44]
0x8E2BA8: mov     [esp+0D0h+var_60], edx
0x8E2BAC: mov     edi, [esp+0D0h+var_5C]
0x8E2BB0: mov     ebx, [esp+0D0h+var_54]
0x8E2BB4: mov     [esp+0D0h+var_64], ecx
0x8E2BB8: mov     ecx, [ebp+arg_0]
0x8E2BBB: mov     edx, [ecx+18h]
0x8E2BBE: movaps  xmm0, xmmword ptr [ecx]
0x8E2BC1: imul    edx, eax
0x8E2BC4: add     edx, [ecx+14h]
0x8E2BC7: mov     eax, [edx]
0x8E2BC9: mov     dword ptr [esp+0D0h+var_90], eax
0x8E2BCD: mov     eax, [edx+4]
0x8E2BD0: mov     dword ptr [esp+0D0h+var_90+4], eax
0x8E2BD4: mov     eax, [edx+8]
0x8E2BD7: mov     edx, [edx+0Ch]
0x8E2BDA: mov     dword ptr [esp+0D0h+var_90+0Ch], edx
0x8E2BDE: mov     edx, [esp+0D0h+var_9C]
0x8E2BE2: mov     dword ptr [esp+0D0h+var_90+8], eax
0x8E2BE6: movaps  xmm1, [esp+0D0h+var_90]
0x8E2BEB: subps   xmm1, xmm0
0x8E2BEE: movaps  [esp+0D0h+var_10], xmm1
0x8E2BF6: add     edx, 30h ; '0'
0x8E2BF9: mov     [esp+0D0h+var_C0], 3
0x8E2C01: mov     eax, [esp+0D0h+var_50]
0x8E2C08: fld     dword ptr [eax+ecx]
0x8E2C0B: fmul    dword ptr [edx]
0x8E2C0D: fst     [esp+0D0h+var_BC]
0x8E2C11: fabs
0x8E2C13: fld     dword ptr [edx-20h]
0x8E2C16: fadd    dword ptr [ecx]
0x8E2C18: fmul    dword ptr [edx]
0x8E2C1A: fst     [esp+0D0h+var_A8]
0x8E2C1E: fmul    dword ptr ds:0A9A648h
0x8E2C24: fld     st(1)
0x8E2C26: fcompp
0x8E2C28: fnstsw  ax
0x8E2C2A: test    ah, 5
0x8E2C2D: jnp     short loc_8E2C9F
0x8E2C2F: mov     eax, [esp+0D0h+var_58]
0x8E2C33: fld     dword ptr [eax+ecx]
0x8E2C36: fadd    dword ptr [edx-20h]
0x8E2C39: fmul    dword ptr [edx]
0x8E2C3B: fmul    dword ptr ds:0A9A648h
0x8E2C41: fxch    st(1)
0x8E2C43: fcompp
0x8E2C45: fnstsw  ax
0x8E2C47: test    ah, 5
0x8E2C4A: jnp     short loc_8E2CA1
0x8E2C4C: fld     dword ptr ds:0A2F948h
0x8E2C52: mov     dword ptr [ebx+ecx], 4
0x8E2C59: fdiv    [esp+0D0h+var_BC]
0x8E2C5D: fld     [esp+0D0h+var_BC]
0x8E2C61: fcomp   dword ptr ds:0A2FAA8h
0x8E2C67: fnstsw  ax
0x8E2C69: test    ah, 5
0x8E2C6C: jp      short loc_8E2C7E
0x8E2C6E: mov     eax, [edi+ecx]
0x8E2C71: add     eax, 0FFFFFFFCh
0x8E2C74: mov     dword ptr [ebx+ecx], 0FFFFFFFCh
0x8E2C7B: mov     [edi+ecx], eax
0x8E2C7E: mov     eax, dword ptr [esp+0D0h+var_B8+0Ch]
0x8E2C82: fld     st
0x8E2C84: fstp    dword ptr [eax+ecx]
0x8E2C87: mov     eax, [esp+0D0h+var_9C]
0x8E2C8B: fld     [esp+0D0h+var_A8]
0x8E2C8F: fsub    dword ptr [eax+7Ch]
0x8E2C92: mov     eax, [esp+0D0h+var_98]
0x8E2C96: fmul    st, st(1)
0x8E2C98: fstp    dword ptr [eax+ecx]
0x8E2C9B: fstp    st
0x8E2C9D: jmp     short loc_8E2CB7
0x8E2C9F: fstp    st
0x8E2CA1: mov     eax, dword ptr [esp+0D0h+var_B8+0Ch]
0x8E2CA5: mov     dword ptr [eax+ecx], 0
0x8E2CAC: mov     eax, [esp+0D0h+var_98]
0x8E2CB0: mov     dword ptr [eax+ecx], 0C0000000h
0x8E2CB7: mov     eax, [esp+0D0h+var_C0]
0x8E2CBB: add     ecx, 4
0x8E2CBE: add     edx, 4
0x8E2CC1: dec     eax
0x8E2CC2: mov     [esp+0D0h+var_C0], eax
0x8E2CC6: jnz     loc_8E2C01
0x8E2CCC: mov     ecx, [esp+0D0h+var_68]
0x8E2CD0: movzx   edx, word ptr [ecx]
0x8E2CD3: mov     eax, [esp+0D0h+var_64]
0x8E2CD7: movzx   ecx, word ptr [eax]
0x8E2CDA: mov     [esp+0D0h+var_C0], edx
0x8E2CDE: mov     edx, [esp+0D0h+var_60]
0x8E2CE2: fild    [esp+0D0h+var_C0]
0x8E2CE6: movzx   eax, word ptr [edx]
0x8E2CE9: fmul    dword ptr [esp+0D0h+var_38+8]
0x8E2CF0: mov     [esp+0D0h+var_C0], ecx
0x8E2CF4: fsub    [esp+0D0h+var_40]
0x8E2CFB: fstp    [esp+0D0h+var_7C]
0x8E2CFF: fild    [esp+0D0h+var_C0]
0x8E2D03: mov     [esp+0D0h+var_C0], eax
0x8E2D07: fmul    dword ptr [esp+0D0h+var_38+0Ch]
0x8E2D0E: fsub    [esp+0D0h+var_3C]
0x8E2D15: fstp    [esp+0D0h+var_78]
0x8E2D19: fild    [esp+0D0h+var_C0]
0x8E2D1D: fmul    [esp+0D0h+var_28]
0x8E2D24: fsub    dword ptr [esp+0D0h+var_38]
0x8E2D2B: fstp    [esp+0D0h+var_74]
0x8E2D2F: nop
0x8E2D30: fld     [esp+0D0h+var_7C]
0x8E2D34: fcomp   [esp+0D0h+var_78]
0x8E2D38: fnstsw  ax
0x8E2D3A: test    ah, 5
0x8E2D3D: jp      short loc_8E2D52
0x8E2D3F: fld     [esp+0D0h+var_7C]
0x8E2D43: fcomp   [esp+0D0h+var_74]
0x8E2D47: fnstsw  ax
0x8E2D49: test    ah, 5
0x8E2D4C: jp      short loc_8E2D66
0x8E2D4E: xor     ebx, ebx
0x8E2D50: jmp     short loc_8E2D6B
0x8E2D52: fld     [esp+0D0h+var_78]
0x8E2D56: mov     ebx, 1
0x8E2D5B: fcomp   [esp+0D0h+var_74]
0x8E2D5F: fnstsw  ax
0x8E2D61: test    ah, 5
0x8E2D64: jnp     short loc_8E2D6B
0x8E2D66: mov     ebx, 2
0x8E2D6B: fld     [esp+ebx*4+0D0h+var_7C]
0x8E2D6F: lea     eax, [esp+ebx*4+0D0h+var_7C]
0x8E2D73: fcomp   dword ptr [esp+0D0h+var_B8+8]
0x8E2D77: mov     [esp+0D0h+var_C0], eax
0x8E2D7B: fnstsw  ax
0x8E2D7D: test    ah, 41h
0x8E2D80: jz      loc_8E2E34
0x8E2D86: mov     dl, 10h
0x8E2D88: mov     ecx, ebx
0x8E2D8A: shl     dl, cl
0x8E2D8C: mov     byte ptr [esp+0D0h+var_A4+3], dl
0x8E2D90: mov     edi, [esp+ebx*4+0D0h+var_68]
0x8E2D94: movzx   eax, word ptr [edi+2]
0x8E2D98: mov     cl, [esi+eax]
0x8E2D9B: xor     cl, dl
0x8E2D9D: cmp     cl, 70h ; 'p'
0x8E2DA0: mov     [esi+eax], cl
0x8E2DA3: jb      short loc_8E2DE4
0x8E2DA5: test    eax, eax
0x8E2DA7: jz      short loc_8E2E01
0x8E2DA9: mov     ecx, [esp+0D0h+var_9C]
0x8E2DAD: mov     edx, [ecx+40h]
0x8E2DB0: shl     eax, 4
0x8E2DB3: add     eax, edx
0x8E2DB5: mov     eax, [eax+0Ch]
0x8E2DB8: test    al, 1
0x8E2DBA: jnz     short loc_8E2DE4
0x8E2DBC: mov     ecx, dword ptr [esp+0D0h+var_B8+4]
0x8E2DC0: mov     edx, dword ptr [esp+0D0h+var_B8]
0x8E2DC4: mov     edx, [edx]
0x8E2DC6: push    ecx
0x8E2DC7: mov     ecx, dword ptr [esp+0D4h+var_B8]
0x8E2DCB: push    eax
0x8E2DCC: call    dword ptr [edx+4]
0x8E2DCF: fld     dword ptr [esp+0D0h+var_B8+8]
0x8E2DD3: fcomp   st(1)
0x8E2DD5: fnstsw  ax
0x8E2DD7: test    ah, 5
0x8E2DDA: jnp     short loc_8E2DE2
0x8E2DDC: fstp    dword ptr [esp+0D0h+var_B8+8]
0x8E2DE0: jmp     short loc_8E2DE4
0x8E2DE2: fstp    st
0x8E2DE4: mov     edx, [esp+ebx*4+0D0h+var_1C]
0x8E2DEB: mov     cx, [edi]
0x8E2DEE: cmp     cx, [edx+edi]
0x8E2DF2: lea     eax, [edx+edi]
0x8E2DF5: mov     [esp+ebx*4+0D0h+var_68], eax
0x8E2DF9: jnz     short loc_8E2E10
0x8E2DFB: mov     dl, byte ptr [esp+0D0h+var_A4+3]
0x8E2DFF: jmp     short loc_8E2D90
0x8E2E01: mov     eax, [esp+0D0h+var_C0]
0x8E2E05: mov     dword ptr [eax], 40000000h
0x8E2E0B: jmp     loc_8E2D30
0x8E2E10: movzx   ecx, word ptr [eax]
0x8E2E13: mov     edx, [esp+0D0h+var_C0]
0x8E2E17: mov     [esp+0D0h+var_BC], ecx
0x8E2E1B: fild    [esp+0D0h+var_BC]
0x8E2E1F: fmul    dword ptr [esp+ebx*4+0D0h+var_38+8]
0x8E2E26: fsub    [esp+ebx*4+0D0h+var_40]
0x8E2E2D: fstp    dword ptr [edx]
0x8E2E2F: jmp     loc_8E2D30
0x8E2E34: mov     eax, [ebp+arg_0]
0x8E2E37: mov     ecx, [eax+10h]
0x8E2E3A: mov     eax, dword ptr [esp+0D0h+var_B8+4]
0x8E2E3E: dec     ecx
0x8E2E3F: cmp     eax, ecx
0x8E2E41: jge     short loc_8E2E7F
0x8E2E43: mov     edx, [esp+0D0h+var_70]
0x8E2E47: sar     edx, 2
0x8E2E4A: lea     edi, [esi+edx*4+4]
0x8E2E4E: cmp     esi, edi
0x8E2E50: mov     eax, esi
0x8E2E52: jnb     short loc_8E2E7F
0x8E2E54: mov     ecx, [eax]
0x8E2E56: mov     edx, [eax+4]
0x8E2E59: and     ecx, 0F0F0F0Fh
0x8E2E5F: mov     ebx, ecx
0x8E2E61: and     edx, 0F0F0F0Fh
0x8E2E67: shl     ebx, 4
0x8E2E6A: or      ebx, ecx
0x8E2E6C: mov     ecx, edx
0x8E2E6E: shl     ecx, 4
0x8E2E71: or      ecx, edx
0x8E2E73: mov     [eax], ebx
0x8E2E75: mov     [eax+4], ecx
0x8E2E78: add     eax, 8
0x8E2E7B: cmp     eax, edi
0x8E2E7D: jb      short loc_8E2E54
0x8E2E7F: mov     edx, [ebp+arg_8]
0x8E2E82: mov     ebx, dword ptr [esp+0D0h+var_B8]
0x8E2E86: mov     eax, dword ptr [esp+0D0h+var_B8+4]
0x8E2E8A: mov     ecx, [ebp+arg_0]
0x8E2E8D: add     ebx, edx
0x8E2E8F: mov     edx, [ecx+10h]
0x8E2E92: inc     eax
0x8E2E93: cmp     eax, edx
0x8E2E95: mov     dword ptr [esp+0D0h+var_B8], ebx
0x8E2E99: mov     dword ptr [esp+0D0h+var_B8+4], eax
0x8E2E9D: jl      loc_8E2B80
0x8E2EA3: mov     edx, large fs:2Ch
0x8E2EAA: mov     eax, ds:0BA9DE4h
0x8E2EAF: mov     eax, [edx+eax*4]
0x8E2EB2: mov     ecx, [eax+1A4h]
0x8E2EB8: cmp     ecx, [eax+1A8h]
0x8E2EBE: mov     edi, [esp+0D0h+var_A0]
0x8E2EC2: jnb     short loc_8E2EE6
0x8E2EC4: mov     ecx, [edi+1A4h]
0x8E2ECA: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8E2ED0: rdtsc
0x8E2ED2: mov     [esp+0D0h+var_70], eax
0x8E2ED6: mov     edx, [esp+0D0h+var_70]
0x8E2EDA: mov     [ecx+4], edx
0x8E2EDD: add     ecx, 0Ch
0x8E2EE0: mov     [edi+1A4h], ecx
0x8E2EE6: mov     ecx, [edi+19Ch]
0x8E2EEC: mov     eax, [esp+0D0h+var_94]
0x8E2EF0: cmp     eax, [ecx+28h]
0x8E2EF3: mov     [ecx+20h], eax
0x8E2EF6: jnz     short loc_8E2EFE
0x8E2EF8: mov     edx, [ecx]
0x8E2EFA: push    eax
0x8E2EFB: call    dword ptr [edx+10h]
0x8E2EFE: mov     ecx, [edi+19Ch]
0x8E2F04: cmp     esi, [ecx+28h]
0x8E2F07: mov     [ecx+20h], esi
0x8E2F0A: jnz     short loc_8E2F12
0x8E2F0C: mov     eax, [ecx]
0x8E2F0E: push    esi
0x8E2F0F: call    dword ptr [eax+10h]
0x8E2F12: pop     edi
0x8E2F13: pop     esi
0x8E2F14: pop     ebx
0x8E2F15: mov     esp, ebp
0x8E2F17: pop     ebp
0x8E2F18: retn    0Ch
