0x5B0830: sub     esp, 0Ch
0x5B0833: push    ebx
0x5B0834: push    ebp
0x5B0835: push    esi
0x5B0836: push    edi
0x5B0837: mov     edi, ecx
0x5B0839: mov     eax, [edi+40h]
0x5B083C: sub     eax, [edi+44h]
0x5B083F: mov     ebp, 64h ; 'd'
0x5B0844: cmp     eax, 64h ; 'd'
0x5B0847: ja      short loc_5B084B
0x5B0849: mov     ebp, eax
0x5B084B: lea     esi, [edi+80h]
0x5B0851: mov     [esp+1Ch+var_8], 5
0x5B0859: xor     ebx, ebx
0x5B085B: jmp     short loc_5B0860
0x5B085D: align 10h
0x5B0860: cmp     byte ptr [esi+14h], 1
0x5B0864: fld     dword ptr ds:0A6C8B8h
0x5B086A: fldz
0x5B086C: jnz     loc_5B09BA
0x5B0872: cmp     [esi+15h], bl
0x5B0875: jnz     loc_5B097B
0x5B087B: mov     ecx, [esi]
0x5B087D: cmp     ecx, 0FFFFFFFFh
0x5B0880: jnz     short loc_5B08FA
0x5B0882: mov     al, [esi+16h]
0x5B0885: cmp     al, 1
0x5B0887: jnz     short loc_5B0891
0x5B0889: fxch    st(1)
0x5B088B: fst     [esp+1Ch+var_C]
0x5B088F: jmp     short loc_5B08AB
0x5B0891: mov     edx, ebp
0x5B0893: test    edx, edx
0x5B0895: mov     [esp+1Ch+var_4], edx
0x5B0899: fild    [esp+1Ch+var_4]
0x5B089D: jge     short loc_5B08A5
0x5B089F: fadd    dword ptr ds:0A2FC78h
0x5B08A5: fstp    [esp+1Ch+var_C]
0x5B08A9: fxch    st(1)
0x5B08AB: cmp     al, 1
0x5B08AD: fld     dword ptr [esi+10h]
0x5B08B0: fld     dword ptr [esi+0Ch]
0x5B08B3: fmul    [esp+1Ch+var_C]
0x5B08B7: fsubp   st(1), st
0x5B08B9: fstp    [esp+1Ch+var_C]
0x5B08BD: fld     [esp+1Ch+var_C]
0x5B08C1: fst     [esp+1Ch+var_4]
0x5B08C5: fstp    dword ptr [esi+10h]
0x5B08C8: jz      short loc_5B08E0
0x5B08CA: mov     eax, ebp
0x5B08CC: fstp    st
0x5B08CE: test    eax, eax
0x5B08D0: mov     [esp+1Ch+var_C], eax
0x5B08D4: fild    [esp+1Ch+var_C]
0x5B08D8: jge     short loc_5B08E0
0x5B08DA: fadd    dword ptr ds:0A2FC78h
0x5B08E0: fstp    [esp+1Ch+var_C]
0x5B08E4: fld     dword ptr [edi+78h]
0x5B08E7: mov     [esi+16h], bl
0x5B08EA: fmul    [esp+1Ch+var_4]
0x5B08EE: fmul    [esp+1Ch+var_C]
0x5B08F2: fadd    dword ptr [esi-4]
0x5B08F5: fstp    dword ptr [esi-4]
0x5B08F8: jmp     short loc_5B08FC
0x5B08FA: fstp    st(1)
0x5B08FC: fld     dword ptr [esi-4]
0x5B08FF: fld     dword ptr [edi+78h]
0x5B0902: fcompp
0x5B0904: fnstsw  ax
0x5B0906: test    ah, 5
0x5B0909: jp      short loc_5B094A
0x5B090B: cmp     ecx, 0FFFFFFFFh
0x5B090E: jnz     short loc_5B0929
0x5B0910: fstp    dword ptr [esi+10h]
0x5B0913: mov     ecx, ds:0B33EA0h
0x5B0919: mov     [esi], ecx
0x5B091B: push    offset aUilockclicknow; "UILockClickNow"
0x5B0920: mov     ecx, edi
0x5B0922: call    sub_5AFD50
0x5B0927: jmp     short loc_5B092B
0x5B0929: fstp    st
0x5B092B: mov     edx, ds:0B33EA0h
0x5B0931: sub     edx, [esi]
0x5B0933: cmp     edx, [esi+4]
0x5B0936: jbe     loc_5B09C8
0x5B093C: fld     dword ptr [edi+78h]
0x5B093F: mov     dword ptr [esi], 0FFFFFFFFh
0x5B0945: fstp    dword ptr [esi-4]
0x5B0948: jmp     short loc_5B09C8
0x5B094A: fcom    dword ptr [esi-4]
0x5B094D: fnstsw  ax
0x5B094F: test    ah, 1
0x5B0952: jnz     short loc_5B09C6
0x5B0954: mov     ecx, [esi+20h]
0x5B0957: cmp     ecx, ebx
0x5B0959: jz      short loc_5B0970
0x5B095B: fstp    st
0x5B095D: call    sub_6B7260
0x5B0962: test    al, al
0x5B0964: jz      short loc_5B096E
0x5B0966: mov     ecx, [esi+20h]
0x5B0969: call    sub_6B7240
0x5B096E: fldz
0x5B0970: fst     dword ptr [esi-4]
0x5B0973: mov     [esi+14h], bl
0x5B0976: fstp    dword ptr [esi+10h]
0x5B0979: jmp     short loc_5B09C8
0x5B097B: fstp    st
0x5B097D: mov     eax, ebp
0x5B097F: test    eax, eax
0x5B0981: fstp    st
0x5B0983: fld     dword ptr [esi+8]
0x5B0986: mov     [esp+1Ch+var_4], eax
0x5B098A: fild    [esp+1Ch+var_4]
0x5B098E: jge     short loc_5B0996
0x5B0990: fadd    dword ptr ds:0A2FC78h
0x5B0996: fmulp   st(1), st
0x5B0998: fadd    dword ptr [esi-4]
0x5B099B: fstp    [esp+1Ch+var_4]
0x5B099F: fld     [esp+1Ch+var_4]
0x5B09A3: fst     dword ptr [esi-4]
0x5B09A6: fld     dword ptr [edi+78h]
0x5B09A9: fcompp
0x5B09AB: fnstsw  ax
0x5B09AD: test    ah, 5
0x5B09B0: jp      short loc_5B09C8
0x5B09B2: fld     dword ptr [edi+78h]
0x5B09B5: fstp    dword ptr [esi-4]
0x5B09B8: jmp     short loc_5B09C8
0x5B09BA: cmp     [esi+15h], bl
0x5B09BD: fstp    st(1)
0x5B09BF: jnz     short loc_5B09C6
0x5B09C1: fstp    dword ptr [esi+10h]
0x5B09C4: jmp     short loc_5B09C8
0x5B09C6: fstp    st
0x5B09C8: mov     ecx, [esi+1Ch]
0x5B09CB: push    ebx; int
0x5B09CC: push    offset ??_R0?AVTile3D@@@8; struct TypeDescriptor *
0x5B09D1: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5B09D6: push    ebx; int
0x5B09D7: push    ecx; void *
0x5B09D8: call    OblivionDynamicCast
0x5B09DD: add     esp, 14h
0x5B09E0: cmp     eax, ebx
0x5B09E2: jz      short loc_5B09EA
0x5B09E4: fld     dword ptr [esi-4]
0x5B09E7: fstp    dword ptr [eax+58h]
0x5B09EA: add     esi, 28h ; '('
0x5B09ED: sub     [esp+1Ch+var_8], 1
0x5B09F2: jnz     loc_5B0860
0x5B09F8: pop     edi
0x5B09F9: pop     esi
0x5B09FA: pop     ebp
0x5B09FB: pop     ebx
0x5B09FC: add     esp, 0Ch
0x5B09FF: retn
