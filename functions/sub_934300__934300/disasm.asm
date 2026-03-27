0x934300: push    ebp
0x934301: mov     ebp, esp
0x934303: and     esp, 0FFFFFFF0h
0x934306: sub     esp, 864h
0x93430C: mov     eax, [ebp+arg_8]
0x93430F: push    ebx
0x934310: mov     ebx, [eax+3040h]
0x934316: push    esi
0x934317: mov     esi, [ebp+arg_0]
0x93431A: mov     edx, [esi]
0x93431C: mov     eax, [edx]
0x93431E: xor     ecx, ecx
0x934320: mov     [esp+86Ch+var_854], ecx
0x934324: mov     [esp+86Ch+var_844], eax
0x934328: lea     eax, [ebx+408h]
0x93432E: mov     [esp+86Ch+var_848], ecx
0x934332: cmp     eax, [ebx]
0x934334: push    edi
0x934335: mov     [esp+870h+var_858], eax
0x934339: jnb     loc_934575
0x93433F: mov     [esp+870h+var_840], eax
0x934343: jmp     short loc_934350
0x934345: mov     eax, [esp+870h+var_858]
0x934349: lea     esp, [esp+0]
0x934350: mov     edi, [eax]
0x934352: mov     eax, [ebx+4]
0x934355: mov     ecx, [esp+870h+var_848]
0x934359: lea     edx, [ebx+8]
0x93435C: cmp     edx, eax
0x93435E: mov     [esp+ecx*2+870h+var_400], 0FFFFh
0x934368: mov     byte ptr [esp+870h+var_84C], 0
0x93436D: jnb     loc_9344E1
0x934373: mov     ecx, [edx]
0x934375: cmp     edi, ecx
0x934377: jz      loc_9344B8
0x93437D: movaps  xmm0, xmmword ptr [edi]
0x934380: movaps  xmm4, xmmword ptr [ecx+10h]
0x934384: movaps  xmm1, xmmword ptr [ecx]
0x934387: movaps  xmm2, xmmword ptr [edi+10h]
0x93438B: mov     eax, [esp+870h+var_844]
0x93438F: mov     eax, [eax+0Ch]
0x934392: subps   xmm1, xmm0
0x934395: movaps  xmm0, xmm2
0x934398: mulps   xmm0, xmm1
0x93439B: mulps   xmm2, xmm4
0x93439E: movaps  xmm3, xmm4
0x9343A1: mulps   xmm3, xmm1
0x9343A4: movaps  xmm1, xmm0
0x9343A7: shufps  xmm1, xmm3, 44h ; 'D'
0x9343AB: movaps  xmm4, xmm2
0x9343AE: movaps  xmm5, xmm2
0x9343B1: shufps  xmm4, xmm2, 44h ; 'D'
0x9343B5: shufps  xmm5, xmm2, 0EEh ; 'î'
0x9343B9: movaps  xmm2, xmm1
0x9343BC: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x9343C0: shufps  xmm0, xmm3, 0EEh ; 'î'
0x9343C4: shufps  xmm2, xmm4, 0DDh ; 'Ý'
0x9343C8: shufps  xmm0, xmm5, 88h ; 'ˆ'
0x9343CC: addps   xmm1, xmm2
0x9343CF: addps   xmm1, xmm0
0x9343D2: movaps  [esp+870h+var_830], xmm1
0x9343D7: fld     dword ptr [esp+870h+var_830+8]
0x9343DB: fsub    dword ptr ds:0A2F948h
0x9343E1: mov     [esp+870h+var_838], eax
0x9343E5: mov     eax, [esi+8]
0x9343E8: mov     eax, [eax+28h]
0x9343EB: fmul    [esp+870h+var_838]
0x9343EF: fld     dword ptr [esp+870h+var_830+4]
0x9343F3: mov     [esp+870h+var_83C], eax
0x9343F7: fchs
0x9343F9: fadd    st, st(1)
0x9343FB: fstp    [esp+870h+var_850]
0x9343FF: fadd    dword ptr [esp+870h+var_830]
0x934403: fstp    [esp+870h+var_834]
0x934407: fld     [esp+870h+var_850]
0x93440B: fcomp   [esp+870h+var_838]
0x93440F: fnstsw  ax
0x934411: test    ah, 41h
0x934414: jz      loc_9344B8
0x93441A: fld     dword ptr [esp+870h+var_830+8]
0x93441E: fcomp   dword ptr ds:0AA1C60h
0x934424: fnstsw  ax
0x934426: test    ah, 41h
0x934429: jnz     short loc_934437
0x93442B: cmp     word ptr [ecx+20h], 0FFFFh
0x934431: jz      loc_9344B8
0x934437: cmp     word ptr [ecx+20h], 0FFFFh
0x93443D: jnz     short loc_93447E
0x93443F: fld     dword ptr [esp+870h+var_830+8]
0x934443: fcomp   dword ptr ds:0A524B0h
0x934449: fnstsw  ax
0x93444B: test    ah, 5
0x93444E: jp      short loc_93447E
0x934450: fld     [esp+870h+var_834]
0x934454: fadd    [esp+870h+var_850]
0x934458: fcomp   dword ptr ds:0A2FAACh
0x93445E: fnstsw  ax
0x934460: test    ah, 5
0x934463: jp      short loc_93447E
0x934465: fld     dword ptr [ecx+1Ch]
0x934468: fadd    dword ptr [edi+1Ch]
0x93446B: fld     [esp+870h+var_838]
0x93446F: fmul    dword ptr ds:0A53954h
0x934475: fcompp
0x934477: fnstsw  ax
0x934479: test    ah, 41h
0x93447C: jz      short loc_9344B3
0x93447E: cmp     word ptr [ecx+20h], 0FFFFh
0x934484: fld     dword ptr ds:0A2FAA8h
0x93448A: jz      short loc_93449A
0x93448C: mov     eax, [esp+870h+var_83C]
0x934490: fstp    st
0x934492: fld     dword ptr [eax]
0x934494: fmul    dword ptr ds:0A43328h
0x93449A: fld     dword ptr [ecx+1Ch]
0x93449D: fsub    st, st(1)
0x93449F: fld     dword ptr [edi+1Ch]
0x9344A2: fcompp
0x9344A4: fnstsw  ax
0x9344A6: fstp    st
0x9344A8: test    ah, 41h
0x9344AB: jp      loc_93454C
0x9344B1: jmp     short loc_9344B8
0x9344B3: mov     byte ptr [esp+870h+var_84C], 1
0x9344B8: mov     eax, [ebx+4]
0x9344BB: add     edx, 4
0x9344BE: cmp     edx, eax
0x9344C0: jb      loc_934373
0x9344C6: mov     al, byte ptr [esp+870h+var_84C]
0x9344CA: test    al, al
0x9344CC: jz      short loc_9344E1
0x9344CE: mov     eax, [esp+870h+var_854]
0x9344D2: mov     cx, word ptr [esp+870h+var_848]
0x9344D7: mov     [esp+eax*2+870h+var_800], cx
0x9344DC: inc     eax
0x9344DD: mov     [esp+870h+var_854], eax
0x9344E1: mov     edx, [esp+870h+var_840]
0x9344E5: mov     edi, [edx+4]
0x9344E8: mov     ecx, [ebp+arg_4]
0x9344EB: mov     eax, [ecx]
0x9344ED: lea     edx, [esp+870h+var_600]
0x9344F4: push    edx
0x9344F5: mov     edx, [edi+8]
0x9344F8: push    edx
0x9344F9: call    dword ptr [eax+28h]
0x9344FC: mov     ecx, [esi+4]
0x9344FF: mov     [esp+870h+var_808], ecx
0x934503: mov     ecx, [ecx+8]
0x934506: mov     [esp+870h+var_80C], ecx
0x93450A: mov     edi, [edi+8]
0x93450D: mov     ecx, [esi+0Ch]
0x934510: mov     [esp+870h+var_814], eax
0x934514: mov     eax, [esp+870h+var_840]
0x934518: mov     eax, [eax]
0x93451A: push    eax
0x93451B: mov     eax, [esi+8]
0x93451E: push    eax
0x93451F: lea     eax, [esp+878h+var_814]
0x934523: push    eax
0x934524: mov     eax, [esi]
0x934526: mov     [esp+87Ch+var_810], edi
0x93452A: mov     edx, [ecx]
0x93452C: push    eax
0x93452D: call    dword ptr [edx+8]
0x934530: cmp     ax, 0FFFFh
0x934534: mov     ecx, [esp+870h+var_848]
0x934538: mov     [esp+ecx*2+870h+var_400], ax
0x934540: jz      short loc_93454C
0x934542: mov     ecx, [esi+0Ch]
0x934545: mov     edx, [ecx]
0x934547: push    0FFFFFFFFh
0x934549: call    dword ptr [edx+0Ch]
0x93454C: mov     eax, [esp+870h+var_848]
0x934550: mov     edi, [esp+870h+var_840]
0x934554: mov     ecx, [ebx]
0x934556: inc     eax
0x934557: mov     [esp+870h+var_848], eax
0x93455B: mov     eax, [esp+870h+var_858]
0x93455F: add     eax, 0Ch
0x934562: add     edi, 0Ch
0x934565: cmp     eax, ecx
0x934567: mov     [esp+870h+var_840], edi
0x93456B: mov     [esp+870h+var_858], eax
0x93456F: jb      loc_934345
0x934575: mov     eax, [esi+8]
0x934578: mov     ecx, [eax]
0x93457A: mov     eax, [esp+870h+var_854]
0x93457E: xor     edi, edi
0x934580: test    eax, eax
0x934582: mov     [esp+870h+var_83C], ecx
0x934586: jle     short loc_9345CA
0x934588: jmp     short loc_934590
0x93458A: align 10h
0x934590: movzx   eax, [esp+edi*2+870h+var_800]
0x934595: add     eax, 56h ; 'V'
0x934598: lea     edx, [eax+eax*2]
0x93459B: mov     ecx, [ebx+edx*4+4]
0x93459F: lea     eax, [ebx+edx*4]
0x9345A2: movzx   edx, byte ptr [ecx+1]
0x9345A6: mov     eax, [eax+8]
0x9345A9: imul    edx, 34h ; '4'
0x9345AC: push    0FFFFh
0x9345B1: push    eax
0x9345B2: push    ecx
0x9345B3: mov     ecx, [esp+87Ch+var_83C]
0x9345B7: call    dword ptr [edx+ecx+16A8h]
0x9345BE: mov     eax, [esp+87Ch+var_854]
0x9345C2: add     esp, 0Ch
0x9345C5: inc     edi
0x9345C6: cmp     edi, eax
0x9345C8: jl      short loc_934590
0x9345CA: cmp     [esp+870h+var_854], 2
0x9345CF: jl      loc_934873
0x9345D5: mov     edx, ds:0BA9DE4h
0x9345DB: mov     eax, large fs:2Ch
0x9345E1: mov     eax, [eax+edx*4]
0x9345E4: mov     [esp+870h+var_83C], eax
0x9345E8: jmp     short loc_9345F0
0x9345EA: mov     eax, [esp+870h+var_83C]
0x9345EE: mov     edi, edi
0x9345F0: mov     ecx, [eax+1A4h]
0x9345F6: cmp     ecx, [eax+1A8h]
0x9345FC: jnb     short loc_93462F
0x9345FE: mov     edx, large fs:2Ch
0x934605: mov     eax, ds:0BA9DE4h
0x93460A: mov     edi, [edx+eax*4]
0x93460D: mov     ecx, [edi+1A4h]
0x934613: mov     dword ptr [ecx], offset aTtconflicts; "TtConflicts"
0x934619: rdtsc
0x93461B: mov     [esp+870h+var_834], eax
0x93461F: mov     edx, [esp+870h+var_834]
0x934623: mov     [ecx+4], edx
0x934626: add     ecx, 0Ch
0x934629: mov     [edi+1A4h], ecx
0x93462F: mov     eax, [esp+870h+var_854]
0x934633: fld     dword ptr ds:0A379B4h
0x934639: xor     edx, edx
0x93463B: test    eax, eax
0x93463D: mov     [esp+870h+var_850], edx
0x934641: mov     [esp+870h+var_858], 1
0x934649: jle     loc_9346D8
0x93464F: nop
0x934650: movzx   eax, [esp+edx*2+870h+var_800]
0x934655: add     eax, 56h ; 'V'
0x934658: lea     eax, [eax+eax*2]
0x93465B: mov     eax, [ebx+eax*4]
0x93465E: lea     edi, [edx+1]
0x934661: add     eax, 10h
0x934664: cmp     edi, [esp+870h+var_854]
0x934668: mov     ecx, edi
0x93466A: jge     short loc_9346CA
0x93466C: movaps  xmm1, xmmword ptr [eax]
0x93466F: nop
0x934670: movzx   eax, [esp+ecx*2+870h+var_800]
0x934675: add     eax, 56h ; 'V'
0x934678: lea     eax, [eax+eax*2]
0x93467B: mov     eax, [ebx+eax*4]
0x93467E: movaps  xmm2, xmmword ptr [eax+10h]
0x934682: movaps  xmm0, xmm1
0x934685: mulps   xmm0, xmm2
0x934688: movaps  xmm2, xmm0
0x93468B: shufps  xmm2, xmm0, 55h ; 'U'
0x93468F: movaps  xmm3, xmm0
0x934692: lea     eax, [esp+870h+var_84C]
0x934696: addss   xmm2, xmm0
0x93469A: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93469E: addss   xmm3, xmm2
0x9346A2: movss   dword ptr [eax], xmm3
0x9346A6: fld     [esp+870h+var_84C]
0x9346AA: fcomp   st(1)
0x9346AC: fnstsw  ax
0x9346AE: test    ah, 5
0x9346B1: jp      short loc_9346C1
0x9346B3: fstp    st
0x9346B5: mov     [esp+870h+var_850], edx
0x9346B9: fld     [esp+870h+var_84C]
0x9346BD: mov     [esp+870h+var_858], ecx
0x9346C1: mov     eax, [esp+870h+var_854]
0x9346C5: inc     ecx
0x9346C6: cmp     ecx, eax
0x9346C8: jl      short loc_934670
0x9346CA: mov     eax, [esp+870h+var_854]
0x9346CE: mov     edx, edi
0x9346D0: cmp     edx, eax
0x9346D2: jl      loc_934650
0x9346D8: mov     eax, [esp+870h+var_850]
0x9346DC: fstp    st
0x9346DE: lea     eax, [esp+eax*2+870h+var_800]
0x9346E2: mov     [esp+870h+var_848], eax
0x9346E6: movzx   eax, word ptr [eax]
0x9346E9: add     eax, 56h ; 'V'
0x9346EC: lea     ecx, [eax+eax*2]
0x9346EF: mov     eax, [esp+870h+var_858]
0x9346F3: lea     eax, [esp+eax*2+870h+var_800]
0x9346F7: mov     [esp+870h+var_840], eax
0x9346FB: movzx   eax, word ptr [eax]
0x9346FE: add     eax, 56h ; 'V'
0x934701: lea     edx, [eax+eax*2]
0x934704: lea     eax, [ebx+edx*4]
0x934707: mov     edx, [eax+4]
0x93470A: lea     ecx, [ebx+ecx*4]
0x93470D: mov     [esp+870h+var_838], ecx
0x934711: mov     ecx, [ecx+4]
0x934714: mov     [esp+870h+var_858], eax
0x934718: mov     eax, [esi]
0x93471A: mov     edi, [eax]
0x93471C: mov     [esp+870h+var_844], ecx
0x934720: mov     [esp+870h+var_850], edx
0x934724: mov     edx, [edi]
0x934726: mov     ecx, edi
0x934728: call    dword ptr [edx+8]
0x93472B: mov     ecx, [esi+8]
0x93472E: mov     edx, [ecx]
0x934730: mov     eax, [edx+eax*4+10Ch]
0x934737: shr     eax, 1
0x934739: test    al, 1
0x93473B: jz      loc_934873
0x934741: mov     ecx, [ebp+arg_4]
0x934744: mov     edx, [ecx]
0x934746: lea     eax, [esp+870h+var_600]
0x93474D: push    eax
0x93474E: mov     eax, [esp+874h+var_844]
0x934752: mov     eax, [eax+8]
0x934755: push    eax
0x934756: call    dword ptr [edx+28h]
0x934759: mov     edx, [eax]
0x93475B: mov     ecx, eax
0x93475D: mov     [esp+870h+var_844], eax
0x934761: call    dword ptr [edx+8]
0x934764: mov     ecx, [esi+8]
0x934767: mov     edx, [ecx]
0x934769: mov     eax, [edx+eax*4+10Ch]
0x934770: shr     eax, 1
0x934772: test    al, 1
0x934774: jz      loc_934873
0x93477A: mov     ecx, [ebp+arg_4]
0x93477D: mov     edx, [ecx]
0x93477F: lea     eax, [esp+870h+var_200]
0x934786: push    eax
0x934787: mov     eax, [esp+874h+var_850]
0x93478B: mov     eax, [eax+8]
0x93478E: push    eax
0x93478F: call    dword ptr [edx+28h]
0x934792: mov     edx, [eax]
0x934794: mov     ecx, eax
0x934796: mov     [esp+870h+var_850], eax
0x93479A: call    dword ptr [edx+8]
0x93479D: mov     ecx, [esi+8]
0x9347A0: mov     edx, [ecx]
0x9347A2: mov     eax, [edx+eax*4+10Ch]
0x9347A9: shr     eax, 1
0x9347AB: test    al, 1
0x9347AD: jz      loc_934873
0x9347B3: mov     ecx, [esp+870h+var_844]
0x9347B7: mov     edx, [esp+870h+var_850]
0x9347BB: mov     eax, [esp+870h+var_838]
0x9347BF: mov     dword ptr [esp+870h+var_830], ecx
0x9347C3: mov     dword ptr [esp+870h+var_830+4], edx
0x9347C7: mov     ecx, [eax]
0x9347C9: mov     edx, [esp+870h+var_858]
0x9347CD: mov     [esp+870h+var_814], ecx
0x9347D1: mov     eax, [edx]
0x9347D3: lea     ecx, [esp+870h+var_814]
0x9347D7: push    ecx
0x9347D8: mov     ecx, [esi]
0x9347DA: lea     edx, [esi+10h]
0x9347DD: push    edx
0x9347DE: mov     [esp+878h+var_810], eax
0x9347E2: mov     edx, [ecx+8]
0x9347E5: push    2
0x9347E7: lea     eax, [esp+87Ch+var_830]
0x9347EB: push    eax
0x9347EC: push    edi
0x9347ED: push    edx
0x9347EE: call    sub_952C90
0x9347F3: mov     ecx, [esp+888h+var_854]
0x9347F7: mov     ax, word ptr [esp+ecx*2+888h+anonymous_0+2]
0x9347FF: mov     edx, [esp+888h+var_840]
0x934803: add     esp, 18h
0x934806: dec     ecx
0x934807: mov     [edx], ax
0x93480A: mov     ax, word ptr [esp+ecx*2+870h+anonymous_0+2]
0x93480F: mov     edx, [esp+870h+var_848]
0x934813: dec     ecx
0x934814: mov     [edx], ax
0x934817: mov     edx, large fs:2Ch
0x93481E: mov     eax, ds:0BA9DE4h
0x934823: mov     eax, [edx+eax*4]
0x934826: mov     edi, [eax+1A4h]
0x93482C: cmp     edi, [eax+1A8h]
0x934832: mov     [esp+870h+var_854], ecx
0x934836: jnb     short loc_93486A
0x934838: mov     eax, ds:0BA9DE4h
0x93483D: mov     edx, [edx+eax*4]
0x934840: mov     edi, [edx+1A4h]
0x934846: mov     [esp+870h+var_844], edx
0x93484A: mov     dword ptr [edi], offset aEt; "Et"
0x934850: rdtsc
0x934852: mov     [esp+870h+anonymous_0], eax
0x934856: mov     edx, [esp+870h+anonymous_0]
0x93485A: mov     eax, [esp+870h+var_844]
0x93485E: mov     [edi+4], edx
0x934861: add     edi, 0Ch
0x934864: mov     [eax+1A4h], edi
0x93486A: cmp     ecx, 2
0x93486D: jge     loc_9345EA
0x934873: mov     eax, [esp+870h+var_854]
0x934877: test    eax, eax
0x934879: jz      short loc_9348AA
0x93487B: movzx   edi, [esp+870h+var_800]
0x934880: lea     edi, [esp+edi*2+870h+var_400]
0x934887: xor     eax, eax
0x934889: mov     ax, [edi]
0x93488C: cmp     ax, 0FFFFh
0x934890: jz      short loc_9348AA
0x934892: mov     ecx, [esi+0Ch]
0x934895: mov     edx, [ecx]
0x934897: push    eax
0x934898: call    dword ptr [edx+10h]
0x93489B: mov     ecx, [esi+0Ch]
0x93489E: mov     eax, [ecx]
0x9348A0: push    1
0x9348A2: mov     word ptr [edi], 0FFFFh
0x9348A7: call    dword ptr [eax+0Ch]
0x9348AA: mov     ecx, [esi+8]
0x9348AD: mov     edx, [ecx]
0x9348AF: mov     edi, [ebx]
0x9348B1: mov     ecx, edi
0x9348B3: sub     ecx, ebx
0x9348B5: mov     [esp+870h+var_84C], edx
0x9348B9: sub     ecx, 408h
0x9348BF: mov     eax, 2AAAAAABh
0x9348C4: imul    ecx
0x9348C6: sar     edx, 1
0x9348C8: mov     eax, edx
0x9348CA: shr     eax, 1Fh
0x9348CD: lea     edx, [edx+eax-1]
0x9348D1: test    edx, edx
0x9348D3: mov     [esp+870h+var_858], edx
0x9348D7: jl      loc_934988
0x9348DD: jmp     short loc_9348E3
0x9348DF: mov     edx, [esp+870h+var_858]
0x9348E3: xor     ebx, ebx
0x9348E5: mov     bx, [esp+edx*2+870h+var_400]
0x9348ED: sub     edi, 0Ch
0x9348F0: cmp     bx, 0FFFFh
0x9348F5: jz      short loc_93491D
0x9348F7: mov     eax, [edi+4]
0x9348FA: movzx   ecx, byte ptr [eax+1]
0x9348FE: mov     edx, [edi+8]
0x934901: imul    ecx, 34h ; '4'
0x934904: push    ebx
0x934905: push    edx
0x934906: push    eax
0x934907: mov     eax, [esp+87Ch+var_84C]
0x93490B: call    dword ptr [ecx+eax+16A4h]
0x934912: mov     ecx, [edi]
0x934914: add     esp, 0Ch
0x934917: mov     [ecx+20h], bx
0x93491B: jmp     short loc_93497E
0x93491D: mov     ecx, [esi+0Ch]
0x934920: mov     edx, [ecx]
0x934922: push    0FFFFFFFFh
0x934924: call    dword ptr [edx+0Ch]
0x934927: mov     eax, [edi+4]
0x93492A: movzx   ecx, byte ptr [eax+1]
0x93492E: mov     edx, [edi+8]
0x934931: imul    ecx, 34h ; '4'
0x934934: push    0FFFFh
0x934939: push    edx
0x93493A: push    eax
0x93493B: mov     eax, [esp+87Ch+var_84C]
0x93493F: call    dword ptr [ecx+eax+16A0h]
0x934946: mov     eax, [ebp+arg_8]
0x934949: mov     ecx, [eax]
0x93494B: add     ecx, 0FFFFFFD0h
0x93494E: mov     [eax], ecx
0x934950: mov     eax, [edi]
0x934952: movaps  xmm0, xmmword ptr [ecx]
0x934955: movaps  xmmword ptr [eax], xmm0
0x934958: movaps  xmm0, xmmword ptr [ecx+10h]
0x93495C: movaps  xmmword ptr [eax+10h], xmm0
0x934960: mov     dx, [ecx+20h]
0x934964: mov     [eax+20h], dx
0x934968: add     esp, 0Ch
0x93496B: lea     edx, [eax+22h]
0x93496E: sub     ecx, eax
0x934970: mov     eax, 0Eh
0x934975: mov     bl, [ecx+edx]
0x934978: mov     [edx], bl
0x93497A: inc     edx
0x93497B: dec     eax
0x93497C: jnz     short loc_934975
0x93497E: dec     [esp+870h+var_858]
0x934982: jns     loc_9348DF
0x934988: pop     edi
0x934989: pop     esi
0x93498A: pop     ebx
0x93498B: mov     esp, ebp
0x93498D: pop     ebp
0x93498E: retn
