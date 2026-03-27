0x45B300: push    0FFFFFFFFh
0x45B302: push    offset SEH_45B300
0x45B307: mov     eax, large fs:0
0x45B30D: push    eax
0x45B30E: push    ecx
0x45B30F: push    ebx
0x45B310: push    ebp
0x45B311: push    esi
0x45B312: push    edi
0x45B313: mov     eax, ds:0B30AACh
0x45B318: xor     eax, esp
0x45B31A: push    eax
0x45B31B: lea     eax, [esp+24h+var_C]
0x45B31F: mov     large fs:0, eax
0x45B325: mov     esi, ecx
0x45B327: xor     ebx, ebx
0x45B329: mov     eax, ds:0BA9DE4h
0x45B32E: mov     ecx, large fs:2Ch
0x45B335: mov     edx, [ecx+eax*4]
0x45B338: mov     [esi+4], ebx
0x45B33B: mov     [esi+8], ebx
0x45B33E: mov     [esi+0Ch], ebx
0x45B341: mov     [esi+14h], ebx
0x45B344: mov     [esi+18h], ebx
0x45B347: mov     [esi+1Ch], ebx
0x45B34A: mov     [esi+20h], ebx
0x45B34D: mov     [esi+24h], ebx
0x45B350: mov     [esi+28h], ebx
0x45B353: mov     [esi+2Ch], ebx
0x45B356: mov     [esi+30h], ebx
0x45B359: mov     [esi+34h], ebx
0x45B35C: mov     [esi+38h], ebx
0x45B35F: mov     [esi+3Ch], ebx
0x45B362: mov     [esi+40h], ebx
0x45B365: mov     [esi+4Ch], ebx
0x45B368: mov     [esi+50h], ebx
0x45B36B: mov     [esi+64h], ebx
0x45B36E: mov     [esi+68h], ebx
0x45B371: mov     [esi+6Ch], ebx
0x45B374: mov     [esi+70h], bl
0x45B377: mov     [esi+71h], bl
0x45B37A: mov     byte ptr [esi+7Dh], 1
0x45B37E: mov     [esi+80h], ebx
0x45B384: mov     [esi+84h], ebx
0x45B38A: mov     [esi+88h], ebx
0x45B390: mov     [esi+8Ch], ebx
0x45B396: mov     [esi+90h], ebx
0x45B39C: mov     [esi+0A4h], ebx
0x45B3A2: mov     [esi+0A8h], bl
0x45B3A8: mov     [esi+0A9h], bl
0x45B3AE: mov     [esi+0AAh], bl
0x45B3B4: mov     [esi+0ABh], bl
0x45B3BA: mov     [esi+0ACh], ebx
0x45B3C0: mov     [esi+1C0h], ebx
0x45B3C6: push    10h; Size
0x45B3C8: mov     ds:0B33B00h, esi
0x45B3CE: mov     [edx+185h], bl
0x45B3D4: call    FormHeapAlloc
0x45B3D9: add     esp, 4
0x45B3DC: mov     [esp+24h+var_10], eax
0x45B3E0: cmp     eax, ebx
0x45B3E2: mov     [esp+24h+var_4], ebx
0x45B3E6: jz      short loc_45B3F1
0x45B3E8: mov     ecx, eax; this
0x45B3EA: call    ??0ChangesMap@@QAE@XZ
0x45B3EF: jmp     short loc_45B3F3
0x45B3F1: xor     eax, eax
0x45B3F3: or      ebp, 0FFFFFFFFh
0x45B3F6: push    10h; Size
0x45B3F8: mov     [esp+28h+var_4], ebp
0x45B3FC: mov     [esi], eax
0x45B3FE: call    FormHeapAlloc
0x45B403: add     esp, 4
0x45B406: mov     [esp+24h+var_10], eax
0x45B40A: cmp     eax, ebx
0x45B40C: mov     [esp+24h+var_4], 1
0x45B414: jz      short loc_45B41F
0x45B416: mov     ecx, eax; this
0x45B418: call    ??0InteriorCellNewReferencesMap@@QAE@XZ
0x45B41D: jmp     short loc_45B421
0x45B41F: xor     eax, eax
0x45B421: push    10h; Size
0x45B423: mov     [esp+28h+var_4], ebp
0x45B427: mov     [esi+8], eax
0x45B42A: call    FormHeapAlloc
0x45B42F: add     esp, 4
0x45B432: mov     [esp+24h+var_10], eax
0x45B436: cmp     eax, ebx
0x45B438: mov     [esp+24h+var_4], 2
0x45B440: jz      short loc_45B44B
0x45B442: mov     ecx, eax; this
0x45B444: call    ??0ExteriorCellNewReferencesMap@@QAE@XZ
0x45B449: jmp     short loc_45B44D
0x45B44B: xor     eax, eax
0x45B44D: push    10h; Size
0x45B44F: mov     [esp+28h+var_4], ebp
0x45B453: mov     [esi+0Ch], eax
0x45B456: call    FormHeapAlloc
0x45B45B: add     esp, 4
0x45B45E: mov     [esp+24h+var_10], eax
0x45B462: cmp     eax, ebx
0x45B464: mov     [esp+24h+var_4], 3
0x45B46C: jz      short loc_45B477
0x45B46E: mov     ecx, eax; this
0x45B470: call    ??0ExteriorCellNewReferencesMap@@QAE@XZ
0x45B475: jmp     short loc_45B479
0x45B477: xor     eax, eax
0x45B479: push    10h; Size
0x45B47B: mov     [esp+28h+var_4], ebp
0x45B47F: mov     [esi+10h], eax
0x45B482: call    FormHeapAlloc
0x45B487: add     esp, 4
0x45B48A: mov     [esp+24h+var_10], eax
0x45B48E: cmp     eax, ebx
0x45B490: mov     [esp+24h+var_4], 4
0x45B498: jz      short loc_45B4A3
0x45B49A: mov     ecx, eax; this
0x45B49C: call    ??0NumericIDBufferMap@@QAE@XZ
0x45B4A1: jmp     short loc_45B4A5
0x45B4A3: xor     eax, eax
0x45B4A5: push    10h; Size
0x45B4A7: mov     [esp+28h+var_4], ebp
0x45B4AB: mov     [esi+54h], eax
0x45B4AE: call    FormHeapAlloc
0x45B4B3: add     esp, 4
0x45B4B6: mov     [esp+24h+var_10], eax
0x45B4BA: cmp     eax, ebx
0x45B4BC: mov     [esp+24h+var_4], 5
0x45B4C4: jz      short loc_45B4CF
0x45B4C6: mov     ecx, eax; this
0x45B4C8: call    ??0NumericIDBufferMap@@QAE@XZ
0x45B4CD: jmp     short loc_45B4D1
0x45B4CF: xor     eax, eax
0x45B4D1: push    10h; Size
0x45B4D3: mov     [esp+28h+var_4], ebp
0x45B4D7: mov     [esi+58h], eax
0x45B4DA: call    FormHeapAlloc
0x45B4DF: add     esp, 4
0x45B4E2: mov     [esp+24h+var_10], eax
0x45B4E6: cmp     eax, ebx
0x45B4E8: mov     [esp+24h+var_4], 6
0x45B4F0: jz      short loc_45B4FB
0x45B4F2: mov     ecx, eax; this
0x45B4F4: call    ??0NumericIDBufferMap@@QAE@XZ
0x45B4F9: jmp     short loc_45B4FD
0x45B4FB: xor     eax, eax
0x45B4FD: push    10h; Size
0x45B4FF: mov     [esp+28h+var_4], ebp
0x45B503: mov     [esi+5Ch], eax
0x45B506: call    FormHeapAlloc
0x45B50B: add     esp, 4
0x45B50E: mov     [esp+24h+var_10], eax
0x45B512: cmp     eax, ebx
0x45B514: mov     [esp+24h+var_4], 7
0x45B51C: jz      short loc_45B527
0x45B51E: mov     ecx, eax; this
0x45B520: call    ??0NumericIDBufferMap@@QAE@XZ
0x45B525: jmp     short loc_45B529
0x45B527: xor     eax, eax
0x45B529: push    18h; Size
0x45B52B: mov     [esp+28h+var_4], ebp
0x45B52F: mov     [esi+60h], eax
0x45B532: call    FormHeapAlloc
0x45B537: mov     edi, eax
0x45B539: add     esp, 4
0x45B53C: mov     [esp+24h+var_10], edi
0x45B540: cmp     edi, ebx
0x45B542: mov     [esp+24h+var_4], 8
0x45B54A: jz      short loc_45B585
0x45B54C: xor     ecx, ecx
0x45B54E: mov     eax, 64h ; 'd'
0x45B553: mov     [edi+8], eax
0x45B556: mov     edx, 4
0x45B55B: mul     edx
0x45B55D: seto    cl
0x45B560: mov     dword ptr [edi], offset ??_7?$NiTLargeArray@I@@6B@
0x45B566: mov     dword ptr [edi+14h], 32h ; '2'
0x45B56D: mov     [edi+0Ch], ebx
0x45B570: mov     [edi+10h], ebx
0x45B573: neg     ecx
0x45B575: or      ecx, eax
0x45B577: push    ecx; Size
0x45B578: call    FormHeapAlloc
0x45B57D: add     esp, 4
0x45B580: mov     [edi+4], eax
0x45B583: jmp     short loc_45B587
0x45B585: xor     edi, edi
0x45B587: mov     [esi+74h], edi
0x45B58A: cmp     [edi+8], ebx
0x45B58D: mov     [esp+24h+var_4], ebp
0x45B591: mov     [esp+24h+var_10], ebx
0x45B595: ja      short loc_45B5A2
0x45B597: mov     eax, [edi+14h]
0x45B59A: push    eax
0x45B59B: mov     ecx, edi
0x45B59D: call    sub_452910
0x45B5A2: lea     ecx, [esp+24h+var_10]
0x45B5A6: push    ecx
0x45B5A7: push    ebx
0x45B5A8: mov     ecx, edi
0x45B5AA: call    sub_446C50
0x45B5AF: push    18h; Size
0x45B5B1: call    FormHeapAlloc
0x45B5B6: mov     edi, eax
0x45B5B8: add     esp, 4
0x45B5BB: mov     [esp+24h+var_10], edi
0x45B5BF: cmp     edi, ebx
0x45B5C1: mov     [esp+24h+var_4], 9
0x45B5C9: jz      short loc_45B604
0x45B5CB: xor     ecx, ecx
0x45B5CD: mov     eax, 5
0x45B5D2: mov     [edi+8], eax
0x45B5D5: mov     edx, 4
0x45B5DA: mul     edx
0x45B5DC: seto    cl
0x45B5DF: mov     dword ptr [edi], offset ??_7?$NiTLargeArray@I@@6B@
0x45B5E5: mov     dword ptr [edi+14h], 1
0x45B5EC: mov     [edi+0Ch], ebx
0x45B5EF: mov     [edi+10h], ebx
0x45B5F2: neg     ecx
0x45B5F4: or      ecx, eax
0x45B5F6: push    ecx; Size
0x45B5F7: call    FormHeapAlloc
0x45B5FC: add     esp, 4
0x45B5FF: mov     [edi+4], eax
0x45B602: jmp     short loc_45B606
0x45B604: xor     edi, edi
0x45B606: mov     [esi+78h], edi
0x45B609: cmp     [edi+8], ebx
0x45B60C: mov     [esp+24h+var_4], ebp
0x45B610: mov     [esp+24h+var_10], ebx
0x45B614: ja      short loc_45B621
0x45B616: mov     eax, [edi+14h]
0x45B619: push    eax
0x45B61A: mov     ecx, edi
0x45B61C: call    sub_452910
0x45B621: lea     ecx, [esp+24h+var_10]
0x45B625: push    ecx
0x45B626: push    ebx
0x45B627: mov     ecx, edi
0x45B629: call    sub_446C50
0x45B62E: xor     eax, eax
0x45B630: mov     [esi+94h], eax
0x45B636: mov     [esi+98h], eax
0x45B63C: mov     [esi+9Ch], eax
0x45B642: mov     [esi+0A0h], eax
0x45B648: mov     al, 7Dh ; '}'
0x45B64A: mov     [esi+71h], al
0x45B64D: mov     [esi+7Ch], al
0x45B650: mov     [esi+70h], bl
0x45B653: mov     eax, esi
0x45B655: mov     ecx, [esp+24h+var_C]
0x45B659: mov     large fs:0, ecx
0x45B660: pop     ecx
0x45B661: pop     edi
0x45B662: pop     esi
0x45B663: pop     ebp
0x45B664: pop     ebx
0x45B665: add     esp, 10h
0x45B668: retn
