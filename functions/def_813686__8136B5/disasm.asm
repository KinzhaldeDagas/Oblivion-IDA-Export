0x8136B5: and     eax, [esp+arg_1C]; jumptable 00813686 default case
0x8136B9: test    ax, ax
0x8136BC: jnz     loc_813880
0x8136C2: fldz
0x8136C4: push    1; a3
0x8136C6: push    ecx
0x8136C7: fstp    [esp+8+a2]; a2
0x8136CA: mov     ecx, ebp; this
0x8136CC: call    NiAVObject_UpdateNiAVObject
0x8136D1: cmp     word ptr ds:0B42EACh, 5
0x8136D9: jz      loc_8138C1
0x8136DF: cmp     dword ptr [ebp+148h], 0
0x8136E6: jz      loc_813880
0x8136EC: call    InitBSShaderAccumulator
0x8136F1: mov     esi, eax
0x8136F3: test    esi, esi
0x8136F5: mov     dword ptr [esp+arg_40.super.UseAppendVirtual], esi
0x8136F9: jz      short loc_813701
0x8136FB: lea     ecx, [esi+4]
0x8136FE: push    ecx; lpAddend
0x8136FF: call    ebx ; InterlockedIncrement
0x813701: cmp     dword ptr [esi+4], 1
0x813705: lea     eax, [esi+4]
0x813708: mov     [esp+arg_E4], 0
0x813713: jnz     short loc_813718
0x813715: push    eax; lpAddend
0x813716: call    ebx ; InterlockedIncrement
0x813718: mov     edx, ds:0B3F928h
0x81371E: mov     ebx, [edx+8]
0x813721: test    ebx, ebx
0x813723: mov     [esp+arg_40.super.VisibleGeo], ebx
0x813727: jz      short loc_813733
0x813729: lea     eax, [ebx+4]
0x81372C: push    eax; lpAddend
0x81372D: call    dword ptr ds:0A28078h
0x813733: mov     eax, ds:0B3F928h
0x813738: mov     edi, [eax+8]
0x81373B: add     eax, 8
0x81373E: cmp     edi, esi
0x813740: mov     byte ptr [esp+arg_E4], 1
0x813748: mov     [esp+arg_14], eax
0x81374C: jz      short loc_81377E
0x81374E: test    edi, edi
0x813750: jz      short loc_81376E
0x813752: lea     ecx, [edi+4]
0x813755: push    ecx; lpAddend
0x813756: call    dword ptr ds:0A2807Ch
0x81375C: test    eax, eax
0x81375E: jnz     short loc_81376E
0x813760: test    edi, edi
0x813762: jz      short loc_81376E
0x813764: mov     edx, [edi]
0x813766: mov     eax, [edx]
0x813768: push    1
0x81376A: mov     ecx, edi
0x81376C: call    eax
0x81376E: mov     ecx, [esp+4+arg_10]
0x813772: lea     eax, [esi+4]
0x813775: push    eax; lpAddend
0x813776: mov     [ecx], esi
0x813778: call    dword ptr ds:0A28078h
0x81377E: mov     edx, [esi]
0x813780: mov     eax, [edx+4Ch]
0x813783: push    ebp
0x813784: mov     ecx, esi
0x813786: call    eax
0x813788: push    0
0x81378A: lea     ecx, [esp+0Ch+arg_40.super.UseAppendVirtual]
0x81378E: mov     byte ptr [esi+21E0h], 1
0x813795: call    NiCullingProcess_NiCullingProcess
0x81379A: lea     ecx, [ebp+0ECh]
0x8137A0: push    ecx; a2
0x8137A1: lea     ecx, [esp+0Ch+arg_40.super.UseAppendVirtual]; this
0x8137A5: mov     byte ptr [esp+0Ch+arg_40.unk9C], 2
0x8137AD: mov     [esp+0Ch+arg_40.super.CameraFrustum.Left], ebp
0x8137B1: call    NiCullingProcess__SetFrustum
0x8137B6: mov     eax, [ebp+148h]
0x8137BC: push    0
0x8137BE: lea     edx, [esp+0Ch+arg_40.super.UseAppendVirtual]
0x8137C2: push    edx
0x8137C3: push    eax
0x8137C4: push    ebp
0x8137C5: call    sub_70C0B0
0x8137CA: mov     byte ptr [esi+21E1h], 1
0x8137D1: mov     eax, [esi]
0x8137D3: mov     edx, [eax+50h]
0x8137D6: add     esp, 10h
0x8137D9: mov     ecx, esi
0x8137DB: call    edx
0x8137DD: mov     eax, ds:0B3F928h
0x8137E2: mov     edi, [eax+8]
0x8137E5: add     eax, 8
0x8137E8: cmp     edi, ebx
0x8137EA: mov     [esp+8+arg_C], eax
0x8137EE: jz      short loc_813824
0x8137F0: test    edi, edi
0x8137F2: jz      short loc_813810
0x8137F4: lea     eax, [edi+4]
0x8137F7: push    eax; lpAddend
0x8137F8: call    dword ptr ds:0A2807Ch
0x8137FE: test    eax, eax
0x813800: jnz     short loc_813810
0x813802: test    edi, edi
0x813804: jz      short loc_813810
0x813806: mov     edx, [edi]
0x813808: mov     eax, [edx]
0x81380A: push    1
0x81380C: mov     ecx, edi
0x81380E: call    eax
0x813810: test    ebx, ebx
0x813812: mov     ecx, [esp+0Ch+arg_8]
0x813816: mov     [ecx], ebx
0x813818: jz      short loc_813824
0x81381A: lea     edx, [ebx+4]
0x81381D: push    edx; lpAddend
0x81381E: call    dword ptr ds:0A28078h
0x813824: lea     ecx, [esp+0Ch+arg_40]; this
0x813828: mov     byte ptr [esp+0Ch+arg_40.unk98], 1
0x813830: call    ??1BSCullingProcess@@UAE@XZ; BSCullingProcess::~BSCullingProcess(void)
0x813835: test    ebx, ebx
0x813837: mov     byte ptr [esp+0Ch+arg_40.unk98], 0
0x81383F: jz      short loc_813859
0x813841: lea     eax, [ebx+4]
0x813844: push    eax; lpAddend
0x813845: call    dword ptr ds:0A2807Ch
0x81384B: test    eax, eax
0x81384D: jnz     short loc_813859
0x81384F: mov     edx, [ebx]
0x813851: mov     eax, [edx]
0x813853: push    1
0x813855: mov     ecx, ebx
0x813857: call    eax
0x813859: lea     eax, [esi+4]
0x81385C: push    eax; lpAddend
0x81385D: mov     [esp+14h+arg_40.unk94], 0FFFFFFFFh
0x813868: call    dword ptr ds:0A2807Ch
0x81386E: test    eax, eax
0x813870: jnz     short loc_81387C
0x813872: mov     edx, [esi]
0x813874: mov     eax, [edx]
0x813876: push    1
0x813878: mov     ecx, esi
0x81387A: call    eax
0x81387C: mov     edi, [esp+14h+arg_4]
0x813880: call    NiRenderer_EndScene
0x813885: add     edi, 1
0x813888: cmp     edi, 6
0x81388B: mov     [esp+14h+arg_4], edi
0x81388F: jl      loc_8135CA
0x813895: mov     ecx, ds:0B43104h
0x81389B: mov     edx, [ecx]
0x81389D: mov     edx, [edx+60h]
0x8138A0: lea     eax, [esp+14h+arg_10]
0x8138A4: push    eax
0x8138A5: call    edx
0x8138A7: mov     ecx, [esp+18h+arg_40.super.Planes.CullingPlanes.Normal.y+54h]
0x8138AE: mov     large fs:0, ecx
0x8138B5: pop     ecx
0x8138B6: pop     edi
0x8138B7: pop     esi
0x8138B8: pop     ebp
0x8138B9: pop     ebx
0x8138BA: add     esp, 0D8h
0x8138C0: retn
0x8138C1: mov     eax, [ebp+144h]
0x8138C7: test    eax, eax
0x8138C9: jz      short loc_813880
0x8138CB: fld1
0x8138CD: push    ecx
0x8138CE: fstp    [esp+4+var_4]; float
0x8138D1: push    eax; int
0x8138D2: push    0; int
0x8138D4: call    sub_7EE390
0x8138D9: mov     ecx, [ebp+144h]
0x8138DF: mov     ebx, [ecx+114h]
0x8138E5: mov     esi, [ebp+140h]
0x8138EB: add     esp, 0Ch
0x8138EE: cmp     esi, ebx
0x8138F0: jz      short loc_813926
0x8138F2: test    esi, esi
0x8138F4: jz      short loc_813912
0x8138F6: lea     edx, [esi+4]
0x8138F9: push    edx; lpAddend
0x8138FA: call    dword ptr ds:0A2807Ch
0x813900: test    eax, eax
0x813902: jnz     short loc_813912
0x813904: test    esi, esi
0x813906: jz      short loc_813912
0x813908: mov     eax, [esi]
0x81390A: mov     edx, [eax]
0x81390C: push    1
0x81390E: mov     ecx, esi
0x813910: call    edx
0x813912: test    ebx, ebx
0x813914: mov     [ebp+140h], ebx
0x81391A: jz      short loc_813926
0x81391C: add     ebx, 4
0x81391F: push    ebx; lpAddend
0x813920: call    dword ptr ds:0A28078h
0x813926: mov     eax, [ebp+144h]
0x81392C: push    eax; a2
0x81392D: mov     ecx, ebp; this
0x81392F: call    sub_813300
0x813934: jmp     loc_813880
