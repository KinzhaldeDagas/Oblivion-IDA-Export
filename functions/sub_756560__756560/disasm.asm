0x756560: push    ebx
0x756561: push    esi
0x756562: mov     esi, [esp+8+arg_0]
0x756566: push    edi
0x756567: push    esi
0x756568: mov     edi, ecx
0x75656A: call    sub_75F110
0x75656F: mov     eax, ds:0B4104Ch
0x756574: push    eax; ArgList
0x756575: call    TESOutput_PrintString
0x75657A: movzx   ebx, word ptr [esi+0Ah]
0x75657E: movzx   ecx, word ptr [esi+8]
0x756582: add     esp, 4
0x756585: cmp     ebx, ecx
0x756587: mov     [esp+0Ch+arg_0], eax
0x75658B: jb      short loc_75659B
0x75658D: movzx   edx, word ptr [esi+0Eh]
0x756591: add     edx, ebx
0x756593: push    edx
0x756594: mov     ecx, esi
0x756596: call    NiTArray_SetSize
0x75659B: lea     eax, [esp+0Ch+arg_0]
0x75659F: push    eax
0x7565A0: push    ebx
0x7565A1: mov     ecx, esi
0x7565A3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7565A8: mov     eax, [edi+2Ch]
0x7565AB: test    eax, eax
0x7565AD: jz      short loc_7565B4
0x7565AF: mov     eax, [eax+8]
0x7565B2: jmp     short loc_7565B9
0x7565B4: mov     eax, offset aNone; "None"
0x7565B9: push    eax; int
0x7565BA: push    offset aColliderObject; "Collider Object"
0x7565BF: call    TESOutput_PrintLabeledString
0x7565C4: movzx   ebx, word ptr [esi+0Ah]
0x7565C8: movzx   ecx, word ptr [esi+8]
0x7565CC: add     esp, 8
0x7565CF: cmp     ebx, ecx
0x7565D1: mov     [esp+0Ch+arg_0], eax
0x7565D5: jb      short loc_7565E5
0x7565D7: movzx   edx, word ptr [esi+0Eh]
0x7565DB: add     edx, ebx
0x7565DD: push    edx
0x7565DE: mov     ecx, esi
0x7565E0: call    NiTArray_SetSize
0x7565E5: lea     eax, [esp+0Ch+arg_0]
0x7565E9: push    eax
0x7565EA: push    ebx
0x7565EB: mov     ecx, esi
0x7565ED: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7565F2: fld     dword ptr [edi+30h]
0x7565F5: push    ecx
0x7565F6: fstp    [esp+10h+var_10]; float
0x7565F9: push    offset aWidth_1; "Width"
0x7565FE: call    TESOutput_PrintLabeledFloat
0x756603: movzx   ebx, word ptr [esi+0Ah]
0x756607: movzx   ecx, word ptr [esi+8]
0x75660B: add     esp, 8
0x75660E: cmp     ebx, ecx
0x756610: mov     [esp+0Ch+arg_0], eax
0x756614: jb      short loc_756624
0x756616: movzx   edx, word ptr [esi+0Eh]
0x75661A: add     edx, ebx
0x75661C: push    edx
0x75661D: mov     ecx, esi
0x75661F: call    NiTArray_SetSize
0x756624: lea     eax, [esp+0Ch+arg_0]
0x756628: push    eax
0x756629: push    ebx
0x75662A: mov     ecx, esi
0x75662C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x756631: fld     dword ptr [edi+34h]
0x756634: push    ecx
0x756635: fstp    [esp+10h+var_10]; float
0x756638: push    offset aHeight_1; "Height"
0x75663D: call    TESOutput_PrintLabeledFloat
0x756642: movzx   ebx, word ptr [esi+0Ah]
0x756646: movzx   ecx, word ptr [esi+8]
0x75664A: add     esp, 8
0x75664D: cmp     ebx, ecx
0x75664F: mov     [esp+0Ch+arg_0], eax
0x756653: jb      short loc_756663
0x756655: movzx   edx, word ptr [esi+0Eh]
0x756659: add     edx, ebx
0x75665B: push    edx
0x75665C: mov     ecx, esi
0x75665E: call    NiTArray_SetSize
0x756663: lea     eax, [esp+0Ch+arg_0]
0x756667: push    eax
0x756668: push    ebx
0x756669: mov     ecx, esi
0x75666B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x756670: push    offset aXAxis; "X-Axis"
0x756675: lea     ecx, [edi+38h]
0x756678: call    sub_707280
0x75667D: movzx   ebx, word ptr [esi+0Ah]
0x756681: movzx   ecx, word ptr [esi+8]
0x756685: cmp     ebx, ecx
0x756687: mov     [esp+0Ch+arg_0], eax
0x75668B: jb      short loc_75669B
0x75668D: movzx   edx, word ptr [esi+0Eh]
0x756691: add     edx, ebx
0x756693: push    edx
0x756694: mov     ecx, esi
0x756696: call    NiTArray_SetSize
0x75669B: lea     eax, [esp+0Ch+arg_0]
0x75669F: push    eax
0x7566A0: push    ebx
0x7566A1: mov     ecx, esi
0x7566A3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7566A8: push    offset aYAxis; "Y-Axis"
0x7566AD: lea     ecx, [edi+44h]
0x7566B0: call    sub_707280
0x7566B5: movzx   edi, word ptr [esi+0Ah]
0x7566B9: movzx   ecx, word ptr [esi+8]
0x7566BD: cmp     edi, ecx
0x7566BF: mov     [esp+0Ch+arg_0], eax
0x7566C3: jb      short loc_7566D3
0x7566C5: movzx   edx, word ptr [esi+0Eh]
0x7566C9: add     edx, edi
0x7566CB: push    edx
0x7566CC: mov     ecx, esi
0x7566CE: call    NiTArray_SetSize
0x7566D3: lea     eax, [esp+0Ch+arg_0]
0x7566D7: push    eax
0x7566D8: push    edi
0x7566D9: mov     ecx, esi
0x7566DB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7566E0: pop     edi
0x7566E1: pop     esi
0x7566E2: pop     ebx
0x7566E3: retn    4
