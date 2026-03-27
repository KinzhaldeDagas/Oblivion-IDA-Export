0x813960: push    0FFFFFFFFh
0x813962: push    offset SEH_813960
0x813967: mov     eax, large fs:0
0x81396D: push    eax
0x81396E: sub     esp, 138h
0x813974: push    ebx
0x813975: push    ebp
0x813976: push    esi
0x813977: push    edi
0x813978: mov     eax, ds:0B30AACh
0x81397D: xor     eax, esp
0x81397F: push    eax
0x813980: lea     eax, [esp+158h+var_C]
0x813987: mov     large fs:0, eax
0x81398D: mov     edi, ecx
0x81398F: mov     eax, ds:0B25AD0h
0x813994: mov     ecx, ds:0B25AD4h
0x81399A: mov     edx, ds:0B25AD8h
0x8139A0: mov     [esp+158h+var_B0], eax
0x8139A7: mov     eax, ds:0B25ADCh
0x8139AC: mov     [esp+158h+var_AC], ecx
0x8139B3: mov     ecx, ds:0B43104h
0x8139B9: mov     [esp+158h+var_A8], edx
0x8139C0: mov     [esp+158h+var_A4], eax
0x8139C7: mov     edx, [ecx]
0x8139C9: mov     edx, [edx+68h]
0x8139CC: lea     eax, [esp+158h+var_B0]
0x8139D3: xor     ebx, ebx
0x8139D5: push    eax
0x8139D6: mov     [esp+15Ch+var_13C], ebx
0x8139DA: mov     [esp+15Ch+var_124], ebx
0x8139DE: call    edx
0x8139E0: cmp     word ptr ds:0B42EACh, 5
0x8139E8: jnz     short loc_813A25
0x8139EA: mov     eax, [edi+144h]
0x8139F0: fld     dword ptr ds:0A3765Ch
0x8139F6: movzx   ecx, word ptr [eax+118h]
0x8139FD: fst     [esp+15Ch+var_13C]
0x813A01: fst     [esp+15Ch+var_138]
0x813A05: mov     [esp+15Ch+var_128], ecx
0x813A09: mov     ecx, ds:0B43104h
0x813A0F: fstp    [esp+15Ch+var_134]
0x813A13: fld1
0x813A15: lea     eax, [esp+15Ch+var_13C]
0x813A19: fstp    [esp+15Ch+var_130]
0x813A1D: mov     edx, [ecx]
0x813A1F: mov     edx, [edx+60h]
0x813A22: push    eax
0x813A23: call    edx
0x813A25: mov     [esp+160h+var_14C], ebx
0x813A29: mov     eax, [esp+160h+var_4]
0x813A30: cmp     eax, 0FFFFFFFFh
0x813A33: jz      short loc_813A3D
0x813A35: cmp     ebx, eax
0x813A37: jnz     loc_8140B0
0x813A3D: push    ebx
0x813A3E: mov     ecx, edi
0x813A40: call    sub_812EF0
0x813A45: mov     eax, [edi+140h]
0x813A4B: test    eax, eax
0x813A4D: jz      short loc_813A58
0x813A4F: mov     esi, [esp+160h+var_130]
0x813A53: add     eax, 20h ; ' '
0x813A56: jmp     short loc_813A67
0x813A58: xor     esi, esi
0x813A5A: or      [esp+160h+var_144], 1
0x813A5F: mov     [esp+160h+var_130], esi
0x813A63: lea     eax, [esp+160h+var_130]
0x813A67: test    byte ptr [esp+160h+var_144], 1
0x813A6C: mov     ebp, [eax]
0x813A6E: jz      short loc_813A91
0x813A70: and     [esp+160h+var_144], 0FFFFFFFEh
0x813A75: test    esi, esi
0x813A77: jz      short loc_813A91
0x813A79: lea     eax, [esi+4]
0x813A7C: push    eax; lpAddend
0x813A7D: call    dword ptr ds:0A2807Ch
0x813A83: test    eax, eax
0x813A85: jnz     short loc_813A91
0x813A87: mov     edx, [esi]
0x813A89: mov     eax, [edx]
0x813A8B: push    1
0x813A8D: mov     ecx, esi
0x813A8F: call    eax
0x813A91: mov     [ebp+40h], ebx
0x813A94: mov     esi, [ebp+30h]
0x813A97: cmp     esi, [ebp+ebx*4+44h]
0x813A9B: jz      short loc_813AD6
0x813A9D: test    esi, esi
0x813A9F: jz      short loc_813ABD
0x813AA1: lea     ecx, [esi+4]
0x813AA4: push    ecx; lpAddend
0x813AA5: call    dword ptr ds:0A2807Ch
0x813AAB: test    eax, eax
0x813AAD: jnz     short loc_813ABD
0x813AAF: test    esi, esi
0x813AB1: jz      short loc_813ABD
0x813AB3: mov     edx, [esi]
0x813AB5: mov     eax, [edx]
0x813AB7: push    1
0x813AB9: mov     ecx, esi
0x813ABB: call    eax
0x813ABD: mov     eax, [ebp+ebx*4+44h]
0x813AC1: test    eax, eax
0x813AC3: mov     [ebp+30h], eax
0x813AC6: jz      short loc_813AD6
0x813AC8: mov     ebp, ds:0A28078h
0x813ACE: add     eax, 4
0x813AD1: push    eax; lpAddend
0x813AD2: call    ebp ; InterlockedIncrement
0x813AD4: jmp     short loc_813ADC
0x813AD6: mov     ebp, ds:0A28078h
0x813ADC: mov     ecx, [edi+140h]
0x813AE2: call    BSRenderedTexture__UseTextureToRender
0x813AE7: push    eax; a2
0x813AE8: push    7; a1
0x813AEA: call    NiRenderer_BeginScene
0x813AEF: add     esp, 8
0x813AF2: xor     eax, eax
0x813AF4: cmp     ebx, 5; switch 6 cases
0x813AF7: ja      def_813AFD
0x813AFD: jmp     ds:jpt_813AFD[ebx*4]; switch jump
0x813B04: mov     ecx, ds:0B43100h; jumptable 00813AFD case 1
0x813B0A: push    ecx; a2
0x813B0B: mov     ecx, offset dword_B474EC; this
0x813B10: call    NiSmartPointer_Set??
0x813B15: mov     eax, 2
0x813B1A: jmp     short def_813AFD
0x813B1C: mov     edx, ds:0B43100h; jumptable 00813AFD case 0
0x813B22: push    edx; a2
0x813B23: mov     ecx, offset dword_B474EC; this
0x813B28: call    NiSmartPointer_Set??
0x813B2D: mov     eax, 1
0x813B32: jmp     short def_813AFD
0x813B34: mov     eax, ds:0B43100h; jumptable 00813AFD case 3
0x813B39: push    eax; a2
0x813B3A: mov     ecx, offset dword_B474EC; this
0x813B3F: call    NiSmartPointer_Set??
0x813B44: mov     eax, 8
0x813B49: jmp     short def_813AFD
0x813B4B: mov     ecx, ds:0B43100h; jumptable 00813AFD case 2
0x813B51: push    ecx; a2
0x813B52: mov     ecx, offset dword_B474EC; this
0x813B57: call    NiSmartPointer_Set??
0x813B5C: mov     eax, 4
0x813B61: jmp     short def_813AFD
0x813B63: mov     eax, 20h ; ' '; jumptable 00813AFD case 4
0x813B68: jmp     short def_813AFD
0x813B6A: mov     edx, ds:0B430E4h; jumptable 00813AFD case 5
0x813B70: push    edx; a2
0x813B71: mov     ecx, offset dword_B474EC; this
0x813B76: call    NiSmartPointer_Set??
0x813B7B: mov     eax, 10h
