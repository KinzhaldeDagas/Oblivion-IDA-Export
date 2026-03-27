0x4B3750: push    0FFFFFFFFh
0x4B3752: push    offset SEH_4B3750
0x4B3757: mov     eax, large fs:0
0x4B375D: push    eax
0x4B375E: sub     esp, 134h
0x4B3764: mov     eax, ds:0B30AACh
0x4B3769: xor     eax, esp
0x4B376B: mov     [esp+140h+var_10], eax
0x4B3772: push    ebx
0x4B3773: push    ebp
0x4B3774: push    esi
0x4B3775: push    edi
0x4B3776: mov     eax, ds:0B30AACh
0x4B377B: xor     eax, esp
0x4B377D: push    eax
0x4B377E: lea     eax, [esp+154h+var_C]
0x4B3785: mov     large fs:0, eax
0x4B378B: mov     esi, [esp+154h+arg_0]
0x4B3792: mov     ebx, ecx
0x4B3794: xor     ebp, ebp
0x4B3796: cmp     ebx, ds:0B35EA4h
0x4B379C: mov     [esp+154h+var_13C], esi
0x4B37A0: jz      short loc_4B37AA
0x4B37A2: cmp     ebx, ds:0B35EB4h
0x4B37A8: jnz     short loc_4B37B0
0x4B37AA: mov     [esp+154h+var_13C], ebp
0x4B37AE: mov     esi, ebp
0x4B37B0: mov     eax, [ebx]
0x4B37B2: mov     edx, [eax+110h]
0x4B37B8: push    esi
0x4B37B9: call    edx
0x4B37BB: mov     edi, eax
0x4B37BD: test    edi, edi
0x4B37BF: jz      loc_4B3C37
0x4B37C5: mov     eax, [ebx+8]
0x4B37C8: shr     eax, 4
0x4B37CB: test    al, 1
0x4B37CD: jz      short loc_4B37DC
0x4B37CF: test    esi, esi
0x4B37D1: jz      short loc_4B37DC
0x4B37D3: push    1
0x4B37D5: mov     ecx, esi
0x4B37D7: call    sub_46A9C0
0x4B37DC: cmp     byte ptr [esp+154h+arg_4], 0
0x4B37E4: jnz     short loc_4B381F; jumptable 004B3803 cases 33-35
0x4B37E6: cmp     dword ptr [edi+4], 1
0x4B37EA: jnz     short loc_4B381F; jumptable 004B3803 cases 33-35
0x4B37EC: movzx   eax, byte ptr [ebx+4]
0x4B37F0: add     eax, 0FFFFFFEEh; switch 19 cases
0x4B37F3: cmp     eax, 12h
0x4B37F6: ja      def_4B3803; jumptable 004B3803 default case, cases 19,21-23,25-32
0x4B37FC: movzx   ecx, ds:byte_4B3C78[eax]
0x4B3803: jmp     ds:jpt_4B3803[ecx*4]; switch jump
0x4B380A: push    edi; jumptable 004B3803 cases 18,36
0x4B380B: call    sub_480820
0x4B3810: add     esp, 4
0x4B3813: test    al, al
0x4B3815: jz      short loc_4B381F; jumptable 004B3803 cases 33-35
0x4B3817: mov     byte ptr [esp+154h+arg_4], 1
0x4B381F: test    esi, esi; jumptable 004B3803 cases 33-35
0x4B3821: fld1
0x4B3823: fstp    [esp+154h+var_138]
0x4B3827: jz      short loc_4B3834
0x4B3829: mov     ecx, esi; this
0x4B382B: call    TESObjectREFR_GetScale
0x4B3830: fstp    [esp+154h+var_138]
0x4B3834: fld     dword ptr [edi+60h]
0x4B3837: fstp    [esp+154h+var_140]
0x4B383B: fld     [esp+154h+var_140]
0x4B383F: fld     [esp+154h+var_138]
0x4B3843: fld     st
0x4B3845: fucomp  st(2)
0x4B3847: fnstsw  ax
0x4B3849: fstp    st(1)
0x4B384B: test    ah, 44h
0x4B384E: jp      loc_4B3943
0x4B3854: fstp    st
0x4B3856: jmp     loc_4B3963
0x4B385B: mov     edx, [edi]; jumptable 004B3803 case 24
0x4B385D: mov     eax, [edx+8]
0x4B3860: mov     ecx, edi
0x4B3862: call    eax
0x4B3864: mov     esi, eax
0x4B3866: test    esi, esi
0x4B3868: jz      loc_4B38F1
0x4B386E: push    0
0x4B3870: mov     ecx, esi
0x4B3872: call    sub_405790
0x4B3877: test    eax, eax
0x4B3879: jz      short loc_4B38F1
0x4B387B: push    0
0x4B387D: mov     ecx, esi
0x4B387F: call    sub_405790
0x4B3884: cmp     [eax+0Ch], ebp
0x4B3887: jz      short loc_4B38F1
0x4B3889: push    0
0x4B388B: mov     ecx, esi
0x4B388D: call    sub_405790
0x4B3892: mov     eax, [eax+0Ch]
0x4B3895: push    eax
0x4B3896: push    offset stru_B3CAC0
0x4B389B: call    NiRTTI_Cast
0x4B38A0: add     esp, 8
0x4B38A3: test    eax, eax
0x4B38A5: jz      short loc_4B38F1
0x4B38A7: push    offset aUnequip; "Unequip"
0x4B38AC: mov     ecx, eax
0x4B38AE: call    sub_4715A0
0x4B38B3: test    eax, eax
0x4B38B5: jz      short loc_4B38F1
0x4B38B7: mov     esi, [esp+154h+var_13C]
0x4B38BB: jmp     loc_4B381F; jumptable 004B3803 cases 33-35
0x4B38C0: push    0; jumptable 004B3803 case 20
0x4B38C2: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x4B38C7: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4B38CC: push    0; int
0x4B38CE: push    ebx; void *
0x4B38CF: call    OblivionDynamicCast
0x4B38D4: add     esp, 14h
0x4B38D7: test    eax, eax
0x4B38D9: jz      short def_4B3803; jumptable 004B3803 default case, cases 19,21-23,25-32
0x4B38DB: push    0
0x4B38DD: push    0Dh
0x4B38DF: lea     ecx, [eax+64h]
0x4B38E2: call    TESBipedModelForm_CoversSlot
0x4B38E7: test    al, al
0x4B38E9: jnz     loc_4B381F; jumptable 004B3803 cases 33-35
0x4B38EF: jmp     short def_4B3803; jumptable 004B3803 default case, cases 19,21-23,25-32
0x4B38F1: mov     esi, [esp+154h+var_13C]
0x4B38F5: push    offset dword_A7D0EC; jumptable 004B3803 default case, cases 19,21-23,25-32
0x4B38FA: mov     ecx, edi
0x4B38FC: call    NiObjectNET_GetExtraData
0x4B3901: test    eax, eax
0x4B3903: jz      short loc_4B3914
0x4B3905: mov     ecx, [eax+0Ch]
0x4B3908: shr     ecx, 4
0x4B390B: test    cl, 1
0x4B390E: jnz     loc_4B381F; jumptable 004B3803 cases 33-35
0x4B3914: test    esi, esi
0x4B3916: jz      short loc_4B393C
0x4B3918: mov     edx, [esi]
0x4B391A: fld     dword ptr [edi+60h]
0x4B391D: mov     eax, [edx+0ECh]
0x4B3923: fstp    [esp+154h+var_140]
0x4B3927: mov     ecx, esi
0x4B3929: call    eax
0x4B392B: fld     [esp+154h+var_140]
0x4B392F: fucompp
0x4B3931: fnstsw  ax
0x4B3933: test    ah, 44h
0x4B3936: jp      loc_4B381F; jumptable 004B3803 cases 33-35
0x4B393C: mov     ebp, edi
0x4B393E: jmp     loc_4B3BEC
0x4B3943: fldz
0x4B3945: fucompp
0x4B3947: fnstsw  ax
0x4B3949: test    ah, 44h
0x4B394C: jp      short loc_4B3969
0x4B394E: mov     ecx, esi; this
0x4B3950: call    TESObjectREFR_GetName
0x4B3955: push    eax; ArgList
0x4B3956: push    offset aSHasAScaleOf0_; "%s has a scale of 0.  Change it in the "...
0x4B395B: call    PrintError
0x4B3960: add     esp, 8
0x4B3963: fld1
0x4B3965: fstp    [esp+154h+var_138]
0x4B3969: lea     ecx, [esp+154h+var_130]
0x4B396D: call    sub_478B90
0x4B3972: fld     [esp+154h+var_138]
0x4B3976: fst     [esp+154h+var_118]
0x4B397A: fst     [esp+154h+var_11C]
0x4B397E: fstp    [esp+154h+var_120]
0x4B3982: cmp     byte ptr [esp+154h+arg_4], 0
0x4B398A: lea     ecx, [esp+154h+var_130]
0x4B398E: mov     [esp+154h+var_4], 0
0x4B3999: push    ecx
0x4B399A: jz      loc_4B3B03
0x4B39A0: mov     ecx, ds:0B333A0h
0x4B39A6: push    edi
0x4B39A7: call    sub_4430C0
0x4B39AC: mov     esi, eax
0x4B39AE: test    esi, esi
0x4B39B0: mov     [esp+154h+var_134], esi
0x4B39B4: jz      short loc_4B39C0
0x4B39B6: lea     edx, [esi+4]
0x4B39B9: push    edx; lpAddend
0x4B39BA: call    dword ptr ds:0A28078h
0x4B39C0: test    esi, esi
0x4B39C2: mov     byte ptr [esp+154h+var_4], 1
0x4B39CA: jz      short loc_4B3A0F
0x4B39CC: mov     eax, [esi]
0x4B39CE: mov     edx, [eax+8]
0x4B39D1: mov     ecx, esi
0x4B39D3: call    edx
0x4B39D5: test    eax, eax
0x4B39D7: jz      short loc_4B3A0F
0x4B39D9: push    esi
0x4B39DA: lea     ecx, [esp+158h+var_140]
0x4B39DE: mov     ebp, esi
0x4B39E0: call    sub_405070
0x4B39E5: lea     eax, [esp+154h+var_140]
0x4B39E9: push    eax
0x4B39EA: mov     ecx, offset off_B082F0
0x4B39EF: mov     byte ptr [esp+158h+var_4], 2
0x4B39F7: call    NiTArray_AddItem
0x4B39FC: lea     ecx, [esp+154h+var_140]; this
0x4B3A00: mov     byte ptr [esp+154h+var_4], 1
0x4B3A08: call    sub_7016A0
0x4B3A0D: jmp     short loc_4B3A53
0x4B3A0F: push    0DCh ; 'Ü'; Size
0x4B3A14: call    FormHeapAlloc
0x4B3A19: add     esp, 4
0x4B3A1C: mov     [esp+154h+var_140], eax
0x4B3A20: test    eax, eax
0x4B3A22: mov     byte ptr [esp+154h+var_4], 3
0x4B3A2A: jz      short loc_4B3A39
0x4B3A2C: push    0
0x4B3A2E: mov     ecx, eax; this
0x4B3A30: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4B3A35: mov     ebp, eax
0x4B3A37: jmp     short loc_4B3A3B
0x4B3A39: xor     ebp, ebp
0x4B3A3B: mov     edx, [ebp+0]
0x4B3A3E: mov     eax, [edx+84h]
0x4B3A44: push    1
0x4B3A46: push    esi
0x4B3A47: mov     ecx, ebp
0x4B3A49: mov     byte ptr [esp+15Ch+var_4], 1
0x4B3A51: call    eax
0x4B3A53: test    esi, esi
0x4B3A55: mov     byte ptr [esp+154h+var_4], 0
0x4B3A5D: jz      short loc_4B3A77
0x4B3A5F: lea     ecx, [esi+4]
0x4B3A62: push    ecx; lpAddend
0x4B3A63: call    dword ptr ds:0A2807Ch
0x4B3A69: test    eax, eax
0x4B3A6B: jnz     short loc_4B3A77
0x4B3A6D: mov     edx, [esi]
0x4B3A6F: mov     eax, [edx]
0x4B3A71: push    1
0x4B3A73: mov     ecx, esi
0x4B3A75: call    eax
0x4B3A77: mov     esi, [esp+154h+var_13C]
0x4B3A7B: fld1
0x4B3A7D: fld     st
0x4B3A7F: fld     [esp+154h+var_138]
0x4B3A83: fucom   st(1)
0x4B3A85: fnstsw  ax
0x4B3A87: fstp    st(1)
0x4B3A89: test    ah, 44h
0x4B3A8C: jnp     loc_4B3BB9
0x4B3A92: fld     dword ptr [edi+60h]
0x4B3A95: fstp    [esp+154h+var_140]
0x4B3A99: fxch    st(1)
0x4B3A9B: fcomp   [esp+154h+var_140]
0x4B3A9F: fnstsw  ax
0x4B3AA1: test    ah, 44h
0x4B3AA4: jp      loc_4B3BBB
0x4B3AAA: fabs
0x4B3AAC: lea     edx, [esp+154h+var_114]
0x4B3AB0: fstp    [esp+154h+var_140]
0x4B3AB4: push    edx
0x4B3AB5: fld     [esp+158h+var_140]
0x4B3AB9: push    esi
0x4B3ABA: mov     ecx, ebx
0x4B3ABC: fstp    dword ptr [ebp+60h]
0x4B3ABF: call    sub_4B2B00
0x4B3AC4: mov     ecx, ds:0B33A1Ch
0x4B3ACA: lea     eax, [esp+154h+var_114]
0x4B3ACE: push    eax
0x4B3ACF: call    ModelLoader_IsModelLoaded??
0x4B3AD4: test    eax, eax
0x4B3AD6: jnz     short loc_4B3B51
0x4B3AD8: push    0Ch; Size
0x4B3ADA: call    FormHeapAlloc
0x4B3ADF: add     esp, 4
0x4B3AE2: mov     [esp+154h+var_134], eax
0x4B3AE6: test    eax, eax
0x4B3AE8: mov     byte ptr [esp+154h+var_4], 4
0x4B3AF0: jz      short loc_4B3B11
0x4B3AF2: push    ebp
0x4B3AF3: lea     ecx, [esp+158h+var_114]
0x4B3AF7: push    ecx
0x4B3AF8: mov     ecx, eax
0x4B3AFA: call    sub_434A70
0x4B3AFF: mov     esi, eax
0x4B3B01: jmp     short loc_4B3B13
0x4B3B03: mov     ecx, edi
0x4B3B05: call    sub_700610
0x4B3B0A: mov     ebp, eax
0x4B3B0C: jmp     loc_4B3A7B
0x4B3B11: xor     esi, esi
0x4B3B13: mov     ecx, ds:0B33A1Ch
0x4B3B19: push    esi
0x4B3B1A: lea     edx, [esp+158h+var_114]
0x4B3B1E: push    edx
0x4B3B1F: mov     byte ptr [esp+15Ch+var_4], 0
0x4B3B27: call    sub_434800
0x4B3B2C: test    al, al
0x4B3B2E: jnz     short loc_4B3B46
0x4B3B30: test    esi, esi
0x4B3B32: jz      short loc_4B3B4D
0x4B3B34: mov     ecx, esi
0x4B3B36: call    sub_4349B0
0x4B3B3B: push    esi
0x4B3B3C: call    FormHeapFree
0x4B3B41: add     esp, 4
0x4B3B44: jmp     short loc_4B3B4D
0x4B3B46: add     dword ptr ds:0B35AC4h, 1
0x4B3B4D: mov     esi, [esp+154h+var_13C]
0x4B3B51: mov     ecx, [esp+154h+arg_4]
0x4B3B58: mov     eax, [ebx]
0x4B3B5A: mov     edx, [eax+0ECh]
0x4B3B60: push    ecx
0x4B3B61: push    esi
0x4B3B62: mov     ecx, ebx
0x4B3B64: call    edx
0x4B3B66: mov     esi, eax
0x4B3B68: cmp     ebp, esi
0x4B3B6A: jz      short loc_4B3B9E
0x4B3B6C: push    ebp
0x4B3B6D: lea     ecx, [esp+158h+var_140]
0x4B3B71: call    sub_405070
0x4B3B76: lea     eax, [esp+154h+var_140]
0x4B3B7A: push    eax
0x4B3B7B: mov     ecx, offset off_B082F0
0x4B3B80: mov     byte ptr [esp+158h+var_4], 5
0x4B3B88: call    sub_4B24F0
0x4B3B8D: lea     ecx, [esp+154h+var_140]; this
0x4B3B91: mov     byte ptr [esp+154h+var_4], 0
0x4B3B99: call    sub_7016A0
0x4B3B9E: lea     ecx, [esp+154h+var_130]
0x4B3BA2: mov     [esp+154h+var_4], 0FFFFFFFFh
0x4B3BAD: call    sub_4781A0
0x4B3BB2: mov     eax, esi
0x4B3BB4: jmp     loc_4B3C39
0x4B3BB9: fstp    st(1)
0x4B3BBB: mov     ecx, [esp+154h+var_130]
0x4B3BBF: fstp    st
0x4B3BC1: test    ecx, ecx
0x4B3BC3: mov     [esp+154h+var_4], 0FFFFFFFFh
0x4B3BCE: jz      short loc_4B3BD8
0x4B3BD0: mov     edx, [ecx]
0x4B3BD2: mov     eax, [edx]
0x4B3BD4: push    1
0x4B3BD6: call    eax
0x4B3BD8: mov     ecx, [esp+154h+var_12C]
0x4B3BDC: test    ecx, ecx
0x4B3BDE: jz      short loc_4B3BE8
0x4B3BE0: mov     edx, [ecx]
0x4B3BE2: mov     eax, [edx]
0x4B3BE4: push    1
0x4B3BE6: call    eax
0x4B3BE8: test    ebp, ebp
0x4B3BEA: jz      short loc_4B3C37
0x4B3BEC: fld1
0x4B3BEE: and     word ptr [ebp+18h], 0FFFEh
0x4B3BF4: cmp     dword ptr [ebp+1Ch], 0
0x4B3BF8: fabs
0x4B3BFA: fstp    [esp+154h+var_140]
0x4B3BFE: lea     edi, [ebp+30h]
0x4B3C01: fld     [esp+154h+var_140]
0x4B3C05: mov     ecx, 9
0x4B3C0A: fstp    dword ptr [ebp+60h]
0x4B3C0D: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x4B3C12: rep movsd
0x4B3C14: mov     ecx, ds:0B3F9A8h
0x4B3C1A: mov     [ebp+54h], ecx
0x4B3C1D: mov     edx, ds:0B3F9ACh
0x4B3C23: mov     [ebp+58h], edx
0x4B3C26: mov     eax, ds:0B3F9B0h
0x4B3C2B: mov     [ebp+5Ch], eax
0x4B3C2E: jz      short loc_4B3C37
0x4B3C30: mov     dword ptr [ebp+1Ch], 0
0x4B3C37: mov     eax, ebp
0x4B3C39: mov     ecx, dword ptr [esp+154h+var_C]
0x4B3C40: mov     large fs:0, ecx
0x4B3C47: pop     ecx
0x4B3C48: pop     edi
0x4B3C49: pop     esi
0x4B3C4A: pop     ebp
0x4B3C4B: pop     ebx
0x4B3C4C: mov     ecx, [esp+140h+var_10]
0x4B3C53: xor     ecx, esp
0x4B3C55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B3C5A: add     esp, 140h
0x4B3C60: retn    8
