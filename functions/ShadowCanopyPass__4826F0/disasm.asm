0x4826F0: push    0FFFFFFFFh
0x4826F2: push    offset ShadowCanopyPass_SEH
0x4826F7: mov     eax, large fs:0
0x4826FD: push    eax
0x4826FE: sub     esp, 118h
0x482704: push    ebx
0x482705: push    ebp
0x482706: push    esi
0x482707: push    edi
0x482708: mov     eax, ds:0B30AACh
0x48270D: xor     eax, esp
0x48270F: push    eax
0x482710: lea     eax, [esp+138h+var_C]
0x482717: mov     large fs:0, eax
0x48271D: mov     esi, ecx
0x48271F: mov     [esp+138h+var_CC], esi
0x482723: xor     edi, edi
0x482725: mov     [esp+138h+var_108], edi
0x482729: mov     [esp+138h+var_4], edi
0x482730: mov     [esp+138h+var_110], edi
0x482734: mov     [esp+138h+var_DC], edi
0x482738: mov     [esp+138h+var_F4], edi
0x48273C: mov     [esp+138h+var_F0], edi
0x482740: mov     [esp+138h+var_D8], edi
0x482744: push    edi
0x482745: lea     ecx, [esp+13Ch+var_B8]
0x48274C: mov     byte ptr [esp+13Ch+var_4], 5
0x482754: call    NiFrustum__SetOrtho
0x482759: mov     [esp+138h+var_D4], edi
0x48275D: fldz
0x48275F: cmp     byte ptr ds:0B06CBCh, 0
0x482766: fst     [esp+138h+var_C8]
0x48276A: mov     ecx, [esi+0Ch]
0x48276D: fst     [esp+138h+var_C4]
0x482771: fst     [esp+138h+var_C0]
0x482775: mov     byte ptr [esp+138h+var_4], 6
0x48277D: fst     [esp+138h+var_BC]
0x482781: mov     [esp+138h+var_D0], ecx
0x482785: mov     byte ptr [esp+138h+var_114+3], 1
0x48278A: mov     [esp+138h+var_121], 1
0x48278F: mov     byte ptr ds:0B06A28h, 0
0x482796: jz      loc_4832FF
0x48279C: mov     eax, [esi+0Ch]
0x48279F: shl     eax, 0Ch
0x4827A2: test    eax, eax
0x4827A4: mov     [esp+138h+var_10C], eax
0x4827A8: fild    [esp+138h+var_10C]
0x4827AC: jge     short loc_4827B4
0x4827AE: fadd    dword ptr ds:0A2FC78h
0x4827B4: fstp    [esp+138h+var_10C]
0x4827B8: fld     [esp+138h+var_10C]
0x4827BC: fld     st
0x4827BE: fld     qword ptr ds:0A2FAA0h
0x4827C4: fmul    st(1), st
0x4827C6: fld     qword ptr ds:0A30F70h
0x4827CC: fsubrp  st(2), st
0x4827CE: fxch    st(1)
0x4827D0: fstp    [esp+138h+var_10C]
0x4827D4: fld     dword ptr [esi+14h]
0x4827D7: fld     [esp+138h+var_10C]
0x4827DB: fld     st
0x4827DD: faddp   st(2), st
0x4827DF: fxch    st(1)
0x4827E1: fstp    [esp+138h+var_10C]
0x4827E5: fadd    dword ptr [esi+18h]
0x4827E8: or      dword ptr ds:0B42F40h, 20h
0x4827EF: cmp     ecx, edi
0x4827F1: fstp    [esp+138h+var_EC]
0x4827F5: fld     [esp+138h+var_10C]
0x4827F9: fstp    dword ptr ds:0B44EE8h
0x4827FF: fld     [esp+138h+var_EC]
0x482803: fstp    dword ptr ds:0B44EECh
0x482809: fxch    st(1)
0x48280B: fstp    dword ptr ds:0B44EF4h
0x482811: jz      loc_4832C6
0x482817: cmp     ds:0B350D8h, edi
0x48281D: jz      loc_4832C6
0x482823: test    ecx, ecx
0x482825: mov     [esp+138h+var_10C], ecx
0x482829: fild    [esp+138h+var_10C]
0x48282D: jge     short loc_482835
0x48282F: fadd    dword ptr ds:0A2FC78h
0x482835: fmulp   st(1), st
0x482837: push    0DCh ; 'Ü'; Size
0x48283C: fstp    [esp+13Ch+var_10C]
0x482840: fld     [esp+13Ch+var_10C]
0x482844: fmul    qword ptr ds:0A3D360h
0x48284A: fstp    [esp+13Ch+var_EC]
0x48284E: fld     [esp+13Ch+var_EC]
0x482852: fstp    [esp+13Ch+var_FC]
0x482856: fld     [esp+13Ch+var_FC]
0x48285A: fstp    [esp+13Ch+var_100]
0x48285E: fstp    [esp+13Ch+var_F8]
0x482862: call    FormHeapAlloc
0x482867: add     esp, 4
0x48286A: mov     [esp+138h+var_104], eax
0x48286E: cmp     eax, edi
0x482870: mov     byte ptr [esp+138h+var_4], 7
0x482878: jz      short loc_482884
0x48287A: push    edi
0x48287B: mov     ecx, eax; this
0x48287D: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x482882: jmp     short loc_482886
0x482884: xor     eax, eax
0x482886: push    eax; a2
0x482887: lea     ecx, [esp+13Ch+var_110]; this
0x48288B: mov     byte ptr [esp+13Ch+var_4], 6
0x482893: call    NiSmartPointer_Set??
0x482898: push    30h ; '0'; Size
0x48289A: call    FormHeapAlloc
0x48289F: fldz
0x4828A1: mov     edi, eax
0x4828A3: fst     [esp+13Ch+var_120]
0x4828A7: mov     eax, [esp+13Ch+var_120]
0x4828AB: fst     [esp+13Ch+var_11C]
0x4828AF: mov     ecx, [esp+13Ch+var_11C]
0x4828B3: fst     [esp+13Ch+var_118]
0x4828B7: fld1
0x4828B9: mov     edx, [esp+13Ch+var_118]
0x4828BD: fst     [esp+13Ch+var_120]
0x4828C1: mov     [edi], eax
0x4828C3: fxch    st(1)
0x4828C5: mov     [edi+4], ecx
0x4828C8: mov     eax, [esp+13Ch+var_120]
0x4828CC: fst     [esp+13Ch+var_11C]
0x4828D0: fst     [esp+13Ch+var_118]
0x4828D4: mov     [edi+8], edx
0x4828D7: mov     ecx, [esp+13Ch+var_11C]
0x4828DB: fxch    st(1)
0x4828DD: mov     edx, [esp+13Ch+var_118]
0x4828E1: fst     [esp+13Ch+var_120]
0x4828E5: fst     [esp+13Ch+var_11C]
0x4828E9: mov     [edi+0Ch], eax
0x4828EC: mov     eax, [esp+13Ch+var_120]
0x4828F0: fxch    st(1)
0x4828F2: mov     [edi+10h], ecx
0x4828F5: fst     [esp+13Ch+var_118]
0x4828F9: mov     ecx, [esp+13Ch+var_11C]
0x4828FD: fst     [esp+13Ch+var_120]
0x482901: mov     [edi+14h], edx
0x482904: mov     edx, [esp+13Ch+var_118]
0x482908: fstp    [esp+13Ch+var_118]
0x48290C: mov     [edi+18h], eax
0x48290F: mov     eax, [esp+13Ch+var_120]
0x482913: mov     [edi+1Ch], ecx
0x482916: fstp    [esp+13Ch+var_11C]
0x48291A: mov     ecx, [esp+13Ch+var_11C]
0x48291E: mov     [edi+20h], edx
0x482921: mov     edx, [esp+13Ch+var_118]
0x482925: mov     [edi+24h], eax
0x482928: mov     [edi+28h], ecx
0x48292B: push    30h ; '0'; Size
0x48292D: mov     [edi+2Ch], edx
0x482930: call    FormHeapAlloc
0x482935: mov     esi, eax
0x482937: mov     eax, ds:0B258E8h
0x48293C: mov     [esi+24h], eax
0x48293F: mov     ecx, ds:0B258ECh
0x482945: mov     [esi+28h], ecx
0x482948: mov     edx, ds:0B258F0h
0x48294E: mov     [esi+2Ch], edx
0x482951: mov     eax, [esi+24h]
0x482954: mov     ecx, [esi+28h]
0x482957: mov     [esi+18h], eax
0x48295A: mov     [esi+0Ch], eax
0x48295D: mov     [esi], eax
0x48295F: mov     [esi+1Ch], ecx
0x482962: mov     [esi+10h], ecx
0x482965: mov     [esi+4], ecx
0x482968: push    20h ; ' '; Size
0x48296A: mov     [esi+20h], edx
0x48296D: mov     [esi+14h], edx
0x482970: mov     [esi+8], edx
0x482973: call    FormHeapAlloc
0x482978: fldz
0x48297A: fst     [esp+144h+var_120]
0x48297E: mov     ebp, eax
0x482980: mov     eax, [esp+144h+var_120]
0x482984: fst     [esp+144h+var_11C]
0x482988: fld1
0x48298A: mov     ecx, [esp+144h+var_11C]
0x48298E: fst     [esp+144h+var_120]
0x482992: mov     [ebp+0], eax
0x482995: mov     [ebp+4], ecx
0x482998: fxch    st(1)
0x48299A: mov     edx, [esp+144h+var_120]
0x48299E: fst     [esp+144h+var_11C]
0x4829A2: mov     eax, [esp+144h+var_11C]
0x4829A6: fxch    st(1)
0x4829A8: fst     [esp+144h+var_120]
0x4829AC: mov     ecx, [esp+144h+var_120]
0x4829B0: fst     [esp+144h+var_11C]
0x4829B4: mov     [ebp+8], edx
0x4829B7: mov     edx, [esp+144h+var_11C]
0x4829BB: fxch    st(1)
0x4829BD: fstp    [esp+144h+var_120]
0x4829C1: mov     [ebp+0Ch], eax
0x4829C4: mov     eax, [esp+144h+var_120]
0x4829C8: mov     [ebp+10h], ecx
0x4829CB: fstp    [esp+144h+var_11C]
0x4829CF: mov     ecx, [esp+144h+var_11C]
0x4829D3: push    8; Size
0x4829D5: mov     [ebp+14h], edx
0x4829D8: mov     [ebp+18h], eax
0x4829DB: mov     [ebp+1Ch], ecx
0x4829DE: call    FormHeapAlloc
0x4829E3: mov     ebx, eax
0x4829E5: push    2; Size
0x4829E7: mov     word ptr [ebx], 1
0x4829EC: mov     word ptr [ebx+2], 0
0x4829F2: mov     word ptr [ebx+4], 2
0x4829F8: mov     word ptr [ebx+6], 3
0x4829FE: call    FormHeapAlloc
0x482A03: push    50h ; 'P'; Size
0x482A05: mov     [esp+150h+var_104], eax
0x482A09: mov     word ptr [eax], 4
0x482A0E: call    FormHeapAlloc
0x482A13: add     esp, 18h
0x482A16: mov     [esp+138h+var_E8], eax
0x482A1A: test    eax, eax
0x482A1C: mov     byte ptr [esp+138h+var_4], 8
0x482A24: jz      short loc_482A44
0x482A26: mov     edx, [esp+138h+var_104]
0x482A2A: push    ebx
0x482A2B: push    edx
0x482A2C: push    1
0x482A2E: push    2
0x482A30: push    0
0x482A32: push    1
0x482A34: push    ebp
0x482A35: push    0
0x482A37: push    esi
0x482A38: push    edi
0x482A39: push    4
0x482A3B: mov     ecx, eax
0x482A3D: call    sub_719CB0
0x482A42: jmp     short loc_482A46
0x482A44: xor     eax, eax
0x482A46: push    eax; a2
0x482A47: lea     ecx, [esp+13Ch+var_F0]; this
0x482A4B: mov     byte ptr [esp+13Ch+var_4], 6
0x482A53: call    NiSmartPointer_Set??
0x482A58: cmp     [esp+138h+var_D0], 0
0x482A5D: mov     [esp+138h+var_104], 0
0x482A65: jbe     loc_482CA7
0x482A6B: mov     edi, [esp+138h+var_108]
0x482A6F: mov     ebp, [esp+138h+var_F4]
0x482A73: mov     [esp+138h+var_E8], 0
0x482A7B: xor     ebx, ebx
0x482A7D: jmp     short loc_482A82
0x482A7F: align 10h
0x482A80: fstp    st
0x482A82: cmp     edi, ebx
0x482A84: jz      short loc_482AA4
0x482A86: lea     eax, [edi+4]
0x482A89: push    eax; lpAddend
0x482A8A: call    dword ptr ds:0A2807Ch
0x482A90: test    eax, eax
0x482A92: jnz     short loc_482A9E
0x482A94: mov     edx, [edi]
0x482A96: mov     eax, [edx]
0x482A98: push    1
0x482A9A: mov     ecx, edi
0x482A9C: call    eax
0x482A9E: xor     edi, edi
0x482AA0: mov     [esp+138h+var_108], edi
0x482AA4: mov     ecx, [esp+138h+var_CC]
0x482AA8: mov     eax, [ecx+0Ch]
0x482AAB: imul    eax, [esp+138h+var_104]
0x482AB0: add     eax, [esp+138h+var_E8]
0x482AB4: mov     ecx, [ecx+10h]
0x482AB7: mov     eax, [ecx+eax*8]
0x482ABA: cmp     eax, ebx
0x482ABC: jz      loc_482BB0
0x482AC2: lea     edx, [esp+138h+var_E0]
0x482AC6: push    edx
0x482AC7: lea     ecx, [esp+13Ch+var_E4]
0x482ACB: push    ecx
0x482ACC: mov     ecx, eax
0x482ACE: call    sub_4CAFF0
0x482AD3: mov     esi, eax
0x482AD5: mov     eax, [esp+138h+var_E4]
0x482AD9: cmp     eax, ebx
0x482ADB: jz      short loc_482B08
0x482ADD: mov     ecx, [esp+138h+var_E0]
0x482AE1: cmp     ecx, ebx
0x482AE3: jz      short loc_482B08
0x482AE5: cmp     [ecx+4], ebx
0x482AE8: jz      short loc_482B08
0x482AEA: mov     ecx, [eax+24h]
0x482AED: mov     edx, [ecx]
0x482AEF: mov     eax, [edx+14h]
0x482AF2: call    eax
0x482AF4: mov     ecx, [eax]
0x482AF6: mov     edx, [ecx+50h]
0x482AF9: push    ebx
0x482AFA: push    eax
0x482AFB: call    edx
0x482AFD: mov     eax, [esp+138h+var_E0]
0x482B01: mov     [eax+4], ebx
0x482B04: mov     eax, [esp+138h+var_E4]
0x482B08: cmp     esi, 1
0x482B0B: jnz     short loc_482B6B
0x482B0D: cmp     eax, ebx
0x482B0F: jz      loc_482BB0
0x482B15: push    30h ; '0'; Size
0x482B17: call    FormHeapAlloc
0x482B1C: add     esp, 4
0x482B1F: mov     [esp+138h+var_120], eax
0x482B23: cmp     eax, ebx
0x482B25: mov     byte ptr [esp+138h+var_4], 9
0x482B2D: jz      short loc_482B38
0x482B2F: mov     ecx, eax
0x482B31: call    NiTexturingProperty__NiTexturingProperty
0x482B36: jmp     short loc_482B3A
0x482B38: xor     eax, eax
0x482B3A: push    eax; a2
0x482B3B: lea     ecx, [esp+13Ch+var_108]; this
0x482B3F: mov     byte ptr [esp+13Ch+var_4], 6
0x482B47: call    NiSmartPointer_Set??
0x482B4C: mov     ecx, [esp+138h+var_E4]
0x482B50: mov     edi, [esp+138h+var_108]
0x482B54: push    ecx
0x482B55: mov     ecx, edi
0x482B57: call    NiTexturingProperty__SetUnk08
0x482B5C: push    ebx
0x482B5D: mov     ecx, edi
0x482B5F: call    sub_405870
0x482B64: mov     byte ptr [esp+138h+var_114+3], 0
0x482B69: jmp     short loc_482BAB
0x482B6B: cmp     esi, 2
0x482B6E: jnz     short loc_482BB0
0x482B70: call    sub_4A41E0
0x482B75: mov     esi, eax
0x482B77: cmp     edi, esi
0x482B79: jz      short loc_482BAB
0x482B7B: cmp     edi, ebx
0x482B7D: jz      short loc_482B97
0x482B7F: lea     edx, [edi+4]
0x482B82: push    edx; lpAddend
0x482B83: call    dword ptr ds:0A2807Ch
0x482B89: test    eax, eax
0x482B8B: jnz     short loc_482B97
0x482B8D: mov     eax, [edi]
0x482B8F: mov     edx, [eax]
0x482B91: push    1
0x482B93: mov     ecx, edi
0x482B95: call    edx
0x482B97: cmp     esi, ebx
0x482B99: mov     edi, esi
0x482B9B: mov     [esp+138h+var_108], edi
0x482B9F: jz      short loc_482BAB
0x482BA1: add     esi, 4
0x482BA4: push    esi; lpAddend
0x482BA5: call    dword ptr ds:0A28078h
0x482BAB: mov     [esp+138h+var_121], 0
0x482BB0: cmp     edi, ebx
0x482BB2: jnz     short loc_482BBE
0x482BB4: mov     byte ptr [esp+138h+var_114+3], 0
0x482BB9: jmp     loc_482C58
0x482BBE: push    0C0h ; 'À'; Size
0x482BC3: call    FormHeapAlloc
0x482BC8: add     esp, 4
0x482BCB: mov     [esp+138h+var_120], eax
0x482BCF: cmp     eax, ebx
0x482BD1: mov     byte ptr [esp+138h+var_4], 0Ah
0x482BD9: jz      short loc_482BEB
0x482BDB: mov     ecx, [esp+138h+var_F0]
0x482BDF: push    ecx
0x482BE0: mov     ecx, eax
0x482BE2: call    sub_719A20
0x482BE7: mov     esi, eax
0x482BE9: jmp     short loc_482BED
0x482BEB: xor     esi, esi
0x482BED: cmp     ebp, esi
0x482BEF: mov     byte ptr [esp+138h+var_4], 6
0x482BF7: jz      short loc_482C2A
0x482BF9: cmp     ebp, ebx
0x482BFB: jz      short loc_482C16
0x482BFD: lea     edx, [ebp+4]
0x482C00: push    edx; lpAddend
0x482C01: call    dword ptr ds:0A2807Ch
0x482C07: test    eax, eax
0x482C09: jnz     short loc_482C16
0x482C0B: mov     eax, [ebp+0]
0x482C0E: mov     edx, [eax]
0x482C10: push    1
0x482C12: mov     ecx, ebp
0x482C14: call    edx
0x482C16: cmp     esi, ebx
0x482C18: mov     ebp, esi
0x482C1A: mov     [esp+138h+var_F4], ebp
0x482C1E: jz      short loc_482C2A
0x482C20: add     esi, 4
0x482C23: push    esi; lpAddend
0x482C24: call    dword ptr ds:0A28078h
0x482C2A: mov     eax, [esp+138h+var_100]
0x482C2E: mov     ecx, [esp+138h+var_FC]
0x482C32: mov     edx, [esp+138h+var_F8]
0x482C36: mov     [ebp+54h], eax
0x482C39: mov     [ebp+58h], ecx
0x482C3C: push    edi; a2
0x482C3D: mov     ecx, ebp; this
0x482C3F: mov     [ebp+5Ch], edx
0x482C42: call    sub_405680
0x482C47: mov     ecx, [esp+138h+var_110]
0x482C4B: mov     eax, [ecx]
0x482C4D: mov     edx, [eax+84h]
0x482C53: push    1
0x482C55: push    ebp
0x482C56: call    edx
0x482C58: fld     [esp+138h+var_FC]
0x482C5C: mov     eax, [esp+138h+var_E8]
0x482C60: fld1
0x482C62: mov     ecx, [esp+138h+var_D0]
0x482C66: fadd    st(1), st
0x482C68: add     eax, 1
0x482C6B: cmp     eax, ecx
0x482C6D: fxch    st(1)
0x482C6F: mov     [esp+138h+var_E8], eax
0x482C73: fstp    [esp+138h+var_FC]
0x482C77: jb      loc_482A80
0x482C7D: fadd    [esp+138h+var_100]
0x482C81: mov     eax, [esp+138h+var_104]
0x482C85: add     eax, 1
0x482C88: cmp     eax, ecx
0x482C8A: fstp    [esp+138h+var_100]
0x482C8E: mov     [esp+138h+var_104], eax
0x482C92: fld     [esp+138h+var_EC]
0x482C96: fstp    [esp+138h+var_FC]
0x482C9A: jb      loc_482A6B
0x482CA0: cmp     byte ptr [esp+138h+var_114+3], 0
0x482CA5: jz      short loc_482D1A
0x482CA7: call    sub_4A41E0
0x482CAC: mov     eax, [eax+20h]
0x482CAF: mov     eax, [eax]
0x482CB1: test    eax, eax
0x482CB3: jz      short loc_482CBA
0x482CB5: mov     eax, [eax+8]
0x482CB8: jmp     short loc_482CBC
0x482CBA: xor     eax, eax
0x482CBC: push    eax
0x482CBD: call    SetTextureCanopyShadowMap
0x482CC2: mov     esi, [esp+13Ch+var_F0]
0x482CC6: mov     edi, ds:0A2807Ch
0x482CCC: add     esp, 4
0x482CCF: test    esi, esi
0x482CD1: mov     byte ptr [esp+138h+var_4], 3
0x482CD9: jz      short loc_482CEF
0x482CDB: lea     ecx, [esi+4]
0x482CDE: push    ecx; lpAddend
0x482CDF: call    edi ; InterlockedDecrement
0x482CE1: test    eax, eax
0x482CE3: jnz     short loc_482CEF
0x482CE5: mov     edx, [esi]
0x482CE7: mov     eax, [edx]
0x482CE9: push    1
0x482CEB: mov     ecx, esi
0x482CED: call    eax
0x482CEF: mov     esi, [esp+138h+var_F4]
0x482CF3: test    esi, esi
0x482CF5: mov     byte ptr [esp+138h+var_4], 2
0x482CFD: jz      loc_483279
0x482D03: lea     ecx, [esi+4]
0x482D06: push    ecx; lpAddend
0x482D07: call    edi ; InterlockedDecrement
0x482D09: test    eax, eax
0x482D0B: jnz     loc_483279
0x482D11: mov     edx, [esi]
0x482D13: mov     ecx, esi
0x482D15: jmp     loc_483273
0x482D1A: cmp     [esp+138h+var_121], 0
0x482D1F: jz      loc_482DAD
0x482D25: mov     esi, ds:0B4310Ch
0x482D2B: and     dword ptr ds:0B42F40h, 0FFFFFFDFh
0x482D32: test    esi, esi
0x482D34: mov     edi, ds:0A2807Ch
0x482D3A: jz      short loc_482D5E
0x482D3C: lea     ecx, [esi+4]
0x482D3F: push    ecx; lpAddend
0x482D40: call    edi ; InterlockedDecrement
0x482D42: test    eax, eax
0x482D44: jnz     short loc_482D54
0x482D46: test    esi, esi
0x482D48: jz      short loc_482D54
0x482D4A: mov     edx, [esi]
0x482D4C: mov     eax, [edx]
0x482D4E: push    1
0x482D50: mov     ecx, esi
0x482D52: call    eax
0x482D54: mov     dword ptr ds:0B4310Ch, 0
0x482D5E: mov     esi, [esp+138h+var_F0]
0x482D62: test    esi, esi
0x482D64: mov     byte ptr [esp+138h+var_4], 3
0x482D6C: jz      short loc_482D82
0x482D6E: lea     ecx, [esi+4]
0x482D71: push    ecx; lpAddend
0x482D72: call    edi ; InterlockedDecrement
0x482D74: test    eax, eax
0x482D76: jnz     short loc_482D82
0x482D78: mov     edx, [esi]
0x482D7A: mov     eax, [edx]
0x482D7C: push    1
0x482D7E: mov     ecx, esi
0x482D80: call    eax
0x482D82: mov     esi, [esp+138h+var_F4]
0x482D86: test    esi, esi
0x482D88: mov     byte ptr [esp+138h+var_4], 2
0x482D90: jz      loc_483279
0x482D96: lea     ecx, [esi+4]
0x482D99: push    ecx; lpAddend
0x482D9A: call    edi ; InterlockedDecrement
0x482D9C: test    eax, eax
0x482D9E: jnz     loc_483279
0x482DA4: mov     edx, [esi]
0x482DA6: mov     ecx, esi
0x482DA8: jmp     loc_483273
0x482DAD: push    0DCh ; 'Ü'; Size
0x482DB2: call    FormHeapAlloc
0x482DB7: add     esp, 4
0x482DBA: mov     [esp+138h+var_120], eax
0x482DBE: test    eax, eax
0x482DC0: mov     byte ptr [esp+138h+var_4], 0Bh
0x482DC8: jz      short loc_482DD5
0x482DCA: push    0
0x482DCC: mov     ecx, eax; this
0x482DCE: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x482DD3: jmp     short loc_482DD7
0x482DD5: xor     eax, eax
0x482DD7: push    eax; a2
0x482DD8: lea     ecx, [esp+13Ch+var_DC]; this
0x482DDC: mov     byte ptr [esp+13Ch+var_4], 6
0x482DE4: call    NiSmartPointer_Set??
0x482DE9: push    124h; Size
0x482DEE: call    FormHeapAlloc
0x482DF3: add     esp, 4
0x482DF6: mov     [esp+138h+var_120], eax
0x482DFA: test    eax, eax
0x482DFC: mov     byte ptr [esp+138h+var_4], 0Ch
0x482E04: jz      short loc_482E0F
0x482E06: mov     ecx, eax
0x482E08: call    sub_70D590
0x482E0D: jmp     short loc_482E11
0x482E0F: xor     eax, eax
0x482E11: push    eax; a2
0x482E12: lea     ecx, [esp+13Ch+var_D8]; this
0x482E16: mov     byte ptr [esp+13Ch+var_4], 6
0x482E1E: call    NiSmartPointer_Set??
0x482E23: mov     ebp, [esp+138h+var_DC]
0x482E27: mov     edx, [ebp+0]
0x482E2A: mov     ebx, [esp+138h+var_D8]
0x482E2E: mov     eax, [edx+84h]
0x482E34: mov     edi, 1
0x482E39: push    edi
0x482E3A: push    ebx
0x482E3B: mov     ecx, ebp
0x482E3D: call    eax
0x482E3F: fldz
0x482E41: fst     [esp+138h+var_100]
0x482E45: push    edi; a3
0x482E46: mov     ecx, [esp+13Ch+var_100]
0x482E4A: fst     [esp+13Ch+var_FC]
0x482E4E: fld1
0x482E50: mov     edx, [esp+13Ch+var_FC]
0x482E54: mov     [ebp+54h], ecx
0x482E57: fstp    [esp+13Ch+var_F8]
0x482E5B: push    ecx
0x482E5C: mov     eax, [esp+140h+var_F8]
0x482E60: mov     [ebp+58h], edx
0x482E63: mov     ecx, ebp; this
0x482E65: fstp    [esp+140h+a2]; a2
0x482E68: mov     [ebp+5Ch], eax
0x482E6B: call    NiAVObject_UpdateNiAVObject
0x482E70: push    offset dword_B258DC
0x482E75: push    offset Vector3_InitValue?
0x482E7A: mov     ecx, ebx
0x482E7C: call    sub_70C340
0x482E81: fldz
0x482E83: push    edi; a3
0x482E84: push    ecx
0x482E85: mov     ecx, ebx; this
0x482E87: fstp    [esp+140h+a2]; a2
0x482E8A: call    NiAVObject_UpdateNiAVObject
0x482E8F: fldz
0x482E91: push    edi; a3
0x482E92: push    ecx
0x482E93: mov     ecx, ebp; this
0x482E95: fstp    [esp+140h+a2]; a2
0x482E98: call    NiAVObject_UpdateNiAVObject
0x482E9D: fld     [esp+138h+var_EC]
0x482EA1: fstp    [esp+138h+var_B8]
0x482EA8: lea     ecx, [esp+138h+var_B8]
0x482EAF: fld     [esp+138h+var_B8]
0x482EB6: push    ecx; a2
0x482EB7: fstp    [esp+13Ch+var_AC]
0x482EBE: mov     ecx, ebx; this
0x482EC0: fld     [esp+13Ch+var_10C]
0x482EC4: mov     [esp+13Ch+var_A0], 1
0x482ECC: fst     [esp+13Ch+var_B4]
0x482ED3: fstp    [esp+13Ch+var_B0]
0x482EDA: fld1
0x482EDC: fstp    [esp+13Ch+var_A8]
0x482EE3: fld     dword ptr ds:0A379B4h
0x482EE9: fstp    [esp+13Ch+var_A4]
0x482EF0: call    Camera_SetFrustum
0x482EF5: push    114h; Size
0x482EFA: call    FormHeapAlloc
0x482EFF: add     esp, 4
0x482F02: mov     [esp+138h+var_120], eax
0x482F06: test    eax, eax
0x482F08: mov     byte ptr [esp+138h+var_4], 0Dh
0x482F10: jz      short loc_482F1B
0x482F12: mov     ecx, eax
0x482F14: call    sub_719760
0x482F19: jmp     short loc_482F1D
0x482F1B: xor     eax, eax
0x482F1D: push    eax; a2
0x482F1E: lea     ecx, [esp+13Ch+var_D4]; this
0x482F22: mov     byte ptr [esp+13Ch+var_4], 6
0x482F2A: call    NiSmartPointer_Set??
0x482F2F: mov     edx, ds:0B25AC4h
0x482F35: mov     esi, [esp+138h+var_D4]
0x482F39: mov     [esi+0E0h], edx
0x482F3F: mov     eax, ds:0B25AC8h
0x482F44: mov     [esi+0E4h], eax
0x482F4A: mov     ecx, ds:0B25ACCh
0x482F50: add     [esi+0B8h], edi
0x482F56: mov     [esi+0E8h], ecx
0x482F5C: mov     edx, ds:0B25AC4h
0x482F62: mov     [esi+0ECh], edx
0x482F68: mov     eax, ds:0B25AC8h
0x482F6D: mov     [esi+0F0h], eax
0x482F73: mov     ecx, ds:0B25ACCh
0x482F79: add     [esi+0B8h], edi
0x482F7F: mov     edi, [esp+138h+var_110]
0x482F83: mov     [esi+0F4h], ecx
0x482F89: push    edi
0x482F8A: mov     ecx, esi
0x482F8C: call    sub_708E40
0x482F91: push    5Ch ; '\'; Size
0x482F93: call    FormHeapAlloc
0x482F98: add     esp, 4
0x482F9B: mov     [esp+138h+var_120], eax
0x482F9F: test    eax, eax
0x482FA1: mov     byte ptr [esp+138h+var_4], 0Eh
0x482FA9: jz      short loc_482FB4
0x482FAB: mov     ecx, eax; this
0x482FAD: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x482FB2: jmp     short loc_482FB6
0x482FB4: xor     eax, eax
0x482FB6: mov     edx, ds:0B25AC4h
0x482FBC: mov     [eax+1Ch], edx
0x482FBF: mov     ecx, ds:0B25AC8h
0x482FC5: mov     [eax+20h], ecx
0x482FC8: mov     edx, ds:0B25ACCh
0x482FCE: add     dword ptr [eax+54h], 1
0x482FD2: mov     ecx, [eax+54h]
0x482FD5: mov     [eax+24h], edx
0x482FD8: mov     edx, ds:0B25AC4h
0x482FDE: mov     [eax+28h], edx
0x482FE1: mov     edx, ds:0B25AC8h
0x482FE7: mov     [eax+2Ch], edx
0x482FEA: mov     edx, ds:0B25ACCh
0x482FF0: add     ecx, 1
0x482FF3: mov     [eax+54h], ecx
0x482FF6: mov     [eax+30h], edx
0x482FF9: mov     edx, ds:0B25AC4h
0x482FFF: mov     [eax+40h], edx
0x483002: mov     edx, ds:0B25AC8h
0x483008: mov     [eax+44h], edx
0x48300B: mov     edx, ds:0B25ACCh
0x483011: add     ecx, 1
0x483014: mov     [eax+54h], ecx
0x483017: push    eax; a2
0x483018: mov     ecx, edi; this
0x48301A: mov     byte ptr [esp+13Ch+var_4], 6
0x483022: mov     [eax+48h], edx
0x483025: call    sub_405680
0x48302A: push    1Ch; Size
0x48302C: call    FormHeapAlloc
0x483031: mov     edi, eax
0x483033: add     esp, 4
0x483036: mov     [esp+138h+var_120], edi
0x48303A: test    edi, edi
0x48303C: mov     byte ptr [esp+138h+var_4], 0Fh
0x483044: jz      short loc_48305B
0x483046: mov     ecx, edi; this
0x483048: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x48304D: mov     dword ptr [edi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x483053: mov     word ptr [edi+18h], 8
0x483059: jmp     short loc_48305D
0x48305B: xor     edi, edi
0x48305D: mov     ecx, [esp+138h+var_110]; this
0x483061: and     word ptr [edi+18h], 0FFC7h
0x483067: push    edi; a2
0x483068: mov     byte ptr [esp+13Ch+var_4], 6
0x483070: call    sub_405680
0x483075: push    24h ; '$'; Size
0x483077: call    FormHeapAlloc
0x48307C: add     esp, 4
0x48307F: mov     [esp+138h+var_120], eax
0x483083: test    eax, eax
0x483085: mov     byte ptr [esp+138h+var_4], 10h
0x48308D: jz      short loc_483098
0x48308F: mov     ecx, eax
0x483091: call    sub_482590
0x483096: jmp     short loc_48309A
0x483098: xor     eax, eax
0x48309A: mov     ecx, [esp+138h+var_110]; this
0x48309E: or      word ptr [eax+18h], 0C00h
0x4830A4: push    eax; a2
0x4830A5: mov     byte ptr [esp+13Ch+var_4], 6
0x4830AD: call    sub_405680
0x4830B2: mov     edi, [esp+138h+var_CC]
0x4830B6: add     edi, 24h ; '$'
0x4830B9: cmp     dword ptr [edi], 0
0x4830BC: jnz     short loc_4830D9
0x4830BE: mov     eax, ds:0B3F928h
0x4830C3: mov     ecx, ds:0B42F50h; this
0x4830C9: push    0Eh; a3
0x4830CB: push    eax; a2
0x4830CC: call    BSTextureManager_GetDefaultRenderTarget
0x4830D1: push    eax; a2
0x4830D2: mov     ecx, edi; this
0x4830D4: call    NiSmartPointer_Set??
0x4830D9: mov     ecx, ds:0B350D8h
0x4830DF: mov     edx, [ecx]
0x4830E1: mov     edx, [edx+68h]
0x4830E4: lea     eax, [esp+138h+var_C8]
0x4830E8: push    eax
0x4830E9: call    edx
0x4830EB: mov     ecx, ds:0B350D8h
0x4830F1: mov     eax, [ecx]
0x4830F3: mov     edx, [eax+60h]
0x4830F6: push    offset dword_B25AD0
0x4830FB: call    edx
0x4830FD: mov     ecx, [esp+138h+var_110]
0x483101: call    NiNode_UpdateDynamicEffectState
0x483106: mov     ecx, [esp+138h+var_110]; this
0x48310A: call    NiAVObject_InitializePropertyState
0x48310F: fldz
0x483111: push    1; a3
0x483113: push    ecx
0x483114: mov     ecx, [esp+140h+var_110]; this
0x483118: fstp    [esp+140h+a2]; a2
0x48311B: call    NiAVObject_UpdateNiAVObject
0x483120: fldz
0x483122: push    1; a3
0x483124: push    ecx
0x483125: mov     ecx, ebp; this
0x483127: fstp    [esp+140h+a2]; a2
0x48312A: call    NiAVObject_UpdateNiAVObject
0x48312F: fldz
0x483131: push    1; a3
0x483133: push    ecx
0x483134: mov     ecx, ebx; this
0x483136: fstp    [esp+140h+a2]; a2
0x483139: call    NiAVObject_UpdateNiAVObject
0x48313E: call    InitBSShaderAccumulator
0x483143: push    0
0x483145: lea     ecx, [esp+13Ch+var_9C]
0x48314C: mov     byte ptr [eax+21E0h], 0
0x483153: call    NiCullingProcess_NiCullingProcess
0x483158: mov     ecx, [edi]
0x48315A: mov     byte ptr [esp+138h+var_4], 11h
0x483162: call    BSRenderedTexture__UseTextureToRender
0x483167: push    eax; a2
0x483168: push    7; a1
0x48316A: call    NiRenderer_BeginScene
0x48316F: mov     ecx, [esp+140h+var_110]
0x483173: push    0
0x483175: lea     eax, [esp+144h+var_9C]
0x48317C: push    eax
0x48317D: push    ecx
0x48317E: push    ebx
0x48317F: call    sub_70C0B0
0x483184: add     esp, 18h
0x483187: call    NiRenderer_EndScene
0x48318C: mov     ecx, [edi]; this
0x48318E: call    BSRenderedTexture__GetInnerTexture
0x483193: push    eax
0x483194: call    SetTextureCanopyShadowMap
0x483199: add     esp, 4
0x48319C: call    InitBSShaderAccumulator
0x4831A1: mov     byte ptr [eax+21E0h], 1
0x4831A8: mov     ecx, ds:0B350D8h
0x4831AE: mov     edx, [ecx]
0x4831B0: mov     edx, [edx+60h]
0x4831B3: lea     eax, [esp+138h+var_C8]
0x4831B7: push    eax
0x4831B8: call    edx
0x4831BA: lea     ecx, [esp+138h+var_9C]; this
0x4831C1: mov     byte ptr [esp+138h+var_4], 6
0x4831C9: call    ??1BSCullingProcess@@UAE@XZ; BSCullingProcess::~BSCullingProcess(void)
0x4831CE: lea     eax, [esi+4]
0x4831D1: push    eax; lpAddend
0x4831D2: mov     byte ptr [esp+13Ch+var_4], 5
0x4831DA: call    dword ptr ds:0A2807Ch
0x4831E0: test    eax, eax
0x4831E2: jnz     short loc_4831EE
0x4831E4: mov     edx, [esi]
0x4831E6: mov     eax, [edx]
0x4831E8: push    1
0x4831EA: mov     ecx, esi
0x4831EC: call    eax
0x4831EE: test    ebx, ebx
0x4831F0: mov     edi, ds:0A2807Ch
0x4831F6: mov     byte ptr [esp+138h+var_4], 4
0x4831FE: jz      short loc_483214
0x483200: lea     ecx, [ebx+4]
0x483203: push    ecx; lpAddend
0x483204: call    edi ; InterlockedDecrement
0x483206: test    eax, eax
0x483208: jnz     short loc_483214
0x48320A: mov     edx, [ebx]
0x48320C: mov     eax, [edx]
0x48320E: push    1
0x483210: mov     ecx, ebx
0x483212: call    eax
0x483214: mov     esi, [esp+138h+var_F0]
0x483218: test    esi, esi
0x48321A: mov     byte ptr [esp+138h+var_4], 3
0x483222: jz      short loc_483238
0x483224: lea     ecx, [esi+4]
0x483227: push    ecx; lpAddend
0x483228: call    edi ; InterlockedDecrement
0x48322A: test    eax, eax
0x48322C: jnz     short loc_483238
0x48322E: mov     edx, [esi]
0x483230: mov     eax, [edx]
0x483232: push    1
0x483234: mov     ecx, esi
0x483236: call    eax
0x483238: mov     esi, [esp+138h+var_F4]
0x48323C: test    esi, esi
0x48323E: mov     byte ptr [esp+138h+var_4], 2
0x483246: jz      short loc_48325C
0x483248: lea     ecx, [esi+4]
0x48324B: push    ecx; lpAddend
0x48324C: call    edi ; InterlockedDecrement
0x48324E: test    eax, eax
0x483250: jnz     short loc_48325C
0x483252: mov     edx, [esi]
0x483254: mov     eax, [edx]
0x483256: push    1
0x483258: mov     ecx, esi
0x48325A: call    eax
0x48325C: lea     ecx, [ebp+4]
0x48325F: push    ecx; lpAddend
0x483260: mov     byte ptr [esp+13Ch+var_4], 1
0x483268: call    edi ; InterlockedDecrement
0x48326A: test    eax, eax
0x48326C: jnz     short loc_483279
0x48326E: mov     edx, [ebp+0]
0x483271: mov     ecx, ebp
0x483273: mov     eax, [edx]
0x483275: push    1
0x483277: call    eax
0x483279: mov     esi, [esp+138h+var_110]
0x48327D: test    esi, esi
0x48327F: mov     byte ptr [esp+138h+var_4], 0
0x483287: jz      short loc_48329D
0x483289: lea     ecx, [esi+4]
0x48328C: push    ecx; lpAddend
0x48328D: call    edi ; InterlockedDecrement
0x48328F: test    eax, eax
0x483291: jnz     short loc_48329D
0x483293: mov     edx, [esi]
0x483295: mov     eax, [edx]
0x483297: push    1
0x483299: mov     ecx, esi
0x48329B: call    eax
0x48329D: mov     esi, [esp+138h+var_108]
0x4832A1: test    esi, esi
0x4832A3: mov     [esp+138h+var_4], 0FFFFFFFFh
0x4832AE: jz      short loc_483301
0x4832B0: lea     ecx, [esi+4]
0x4832B3: push    ecx; lpAddend
0x4832B4: call    edi ; InterlockedDecrement
0x4832B6: test    eax, eax
0x4832B8: jnz     short loc_483301
0x4832BA: mov     edx, [esi]
0x4832BC: mov     eax, [edx]
0x4832BE: push    1
0x4832C0: mov     ecx, esi
0x4832C2: call    eax
0x4832C4: jmp     short loc_483301
0x4832C6: mov     esi, ds:0B4310Ch
0x4832CC: fstp    st
0x4832CE: and     dword ptr ds:0B42F40h, 0FFFFFFDFh
0x4832D5: fstp    st
0x4832D7: cmp     esi, edi
0x4832D9: jz      short loc_483301
0x4832DB: lea     ecx, [esi+4]
0x4832DE: push    ecx; lpAddend
0x4832DF: call    dword ptr ds:0A2807Ch
0x4832E5: test    eax, eax
0x4832E7: jnz     short loc_4832F7
0x4832E9: cmp     esi, edi
0x4832EB: jz      short loc_4832F7
0x4832ED: mov     edx, [esi]
0x4832EF: mov     eax, [edx]
0x4832F1: push    1
0x4832F3: mov     ecx, esi
0x4832F5: call    eax
0x4832F7: mov     ds:0B4310Ch, edi
0x4832FD: jmp     short loc_483301
0x4832FF: fstp    st
0x483301: mov     ecx, [esp+138h+var_C]
0x483308: mov     large fs:0, ecx
0x48330F: pop     ecx
0x483310: pop     edi
0x483311: pop     esi
0x483312: pop     ebp
0x483313: pop     ebx
0x483314: add     esp, 124h
0x48331A: retn
