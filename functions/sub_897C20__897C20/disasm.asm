0x897C20: push    0FFFFFFFFh
0x897C22: push    offset SEH_897C20
0x897C27: mov     eax, large fs:0
0x897C2D: push    eax
0x897C2E: sub     esp, 0Ch
0x897C31: push    ebx
0x897C32: push    ebp
0x897C33: push    esi
0x897C34: push    edi
0x897C35: mov     eax, ds:0B30AACh
0x897C3A: xor     eax, esp
0x897C3C: push    eax
0x897C3D: lea     eax, [esp+2Ch+var_C]
0x897C41: mov     large fs:0, eax
0x897C47: mov     esi, ecx
0x897C49: mov     [esp+2Ch+var_18], esi
0x897C4D: xor     edi, edi
0x897C4F: test    byte ptr ds:0BA7B98h, 1
0x897C56: jnz     short loc_897C72
0x897C58: or      dword ptr ds:0BA7B98h, 1
0x897C5F: push    offset sub_A27B10; void (__cdecl *)()
0x897C64: mov     ds:0BA7B94h, edi
0x897C6A: call    _atexit
0x897C6F: add     esp, 4
0x897C72: mov     ebx, 2
0x897C77: test    ds:0BA7B98h, bl
0x897C7D: jnz     short loc_897C98
0x897C7F: or      ds:0BA7B98h, ebx
0x897C85: push    offset sub_A27AE0; void (__cdecl *)()
0x897C8A: mov     ds:0BA7B90h, edi
0x897C90: call    _atexit
0x897C95: add     esp, 4
0x897C98: test    byte ptr ds:0BA7B98h, 4
0x897C9F: jnz     short loc_897CBB
0x897CA1: or      dword ptr ds:0BA7B98h, 4
0x897CA8: push    offset sub_A27AB0; void (__cdecl *)()
0x897CAD: mov     ds:0BA7B8Ch, edi
0x897CB3: call    _atexit
0x897CB8: add     esp, 4
0x897CBB: mov     eax, 8
0x897CC0: test    ds:0BA7B98h, al
0x897CC6: jnz     short loc_897CE1
0x897CC8: or      ds:0BA7B98h, eax
0x897CCE: push    offset sub_A27A80; void (__cdecl *)()
0x897CD3: mov     ds:0BA7B88h, edi
0x897CD9: call    _atexit
0x897CDE: add     esp, 4
0x897CE1: mov     al, [esi+0Ch]
0x897CE4: shr     al, 4
0x897CE7: cmp     byte ptr [esp+2Ch+arg_0], 0
0x897CEC: jz      loc_89805C
0x897CF2: test    al, 1
0x897CF4: jnz     loc_8981F0
0x897CFA: mov     ebp, [esi+10h]
0x897CFD: cmp     ebp, edi
0x897CFF: jz      loc_8981F0
0x897D05: mov     eax, [ebp+8]
0x897D08: cmp     eax, edi
0x897D0A: jz      short loc_897D18
0x897D0C: add     eax, 14h
0x897D0F: cmp     eax, edi
0x897D11: jz      short loc_897D18
0x897D13: mov     eax, [eax+1Ch]
0x897D16: jmp     short loc_897D1A
0x897D18: xor     eax, eax
0x897D1A: and     eax, 3Fh
0x897D1D: cmp     al, 11h
0x897D1F: jz      loc_8981F0
0x897D25: mov     ecx, esi
0x897D27: call    sub_452A60
0x897D2C: mov     esi, eax
0x897D2E: cmp     esi, edi
0x897D30: jz      short loc_897D41
0x897D32: mov     edx, [esi]
0x897D34: mov     eax, [edx+8]
0x897D37: mov     ecx, esi
0x897D39: call    eax
0x897D3B: mov     edi, eax
0x897D3D: test    edi, edi
0x897D3F: jnz     short loc_897D44
0x897D41: mov     edi, [esi+1Ch]
0x897D44: push    0DCh ; 'Ü'; Size
0x897D49: call    FormHeapAlloc
0x897D4E: add     esp, 4
0x897D51: mov     [esp+2Ch+arg_0], eax
0x897D55: test    eax, eax
0x897D57: mov     [esp+2Ch+var_4], 0
0x897D5F: jz      short loc_897D6E
0x897D61: push    0
0x897D63: mov     ecx, eax; this
0x897D65: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x897D6A: mov     esi, eax
0x897D6C: jmp     short loc_897D70
0x897D6E: xor     esi, esi
0x897D70: push    offset aBhkcoldisp; "bhkColDisp"
0x897D75: mov     ecx, esi
0x897D77: mov     [esp+30h+var_4], 0FFFFFFFFh
0x897D7F: call    NiObjectNET_SetName
0x897D84: test    edi, edi
0x897D86: jz      short loc_897DCD
0x897D88: fld     dword ptr [edi+94h]
0x897D8E: push    1
0x897D90: fstp    [esp+30h+arg_0]
0x897D94: push    esi
0x897D95: fld     [esp+34h+arg_0]
0x897D99: mov     ecx, edi
0x897D9B: fld1
0x897D9D: fdivrp  st(1), st
0x897D9F: fstp    [esp+34h+arg_0]
0x897DA3: fld     [esp+34h+arg_0]
0x897DA7: fabs
0x897DA9: fstp    [esp+34h+arg_0]
0x897DAD: fld     [esp+34h+arg_0]
0x897DB1: fstp    dword ptr [esi+60h]
0x897DB4: mov     edx, [edi]
0x897DB6: mov     eax, [edx+84h]
0x897DBC: call    eax
0x897DBE: fldz
0x897DC0: push    1; a3
0x897DC2: push    ecx
0x897DC3: mov     ecx, esi; this
0x897DC5: fstp    [esp+34h+a2]; a2
0x897DC8: call    NiAVObject_UpdateNiAVObject
0x897DCD: mov     edx, [ebp+0]
0x897DD0: mov     eax, [edx+88h]
0x897DD6: push    esi
0x897DD7: mov     ecx, ebp
0x897DD9: call    eax
0x897DDB: mov     ebp, eax
0x897DDD: test    ebp, ebp
0x897DDF: mov     [esp+2Ch+var_14], ebp
0x897DE3: jz      short loc_897DEF
0x897DE5: lea     ecx, [ebp+4]
0x897DE8: push    ecx; lpAddend
0x897DE9: call    dword ptr ds:0A28078h
0x897DEF: test    ebp, ebp
0x897DF1: mov     [esp+2Ch+var_4], 1
0x897DF9: jz      loc_89801A
0x897DFF: test    edi, edi
0x897E01: jz      loc_898009
0x897E07: cmp     dword ptr ds:0BA7B94h, 0
0x897E0E: jnz     short loc_897E57
0x897E10: push    1Ch; Size
0x897E12: call    FormHeapAlloc
0x897E17: add     esp, 4
0x897E1A: mov     [esp+2Ch+arg_0], eax
0x897E1E: test    eax, eax
0x897E20: mov     byte ptr [esp+2Ch+var_4], bl
0x897E24: jz      short loc_897E2F
0x897E26: mov     ecx, eax
0x897E28: call    sub_405990
0x897E2D: jmp     short loc_897E31
0x897E2F: xor     eax, eax
0x897E31: push    eax; a2
0x897E32: mov     ecx, offset dword_BA7B94; this
0x897E37: mov     byte ptr [esp+30h+var_4], 1
0x897E3C: call    NiSmartPointer_Set??
0x897E41: mov     eax, ds:0BA7B94h
0x897E46: and     word ptr [eax+18h], 0FFCFh
0x897E4C: mov     eax, ds:0BA7B94h
0x897E51: and     word ptr [eax+18h], 0FFF7h
0x897E57: cmp     dword ptr ds:0BA7B90h, 0
0x897E5E: jnz     short loc_897EAB
0x897E60: push    1Ch; Size
0x897E62: call    FormHeapAlloc
0x897E67: add     esp, 4
0x897E6A: mov     [esp+2Ch+arg_0], eax
0x897E6E: test    eax, eax
0x897E70: mov     byte ptr [esp+2Ch+var_4], 3
0x897E75: jz      short loc_897E80
0x897E77: mov     ecx, eax
0x897E79: call    NiObjectNET_Create
0x897E7E: jmp     short loc_897E82
0x897E80: xor     eax, eax
0x897E82: push    eax; a2
0x897E83: mov     ecx, offset dword_BA7B90; this
0x897E88: mov     byte ptr [esp+30h+var_4], 1
0x897E8D: call    NiSmartPointer_Set??
0x897E92: mov     eax, ds:0BA7B90h
0x897E97: mov     esi, 1
0x897E9C: or      [eax+18h], si
0x897EA0: mov     eax, ds:0BA7B90h
0x897EA5: or      [eax+18h], bx
0x897EA9: jmp     short loc_897EB0
0x897EAB: mov     esi, 1
0x897EB0: push    ebx
0x897EB1: mov     ecx, ebp
0x897EB3: call    NiNode_GetNiPropertyByID
0x897EB8: test    eax, eax
0x897EBA: jnz     loc_897F7F
0x897EC0: cmp     ds:0BA7B8Ch, eax
0x897EC6: jnz     loc_897F72
0x897ECC: push    5Ch ; '\'; Size
0x897ECE: call    FormHeapAlloc
0x897ED3: add     esp, 4
0x897ED6: mov     [esp+2Ch+arg_0], eax
0x897EDA: test    eax, eax
0x897EDC: mov     byte ptr [esp+2Ch+var_4], 4
0x897EE1: jz      short loc_897EEC
0x897EE3: mov     ecx, eax; this
0x897EE5: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x897EEA: jmp     short loc_897EEE
0x897EEC: xor     eax, eax
0x897EEE: push    eax; a2
0x897EEF: mov     ecx, offset dword_BA7B8C; this
0x897EF4: mov     byte ptr [esp+30h+var_4], 1
0x897EF9: call    NiSmartPointer_Set??
0x897EFE: mov     ecx, ds:0BA7B8Ch
0x897F04: mov     edx, ds:0B25AC4h
0x897F0A: mov     [ecx+1Ch], edx
0x897F0D: mov     edx, ds:0B25AC8h
0x897F13: mov     [ecx+20h], edx
0x897F16: mov     edx, ds:0B25ACCh
0x897F1C: add     [ecx+54h], esi
0x897F1F: mov     [ecx+24h], edx
0x897F22: mov     edx, ds:0B25AC4h
0x897F28: lea     eax, [ecx+1Ch]
0x897F2B: mov     ecx, ds:0BA7B8Ch
0x897F31: mov     [ecx+28h], edx
0x897F34: mov     edx, ds:0B25AC8h
0x897F3A: mov     [ecx+2Ch], edx
0x897F3D: mov     edx, ds:0B25ACCh
0x897F43: add     [ecx+54h], esi
0x897F46: lea     eax, [ecx+28h]
0x897F49: mov     [eax+8], edx
0x897F4C: mov     ecx, ds:0BA7B8Ch
0x897F52: mov     edx, ds:0B25AC4h
0x897F58: lea     eax, [ecx+40h]
0x897F5B: mov     [eax], edx
0x897F5D: mov     edx, ds:0B25AC8h
0x897F63: mov     [eax+4], edx
0x897F66: mov     edx, ds:0B25ACCh
0x897F6C: add     [ecx+54h], esi
0x897F6F: mov     [eax+8], edx
0x897F72: mov     eax, ds:0BA7B8Ch
0x897F77: push    eax; a2
0x897F78: mov     ecx, ebp; this
0x897F7A: call    sub_405680
0x897F7F: cmp     dword ptr ds:0BA7B88h, 0
0x897F86: jnz     short loc_897FC3
0x897F88: push    1Ch; Size
0x897F8A: call    FormHeapAlloc
0x897F8F: add     esp, 4
0x897F92: mov     [esp+2Ch+arg_0], eax
0x897F96: test    eax, eax
0x897F98: mov     byte ptr [esp+2Ch+var_4], 5
0x897F9D: jz      short loc_897FA8
0x897F9F: mov     ecx, eax
0x897FA1: call    sub_4059D0
0x897FA6: jmp     short loc_897FAA
0x897FA8: xor     eax, eax
0x897FAA: push    eax; a2
0x897FAB: mov     ecx, offset dword_BA7B88; this
0x897FB0: mov     byte ptr [esp+30h+var_4], 1
0x897FB5: call    NiSmartPointer_Set??
0x897FBA: mov     eax, ds:0BA7B88h
0x897FBF: or      [eax+18h], si
0x897FC3: mov     ecx, ds:0BA7B94h
0x897FC9: push    ecx; a2
0x897FCA: mov     ecx, ebp; this
0x897FCC: call    sub_405680
0x897FD1: mov     edx, ds:0BA7B90h
0x897FD7: push    edx; a2
0x897FD8: mov     ecx, ebp; this
0x897FDA: call    sub_405680
0x897FDF: mov     eax, ds:0BA7B88h
0x897FE4: push    eax; a2
0x897FE5: mov     ecx, ebp; this
0x897FE7: call    sub_405680
0x897FEC: mov     ecx, ebp; this
0x897FEE: call    NiAVObject_InitializePropertyState
0x897FF3: mov     ecx, ebp
0x897FF5: call    NiNode_UpdateDynamicEffectState
0x897FFA: fldz
0x897FFC: push    0; a3
0x897FFE: push    ecx
0x897FFF: mov     ecx, ebp; this
0x898001: fstp    [esp+34h+a2]; a2
0x898004: call    NiAVObject_UpdateNiAVObject
0x898009: mov     eax, ds:0BA7A84h
0x89800E: test    eax, eax
0x898010: jz      short loc_89803D
0x898012: push    ebp; _DWORD
0x898013: call    eax ; dword_BA7A84
0x898015: add     esp, 4
0x898018: jmp     short loc_89803D
0x89801A: test    edi, edi
0x89801C: jz      short loc_89803D
0x89801E: test    esi, esi
0x898020: jz      short loc_89803D
0x898022: mov     edx, [edi]
0x898024: mov     edx, [edx+88h]
0x89802A: push    esi
0x89802B: lea     eax, [esp+30h+arg_0]
0x89802F: push    eax
0x898030: mov     ecx, edi
0x898032: call    edx
0x898034: lea     ecx, [esp+2Ch+arg_0]; this
0x898038: call    sub_7016A0
0x89803D: mov     eax, [esp+2Ch+var_18]
0x898041: or      word ptr [eax+0Ch], 10h
0x898046: lea     ecx, [esp+2Ch+var_14]; this
0x89804A: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x898052: call    sub_7016A0
0x898057: jmp     loc_8981F0
0x89805C: test    al, 1
0x89805E: jz      loc_8981F0
0x898064: mov     ecx, esi
0x898066: call    sub_452A60
0x89806B: mov     esi, eax
0x89806D: cmp     esi, edi
0x89806F: jz      short loc_898080
0x898071: mov     edx, [esi]
0x898073: mov     eax, [edx+8]
0x898076: mov     ecx, esi
0x898078: call    eax
0x89807A: mov     ebp, eax
0x89807C: cmp     ebp, edi
0x89807E: jnz     short loc_89808D
0x898080: mov     ebp, [esi+1Ch]
0x898083: cmp     ebp, edi
0x898085: jz      loc_8981E6
0x89808B: xor     edi, edi
0x89808D: movzx   eax, word ptr [ebp+0B6h]
0x898094: cmp     eax, edi
0x898096: mov     [esp+2Ch+var_10], eax
0x89809A: mov     [esp+2Ch+arg_0], edi
0x89809E: jbe     loc_8981E6
0x8980A4: mov     edi, ds:0A2807Ch
0x8980AA: xor     ebx, ebx
0x8980AC: movzx   ecx, word ptr [ebp+0B6h]
0x8980B3: cmp     ecx, [esp+2Ch+arg_0]
0x8980B7: jbe     loc_8981D1
0x8980BD: mov     edx, [ebp+0B0h]
0x8980C3: mov     eax, [esp+2Ch+arg_0]
0x8980C7: mov     ecx, [edx+eax*4]
0x8980CA: cmp     ecx, ebx
0x8980CC: jz      loc_8981D1
0x8980D2: push    offset aBhkcoldisp; "bhkColDisp"
0x8980D7: call    sub_7073F0
0x8980DC: cmp     eax, ebx
0x8980DE: jz      loc_8981D1
0x8980E4: mov     edx, [ebp+0]
0x8980E7: mov     edx, [edx+88h]
0x8980ED: push    eax
0x8980EE: lea     eax, [esp+30h+var_14]
0x8980F2: push    eax
0x8980F3: mov     ecx, ebp
0x8980F5: call    edx
0x8980F7: mov     eax, [esp+2Ch+var_14]
0x8980FB: cmp     eax, ebx
0x8980FD: jz      short loc_898119
0x8980FF: mov     esi, eax
0x898101: add     eax, 4
0x898104: push    eax; lpAddend
0x898105: call    edi ; InterlockedDecrement
0x898107: test    eax, eax
0x898109: jnz     short loc_898119
0x89810B: cmp     esi, ebx
0x89810D: jz      short loc_898119
0x89810F: mov     eax, [esi]
0x898111: mov     edx, [eax]
0x898113: push    1
0x898115: mov     ecx, esi
0x898117: call    edx
0x898119: mov     esi, ds:0BA7B94h
0x89811F: cmp     esi, ebx
0x898121: jz      short loc_898147
0x898123: cmp     dword ptr [esi+4], 1
0x898127: lea     eax, [esi+4]
0x89812A: jnz     short loc_898147
0x89812C: push    eax; lpAddend
0x89812D: call    edi ; InterlockedDecrement
0x89812F: test    eax, eax
0x898131: jnz     short loc_898141
0x898133: cmp     esi, ebx
0x898135: jz      short loc_898141
0x898137: mov     eax, [esi]
0x898139: mov     edx, [eax]
0x89813B: push    1
0x89813D: mov     ecx, esi
0x89813F: call    edx
0x898141: mov     ds:0BA7B94h, ebx
0x898147: mov     esi, ds:0BA7B90h
0x89814D: cmp     esi, ebx
0x89814F: jz      short loc_898175
0x898151: cmp     dword ptr [esi+4], 1
0x898155: lea     eax, [esi+4]
0x898158: jnz     short loc_898175
0x89815A: push    eax; lpAddend
0x89815B: call    edi ; InterlockedDecrement
0x89815D: test    eax, eax
0x89815F: jnz     short loc_89816F
0x898161: cmp     esi, ebx
0x898163: jz      short loc_89816F
0x898165: mov     eax, [esi]
0x898167: mov     edx, [eax]
0x898169: push    1
0x89816B: mov     ecx, esi
0x89816D: call    edx
0x89816F: mov     ds:0BA7B90h, ebx
0x898175: mov     esi, ds:0BA7B8Ch
0x89817B: cmp     esi, ebx
0x89817D: jz      short loc_8981A3
0x89817F: cmp     dword ptr [esi+4], 1
0x898183: lea     eax, [esi+4]
0x898186: jnz     short loc_8981A3
0x898188: push    eax; lpAddend
0x898189: call    edi ; InterlockedDecrement
0x89818B: test    eax, eax
0x89818D: jnz     short loc_89819D
0x89818F: cmp     esi, ebx
0x898191: jz      short loc_89819D
0x898193: mov     eax, [esi]
0x898195: mov     edx, [eax]
0x898197: push    1
0x898199: mov     ecx, esi
0x89819B: call    edx
0x89819D: mov     ds:0BA7B8Ch, ebx
0x8981A3: mov     esi, ds:0BA7B88h
0x8981A9: cmp     esi, ebx
0x8981AB: jz      short loc_8981D1
0x8981AD: cmp     dword ptr [esi+4], 1
0x8981B1: lea     eax, [esi+4]
0x8981B4: jnz     short loc_8981D1
0x8981B6: push    eax; lpAddend
0x8981B7: call    edi ; InterlockedDecrement
0x8981B9: test    eax, eax
0x8981BB: jnz     short loc_8981CB
0x8981BD: cmp     esi, ebx
0x8981BF: jz      short loc_8981CB
0x8981C1: mov     eax, [esi]
0x8981C3: mov     edx, [eax]
0x8981C5: push    1
0x8981C7: mov     ecx, esi
0x8981C9: call    edx
0x8981CB: mov     ds:0BA7B88h, ebx
0x8981D1: mov     eax, [esp+2Ch+arg_0]
0x8981D5: add     eax, 1
0x8981D8: cmp     eax, [esp+2Ch+var_10]
0x8981DC: mov     [esp+2Ch+arg_0], eax
0x8981E0: jb      loc_8980AC
0x8981E6: mov     eax, [esp+2Ch+var_18]
0x8981EA: and     word ptr [eax+0Ch], 0FFEFh
0x8981F0: mov     ecx, dword ptr [esp+2Ch+var_C]
0x8981F4: mov     large fs:0, ecx
0x8981FB: pop     ecx
0x8981FC: pop     edi
0x8981FD: pop     esi
0x8981FE: pop     ebp
0x8981FF: pop     ebx
0x898200: add     esp, 18h
0x898203: retn    4
