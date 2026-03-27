0x497E70: push    0FFFFFFFFh
0x497E72: push    offset SEH_497E70
0x497E77: mov     eax, large fs:0
0x497E7D: push    eax
0x497E7E: sub     esp, 14h
0x497E81: push    ebx
0x497E82: push    esi
0x497E83: push    edi
0x497E84: mov     eax, ds:0B30AACh
0x497E89: xor     eax, esp
0x497E8B: push    eax
0x497E8C: lea     eax, [esp+30h+var_C]
0x497E90: mov     large fs:0, eax
0x497E96: xor     ebx, ebx
0x497E98: cmp     ds:0B350D8h, ebx
0x497E9E: jz      loc_49804B
0x497EA4: cmp     ds:0B350CCh, ebx
0x497EAA: jz      loc_49804B
0x497EB0: cmp     ds:0B350D0h, ebx
0x497EB6: jz      loc_49804B
0x497EBC: call    InitBSShaderAccumulator
0x497EC1: mov     ecx, eax
0x497EC3: call    sub_7A9CF0
0x497EC8: fild    dword ptr ds:0B350D0h
0x497ECE: mov     eax, ds:0B350CCh
0x497ED3: mov     ecx, ds:0B350D0h
0x497ED9: fidiv   dword ptr ds:0B350CCh
0x497EDF: mov     ds:0B06C5Ch, eax
0x497EE4: mov     ds:0B06C64h, ecx
0x497EEA: mov     ds:0B350D7h, bl
0x497EF0: fcomp   qword ptr ds:0A31C70h
0x497EF6: fnstsw  ax
0x497EF8: test    ah, 44h
0x497EFB: jnp     short loc_497F04
0x497EFD: mov     byte ptr ds:0B350D7h, 1
0x497F04: call    sub_410B00
0x497F09: call    sub_578EF0
0x497F0E: call    sub_405B00
0x497F13: call    Interface3dScenegraph_Destructor
0x497F18: mov     edi, ds:0B350D8h
0x497F1E: mov     esi, [edi+8]
0x497F21: add     edi, 8
0x497F24: cmp     esi, ebx
0x497F26: jz      short loc_497F46
0x497F28: lea     edx, [esi+4]
0x497F2B: push    edx; lpAddend
0x497F2C: call    dword ptr ds:0A2807Ch
0x497F32: test    eax, eax
0x497F34: jnz     short loc_497F44
0x497F36: cmp     esi, ebx
0x497F38: jz      short loc_497F44
0x497F3A: mov     eax, [esi]
0x497F3C: mov     edx, [eax]
0x497F3E: push    1
0x497F40: mov     ecx, esi
0x497F42: call    edx
0x497F44: mov     [edi], ebx
0x497F46: mov     eax, ds:0B350D0h
0x497F4B: mov     ecx, ds:0B350CCh
0x497F51: push    eax
0x497F52: push    ecx
0x497F53: mov     ecx, ds:0B350D8h
0x497F59: call    sub_76B090
0x497F5E: test    eax, eax
0x497F60: setnz   al
0x497F63: cmp     al, bl
0x497F65: jz      short loc_497FDC
0x497F67: mov     edx, ds:0B33398h
0x497F6D: mov     esi, [edx+8]
0x497F70: mov     edx, ds:0B34FA8h
0x497F76: mov     eax, ds:0B06C5Ch
0x497F7B: mov     ecx, ds:0B06C64h
0x497F81: push    0FFFFFFF8h; nIndex
0x497F83: push    edx; hWnd
0x497F84: mov     [esp+38h+Rect.left], ebx
0x497F88: mov     [esp+38h+Rect.top], ebx
0x497F8C: mov     [esp+38h+Rect.right], eax
0x497F90: mov     [esp+38h+Rect.bottom], ecx
0x497F94: call    dword ptr ds:0A28274h
0x497F9A: push    eax; bMenu
0x497F9B: push    0FFFFFFF0h; nIndex
0x497F9D: push    esi; hWnd
0x497F9E: call    dword ptr ds:0A28278h
0x497FA4: push    eax; dwStyle
0x497FA5: lea     eax, [esp+38h+Rect]
0x497FA9: push    eax; lpRect
0x497FAA: call    dword ptr ds:0A282ACh
0x497FB0: mov     ecx, [esp+30h+Rect.bottom]
0x497FB4: sub     ecx, [esp+30h+Rect.top]
0x497FB8: mov     eax, [esp+30h+Rect.right]
0x497FBC: sub     eax, [esp+30h+Rect.left]
0x497FC0: mov     edx, ds:0B06C7Ch
0x497FC6: push    40h ; '@'; uFlags
0x497FC8: push    ecx; cy
0x497FC9: mov     ecx, ds:0B06C84h
0x497FCF: push    eax; cx
0x497FD0: push    ecx; Y
0x497FD1: push    edx; X
0x497FD2: push    ebx; hWndInsertAfter
0x497FD3: push    esi; hWnd
0x497FD4: call    dword ptr ds:0A28288h
0x497FDA: jmp     short loc_497FE9
0x497FDC: push    offset aFailedToRecrea; "Failed to Recreate Gamebryo Render in d"...
0x497FE1: call    sub_497B20
0x497FE6: add     esp, 4
0x497FE9: call    RecreateImageSpaceShader
0x497FEE: push    38h ; '8'; Size
0x497FF0: call    FormHeapAlloc
0x497FF5: add     esp, 4
0x497FF8: mov     [esp+30h+var_20], eax
0x497FFC: cmp     eax, ebx
0x497FFE: mov     [esp+30h+var_4], ebx
0x498002: jz      short loc_49800D
0x498004: mov     ecx, eax
0x498006: call    NiAlphaAccumulator_Constructor
0x49800B: jmp     short loc_49800F
0x49800D: xor     eax, eax
0x49800F: mov     ecx, ds:0B350D8h; this
0x498015: push    eax; a2
0x498016: mov     [esp+34h+var_4], 0FFFFFFFFh
0x49801E: call    NiDX9Renderer__SetShaderAccumulator
0x498023: mov     ecx, ds:0B333CCh
0x498029: call    sub_4112E0
0x49802E: call    InterfaceMenuScenegraph_Create
0x498033: call    Interface3dScenegraph_Create
0x498038: push    ebx
0x498039: call    sub_578CC0
0x49803E: add     esp, 4
0x498041: call    sub_578CD0
0x498046: call    sub_5B6040
0x49804B: mov     ecx, dword ptr [esp+30h+var_C]
0x49804F: mov     large fs:0, ecx
0x498056: pop     ecx
0x498057: pop     edi
0x498058: pop     esi
0x498059: pop     ebx
0x49805A: add     esp, 20h
0x49805D: retn
