0x688120: push    0FFFFFFFFh
0x688122: push    offset SEH_688120
0x688127: mov     eax, large fs:0
0x68812D: push    eax
0x68812E: sub     esp, 158h
0x688134: mov     eax, ds:0B30AACh
0x688139: xor     eax, esp
0x68813B: mov     [esp+164h+var_10], eax
0x688142: push    ebx
0x688143: push    ebp
0x688144: push    esi
0x688145: push    edi
0x688146: mov     eax, ds:0B30AACh
0x68814B: xor     eax, esp
0x68814D: push    eax
0x68814E: lea     eax, [esp+178h+var_C]
0x688155: mov     large fs:0, eax
0x68815B: mov     ebp, [esp+178h+arg_0]
0x688162: mov     eax, [ebp+0]
0x688165: mov     edx, [eax+380h]
0x68816B: mov     esi, ecx
0x68816D: mov     ecx, ebp
0x68816F: call    edx
0x688171: mov     edi, eax
0x688173: test    edi, edi
0x688175: jz      short loc_688182
0x688177: mov     ecx, ebp
0x688179: call    sub_5E1030
0x68817E: test    al, al
0x688180: jnz     short loc_688184
0x688182: mov     edi, ebp
0x688184: mov     ecx, edi
0x688186: call    IsWeaponReady
0x68818B: test    al, al
0x68818D: jz      loc_688D8B
0x688193: push    30h ; '0'
0x688195: mov     ecx, edi
0x688197: call    sub_5E05F0
0x68819C: push    ebp
0x68819D: mov     ecx, esi
0x68819F: call    sub_68B4F0
0x6881A4: cmp     byte ptr ds:0B3C08Ah, 0
0x6881AB: jz      short loc_6881BB
0x6881AD: cmp     dword ptr [esi+28h], 0
0x6881B1: jnz     short loc_6881BB
0x6881B3: push    edi
0x6881B4: mov     ecx, esi
0x6881B6: call    sub_685EA0
0x6881BB: lea     ecx, [esi+14h]
0x6881BE: call    sub_42B410
0x6881C3: test    eax, eax
0x6881C5: mov     [esp+178h+var_160], eax
0x6881C9: jz      loc_688D55
0x6881CF: mov     ecx, eax
0x6881D1: mov     [esp+178h+var_161], 0
0x6881D6: call    sub_6899C0
0x6881DB: mov     ebx, eax
0x6881DD: mov     eax, [ebp+0]
0x6881E0: mov     edx, [eax+174h]
0x6881E6: mov     ecx, ebp
0x6881E8: call    edx
0x6881EA: fld     dword ptr [eax]
0x6881EC: fsub    dword ptr [ebx]
0x6881EE: fstp    [esp+178h+var_150]
0x6881F2: fld     dword ptr [eax+4]
0x6881F5: fsub    dword ptr [ebx+4]
0x6881F8: fstp    dword ptr [esp+178h+var_14C]
0x6881FC: fld     dword ptr [eax+8]
0x6881FF: fsub    dword ptr [ebx+8]
0x688202: fstp    [esp+178h+var_158]
0x688206: fldz
0x688208: fld     [esp+178h+var_158]
0x68820C: fcom    st(1)
0x68820E: fnstsw  ax
0x688210: fstp    st(1)
0x688212: test    ah, 41h
0x688215: jnz     short loc_68821C
0x688217: mov     [esp+178h+var_161], 1
0x68821C: fabs
0x68821E: fstp    [esp+178h+var_158]
0x688222: fld     [esp+178h+var_158]
0x688226: fstp    [esp+178h+var_158]
0x68822A: fld     [esp+178h+var_150]
0x68822E: fld     dword ptr [esp+178h+var_14C]
0x688232: fmul    st, st
0x688234: fld     st(1)
0x688236: fmulp   st(2), st
0x688238: faddp   st(1), st
0x68823A: fldz
0x68823C: fmul    st, st
0x68823E: faddp   st(1), st
0x688240: fstp    dword ptr [esp+178h+var_14C]
0x688244: fld     dword ptr [esp+178h+var_14C]
0x688248: call    __CIsqrt
0x68824D: fstp    dword ptr [esp+178h+var_14C]
0x688251: fld     dword ptr [esp+178h+var_14C]
0x688255: mov     [esp+178h+var_159], 1
0x68825A: fstp    [esp+178h+var_150]
0x68825E: fld     [esp+178h+var_150]
0x688262: fld     dword ptr [esi+1Ch]
0x688265: fcomp   st(1)
0x688267: fnstsw  ax
0x688269: fld     qword ptr ds:0A309F0h
0x68826F: test    ah, 5
0x688272: jp      short loc_6882A1
0x688274: fcom    st(1)
0x688276: fnstsw  ax
0x688278: test    ah, 41h
0x68827B: jz      short loc_688292
0x68827D: fld     dword ptr [esi+1Ch]
0x688280: fcompp
0x688282: fnstsw  ax
0x688284: test    ah, 5
0x688287: jnp     short loc_688294
0x688289: fstp    st
0x68828B: mov     [esp+178h+var_159], 0
0x688290: jmp     short loc_6882AA
0x688292: fstp    st
0x688294: fsub    dword ptr [esi+1Ch]
0x688297: mov     [esp+178h+var_159], 0
0x68829C: fstp    dword ptr [esi+24h]
0x68829F: jmp     short loc_6882AA
0x6882A1: fstp    st(1)
0x6882A3: fstp    st
0x6882A5: fldz
0x6882A7: fstp    dword ptr [esi+24h]
0x6882AA: cmp     byte ptr ds:0B15814h, 0
0x6882B1: mov     [esp+178h+var_163], 0
0x6882B6: jnz     loc_688361
0x6882BC: cmp     byte ptr ds:0B1582Ch, 0
0x6882C3: jnz     loc_688361
0x6882C9: mov     ebx, [esp+178h+var_160]
0x6882CD: mov     ecx, ebx
0x6882CF: call    NiDX92DBufferData__GetSurfaceData
0x6882D4: test    eax, eax
0x6882D6: jz      loc_688365
0x6882DC: fld     dword ptr ds:0A417B4h
0x6882E2: mov     ecx, edi; this
0x6882E4: fstp    [esp+178h+var_160]
0x6882E8: call    MobileObject_GetCharProxy
0x6882ED: test    eax, eax
0x6882EF: jz      short loc_688309
0x6882F1: mov     ecx, edi; this
0x6882F3: call    MobileObject_GetCharProxy
0x6882F8: add     eax, 1F0h
0x6882FD: test    byte ptr [eax+4], 1
0x688301: jz      short loc_688309
0x688303: fldz
0x688305: fstp    [esp+178h+var_160]
0x688309: mov     ecx, edi
0x68830B: call    sub_5E0510
0x688310: test    al, al
0x688312: jz      short loc_688322
0x688314: fld     [esp+178h+var_160]
0x688318: fadd    qword ptr ds:0A46E48h
0x68831E: fstp    [esp+178h+var_160]
0x688322: mov     ecx, edi
0x688324: call    sub_5E3290
0x688329: test    al, al
0x68832B: jz      short loc_68833B
0x68832D: fld     [esp+178h+var_160]
0x688331: fadd    qword ptr ds:0A46E48h
0x688337: fstp    [esp+178h+var_160]
0x68833B: fld     [esp+178h+var_160]
0x68833F: push    1; char
0x688341: push    ecx
0x688342: mov     ecx, ebx
0x688344: fstp    [esp+180h+var_180]; float
0x688347: call    sub_6899C0
0x68834C: push    eax; int
0x68834D: push    edi; int
0x68834E: call    sub_684B30
0x688353: add     esp, 10h
0x688356: test    al, al
0x688358: jz      short loc_688365
0x68835A: mov     [esp+178h+var_163], 1
0x68835F: jmp     short loc_688365
0x688361: mov     ebx, [esp+178h+var_160]
0x688365: mov     ecx, edi
0x688367: call    sub_5E0510
0x68836C: test    al, al
0x68836E: jz      short loc_6883C0
0x688370: mov     ecx, esi
0x688372: call    sub_68A160
0x688377: push    eax
0x688378: mov     ecx, ebp
0x68837A: call    sub_4D7E30
0x68837F: fstp    dword ptr [esp+178h+var_14C]
0x688383: mov     ecx, edi
0x688385: call    sub_5E3750
0x68838A: fmul    dword ptr ds:0B3A450h
0x688390: fstp    [esp+178h+var_160]
0x688394: fld     dword ptr [esp+178h+var_14C]
0x688398: fsub    dword ptr [esi+0Ch]
0x68839B: fld     [esp+178h+var_160]
0x68839F: fcompp
0x6883A1: fnstsw  ax
0x6883A3: test    ah, 41h
0x6883A6: jnz     short loc_6883C0
0x6883A8: push    200h
0x6883AD: mov     ecx, edi
0x6883AF: call    sub_5E05F0
0x6883B4: push    100h
0x6883B9: mov     ecx, edi
0x6883BB: call    sub_5E0610
0x6883C0: fld     dword ptr ds:0B3A458h
0x6883C6: mov     ecx, ebx
0x6883C8: fstp    [esp+178h+var_160]
0x6883CC: call    NiDX92DBufferData__GetSurfaceData
0x6883D1: test    eax, eax
0x6883D3: jnz     short loc_6883E9
0x6883D5: mov     ecx, esi
0x6883D7: call    sub_68A140
0x6883DC: test    al, al
0x6883DE: jz      short loc_6883E9
0x6883E0: mov     ecx, esi
0x6883E2: call    sub_6899D0
0x6883E7: jmp     short loc_68840C
0x6883E9: mov     ecx, ebx
0x6883EB: call    sub_68CA50
0x6883F0: test    al, al
0x6883F2: jz      short loc_688410
0x6883F4: mov     ecx, edi
0x6883F6: call    Actor_IsSwimming
0x6883FB: test    al, al
0x6883FD: jz      short loc_688410
0x6883FF: mov     ecx, edi
0x688401: call    sub_5E0660
0x688406: fmul    qword ptr ds:0A31C70h
0x68840C: fstp    [esp+178h+var_160]
0x688410: mov     ecx, ebp
0x688412: mov     [esp+178h+var_162], 0
0x688417: mov     [esp+178h+var_151], 1
0x68841C: call    Actor_IsSwimming
0x688421: test    al, al
0x688423: mov     ecx, ebx
0x688425: jnz     short loc_68845C
0x688427: call    sub_68CA20
0x68842C: test    al, al
0x68842E: jnz     short loc_688442
0x688430: mov     ecx, ebx
0x688432: call    NiDX92DBufferData__GetSurfaceData
0x688437: test    eax, eax
0x688439: jz      short loc_688442
0x68843B: mov     [esp+178h+var_162], 1
0x688440: jmp     short loc_6884A5
0x688442: fld     [esp+178h+var_158]
0x688446: fld     dword ptr ds:0B3A470h
0x68844C: fcompp
0x68844E: fnstsw  ax
0x688450: test    ah, 41h
0x688453: jnz     short loc_6884A5
0x688455: mov     [esp+178h+var_162], 1
0x68845A: jmp     short loc_6884A5
0x68845C: call    sub_68CA50
0x688461: test    al, al
0x688463: jnz     short loc_688477
0x688465: mov     ecx, ebx
0x688467: call    NiDX92DBufferData__GetSurfaceData
0x68846C: test    eax, eax
0x68846E: jz      short loc_688477
0x688470: mov     [esp+178h+var_162], 1
0x688475: jmp     short loc_6884A5
0x688477: fld     [esp+178h+var_158]
0x68847B: fld     [esp+178h+var_160]
0x68847F: fcom    st(1)
0x688481: fnstsw  ax
0x688483: fstp    st(1)
0x688485: test    ah, 41h
0x688488: jnz     short loc_688493
0x68848A: fstp    st
0x68848C: mov     [esp+178h+var_162], 1
0x688491: jmp     short loc_6884A5
0x688493: fld     [esp+178h+var_150]
0x688497: fcompp
0x688499: fnstsw  ax
0x68849B: test    ah, 5
0x68849E: jp      short loc_6884A5
0x6884A0: mov     [esp+178h+var_151], 0
0x6884A5: fld     [esp+178h+var_150]
0x6884A9: fld     [esp+178h+var_160]
0x6884AD: fcompp
0x6884AF: fnstsw  ax
0x6884B1: test    ah, 41h
0x6884B4: jz      short loc_6884D3
0x6884B6: fld     dword ptr [esi+24h]
0x6884B9: fld     dword ptr ds:0B3A478h
0x6884BF: fcompp
0x6884C1: fnstsw  ax
0x6884C3: test    ah, 5
0x6884C6: jnp     short loc_6884D3
0x6884C8: cmp     [esp+178h+var_163], 0
0x6884CD: jz      loc_6888AD
0x6884D3: cmp     [esp+178h+var_162], 0
0x6884D8: jnz     short loc_68854B
0x6884DA: mov     ecx, edi
0x6884DC: call    Actor_IsSwimming
0x6884E1: test    al, al
0x6884E3: jnz     loc_6888AD
0x6884E9: mov     ecx, edi
0x6884EB: call    sub_5E34B0
0x6884F0: test    al, al
0x6884F2: jz      short loc_6884FF
0x6884F4: cmp     [esp+178h+var_161], 0
0x6884F9: jnz     loc_6888AD
0x6884FF: fld     [esp+178h+var_150]
0x688503: fcomp   qword ptr ds:0A3F3D0h
0x688509: fnstsw  ax
0x68850B: test    ah, 5
0x68850E: jp      loc_6888AD
0x688514: mov     ecx, edi; this
0x688516: call    MobileObject_GetCharProxy
0x68851B: test    eax, eax
0x68851D: jz      loc_6888AD
0x688523: lea     ecx, [eax+1E0h]
0x688529: call    sub_88D370
0x68852E: test    eax, eax
0x688530: jnz     loc_6888AD
0x688536: fld     dword ptr ds:0A342A4h
0x68853C: mov     dword ptr [esi+48h], 2
0x688543: fstp    dword ptr [esi+20h]
0x688546: jmp     loc_6888AD
0x68854B: mov     ecx, ebx
0x68854D: mov     [esp+178h+var_161], 0
0x688552: call    sub_68CA20
0x688557: test    al, al
0x688559: jz      short loc_688578
0x68855B: mov     ecx, ebx
0x68855D: mov     [esp+178h+var_161], 1
0x688562: call    sub_6899C0
0x688567: mov     ecx, [eax]
0x688569: mov     [esi+3Ch], ecx
0x68856C: mov     edx, [eax+4]
0x68856F: mov     [esi+40h], edx
0x688572: mov     eax, [eax+8]
0x688575: mov     [esi+44h], eax
0x688578: push    ebx
0x688579: lea     ebx, [esi+14h]
0x68857C: mov     ecx, ebx
0x68857E: call    sub_68C170
0x688583: mov     ecx, ebx
0x688585: call    sub_42B410
0x68858A: mov     ebx, eax
0x68858C: test    ebx, ebx
0x68858E: mov     [esp+178h+var_163], 0
0x688593: jz      loc_6887A1
0x688599: mov     ecx, ebx
0x68859B: call    NiDX92DBufferData__GetSurfaceData
0x6885A0: test    eax, eax
0x6885A2: mov     [esp+178h+var_158], eax
0x6885A6: jz      loc_688675
0x6885AC: mov     ecx, eax
0x6885AE: call    NiDX92DBufferData__GetSurfaceData
0x6885B3: test    eax, eax
0x6885B5: jnz     loc_688675
0x6885BB: mov     edx, [edi]
0x6885BD: mov     eax, [edx+174h]
0x6885C3: mov     ecx, edi
0x6885C5: call    eax
0x6885C7: mov     ecx, [eax]
0x6885C9: mov     [esp+178h+var_12C], ecx
0x6885CD: mov     edx, [eax+4]
0x6885D0: mov     ecx, [esp+178h+var_158]
0x6885D4: mov     [esp+178h+var_128], edx
0x6885D8: mov     eax, [eax+8]
0x6885DB: mov     [esp+178h+var_124], eax
0x6885DF: call    sub_6899C0
0x6885E4: fld     dword ptr ds:0A34A80h
0x6885EA: mov     ecx, [eax]
0x6885EC: mov     [esp+178h+a3], ecx
0x6885F0: mov     edx, [eax+4]
0x6885F3: push    ecx
0x6885F4: mov     [esp+17Ch+var_134], edx
0x6885F8: fstp    [esp+17Ch+a4]; float
0x6885FB: mov     eax, [eax+8]
0x6885FE: lea     ecx, [esp+17Ch+a3]
0x688602: push    ecx; int
0x688603: lea     edx, [esp+180h+var_12C]
0x688607: push    edx; int
0x688608: mov     [esp+184h+var_130], eax
0x68860C: call    sub_480520
0x688611: add     esp, 0Ch
0x688614: test    eax, eax
0x688616: jge     short loc_688675
0x688618: fld     [esp+178h+var_130]
0x68861C: fsub    [esp+178h+var_124]
0x688620: fcomp   qword ptr ds:0A309F0h
0x688626: fnstsw  ax
0x688628: test    ah, 5
0x68862B: jp      short loc_688675
0x68862D: cmp     [esp+178h+var_161], 0
0x688632: jz      short loc_688646
0x688634: lea     eax, [esp+178h+var_12C]
0x688638: push    eax
0x688639: lea     ecx, [esp+17Ch+a3]
0x68863D: push    ecx
0x68863E: push    edi
0x68863F: call    sub_687C30
0x688644: jmp     short loc_688656
0x688646: lea     edx, [esp+178h+var_12C]
0x68864A: push    edx
0x68864B: lea     eax, [esp+17Ch+a3]
0x68864F: push    eax
0x688650: push    edi
0x688651: call    sub_687AA0
0x688656: add     esp, 0Ch
0x688659: test    al, al
0x68865B: jz      short loc_688675
0x68865D: push    ebx
0x68865E: lea     ecx, [esi+14h]
0x688661: call    sub_68C170
0x688666: lea     ecx, [esi+14h]
0x688669: call    sub_42B410
0x68866E: mov     ebx, eax
0x688670: mov     [esp+178h+var_163], 1
0x688675: test    ebx, ebx
0x688677: jz      loc_6887A1
0x68867D: cmp     [esp+178h+var_163], 0
0x688682: jnz     loc_68882D
0x688688: mov     ecx, ebx
0x68868A: call    sub_6899C0
0x68868F: mov     edx, [edi]
0x688691: push    eax
0x688692: mov     eax, [edx+174h]
0x688698: lea     ecx, [esp+17Ch+var_120]
0x68869C: push    ecx
0x68869D: mov     ecx, edi
0x68869F: call    eax
0x6886A1: mov     ecx, eax
0x6886A3: call    sub_4121A0
0x6886A8: lea     ecx, [esp+178h+var_14C]
0x6886AC: call    sub_68CB30
0x6886B1: fld     dword ptr ds:0A342A4h
0x6886B7: push    ecx
0x6886B8: lea     ecx, [esp+17Ch+var_120]
0x6886BC: fstp    [esp+17Ch+a4]; float
0x6886BF: push    ecx; int
0x6886C0: mov     [esp+180h+var_4], 0
0x6886CB: call    sub_47F6F0
0x6886D0: add     esp, 8
0x6886D3: test    eax, eax
0x6886D5: jge     loc_688788
0x6886DB: push    0
0x6886DD: push    0
0x6886DF: lea     edx, [esp+180h+var_14C]
0x6886E3: push    edx
0x6886E4: push    ebx
0x6886E5: push    edi
0x6886E6: call    sub_686F50
0x6886EB: add     esp, 14h
0x6886EE: test    al, al
0x6886F0: jnz     loc_688788
0x6886F6: mov     ecx, esi
0x6886F8: call    sub_684EC0
0x6886FD: mov     eax, [esi]
0x6886FF: mov     edx, [eax+30h]
0x688702: push    1
0x688704: mov     ecx, esi
0x688706: call    edx
0x688708: mov     eax, [ebp+0]
0x68870B: mov     edx, [eax+180h]
0x688711: push    1
0x688713: mov     ecx, ebp
0x688715: call    edx
0x688717: mov     eax, [edi]
0x688719: mov     edx, [eax+180h]
0x68871F: push    1
0x688721: mov     ecx, edi
0x688723: call    edx
0x688725: cmp     ds:0B333B4h, ebp
0x68872B: jnz     short loc_68876F
0x68872D: push    1
0x68872F: call    GetGlobalScriptStateObj??
0x688734: add     esp, 4
0x688737: cmp     byte ptr [eax+31h], 0
0x68873B: jg      short loc_688746
0x68873D: cmp     byte ptr ds:0B3B908h, 0
0x688744: jz      short loc_68876F
0x688746: mov     eax, [edi]
0x688748: mov     edx, [eax+0D4h]
0x68874E: mov     ecx, edi
0x688750: call    edx
0x688752: push    eax
0x688753: lea     eax, [esp+17Ch+Format]
0x688757: push    offset aActorSStopping; "Actor '%s' stopping path at invalid poi"...
0x68875C: push    eax
0x68875D: call    __sprintf
0x688762: lea     ecx, [esp+184h+Format]
0x688766: push    ecx; Format
0x688767: call    Interface_ConsolePrint
0x68876C: add     esp, 10h
0x68876F: lea     ecx, [esp+178h+var_14C]; void *
0x688773: mov     [esp+178h+var_4], 0FFFFFFFFh
0x68877E: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x688783: jmp     loc_688D8B
0x688788: lea     ecx, [esp+178h+var_14C]; void *
0x68878C: mov     [esp+178h+var_4], 0FFFFFFFFh
0x688797: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x68879C: jmp     loc_68882D
0x6887A1: test    byte ptr [esi+2Ch], 80h
0x6887A5: jz      short loc_6887B2
0x6887A7: mov     edx, [esi]
0x6887A9: mov     eax, [edx+30h]
0x6887AC: push    1
0x6887AE: mov     ecx, esi
0x6887B0: call    eax
0x6887B2: mov     edx, [edi]
0x6887B4: mov     eax, [edx+180h]
0x6887BA: push    1
0x6887BC: mov     ecx, edi
0x6887BE: call    eax
0x6887C0: mov     edx, [ebp+0]
0x6887C3: mov     eax, [edx+180h]
0x6887C9: push    1
0x6887CB: mov     ecx, ebp
0x6887CD: call    eax
0x6887CF: mov     ecx, esi
0x6887D1: call    sub_683C20
0x6887D6: mov     ecx, [esi+30h]
0x6887D9: test    ecx, ecx
0x6887DB: jz      short loc_6887E2
0x6887DD: call    sub_680C90
0x6887E2: cmp     ds:0B333B4h, ebp
0x6887E8: jnz     short loc_68882D
0x6887EA: push    1
0x6887EC: call    GetGlobalScriptStateObj??
0x6887F1: add     esp, 4
0x6887F4: cmp     byte ptr [eax+31h], 0
0x6887F8: jg      short loc_688803
0x6887FA: cmp     byte ptr ds:0B3B908h, 0
0x688801: jz      short loc_68882D
0x688803: mov     edx, [ebp+0]
0x688806: mov     eax, [edx+0D4h]
0x68880C: mov     ecx, ebp
0x68880E: call    eax
0x688810: push    eax
0x688811: lea     ecx, [esp+17Ch+Format]
0x688815: push    offset aActorSIndicati; "Actor '%s' indicating pathing completed"...
0x68881A: push    ecx; a2
0x68881B: call    __sprintf
0x688820: lea     edx, [esp+184h+Format]
0x688824: push    edx; Format
0x688825: call    Interface_ConsolePrint
0x68882A: add     esp, 10h
0x68882D: test    ebx, ebx
0x68882F: fld     dword ptr ds:0A32048h
0x688835: fstp    dword ptr [esi+1Ch]
0x688838: mov     [esp+178h+var_159], 0
0x68883D: fldz
0x68883F: fst     dword ptr [esi+24h]
0x688842: fstp    dword ptr [esi+20h]
0x688845: jz      loc_688D83
0x68884B: mov     ecx, ebx
0x68884D: call    sub_6899C0
0x688852: mov     dword ptr [esp+178h+var_14C], eax
0x688856: mov     eax, [edi]
0x688858: mov     edx, [eax+174h]
0x68885E: mov     ecx, edi
0x688860: call    edx
0x688862: fld     dword ptr [eax]
0x688864: mov     ecx, dword ptr [esp+178h+var_14C]
0x688868: fsub    dword ptr [ecx]
0x68886A: fstp    dword ptr [esp+178h+var_14C]
0x68886E: fld     dword ptr [eax+4]
0x688871: fsub    dword ptr [ecx+4]
0x688874: fstp    dword ptr [esp+178h+var_14C+4]
0x688878: fld     dword ptr [eax+8]
0x68887B: mov     eax, dword ptr [esp+178h+var_14C]
0x68887F: fsub    dword ptr [ecx+8]
0x688882: mov     ecx, dword ptr [esp+178h+var_14C+4]
0x688886: mov     dword ptr [esp+178h+var_120+4], ecx
0x68888A: lea     ecx, [esp+178h+var_120]
0x68888E: fstp    [esp+178h+var_144]
0x688892: mov     edx, [esp+178h+var_144]
0x688896: fldz
0x688898: mov     [esp+178h+var_118], edx
0x68889C: fstp    [esp+178h+var_118]
0x6888A0: mov     dword ptr [esp+178h+var_120], eax
0x6888A4: call    sub_404C90
0x6888A9: fstp    [esp+178h+var_150]
0x6888AD: mov     ecx, ebx
0x6888AF: call    sub_6899C0
0x6888B4: mov     ecx, ds:0B333A0h
0x6888BA: push    eax
0x6888BB: call    sub_43F840
0x6888C0: test    al, al
0x6888C2: jz      short loc_688927
0x6888C4: mov     ecx, [esi+30h]
0x6888C7: test    ecx, ecx
0x6888C9: jz      short loc_688927
0x6888CB: call    sub_680CB0
0x6888D0: mov     ecx, [esi+30h]
0x6888D3: push    ebx
0x6888D4: push    edi
0x6888D5: mov     dword ptr [esp+180h+var_14C], eax
0x6888D9: call    sub_681DF0
0x6888DE: mov     ecx, [esi+30h]
0x6888E1: call    sub_680CB0
0x6888E6: cmp     eax, 6
0x6888E9: jnz     short loc_688904
0x6888EB: mov     edi, [esi]
0x6888ED: push    0
0x6888EF: mov     ecx, esi
0x6888F1: call    sub_68A160
0x6888F6: push    eax
0x6888F7: mov     eax, [edi+14h]
0x6888FA: push    ebp
0x6888FB: mov     ecx, esi
0x6888FD: call    eax
0x6888FF: jmp     loc_688D8B
0x688904: mov     ecx, [esi+30h]
0x688907: call    sub_680CB0
0x68890C: test    eax, eax
0x68890E: jnz     short loc_688927
0x688910: cmp     dword ptr [esp+178h+var_14C], eax
0x688914: jz      short loc_688927
0x688916: fld     dword ptr ds:0A32048h
0x68891C: fstp    dword ptr [esi+1Ch]
0x68891F: fldz
0x688921: fst     dword ptr [esi+24h]
0x688924: fstp    dword ptr [esi+20h]
0x688927: cmp     [esp+178h+var_151], 0
0x68892C: jz      short loc_688936
0x68892E: push    edi; Concurrency::details::SchedulerBase *
0x68892F: mov     ecx, esi
0x688931: call    sub_686150
0x688936: mov     ecx, [esi+30h]
0x688939: test    ecx, ecx
0x68893B: jz      short loc_68894B
0x68893D: call    sub_680CB0
0x688942: cmp     eax, 7
0x688945: jz      loc_688C50
0x68894B: mov     ecx, esi
0x68894D: call    sub_683DB0
0x688952: test    al, al
0x688954: jnz     short loc_6889A6
0x688956: mov     edx, [edi]
0x688958: mov     eax, [edx+164h]
0x68895E: mov     ecx, edi
0x688960: call    eax
0x688962: cmp     byte ptr ds:0B1582Ch, 0
0x688969: jnz     loc_688A78
0x68896F: test    eax, eax
0x688971: jz      short loc_688982
0x688973: mov     ecx, eax
0x688975: call    sub_470F40
0x68897A: test    al, al
0x68897C: jnz     loc_688A78
0x688982: mov     [esp+178h+var_159], 0
0x688987: fld     dword ptr ds:0A32048h
0x68898D: fstp    dword ptr [esi+1Ch]
0x688990: fldz
0x688992: fst     dword ptr [esi+24h]
0x688995: fstp    dword ptr [esi+20h]
0x688998: cmp     [esp+178h+var_159], 0
0x68899D: jz      short loc_6889A6
0x68899F: fld     [esp+178h+var_150]
0x6889A3: fstp    dword ptr [esi+1Ch]
0x6889A6: cmp     byte ptr ds:0B1582Ch, 0
0x6889AD: jz      loc_688D83
0x6889B3: mov     ecx, edi
0x6889B5: call    sub_5E05B0
0x6889BA: test    al, al
0x6889BC: jz      loc_688D83
0x6889C2: mov     ecx, edi
0x6889C4: call    sub_5E05D0
0x6889C9: push    1
0x6889CB: mov     ecx, edi
0x6889CD: call    sub_46A9C0
0x6889D2: mov     edx, [edi]
0x6889D4: mov     eax, [edx+174h]
0x6889DA: mov     ecx, edi
0x6889DC: call    eax
0x6889DE: push    eax
0x6889DF: lea     ecx, [esp+17Ch+a3]
0x6889E3: push    ecx; a3
0x6889E4: mov     ecx, ebx
0x6889E6: call    sub_6899C0
0x6889EB: mov     ecx, eax
0x6889ED: call    sub_4121A0
0x6889F2: lea     ecx, [esp+178h+a3]
0x6889F6: call    sub_43F350
0x6889FB: fstp    st
0x6889FD: fld     dword ptr ds:0B33E9Ch
0x688A03: mov     ecx, ebp
0x688A05: fstp    dword ptr [esp+178h+var_14C]
0x688A09: call    sub_5E65B0
0x688A0E: fmul    dword ptr [esp+178h+var_14C]
0x688A12: push    ecx
0x688A13: lea     ecx, [esp+17Ch+a3]
0x688A17: fstp    dword ptr [esp+17Ch+var_14C]
0x688A1B: fld     dword ptr [esp+17Ch+var_14C]
0x688A1F: fstp    [esp+17Ch+a4]; a4
0x688A22: call    NiPoint3__MutliplyByValue
0x688A27: mov     edx, [edi]
0x688A29: mov     eax, [edx+174h]
0x688A2F: mov     ecx, edi
0x688A31: call    eax
0x688A33: fld     dword ptr [eax]
0x688A35: fadd    [esp+178h+a3]
0x688A39: sub     esp, 0Ch
0x688A3C: fstp    [esp+184h+var_12C]
0x688A40: mov     ecx, [esp+184h+var_12C]
0x688A44: fld     dword ptr [eax+4]
0x688A47: fadd    [esp+184h+var_134]
0x688A4B: fstp    [esp+184h+var_128]
0x688A4F: mov     edx, [esp+184h+var_128]
0x688A53: fld     dword ptr [eax+8]
0x688A56: mov     eax, esp
0x688A58: fadd    [esp+184h+var_130]
0x688A5C: mov     [eax], ecx
0x688A5E: mov     [eax+4], edx
0x688A61: fstp    [esp+184h+var_124]
0x688A65: mov     ecx, [esp+184h+var_124]
0x688A69: mov     [eax+8], ecx
0x688A6C: mov     ecx, edi; this
0x688A6E: call    TESObjectREFR_SetPosition
0x688A73: jmp     loc_688D83
0x688A78: test    byte ptr [esi+2Ch], 20h
0x688A7C: jnz     loc_688987
0x688A82: mov     ecx, [esi+30h]
0x688A85: test    ecx, ecx
0x688A87: jz      short loc_688A97
0x688A89: call    sub_680CB0
0x688A8E: cmp     eax, 5
0x688A91: jz      loc_688987
0x688A97: fld     [esp+178h+var_150]
0x688A9B: push    ecx
0x688A9C: mov     ecx, esi
0x688A9E: fstp    [esp+17Ch+a4]; float
0x688AA1: call    sub_685880
0x688AA6: test    al, al
0x688AA8: jnz     loc_688998
0x688AAE: push    edi
0x688AAF: mov     ecx, esi
0x688AB1: call    sub_683DF0
0x688AB6: mov     edx, [esi]
0x688AB8: mov     eax, [edx+2Ch]
0x688ABB: mov     ecx, esi
0x688ABD: call    eax
0x688ABF: test    al, al
0x688AC1: jz      loc_688998
0x688AC7: fld     dword ptr [esi+3Ch]
0x688ACA: fcomp   qword ptr ds:0A3A5B0h
0x688AD0: fnstsw  ax
0x688AD2: test    ah, 44h
0x688AD5: jp      loc_688B72
0x688ADB: mov     edx, [ebp+0]
0x688ADE: mov     eax, [edx+334h]
0x688AE4: push    1
0x688AE6: mov     ecx, ebp
0x688AE8: call    eax
0x688AEA: test    al, al
0x688AEC: jnz     loc_688B72
0x688AF2: mov     ecx, ebp
0x688AF4: call    Actor_IsSwimming
0x688AF9: test    al, al
0x688AFB: jnz     short loc_688B72
0x688AFD: mov     ecx, ebx
0x688AFF: call    sub_6899C0
0x688B04: fld     dword ptr [eax+8]
0x688B07: mov     edx, [ebp+0]
0x688B0A: fstp    [esp+178h+var_14C]
0x688B0E: mov     eax, [edx+174h]
0x688B14: mov     ecx, ebp
0x688B16: call    eax
0x688B18: fld     dword ptr [eax+8]
0x688B1B: fsubr   [esp+178h+var_14C]
0x688B1F: mov     ecx, ebp
0x688B21: fstp    [esp+178h+var_14C]
0x688B25: call    sub_5E0660
0x688B2A: fcomp   [esp+178h+var_14C]
0x688B2E: fnstsw  ax
0x688B30: test    ah, 5
0x688B33: jp      short loc_688B72
0x688B35: mov     edx, [ebp+0]
0x688B38: mov     eax, [edx+174h]
0x688B3E: mov     ecx, ebp
0x688B40: call    eax
0x688B42: push    eax
0x688B43: lea     ecx, [esp+17Ch+var_120]
0x688B47: push    ecx
0x688B48: mov     ecx, ebx
0x688B4A: call    sub_6899C0
0x688B4F: mov     ecx, eax
0x688B51: call    sub_4121A0
0x688B56: fldz
0x688B58: lea     ecx, [esp+178h+var_120]
0x688B5C: fstp    [esp+178h+var_118]
0x688B60: call    sub_404C90
0x688B65: fcomp   dword ptr ds:0A2FF44h
0x688B6B: fnstsw  ax
0x688B6D: test    ah, 5
0x688B70: jnp     short loc_688BB4
0x688B72: mov     ecx, edi; this
0x688B74: call    MobileObject_GetCharProxy
0x688B79: test    eax, eax
0x688B7B: mov     [esp+178h+var_158], eax
0x688B7F: jz      loc_688C50
0x688B85: mov     ecx, eax
0x688B87: call    sub_892D90
0x688B8C: test    al, al
0x688B8E: jnz     short loc_688BB4
0x688B90: mov     edx, [edi]
0x688B92: mov     eax, [edx+174h]
0x688B98: push    0
0x688B9A: push    0
0x688B9C: push    0
0x688B9E: mov     ecx, edi
0x688BA0: call    eax
0x688BA2: mov     ecx, [esp+184h+var_158]
0x688BA6: push    eax
0x688BA7: call    sub_8949C0
0x688BAC: test    al, al
0x688BAE: jnz     loc_688C50
0x688BB4: mov     ecx, ebx
0x688BB6: mov     [esp+178h+var_160], ebx
0x688BBA: call    sub_68CA20
0x688BBF: test    al, al
0x688BC1: jnz     short loc_688C1C
0x688BC3: push    0
0x688BC5: push    0
0x688BC7: push    edi
0x688BC8: mov     ecx, ebx
0x688BCA: call    sub_6899C0
0x688BCF: push    eax
0x688BD0: call    sub_67D820
0x688BD5: add     esp, 10h
0x688BD8: test    eax, eax
0x688BDA: mov     [esp+178h+var_158], eax
0x688BDE: jz      short loc_688C1C
0x688BE0: mov     edx, [edi]
0x688BE2: mov     eax, [edx+174h]
0x688BE8: push    0
0x688BEA: push    0
0x688BEC: push    edi
0x688BED: mov     ecx, edi
0x688BEF: call    eax
0x688BF1: push    eax
0x688BF2: call    sub_67D820
0x688BF7: add     esp, 10h
0x688BFA: test    eax, eax
0x688BFC: jz      short loc_688C04
0x688BFE: cmp     eax, [esp+178h+var_158]
0x688C02: jnz     short loc_688C1C
0x688C04: mov     ecx, [esp+178h+var_158]
0x688C08: push    0
0x688C0A: call    sub_4BEF40
0x688C0F: push    eax
0x688C10: lea     ecx, [esi+14h]
0x688C13: call    sub_68C280
0x688C18: mov     [esp+178h+var_160], eax
0x688C1C: cmp     [esp+178h+var_160], 0
0x688C21: jz      short loc_688C50
0x688C23: mov     ecx, [esp+178h+var_160]
0x688C27: mov     edi, [ebp+0]
0x688C2A: call    sub_6899C0
0x688C2F: mov     edx, [edi+1CCh]
0x688C35: push    eax
0x688C36: mov     ecx, ebp
0x688C38: call    edx
0x688C3A: fld     dword ptr ds:0A32048h
0x688C40: fstp    dword ptr [esi+1Ch]
0x688C43: fldz
0x688C45: fst     dword ptr [esi+24h]
0x688C48: fstp    dword ptr [esi+20h]
0x688C4B: jmp     loc_688D8B
0x688C50: mov     ecx, ebx
0x688C52: call    sub_68CA20
0x688C57: test    al, al
0x688C59: jz      short loc_688CDA
0x688C5B: push    ebp
0x688C5C: mov     ecx, ebx
0x688C5E: call    sub_6899C0
0x688C63: push    eax
0x688C64: mov     ecx, esi
0x688C66: call    sub_6849F0
0x688C6B: test    al, al
0x688C6D: jz      short loc_688CDA
0x688C6F: mov     ebx, [esi]
0x688C71: push    1
0x688C73: mov     ecx, esi
0x688C75: call    sub_68A160
0x688C7A: push    eax
0x688C7B: mov     eax, [ebx+14h]
0x688C7E: push    ebp
0x688C7F: mov     ecx, esi
0x688C81: call    eax
0x688C83: cmp     ds:0B333B4h, ebp
0x688C89: jnz     loc_688D8B
0x688C8F: push    1
0x688C91: call    GetGlobalScriptStateObj??
0x688C96: add     esp, 4
0x688C99: cmp     byte ptr [eax+31h], 0
0x688C9D: jg      short loc_688CAC
0x688C9F: cmp     byte ptr ds:0B3B908h, 0
0x688CA6: jz      loc_688D8B
0x688CAC: mov     edx, [edi]
0x688CAE: mov     eax, [edx+0D4h]
0x688CB4: mov     ecx, edi
0x688CB6: call    eax
0x688CB8: push    eax
0x688CB9: lea     ecx, [esp+17Ch+Format]
0x688CBD: push    offset aActorSAddedBad; "Actor '%s' added bad connection for fai"...
0x688CC2: push    ecx
0x688CC3: call    __sprintf
0x688CC8: lea     edx, [esp+184h+Format]
0x688CCC: push    edx; Format
0x688CCD: call    Interface_ConsolePrint
0x688CD2: add     esp, 10h
0x688CD5: jmp     loc_688D8B
0x688CDA: mov     ecx, esi
0x688CDC: call    sub_684EC0
0x688CE1: mov     eax, [esi]
0x688CE3: mov     edx, [eax+30h]
0x688CE6: push    1
0x688CE8: mov     ecx, esi
0x688CEA: call    edx
0x688CEC: mov     eax, [ebp+0]
0x688CEF: mov     edx, [eax+180h]
0x688CF5: push    1
0x688CF7: mov     ecx, ebp
0x688CF9: call    edx
0x688CFB: mov     eax, [edi]
0x688CFD: mov     edx, [eax+180h]
0x688D03: push    1
0x688D05: mov     ecx, edi
0x688D07: call    edx
0x688D09: cmp     ds:0B333B4h, ebp
0x688D0F: jnz     short loc_688D8B
0x688D11: push    1
0x688D13: call    GetGlobalScriptStateObj??
0x688D18: add     esp, 4
0x688D1B: cmp     byte ptr [eax+31h], 0
0x688D1F: jg      short loc_688D2A
0x688D21: cmp     byte ptr ds:0B3B908h, 0
0x688D28: jz      short loc_688D8B
0x688D2A: mov     eax, [edi]
0x688D2C: mov     edx, [eax+0D4h]
0x688D32: mov     ecx, edi
0x688D34: call    edx
0x688D36: push    eax
0x688D37: lea     eax, [esp+17Ch+Format]
0x688D3B: push    offset aActorSIndica_0; "Actor '%s' indicating pathfinding has f"...
0x688D40: push    eax
0x688D41: call    __sprintf
0x688D46: lea     ecx, [esp+184h+Format]
0x688D4A: push    ecx; Format
0x688D4B: call    Interface_ConsolePrint
0x688D50: add     esp, 10h
0x688D53: jmp     short loc_688D8B
0x688D55: mov     edx, [ebp+0]
0x688D58: mov     eax, [edx+180h]
0x688D5E: push    1
0x688D60: mov     ecx, ebp
0x688D62: call    eax
0x688D64: mov     edx, [edi]
0x688D66: mov     eax, [edx+180h]
0x688D6C: push    1
0x688D6E: mov     ecx, edi
0x688D70: call    eax
0x688D72: test    byte ptr [esi+2Ch], 80h
0x688D76: jz      short loc_688D83
0x688D78: mov     edx, [esi]
0x688D7A: mov     eax, [edx+30h]
0x688D7D: push    1
0x688D7F: mov     ecx, esi
0x688D81: call    eax
0x688D83: push    edi
0x688D84: mov     ecx, esi
0x688D86: call    sub_686060
0x688D8B: mov     ecx, dword ptr [esp+178h+var_C]
0x688D92: mov     large fs:0, ecx
0x688D99: pop     ecx
0x688D9A: pop     edi
0x688D9B: pop     esi
0x688D9C: pop     ebp
0x688D9D: pop     ebx
0x688D9E: mov     ecx, [esp+164h+var_10]
0x688DA5: xor     ecx, esp
0x688DA7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x688DAC: add     esp, 164h
0x688DB2: retn    4
