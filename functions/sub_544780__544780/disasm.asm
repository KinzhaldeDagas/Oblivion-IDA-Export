0x544780: push    0FFFFFFFFh
0x544782: push    offset SEH_544780
0x544787: mov     eax, large fs:0
0x54478D: push    eax
0x54478E: sub     esp, 4ACh
0x544794: mov     eax, ds:0B30AACh
0x544799: xor     eax, esp
0x54479B: mov     [esp+4B8h+var_10], eax
0x5447A2: push    ebx
0x5447A3: push    ebp
0x5447A4: push    esi
0x5447A5: push    edi
0x5447A6: mov     eax, ds:0B30AACh
0x5447AB: xor     eax, esp
0x5447AD: push    eax; ArgList
0x5447AE: lea     eax, [esp+4CCh+var_C]
0x5447B5: mov     large fs:0, eax
0x5447BB: mov     eax, [esp+4CCh+arg_0]
0x5447C2: xor     ebx, ebx
0x5447C4: cmp     eax, ebx
0x5447C6: mov     edi, ecx
0x5447C8: jz      loc_544A95
0x5447CE: cmp     [eax], bl
0x5447D0: jz      loc_544A95
0x5447D6: mov     [esp+4CCh+Src], ebx
0x5447DA: mov     [esp+4CCh+var_4B0], bx
0x5447DF: mov     [esp+4CCh+var_4AE], bx
0x5447E4: push    eax
0x5447E5: push    offset SubStr
0x5447EA: push    offset aMeshes_0; "Meshes"
0x5447EF: lea     eax, [esp+4D8h+Src]
0x5447F3: push    offset aSSS; "%s%s%s"
0x5447F8: push    eax; int
0x5447F9: mov     [esp+4E0h+var_4], ebx
0x544800: call    BSStringT_Static_Format
0x544805: add     esp, 14h
0x544808: lea     ecx, [esp+4CCh+var_4A0]; this
0x54480C: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x544811: mov     [esp+4CCh+var_4A0], offset ??_7BSStream@@6B@; const BSStream::`vftable'
0x544819: mov     [esp+4CCh+var_14], ebx
0x544820: mov     [esp+4CCh+var_18], ebx
0x544827: mov     esi, [esp+4CCh+Src]
0x54482B: push    ebx; int
0x54482C: push    esi; Src
0x54482D: lea     ecx, [esp+4D4h+var_4A0]
0x544831: mov     byte ptr [esp+4D4h+var_4], 1
0x544839: call    sub_6F9980
0x54483E: test    al, al
0x544840: jz      loc_544A64
0x544846: cmp     [esp+4CCh+var_290], 1
0x54484E: jnz     loc_544A64
0x544854: mov     ecx, [esp+4CCh+var_298]
0x54485B: mov     eax, [ecx]
0x54485D: push    eax
0x54485E: push    offset dword_B3FAB0
0x544863: call    NiRTTI__IsObjectOfRTTIType
0x544868: add     esp, 8
0x54486B: test    al, al
0x54486D: jz      loc_544A64
0x544873: mov     eax, [edi+4]
0x544876: or      word ptr [eax+18h], 20h
0x54487B: mov     eax, [edi+8]
0x54487E: mov     ecx, [edi+4]
0x544881: mov     edx, [ecx]
0x544883: mov     edx, [edx+88h]
0x544889: lea     esi, [edi+8]
0x54488C: push    eax
0x54488D: lea     eax, [esp+4D0h+var_4B8]
0x544891: push    eax
0x544892: call    edx
0x544894: lea     ecx, [esp+4CCh+var_4B8]; this
0x544898: call    sub_7016A0
0x54489D: mov     eax, [esp+4CCh+var_298]
0x5448A4: mov     eax, [eax]
0x5448A6: push    eax; a2
0x5448A7: mov     ecx, esi; this
0x5448A9: call    NiSmartPointer_Set??
0x5448AE: mov     ecx, [esi]
0x5448B0: push    offset aStarsMeshes; "Stars Meshes"
0x5448B5: call    NiObjectNET_SetName
0x5448BA: mov     eax, [esi]
0x5448BC: or      word ptr [eax+18h], 2
0x5448C1: mov     ecx, [edi+4]
0x5448C4: mov     eax, [esi]
0x5448C6: mov     edx, [ecx]
0x5448C8: push    1
0x5448CA: push    eax
0x5448CB: mov     eax, [edx+84h]
0x5448D1: call    eax
0x5448D3: mov     ecx, [esi]
0x5448D5: push    9
0x5448D7: call    NiNode_GetNiPropertyByID
0x5448DC: test    eax, eax
0x5448DE: jz      short loc_5448F7
0x5448E0: mov     ecx, [esi]
0x5448E2: push    9
0x5448E4: lea     edx, [esp+4D0h+var_4B8]
0x5448E8: push    edx
0x5448E9: call    sub_708560
0x5448EE: lea     ecx, [esp+4CCh+var_4B8]; this
0x5448F2: call    sub_7016A0
0x5448F7: mov     ecx, [esi]
0x5448F9: push    7
0x5448FB: call    NiNode_GetNiPropertyByID
0x544900: test    eax, eax
0x544902: jz      short loc_54491B
0x544904: mov     ecx, [esi]
0x544906: push    7
0x544908: lea     eax, [esp+4D0h+var_4B8]
0x54490C: push    eax
0x54490D: call    sub_708560
0x544912: lea     ecx, [esp+4CCh+var_4B8]; this
0x544916: call    sub_7016A0
0x54491B: mov     ecx, [esi]
0x54491D: push    ebx
0x54491E: call    sub_405790
0x544923: mov     ebp, eax
0x544925: cmp     ebp, ebx
0x544927: jz      short loc_54498F
0x544929: push    ebx
0x54492A: lea     ecx, [esp+4D0h+var_4B8]
0x54492E: push    ecx
0x54492F: mov     ecx, ebp
0x544931: call    sub_708560
0x544936: lea     ecx, [esp+4CCh+var_4B8]; this
0x54493A: call    sub_7016A0
0x54493F: push    2
0x544941: mov     ecx, ebp
0x544943: call    NiNode_GetNiPropertyByID
0x544948: cmp     eax, ebx
0x54494A: jz      short loc_54498F
0x54494C: mov     edx, ds:0B3FA90h
0x544952: mov     [eax+34h], edx
0x544955: mov     ecx, ds:0B3FA94h
0x54495B: mov     [eax+38h], ecx
0x54495E: mov     edx, ds:0B3FA98h
0x544964: add     dword ptr [eax+54h], 1
0x544968: mov     ecx, [eax+54h]
0x54496B: mov     [eax+3Ch], edx
0x54496E: mov     edx, ds:0B3FA90h
0x544974: mov     [eax+40h], edx
0x544977: mov     edx, ds:0B3FA94h
0x54497D: mov     [eax+44h], edx
0x544980: mov     edx, ds:0B3FA98h
0x544986: add     ecx, 1
0x544989: mov     [eax+48h], edx
0x54498C: mov     [eax+54h], ecx
0x54498F: mov     edi, [edi+4]
0x544992: push    1
0x544994: push    ebx
0x544995: push    0Ah; float
0x544997: push    edi; float
0x544998: call    sub_7B8940
0x54499D: mov     esi, [esi]
0x54499F: add     esp, 10h
0x5449A2: cmp     esi, ebx
0x5449A4: jz      loc_544A45
0x5449AA: xor     edi, edi
0x5449AC: cmp     [esi+0B8h], bx
0x5449B3: jbe     short loc_544A12
0x5449B5: mov     ebp, 5
0x5449BA: lea     ebx, [ebx+0]
0x5449C0: movzx   eax, word ptr [esi+0B6h]
0x5449C7: cmp     eax, edi
0x5449C9: jbe     short loc_544A04
0x5449CB: mov     ecx, [esi+0B0h]
0x5449D1: mov     ecx, [ecx+edi*4]
0x5449D4: cmp     ecx, ebx
0x5449D6: jz      short loc_544A04
0x5449D8: mov     edx, [ecx]
0x5449DA: mov     eax, [edx+0Ch]
0x5449DD: call    eax
0x5449DF: cmp     eax, ebx
0x5449E1: jz      short loc_544A04
0x5449E3: push    4
0x5449E5: mov     ecx, eax
0x5449E7: call    NiNode_GetNiPropertyByID
0x5449EC: push    eax
0x5449ED: push    offset dword_B4335C; float
0x5449F2: call    NiRTTI_Cast
0x5449F7: add     esp, 8
0x5449FA: cmp     eax, ebx
0x5449FC: jz      short loc_544A04
0x5449FE: mov     [eax+88h], ebp
0x544A04: movzx   ecx, word ptr [esi+0B8h]
0x544A0B: add     edi, 1
0x544A0E: cmp     edi, ecx
0x544A10: jb      short loc_5449C0
0x544A12: fld1
0x544A14: push    ebx; int
0x544A15: fstp    [esp+4D0h+var_4AC]
0x544A19: sub     esp, 0Ch
0x544A1C: fldz
0x544A1E: mov     edx, [esp+4DCh+var_4AC]
0x544A22: mov     eax, esp
0x544A24: fst     [esp+4DCh+var_4A8]
0x544A28: mov     [eax], edx
0x544A2A: fstp    [esp+4DCh+var_4A4]
0x544A2E: mov     ecx, [esp+4DCh+var_4A8]
0x544A32: mov     edx, [esp+4DCh+var_4A4]
0x544A36: mov     [eax+4], ecx
0x544A39: push    esi; int
0x544A3A: mov     [eax+8], edx
0x544A3D: call    sub_541630
0x544A42: add     esp, 14h
0x544A45: lea     ecx, [esp+4CCh+var_4A0]; this
0x544A49: mov     byte ptr [esp+4CCh+var_4], bl
0x544A50: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x544A55: mov     eax, [esp+4CCh+Src]
0x544A59: push    eax
0x544A5A: call    FormHeapFree
0x544A5F: add     esp, 4
0x544A62: jmp     short loc_544A9E
0x544A64: push    offset aCannotLoadTheS; "Cannot load the stars."
0x544A69: call    PrintError
0x544A6E: mov     edi, [edi+4]
0x544A71: and     word ptr [edi+18h], 0FFDFh
0x544A77: add     esp, 4
0x544A7A: lea     ecx, [esp+4CCh+var_4A0]; this
0x544A7E: mov     byte ptr [esp+4CCh+var_4], bl
0x544A85: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x544A8A: push    esi
0x544A8B: call    FormHeapFree
0x544A90: add     esp, 4
0x544A93: jmp     short loc_544A9E
0x544A95: mov     edi, [edi+4]
0x544A98: and     word ptr [edi+18h], 0FFDFh
0x544A9E: mov     ecx, [esp+4CCh+var_C]
0x544AA5: mov     large fs:0, ecx
0x544AAC: pop     ecx
0x544AAD: pop     edi
0x544AAE: pop     esi
0x544AAF: pop     ebp
0x544AB0: pop     ebx
0x544AB1: mov     ecx, [esp+4B8h+var_10]
0x544AB8: xor     ecx, esp
0x544ABA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x544ABF: add     esp, 4B8h
0x544AC5: retn    4
