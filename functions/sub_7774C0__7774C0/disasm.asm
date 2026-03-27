0x7774C0: sub     esp, 168h
0x7774C6: mov     eax, ds:0B30AACh
0x7774CB: xor     eax, esp
0x7774CD: mov     [esp+168h+var_4], eax
0x7774D4: mov     eax, [esp+168h+arg_10]
0x7774DB: mov     edx, [esp+168h+arg_14]
0x7774E2: push    ebx
0x7774E3: mov     ebx, [esp+16Ch+arg_8]
0x7774EA: push    ebp
0x7774EB: push    esi
0x7774EC: mov     esi, [esp+174h+arg_0]
0x7774F3: mov     [esp+174h+var_158], eax
0x7774F7: mov     eax, [esi+1Ch]
0x7774FA: mov     [esp+174h+var_164], eax
0x7774FE: movzx   eax, byte ptr [esi+2Ch]
0x777502: mov     [esp+174h+var_144], edx
0x777506: mov     edx, [esi+20h]
0x777509: and     eax, 3Fh
0x77750C: cmp     eax, 8
0x77750F: mov     [esp+174h+var_120], edx
0x777513: mov     edx, [esi+24h]
0x777516: push    edi
0x777517: mov     [esp+178h+var_138], ecx
0x77751B: mov     [esp+178h+var_128], esi
0x77751F: mov     [esp+178h+var_130], eax
0x777523: mov     [esp+178h+var_134], edx
0x777527: jbe     short loc_777531
0x777529: mov     [esp+178h+var_130], 8
0x777531: movzx   eax, word ptr [ebx+20h]
0x777535: movzx   edx, word ptr [ebx+1Ch]
0x777539: mov     ebp, [ebx+0Ch]
0x77753C: mov     [esp+178h+var_148], eax
0x777540: xor     eax, eax
0x777542: mov     [esp+178h+ArgList], eax
0x777546: mov     [esp+178h+var_14C], eax
0x77754A: mov     [esp+178h+var_140], edx
0x77754E: lea     eax, [esp+178h+var_12C]
0x777552: push    eax
0x777553: lea     edx, [esp+17Ch+var_154]
0x777557: push    edx
0x777558: lea     eax, [esp+180h+var_124]
0x77755C: push    eax
0x77755D: lea     edx, [esp+184h+var_150]
0x777561: push    edx
0x777562: lea     eax, [esp+188h+var_168]
0x777566: push    eax
0x777567: lea     edx, [esp+18Ch+var_14C]
0x77756B: push    edx
0x77756C: lea     eax, [esp+190h+ArgList]
0x777570: push    eax
0x777571: push    ebx
0x777572: push    esi
0x777573: mov     [esp+19Ch+var_13C], ebp
0x777577: call    sub_776DD0
0x77757C: mov     ecx, [esp+178h+ArgList]
0x777580: mov     edi, [ebx+28h]
0x777583: push    ecx
0x777584: mov     ecx, edi
0x777586: call    sub_7780A0
0x77758B: cmp     dword ptr [edi+1Ch], 0
0x77758F: jbe     short loc_77759A
0x777591: mov     edx, [edi+20h]
0x777594: mov     eax, [esp+178h+var_14C]
0x777598: mov     [edx], eax
0x77759A: cmp     [esp+178h+var_144], 0
0x77759F: mov     [esp+178h+var_159], 1
0x7775A4: jz      short loc_7775B8
0x7775A6: mov     ecx, [esp+178h+var_158]
0x7775AA: mov     [esp+178h+var_158], ecx
0x7775AE: mov     [esp+178h+var_159], 0
0x7775B3: jmp     loc_77766B
0x7775B8: mov     eax, [esp+178h+var_158]
0x7775BC: test    eax, eax
0x7775BE: jz      short loc_77760F
0x7775C0: mov     eax, [eax+8]
0x7775C3: test    eax, eax
0x7775C5: jz      short loc_77760F
0x7775C7: mov     dx, [esi+2Eh]
0x7775CB: and     dx, 0F000h
0x7775D0: cmp     dx, 8000h
0x7775D5: jz      short loc_77760F
0x7775D7: mov     ecx, [eax]
0x7775D9: lea     edx, [esp+178h+var_11C]
0x7775DD: push    edx
0x7775DE: push    eax
0x7775DF: mov     eax, [ecx+34h]
0x7775E2: call    eax
0x7775E4: cmp     dword ptr [esp+178h+var_11C], 64h ; 'd'
0x7775E9: jnz     short loc_77760F
0x7775EB: mov     ecx, [esp+178h+ArgList]
0x7775EF: cmp     [esp+178h+var_108], ecx
0x7775F3: jnz     short loc_77760F
0x7775F5: movzx   edx, word ptr [esp+178h+var_140]
0x7775FA: imul    edx, [esp+178h+var_14C]
0x7775FF: cmp     [esp+178h+var_10C], edx
0x777603: jb      short loc_77760F
0x777605: mov     eax, [esp+178h+var_158]
0x777609: mov     [esp+178h+var_158], eax
0x77760D: jmp     short loc_77764E
0x77760F: mov     ecx, [esp+178h+var_138]
0x777613: push    0
0x777615: push    edi
0x777616: call    NiGeometryBufferData__RefreshVBChips
0x77761B: test    al, al
0x77761D: jnz     short loc_777626
0x77761F: xor     eax, eax
0x777621: jmp     loc_777A22
0x777626: cmp     dword ptr [edi+1Ch], 0
0x77762A: jbe     short loc_777637
0x77762C: mov     eax, [edi+24h]
0x77762F: mov     ecx, [eax]
0x777631: mov     [esp+178h+var_158], ecx
0x777635: jmp     short loc_77763F
0x777637: mov     [esp+178h+var_158], 0
0x77763F: mov     eax, [esp+178h+var_158]
0x777643: mov     [esp+178h+arg_C], 0FFFh
0x77764E: mov     ecx, [eax+10h]
0x777651: mov     edx, [eax+14h]
0x777654: mov     esi, [eax+0Ch]
0x777657: mov     eax, [eax+8]
0x77765A: push    ecx; int
0x77765B: mov     ecx, [esp+17Ch+var_138]
0x77765F: push    edx; Size
0x777660: push    esi; int
0x777661: push    eax; int
0x777662: call    sub_776C90
0x777667: mov     [esp+178h+var_144], eax
0x77766B: mov     edx, [esp+178h+var_168]
0x77766F: mov     eax, [esp+178h+var_144]
0x777673: mov     esi, [esp+178h+var_164]
0x777677: add     eax, edx
0x777679: test    esi, esi
0x77767B: jz      loc_77780F
0x777681: test    byte ptr [esp+178h+arg_C], 1
0x777689: jz      loc_77780F
0x77768F: movzx   ecx, word ptr [esp+178h+var_140]
0x777694: xor     edx, edx
0x777696: test    ecx, ecx
0x777698: mov     [esp+178h+var_164], ecx
0x77769C: jbe     short loc_7776CD
0x77769E: mov     edi, edi
0x7776A0: movzx   ecx, word ptr [ebp+edx*2+0]
0x7776A5: lea     ecx, [ecx+ecx*2]
0x7776A8: mov     edi, [esi+ecx*4]
0x7776AB: lea     ecx, [esi+ecx*4]
0x7776AE: mov     [eax], edi
0x7776B0: mov     edi, [ecx+4]
0x7776B3: mov     [eax+4], edi
0x7776B6: mov     ecx, [ecx+8]
0x7776B9: mov     [eax+8], ecx
0x7776BC: add     eax, [esp+178h+var_14C]
0x7776C0: add     edx, 1
0x7776C3: cmp     edx, [esp+178h+var_164]
0x7776C7: jb      short loc_7776A0
0x7776C9: mov     ecx, [esp+178h+var_164]
0x7776CD: test    ecx, ecx
0x7776CF: mov     edx, [esp+178h+var_150]
0x7776D3: mov     eax, [esp+178h+var_144]
0x7776D7: mov     esi, [ebx+8]
0x7776DA: lea     edi, [eax+edx]
0x7776DD: mov     [esp+178h+ArgList], 0
0x7776E5: jbe     loc_77780F
0x7776EB: movzx   ebx, word ptr [esp+178h+var_148]
0x7776F0: fld1
0x7776F2: xor     edx, edx
0x7776F4: cmp     ebx, 4
0x7776F7: fstp    [esp+178h+var_168]
0x7776FB: jl      short loc_777744
0x7776FD: lea     ecx, [ebx-4]
0x777700: shr     ecx, 2
0x777703: add     ecx, 1
0x777706: lea     eax, [esi+8]
0x777709: lea     edx, ds:0[ecx*4]
0x777710: fld     [esp+178h+var_168]
0x777714: add     eax, 10h
0x777717: sub     ecx, 1
0x77771A: fsub    dword ptr [eax-18h]
0x77771D: fstp    [esp+178h+var_150]
0x777721: fld     [esp+178h+var_150]
0x777725: fsub    dword ptr [eax-14h]
0x777728: fstp    [esp+178h+var_150]
0x77772C: fld     [esp+178h+var_150]
0x777730: fsub    dword ptr [eax-10h]
0x777733: fstp    [esp+178h+var_150]
0x777737: fld     [esp+178h+var_150]
0x77773B: fsub    dword ptr [eax-0Ch]
0x77773E: fstp    [esp+178h+var_168]
0x777742: jnz     short loc_777710
0x777744: cmp     edx, ebx
0x777746: jnb     short loc_777763
0x777748: jmp     short loc_777750
0x77774A: align 10h
0x777750: fld     [esp+178h+var_168]
0x777754: add     edx, 1
0x777757: cmp     edx, ebx
0x777759: fsub    dword ptr [esi+edx*4-4]
0x77775D: fstp    [esp+178h+var_168]
0x777761: jb      short loc_777750
0x777763: fld     [esp+178h+var_168]
0x777767: fld     st
0x777769: fabs
0x77776B: fstp    [esp+178h+var_150]
0x77776F: fld     [esp+178h+var_150]
0x777773: fcomp   dword ptr ds:0A3C778h
0x777779: fnstsw  ax
0x77777B: test    ah, 41h
0x77777E: jnz     short loc_7777AF
0x777780: mov     ecx, [esp+178h+ArgList]
0x777784: sub     esp, 10h
0x777787: fst     [esp+188h+var_180]
0x77778B: lea     edx, [esp+188h+DstBuf]
0x777792: fld1
0x777794: fsubrp  st(1), st
0x777796: fstp    [esp+188h+var_188]
0x777799: push    ecx; ArgList
0x77779A: push    offset aIllegalWeights; "ILLEGAL WEIGHTS! Vertex %4d - Weight Su"...
0x77779F: push    100h; SizeInBytes
0x7777A4: push    edx; DstBuf
0x7777A5: call    sub_6C5D40
0x7777AA: add     esp, 20h
0x7777AD: jmp     short loc_7777B1
0x7777AF: fstp    st
0x7777B1: lea     edx, [ebx-1]
0x7777B4: xor     ecx, ecx
0x7777B6: test    edx, edx
0x7777B8: jle     short loc_7777D0
0x7777BA: xor     eax, eax
0x7777BC: lea     esp, [esp+0]
0x7777C0: fld     dword ptr [esi+eax*4]
0x7777C3: add     ecx, 1
0x7777C6: fstp    dword ptr [edi+eax*4]
0x7777C9: movzx   eax, cx
0x7777CC: cmp     eax, edx
0x7777CE: jl      short loc_7777C0
0x7777D0: mov     eax, [esp+178h+var_148]
0x7777D4: cmp     ax, 3
0x7777D8: jz      short loc_7777E0
0x7777DA: cmp     ax, 1
0x7777DE: jnz     short loc_7777ED
0x7777E0: movzx   eax, cx
0x7777E3: add     eax, eax
0x7777E5: add     eax, eax
0x7777E7: fld     dword ptr [eax+esi]
0x7777EA: fstp    dword ptr [eax+edi]
0x7777ED: add     edi, [esp+178h+var_14C]
0x7777F1: lea     eax, ds:0[ebx*4]
0x7777F8: add     esi, eax
0x7777FA: mov     eax, [esp+178h+ArgList]
0x7777FE: add     eax, 1
0x777801: cmp     eax, [esp+178h+var_164]
0x777805: mov     [esp+178h+ArgList], eax
0x777809: jb      loc_7776F0
0x77780F: mov     edi, [esp+178h+var_120]
0x777813: test    edi, edi
0x777815: jz      short loc_777867
0x777817: test    byte ptr [esp+178h+arg_C], 2
0x77781F: jz      short loc_777867
0x777821: movzx   esi, word ptr [esp+178h+var_140]
0x777826: mov     eax, [esp+178h+var_124]
0x77782A: mov     ecx, [esp+178h+var_144]
0x77782E: add     eax, ecx
0x777830: xor     edx, edx
0x777832: test    esi, esi
0x777834: jbe     short loc_777867
0x777836: jmp     short loc_777840
0x777838: align 10h
0x777840: movzx   ecx, word ptr [ebp+edx*2+0]
0x777845: lea     ecx, [ecx+ecx*2]
0x777848: mov     ebx, [edi+ecx*4]
0x77784B: lea     ecx, [edi+ecx*4]
0x77784E: mov     [eax], ebx
0x777850: mov     ebx, [ecx+4]
0x777853: mov     [eax+4], ebx
0x777856: mov     ecx, [ecx+8]
0x777859: mov     [eax+8], ecx
0x77785C: add     eax, [esp+178h+var_14C]
0x777860: add     edx, 1
0x777863: cmp     edx, esi
0x777865: jb      short loc_777840
0x777867: mov     edi, [esp+178h+var_134]
0x77786B: test    edi, edi
0x77786D: jz      loc_777956
0x777873: test    byte ptr [esp+178h+arg_C], 4
0x77787B: jz      loc_777956
0x777881: mov     eax, [esp+178h+var_144]
0x777885: mov     edx, [esp+178h+var_154]
0x777889: add     edx, eax
0x77788B: movzx   eax, word ptr [esp+178h+var_140]
0x777890: xor     ecx, ecx
0x777892: test    eax, eax
0x777894: jbe     loc_777956
0x77789A: jmp     short loc_7778A4
0x77789C: align 10h
0x7778A0: mov     edi, [esp+178h+var_134]
0x7778A4: movzx   eax, word ptr [ebp+ecx*2+0]
0x7778A9: shl     eax, 4
0x7778AC: fld     dword ptr [eax+edi+0Ch]
0x7778B0: fmul    qword ptr ds:0A3DDD8h
0x7778B6: fstp    [esp+178h+var_154]
0x7778BA: fld     [esp+178h+var_154]
0x7778BE: fistp   [esp+178h+var_164]
0x7778C2: movzx   esi, word ptr [ebp+ecx*2+0]
0x7778C7: mov     eax, [esp+178h+var_164]
0x7778CB: shl     esi, 4
0x7778CE: fld     dword ptr [esi+edi]
0x7778D1: fmul    qword ptr ds:0A3DDD8h
0x7778D7: fstp    [esp+178h+var_154]
0x7778DB: fld     [esp+178h+var_154]
0x7778DF: fistp   [esp+178h+var_168]
0x7778E3: movzx   ebx, word ptr [ebp+ecx*2+0]
0x7778E8: mov     esi, [esp+178h+var_168]
0x7778EC: shl     ebx, 4
0x7778EF: fld     dword ptr [ebx+edi+4]
0x7778F3: fmul    qword ptr ds:0A3DDD8h
0x7778F9: fstp    [esp+178h+var_154]
0x7778FD: fld     [esp+178h+var_154]
0x777901: fistp   [esp+178h+ArgList]
0x777905: movzx   ebx, word ptr [ebp+ecx*2+0]
0x77790A: mov     ebp, [esp+178h+var_134]
0x77790E: mov     edi, [esp+178h+ArgList]
0x777912: shl     ebx, 4
0x777915: fld     dword ptr [ebx+ebp+8]
0x777919: fmul    qword ptr ds:0A3DDD8h
0x77791F: fstp    [esp+178h+var_154]
0x777923: fld     [esp+178h+var_154]
0x777927: fistp   [esp+178h+var_148]
0x77792B: mov     ebp, [esp+178h+var_13C]
0x77792F: shl     eax, 8
0x777932: or      eax, esi
0x777934: shl     eax, 8
0x777937: or      eax, edi
0x777939: shl     eax, 8
0x77793C: or      eax, [esp+178h+var_148]
0x777940: add     ecx, 1
0x777943: mov     [edx], eax
0x777945: movzx   eax, word ptr [esp+178h+var_140]
0x77794A: add     edx, [esp+178h+var_14C]
0x77794E: cmp     ecx, eax
0x777950: jb      loc_7778A0
0x777956: test    byte ptr [esp+178h+arg_C], 8
0x77795E: jz      short loc_7779CA
0x777960: xor     ebx, ebx
0x777962: cmp     [esp+178h+var_130], ebx
0x777966: mov     [esp+178h+var_13C], ebx
0x77796A: jbe     short loc_7779CA
0x77796C: mov     ecx, [esp+178h+var_12C]
0x777970: mov     edx, [esp+178h+var_144]
0x777974: movzx   edi, word ptr [esp+178h+var_140]
0x777979: lea     esi, [edx+ecx]
0x77797C: mov     [esp+178h+var_148], esi
0x777980: mov     ecx, [esp+178h+var_128]; this
0x777984: push    ebx; a2
0x777985: call    sub_7282F0
0x77798A: xor     ecx, ecx
0x77798C: test    edi, edi
0x77798E: jbe     short loc_7779B2
0x777990: movzx   edx, word ptr [ebp+ecx*2+0]
0x777995: mov     ebx, [eax+edx*8]
0x777998: lea     edx, [eax+edx*8]
0x77799B: mov     [esi], ebx
0x77799D: mov     edx, [edx+4]
0x7779A0: mov     [esi+4], edx
0x7779A3: add     esi, [esp+178h+var_14C]
0x7779A7: add     ecx, 1
0x7779AA: cmp     ecx, edi
0x7779AC: jb      short loc_777990
0x7779AE: mov     ebx, [esp+178h+var_13C]
0x7779B2: mov     esi, [esp+178h+var_148]
0x7779B6: add     ebx, 1
0x7779B9: add     esi, 8
0x7779BC: cmp     ebx, [esp+178h+var_130]
0x7779C0: mov     [esp+178h+var_13C], ebx
0x7779C4: mov     [esp+178h+var_148], esi
0x7779C8: jb      short loc_777980
0x7779CA: cmp     [esp+178h+var_159], 0
0x7779CF: jz      short loc_777A1E
0x7779D1: mov     esi, [esp+178h+var_138]
0x7779D5: mov     ecx, [esi+4Ch]
0x7779D8: mov     eax, [esp+178h+var_158]
0x7779DC: mov     edx, [esi+40h]
0x7779DF: mov     edi, [eax+8]
0x7779E2: mov     eax, [esi+48h]
0x7779E5: push    ecx; Size
0x7779E6: push    edx; Src
0x7779E7: push    eax; Dst
0x7779E8: call    _memcpy
0x7779ED: xor     ecx, ecx
0x7779EF: lea     eax, [esi+80h]
0x7779F5: add     esp, 0Ch
0x7779F8: mov     [esi+48h], ecx
0x7779FB: mov     [esi+4Ch], ecx
0x7779FE: add     dword ptr [eax+7Ch], 0FFFFFFFFh
0x777A02: jnz     short loc_777A07
0x777A04: mov     [eax+78h], ecx
0x777A07: push    eax; lpCriticalSection
0x777A08: call    dword ptr ds:0A28074h
0x777A0E: mov     ecx, [edi]
0x777A10: mov     edx, [ecx+30h]
0x777A13: push    edi
0x777A14: call    edx
0x777A16: test    eax, eax
0x777A18: jl      loc_77761F
0x777A1E: mov     eax, [esp+178h+var_158]
0x777A22: mov     ecx, [esp+178h+var_4]
0x777A29: pop     edi
0x777A2A: pop     esi
0x777A2B: pop     ebp
0x777A2C: pop     ebx
0x777A2D: xor     ecx, esp
0x777A2F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x777A34: add     esp, 168h
0x777A3A: retn    18h
