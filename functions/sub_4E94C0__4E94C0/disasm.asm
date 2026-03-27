0x4E94C0: push    0FFFFFFFFh
0x4E94C2: push    offset SEH_4E94C0
0x4E94C7: mov     eax, large fs:0
0x4E94CD: push    eax
0x4E94CE: sub     esp, 58h
0x4E94D1: push    ebx
0x4E94D2: push    ebp
0x4E94D3: push    esi
0x4E94D4: push    edi
0x4E94D5: mov     eax, ds:0B30AACh
0x4E94DA: xor     eax, esp
0x4E94DC: push    eax
0x4E94DD: lea     eax, [esp+78h+var_C]
0x4E94E1: mov     large fs:0, eax
0x4E94E7: mov     [esp+78h+var_60], ecx
0x4E94EB: xor     al, al
0x4E94ED: cmp     [esp+78h+arg_8], 0
0x4E94F5: mov     [esp+78h+var_61], al
0x4E94F9: jz      loc_4E96EF
0x4E94FF: mov     edi, [esp+78h+a1]
0x4E9503: fld     dword ptr [edi]
0x4E9505: fstp    [esp+78h+var_5C]
0x4E9509: fld     [esp+78h+var_5C]
0x4E950D: fistp   [esp+78h+a1]
0x4E9511: mov     eax, [esp+78h+a1]
0x4E9515: fld     dword ptr [edi+4]
0x4E9518: fstp    [esp+78h+var_5C]
0x4E951C: sar     eax, 0Ch
0x4E951F: fld     [esp+78h+var_5C]
0x4E9523: fistp   [esp+78h+a1]
0x4E9527: mov     esi, [esp+78h+arg_4]
0x4E952E: mov     edx, [esp+78h+a1]
0x4E9532: fld     dword ptr [esi]
0x4E9534: fstp    [esp+78h+arg_4]
0x4E953B: sar     edx, 0Ch
0x4E953E: fld     [esp+78h+arg_4]
0x4E9545: fistp   [esp+78h+a1]
0x4E9549: fld     dword ptr [esi+4]
0x4E954C: mov     ebp, [esp+78h+a1]
0x4E9550: fstp    [esp+78h+arg_4]
0x4E9557: sar     ebp, 0Ch
0x4E955A: fld     [esp+78h+arg_4]
0x4E9561: fistp   [esp+78h+a1]
0x4E9565: mov     ebx, [esp+78h+a1]
0x4E9569: mov     ecx, [ecx+2Ch]; this
0x4E956C: push    edx; signed int
0x4E956D: push    eax; signed int
0x4E956E: sar     ebx, 0Ch
0x4E9571: call    TESWorldSpace__GetCellAtCellCoord
0x4E9576: mov     [esp+78h+a1], eax
0x4E957A: mov     eax, [esp+78h+var_60]
0x4E957E: mov     ecx, [eax+2Ch]; this
0x4E9581: push    ebx; signed int
0x4E9582: push    ebp; signed int
0x4E9583: call    TESWorldSpace__GetCellAtCellCoord
0x4E9588: mov     ecx, [esp+78h+a1]
0x4E958C: push    1; a2
0x4E958E: push    ecx; a1
0x4E958F: mov     ecx, ds:0B333A0h
0x4E9595: mov     ebx, eax
0x4E9597: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4E959C: test    al, al
0x4E959E: jz      short loc_4E95B6
0x4E95A0: mov     ecx, ds:0B333A0h
0x4E95A6: push    1; a2
0x4E95A8: push    ebx; a1
0x4E95A9: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4E95AE: test    al, al
0x4E95B0: jnz     loc_4E96EB
0x4E95B6: mov     ebp, [esp+78h+var_60]
0x4E95BA: push    edi
0x4E95BB: mov     ecx, ebp
0x4E95BD: call    sub_4E9150
0x4E95C2: push    esi
0x4E95C3: mov     ecx, ebp
0x4E95C5: mov     ebx, eax
0x4E95C7: call    sub_4E9150
0x4E95CC: test    ebx, ebx
0x4E95CE: mov     ebp, eax
0x4E95D0: jz      loc_4E96EB
0x4E95D6: test    ebp, ebp
0x4E95D8: jz      loc_4E96EB
0x4E95DE: cmp     ebx, ebp
0x4E95E0: jz      loc_4E96EB
0x4E95E6: mov     ecx, ebx
0x4E95E8: call    sub_4BEF40
0x4E95ED: fld     dword ptr [edi]
0x4E95EF: fsub    dword ptr [eax]
0x4E95F1: lea     ecx, [esp+78h+var_50]
0x4E95F5: fstp    [esp+78h+a1]
0x4E95F9: fld     dword ptr [edi+4]
0x4E95FC: fsub    dword ptr [eax+4]
0x4E95FF: fstp    [esp+78h+arg_4]
0x4E9606: fld     dword ptr [edi+8]
0x4E9609: fsub    dword ptr [eax+8]
0x4E960C: fstp    [esp+78h+var_5C]
0x4E9610: fld     [esp+78h+a1]
0x4E9614: fstp    [esp+78h+var_50]
0x4E9618: fld     [esp+78h+arg_4]
0x4E961F: fstp    [esp+78h+var_4C]
0x4E9623: fld     [esp+78h+var_5C]
0x4E9627: fstp    [esp+78h+var_48]
0x4E962B: call    sub_404C90
0x4E9630: mov     ecx, ebp
0x4E9632: fstp    [esp+78h+var_58]
0x4E9636: call    sub_4BEF40
0x4E963B: fld     dword ptr [esi]
0x4E963D: fsub    dword ptr [eax]
0x4E963F: lea     ecx, [esp+78h+var_50]
0x4E9643: fstp    [esp+78h+a1]
0x4E9647: fld     dword ptr [esi+4]
0x4E964A: fsub    dword ptr [eax+4]
0x4E964D: fstp    [esp+78h+arg_4]
0x4E9654: fld     dword ptr [esi+8]
0x4E9657: fsub    dword ptr [eax+8]
0x4E965A: fstp    [esp+78h+var_5C]
0x4E965E: fld     [esp+78h+a1]
0x4E9662: fstp    [esp+78h+var_50]
0x4E9666: fld     [esp+78h+arg_4]
0x4E966D: fstp    [esp+78h+var_4C]
0x4E9671: fld     [esp+78h+var_5C]
0x4E9675: fstp    [esp+78h+var_48]
0x4E9679: call    sub_404C90
0x4E967E: fstp    [esp+78h+var_54]
0x4E9682: lea     ecx, [esp+78h+var_50]
0x4E9686: fld     dword ptr [edi]
0x4E9688: fsub    dword ptr [esi]
0x4E968A: fstp    [esp+78h+a1]
0x4E968E: fld     dword ptr [edi+4]
0x4E9691: fsub    dword ptr [esi+4]
0x4E9694: fstp    [esp+78h+arg_4]
0x4E969B: fld     dword ptr [edi+8]
0x4E969E: fsub    dword ptr [esi+8]
0x4E96A1: fstp    [esp+78h+var_5C]
0x4E96A5: fld     [esp+78h+a1]
0x4E96A9: fstp    [esp+78h+var_50]
0x4E96AD: fld     [esp+78h+arg_4]
0x4E96B4: fstp    [esp+78h+var_4C]
0x4E96B8: fld     [esp+78h+var_5C]
0x4E96BC: fstp    [esp+78h+var_48]
0x4E96C0: call    sub_404C90
0x4E96C5: fstp    [esp+78h+a1]
0x4E96C9: fld     [esp+78h+var_58]
0x4E96CD: fcom    qword ptr ds:0A2FC70h
0x4E96D3: fnstsw  ax
0x4E96D5: test    ah, 5
0x4E96D8: jnp     short loc_4E9705
0x4E96DA: fadd    [esp+78h+var_54]
0x4E96DE: fld     [esp+78h+a1]
0x4E96E2: fcompp
0x4E96E4: fnstsw  ax
0x4E96E6: test    ah, 41h
0x4E96E9: jz      short loc_4E9707
0x4E96EB: mov     al, [esp+78h+var_61]
0x4E96EF: mov     ecx, [esp+78h+var_C]
0x4E96F3: mov     large fs:0, ecx
0x4E96FA: pop     ecx
0x4E96FB: pop     edi
0x4E96FC: pop     esi
0x4E96FD: pop     ebp
0x4E96FE: pop     ebx
0x4E96FF: add     esp, 64h
0x4E9702: retn    0Ch
0x4E9705: fstp    st
0x4E9707: lea     ecx, [esp+78h+var_38]
0x4E970B: call    sub_67D760
0x4E9710: mov     esi, [esp+78h+arg_8]
0x4E9717: push    esi
0x4E9718: push    ebp
0x4E9719: push    ebx
0x4E971A: lea     ecx, [esp+84h+var_38]
0x4E971E: mov     [esp+84h+var_4], 0
0x4E9729: call    sub_67E610
0x4E972E: test    al, al
0x4E9730: jz      loc_4E97BF
0x4E9736: mov     ecx, esi
0x4E9738: call    sub_42B410
0x4E973D: mov     ebx, eax
0x4E973F: test    ebx, ebx
0x4E9741: jz      short loc_4E97BB
0x4E9743: mov     ecx, ebx
0x4E9745: call    NiDX92DBufferData__GetSurfaceData
0x4E974A: mov     ebp, eax
0x4E974C: test    ebp, ebp
0x4E974E: jz      short loc_4E97BB
0x4E9750: mov     ecx, ebx
0x4E9752: call    sub_6899C0
0x4E9757: push    eax
0x4E9758: lea     edx, [esp+7Ch+var_50]
0x4E975C: push    edx
0x4E975D: mov     ecx, edi
0x4E975F: call    sub_4121A0
0x4E9764: mov     ecx, eax
0x4E9766: call    sub_404C90
0x4E976B: fstp    [esp+78h+arg_8]
0x4E9772: mov     ecx, ebp
0x4E9774: call    sub_6899C0
0x4E9779: push    eax
0x4E977A: lea     eax, [esp+7Ch+var_44]
0x4E977E: push    eax
0x4E977F: mov     ecx, ebx
0x4E9781: call    sub_6899C0
0x4E9786: mov     ecx, eax
0x4E9788: call    sub_4121A0
0x4E978D: mov     ecx, eax
0x4E978F: call    sub_404C90
0x4E9794: fstp    [esp+78h+a1]
0x4E9798: fld     [esp+78h+arg_8]
0x4E979F: fld     [esp+78h+a1]
0x4E97A3: fcompp
0x4E97A5: fnstsw  ax
0x4E97A7: test    ah, 41h
0x4E97AA: jnz     short loc_4E97BB
0x4E97AC: mov     ecx, esi
0x4E97AE: call    sub_42B410
0x4E97B3: push    eax
0x4E97B4: mov     ecx, esi
0x4E97B6: call    sub_68C170
0x4E97BB: mov     bl, 1
0x4E97BD: jmp     short loc_4E97C3
0x4E97BF: mov     bl, [esp+78h+var_61]
0x4E97C3: mov     ecx, [esp+78h+var_60]
0x4E97C7: call    sub_4E8E80
0x4E97CC: lea     ecx, [esp+78h+var_38]; void *
0x4E97D0: mov     [esp+78h+var_4], 0FFFFFFFFh
0x4E97D8: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x4E97DD: mov     al, bl
0x4E97DF: jmp     loc_4E96EF
