0x900420: push    ebp
0x900421: mov     ebp, esp
0x900423: and     esp, 0FFFFFFF0h
0x900426: sub     esp, 74h
0x900429: push    ebx
0x90042A: mov     ebx, ds:0BA9DE4h
0x900430: push    esi
0x900431: push    edi
0x900432: mov     edi, large fs:2Ch
0x900439: mov     eax, [edi+ebx*4]
0x90043C: mov     ecx, [eax+1A4h]
0x900442: cmp     ecx, [eax+1A8h]
0x900448: jnb     short loc_900475
0x90044A: mov     esi, eax
0x90044C: mov     ecx, [esi+1A4h]
0x900452: mov     dword ptr [ecx], offset aLtheightfield; "LtHeightField"
0x900458: mov     dword ptr [ecx+0Ch], offset aGetspheres; "GetSpheres"
0x90045F: rdtsc
0x900461: mov     [esp+80h+var_68], eax
0x900465: mov     edx, [esp+80h+var_68]
0x900469: mov     [ecx+4], edx
0x90046C: add     ecx, 10h
0x90046F: mov     [esi+1A4h], ecx
0x900475: mov     eax, [ebp+arg_0]
0x900478: mov     esi, [eax]
0x90047A: mov     ecx, [ebp+arg_4]
0x90047D: mov     edx, [ecx]
0x90047F: mov     eax, [eax+8]
0x900482: mov     ecx, [ecx+8]
0x900485: push    eax
0x900486: push    ecx
0x900487: lea     ecx, [esp+88h+var_40]
0x90048B: mov     [esp+88h+var_58], edx
0x90048F: call    sub_8B1FF0
0x900494: mov     edx, [esi]
0x900496: lea     eax, [esp+80h+var_54]
0x90049A: push    eax
0x90049B: mov     ecx, esi
0x90049D: call    dword ptr [edx+1Ch]
0x9004A0: mov     ebx, [edi+ebx*4]
0x9004A3: mov     ecx, [ebx+19Ch]
0x9004A9: test    ecx, ecx
0x9004AB: mov     eax, [esp+80h+var_54]
0x9004AF: mov     [esp+80h+var_60], eax
0x9004B3: jnz     short loc_9004BB
0x9004B5: mov     ecx, ds:0BA7D9Ch
0x9004BB: mov     edx, [ecx+20h]
0x9004BE: shl     eax, 4
0x9004C1: mov     [esp+80h+var_5C], eax
0x9004C5: add     eax, 10h
0x9004C8: and     eax, 0FFFFFFF0h
0x9004CB: lea     edi, [edx+eax]
0x9004CE: cmp     edi, [ecx+2Ch]
0x9004D1: ja      short loc_9004DC
0x9004D3: mov     [ecx+20h], edi
0x9004D6: mov     [esp+80h+var_68], edx
0x9004DA: jmp     short loc_9004E6
0x9004DC: mov     edx, [ecx]
0x9004DE: push    eax
0x9004DF: call    dword ptr [edx+0Ch]
0x9004E2: mov     [esp+80h+var_68], eax
0x9004E6: mov     edi, large fs:2Ch
0x9004ED: mov     eax, ds:0BA9DE4h
0x9004F2: mov     eax, [edi+eax*4]
0x9004F5: mov     ecx, [eax+1A4h]
0x9004FB: cmp     ecx, [eax+1A8h]
0x900501: jnb     short loc_900525
0x900503: mov     ecx, [ebx+1A4h]
0x900509: mov     dword ptr [ecx], offset aStgetspheres; "StgetSpheres"
0x90050F: rdtsc
0x900511: mov     [esp+80h+var_64], eax
0x900515: mov     edx, [esp+80h+var_64]
0x900519: mov     [ecx+4], edx
0x90051C: add     ecx, 0Ch
0x90051F: mov     [ebx+1A4h], ecx
0x900525: mov     ecx, [esp+80h+var_68]
0x900529: mov     eax, [esi]
0x90052B: push    ecx
0x90052C: mov     ecx, esi
0x90052E: call    dword ptr [eax+20h]
0x900531: mov     edx, ds:0BA9DE4h
0x900537: mov     esi, eax
0x900539: mov     eax, [edi+edx*4]
0x90053C: mov     ecx, [eax+1A4h]
0x900542: cmp     ecx, [eax+1A8h]
0x900548: jnb     short loc_90056C
0x90054A: mov     ecx, [ebx+1A4h]
0x900550: mov     dword ptr [ecx], offset aSttransform; "Sttransform"
0x900556: rdtsc
0x900558: mov     [esp+80h+var_64], eax
0x90055C: mov     edx, [esp+80h+var_64]
0x900560: mov     [ecx+4], edx
0x900563: add     ecx, 0Ch
0x900566: mov     [ebx+1A4h], ecx
0x90056C: mov     edi, [esp+80h+var_60]
0x900570: mov     ecx, [esp+80h+var_68]
0x900574: movaps  xmm1, [esp+80h+var_40]
0x900579: movaps  xmm2, [esp+80h+anonymous_0]
0x90057E: movaps  xmm3, [esp+80h+anonymous_1]
0x900583: movaps  xmm4, [esp+80h+anonymous_2]
0x900588: mov     edx, edi
0x90058A: mov     eax, esi
0x90058C: sub     ecx, esi
0x90058E: mov     edi, edi
0x900590: movaps  xmm0, xmmword ptr [eax]
0x900593: fld     dword ptr [eax+0Ch]
0x900596: movaps  xmm5, xmm0
0x900599: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x90059D: movaps  xmm6, xmm3
0x9005A0: mulps   xmm6, xmm5
0x9005A3: movaps  xmm5, xmm0
0x9005A6: shufps  xmm5, xmm0, 55h ; 'U'
0x9005AA: movaps  xmm7, xmm2
0x9005AD: mulps   xmm7, xmm5
0x9005B0: movaps  xmm5, xmm0
0x9005B3: shufps  xmm5, xmm0, 0
0x9005B7: movaps  xmm0, xmm1
0x9005BA: mulps   xmm0, xmm5
0x9005BD: addps   xmm6, xmm4
0x9005C0: addps   xmm0, xmm7
0x9005C3: addps   xmm0, xmm6
0x9005C6: movaps  xmmword ptr [ecx+eax], xmm0
0x9005CA: fstp    dword ptr [ecx+eax+0Ch]
0x9005CE: add     eax, 10h
0x9005D1: dec     edx
0x9005D2: test    edx, edx
0x9005D4: jg      short loc_900590
0x9005D6: mov     ecx, ds:0BA9DE4h
0x9005DC: mov     eax, large fs:2Ch
0x9005E2: mov     eax, [eax+ecx*4]
0x9005E5: mov     edx, [eax+1A4h]
0x9005EB: cmp     edx, [eax+1A8h]
0x9005F1: jnb     short loc_900615
0x9005F3: mov     ecx, [ebx+1A4h]
0x9005F9: mov     dword ptr [ecx], offset aStcollide; "StCollide"
0x9005FF: rdtsc
0x900601: mov     [esp+80h+var_60], eax
0x900605: mov     eax, [esp+80h+var_60]
0x900609: mov     [ecx+4], eax
0x90060C: add     ecx, 0Ch
0x90060F: mov     [ebx+1A4h], ecx
0x900615: mov     ecx, [ebx+19Ch]
0x90061B: test    ecx, ecx
0x90061D: jnz     short loc_900625
0x90061F: mov     ecx, ds:0BA7D9Ch
0x900625: mov     eax, [esp+80h+var_5C]
0x900629: mov     edx, [ecx+20h]
0x90062C: add     eax, 10h
0x90062F: and     eax, 0FFFFFFF0h
0x900632: lea     esi, [edx+eax]
0x900635: cmp     esi, [ecx+2Ch]
0x900638: ja      short loc_900641
0x90063A: mov     [ecx+20h], esi
0x90063D: mov     esi, edx
0x90063F: jmp     short loc_900649
0x900641: mov     edx, [ecx]
0x900643: push    eax
0x900644: call    dword ptr [edx+0Ch]
0x900647: mov     esi, eax
0x900649: mov     ecx, [ebp+arg_8]
0x90064C: mov     edx, [ecx+8]
0x90064F: mov     eax, [esp+80h+var_68]
0x900653: mov     ecx, [esp+80h+var_58]
0x900657: mov     [esp+80h+var_44], edx
0x90065B: push    esi
0x90065C: lea     edx, [esp+84h+var_4C]
0x900660: mov     [esp+84h+var_4C], eax
0x900664: mov     eax, [ecx]
0x900666: push    edx
0x900667: mov     [esp+88h+var_48], edi
0x90066B: call    dword ptr [eax+1Ch]
0x90066E: mov     ecx, ds:0BA9DE4h
0x900674: mov     eax, large fs:2Ch
0x90067A: mov     eax, [eax+ecx*4]
0x90067D: mov     edx, [eax+1A4h]
0x900683: cmp     edx, [eax+1A8h]
0x900689: jnb     short loc_9006AD
0x90068B: mov     ecx, [ebx+1A4h]
0x900691: mov     dword ptr [ecx], offset aStexamine; "StExamine"
0x900697: rdtsc
0x900699: mov     [esp+80h+var_58], eax
0x90069D: mov     eax, [esp+80h+var_58]
0x9006A1: mov     [ecx+4], eax
0x9006A4: add     ecx, 0Ch
0x9006A7: mov     [ebx+1A4h], ecx
0x9006AD: lea     edx, [edi-1]
0x9006B0: test    edx, edx
0x9006B2: jl      short loc_9006E7
0x9006B4: lea     ecx, [esi+0Ch]
0x9006B7: jmp     short loc_9006C0
0x9006B9: align 10h
0x9006C0: fld     dword ptr [ecx]
0x9006C2: fcomp   dword ptr ds:0A2FAA8h
0x9006C8: fnstsw  ax
0x9006CA: test    ah, 5
0x9006CD: jnp     short loc_9006D7
0x9006CF: add     ecx, 10h
0x9006D2: dec     edx
0x9006D3: jns     short loc_9006C0
0x9006D5: jmp     short loc_9006E7
0x9006D7: mov     eax, [ebp+arg_4]
0x9006DA: mov     ecx, [ebp+arg_C]
0x9006DD: mov     edx, [ecx]
0x9006DF: push    eax
0x9006E0: mov     eax, [ebp+arg_0]
0x9006E3: push    eax
0x9006E4: call    dword ptr [edx+4]
0x9006E7: mov     ecx, [ebx+19Ch]
0x9006ED: test    ecx, ecx
0x9006EF: jnz     short loc_9006F7
0x9006F1: mov     ecx, ds:0BA7D9Ch
0x9006F7: cmp     esi, [ecx+28h]
0x9006FA: mov     [ecx+20h], esi
0x9006FD: jnz     short loc_900705
0x9006FF: mov     edx, [ecx]
0x900701: push    esi
0x900702: call    dword ptr [edx+10h]
0x900705: mov     ecx, [ebx+19Ch]
0x90070B: test    ecx, ecx
0x90070D: jnz     short loc_900715
0x90070F: mov     ecx, ds:0BA7D9Ch
0x900715: mov     eax, [esp+80h+var_68]
0x900719: cmp     eax, [ecx+28h]
0x90071C: mov     [ecx+20h], eax
0x90071F: jnz     short loc_900727
0x900721: mov     edx, [ecx]
0x900723: push    eax
0x900724: call    dword ptr [edx+10h]
0x900727: mov     ecx, ds:0BA9DE4h
0x90072D: mov     eax, large fs:2Ch
0x900733: mov     eax, [eax+ecx*4]
0x900736: mov     edx, [eax+1A4h]
0x90073C: cmp     edx, [eax+1A8h]
0x900742: jnb     short loc_900766
0x900744: mov     ecx, [ebx+1A4h]
0x90074A: mov     dword ptr [ecx], offset aLt_0; "lt"
0x900750: rdtsc
0x900752: mov     [esp+80h+var_58], eax
0x900756: mov     eax, [esp+80h+var_58]
0x90075A: mov     [ecx+4], eax
0x90075D: add     ecx, 0Ch
0x900760: mov     [ebx+1A4h], ecx
0x900766: pop     edi
0x900767: pop     esi
0x900768: pop     ebx
0x900769: mov     esp, ebp
0x90076B: pop     ebp
0x90076C: retn
