0x7A9E10: push    0FFFFFFFFh
0x7A9E12: push    offset SEH_7A9E10
0x7A9E17: mov     eax, large fs:0
0x7A9E1D: push    eax
0x7A9E1E: sub     esp, 318h
0x7A9E24: mov     eax, ds:0B30AACh
0x7A9E29: xor     eax, esp
0x7A9E2B: mov     [esp+324h+var_10], eax
0x7A9E32: push    ebx
0x7A9E33: push    ebp
0x7A9E34: push    esi
0x7A9E35: push    edi
0x7A9E36: mov     eax, ds:0B30AACh
0x7A9E3B: xor     eax, esp
0x7A9E3D: push    eax
0x7A9E3E: lea     eax, [esp+338h+var_C]
0x7A9E45: mov     large fs:0, eax
0x7A9E4B: mov     ebp, ecx
0x7A9E4D: push    0DCh ; 'Ü'; Size
0x7A9E52: mov     [esp+33Ch+var_314], ebp
0x7A9E56: call    FormHeapAlloc
0x7A9E5B: add     esp, 4
0x7A9E5E: mov     [esp+338h+var_324], eax
0x7A9E62: xor     esi, esi
0x7A9E64: cmp     eax, esi
0x7A9E66: mov     [esp+338h+var_4], esi
0x7A9E6D: jz      short loc_7A9E7F
0x7A9E6F: push    esi
0x7A9E70: mov     ecx, eax; this
0x7A9E72: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x7A9E77: mov     ebx, eax
0x7A9E79: mov     [esp+338h+var_320], ebx
0x7A9E7D: jmp     short loc_7A9E85
0x7A9E7F: mov     [esp+338h+var_320], esi
0x7A9E83: mov     ebx, esi
0x7A9E85: push    offset aRenderpasses; "RenderPasses"
0x7A9E8A: mov     ecx, ebx
0x7A9E8C: mov     [esp+33Ch+var_4], 0FFFFFFFFh
0x7A9E97: call    NiObjectNET_SetName
0x7A9E9C: add     ebp, 114h
0x7A9EA2: mov     [esp+338h+var_31C], esi
0x7A9EA6: mov     [esp+338h+var_324], ebp
0x7A9EAA: cmp     dword ptr [ebp+0], 0
0x7A9EAE: jbe     loc_7A9FBE
0x7A9EB4: push    0DCh ; 'Ü'; Size
0x7A9EB9: call    FormHeapAlloc
0x7A9EBE: add     esp, 4
0x7A9EC1: mov     [esp+338h+var_318], eax
0x7A9EC5: test    eax, eax
0x7A9EC7: mov     [esp+338h+var_4], 1
0x7A9ED2: jz      short loc_7A9EE1
0x7A9ED4: push    0
0x7A9ED6: mov     ecx, eax; this
0x7A9ED8: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x7A9EDD: mov     edi, eax
0x7A9EDF: jmp     short loc_7A9EE3
0x7A9EE1: xor     edi, edi
0x7A9EE3: mov     eax, [esp+338h+var_31C]
0x7A9EE7: mov     esi, [ebp+0]
0x7A9EEA: push    eax
0x7A9EEB: mov     [esp+33Ch+var_4], 0FFFFFFFFh
0x7A9EF6: call    BSShaderProperty_GetRenderPassName
0x7A9EFB: push    eax
0x7A9EFC: push    esi
0x7A9EFD: lea     ecx, [esp+344h+Src]
0x7A9F04: push    offset aIS; "%i : %s"
0x7A9F09: push    ecx
0x7A9F0A: call    __sprintf
0x7A9F0F: add     esp, 14h
0x7A9F12: lea     edx, [esp+338h+Src]
0x7A9F19: push    edx; Src
0x7A9F1A: mov     ecx, edi
0x7A9F1C: call    NiObjectNET_SetName
0x7A9F21: mov     eax, [ebx]
0x7A9F23: mov     edx, [eax+84h]
0x7A9F29: push    1
0x7A9F2B: push    edi
0x7A9F2C: mov     ecx, ebx
0x7A9F2E: call    edx
0x7A9F30: mov     esi, [ebp-0Ch]
0x7A9F33: test    esi, esi
0x7A9F35: jz      loc_7A9FBE
0x7A9F3B: mov     ebp, [esi+8]
0x7A9F3E: lea     eax, [esi+8]
0x7A9F41: mov     esi, [esi]
0x7A9F43: push    0DCh ; 'Ü'; Size
0x7A9F48: call    FormHeapAlloc
0x7A9F4D: add     esp, 4
0x7A9F50: mov     [esp+338h+var_318], eax
0x7A9F54: test    eax, eax
0x7A9F56: mov     [esp+338h+var_4], 2
0x7A9F61: jz      short loc_7A9F70
0x7A9F63: push    0
0x7A9F65: mov     ecx, eax; this
0x7A9F67: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x7A9F6C: mov     ebx, eax
0x7A9F6E: jmp     short loc_7A9F72
0x7A9F70: xor     ebx, ebx
0x7A9F72: mov     eax, [ebp+0]
0x7A9F75: mov     ecx, [eax+8]
0x7A9F78: push    ecx
0x7A9F79: push    eax
0x7A9F7A: lea     eax, [esp+340h+var_310]
0x7A9F7E: push    offset aXS; "%x : %s"
0x7A9F83: push    eax
0x7A9F84: mov     [esp+348h+var_4], 0FFFFFFFFh
0x7A9F8F: call    __sprintf
0x7A9F94: add     esp, 10h
0x7A9F97: lea     ecx, [esp+338h+var_310]
0x7A9F9B: push    ecx; Src
0x7A9F9C: mov     ecx, ebx
0x7A9F9E: call    NiObjectNET_SetName
0x7A9FA3: mov     edx, [edi]
0x7A9FA5: mov     eax, [edx+84h]
0x7A9FAB: push    1
0x7A9FAD: push    ebx
0x7A9FAE: mov     ecx, edi
0x7A9FB0: call    eax
0x7A9FB2: test    esi, esi
0x7A9FB4: jnz     short loc_7A9F3B
0x7A9FB6: mov     ebx, [esp+338h+var_320]
0x7A9FBA: mov     ebp, [esp+338h+var_324]
0x7A9FBE: mov     eax, [esp+338h+var_31C]
0x7A9FC2: add     eax, 1
0x7A9FC5: add     ebp, 14h
0x7A9FC8: cmp     eax, 1A3h
0x7A9FCD: mov     [esp+338h+var_31C], eax
0x7A9FD1: mov     [esp+338h+var_324], ebp
0x7A9FD5: jl      loc_7A9EAA
0x7A9FDB: push    0DCh ; 'Ü'; Size
0x7A9FE0: call    FormHeapAlloc
0x7A9FE5: add     esp, 4
0x7A9FE8: mov     [esp+338h+var_318], eax
0x7A9FEC: test    eax, eax
0x7A9FEE: mov     [esp+338h+var_4], 3
0x7A9FF9: jz      short loc_7AA008
0x7A9FFB: push    0
0x7A9FFD: mov     ecx, eax; this
0x7A9FFF: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x7AA004: mov     ebp, eax
0x7AA006: jmp     short loc_7AA00A
0x7AA008: xor     ebp, ebp
0x7AA00A: push    offset aOccludedGeomet; "Occluded Geometry"
0x7AA00F: mov     ecx, ebp
0x7AA011: mov     [esp+33Ch+var_4], 0FFFFFFFFh
0x7AA01C: call    NiObjectNET_SetName
0x7AA021: mov     edx, [ebx]
0x7AA023: mov     eax, [edx+84h]
0x7AA029: push    0
0x7AA02B: push    ebp
0x7AA02C: mov     ecx, ebx
0x7AA02E: call    eax
0x7AA030: cmp     dword ptr ds:0B42CB8h, 0
0x7AA037: mov     [esp+338h+var_324], 0
0x7AA03F: jbe     loc_7AA0F1
0x7AA045: mov     ecx, [esp+338h+var_314]
0x7AA049: mov     esi, [ecx+21F0h]
0x7AA04F: test    esi, esi
0x7AA051: jz      loc_7AA0DA
0x7AA057: mov     ebx, [esi+8]
0x7AA05A: lea     eax, [esi+8]
0x7AA05D: mov     esi, [esi]
0x7AA05F: push    0DCh ; 'Ü'; Size
0x7AA064: call    FormHeapAlloc
0x7AA069: add     esp, 4
0x7AA06C: mov     [esp+338h+var_318], eax
0x7AA070: test    eax, eax
0x7AA072: mov     [esp+338h+var_4], 4
0x7AA07D: jz      short loc_7AA08C
0x7AA07F: push    0
0x7AA081: mov     ecx, eax; this
0x7AA083: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x7AA088: mov     edi, eax
0x7AA08A: jmp     short loc_7AA08E
0x7AA08C: xor     edi, edi
0x7AA08E: mov     edx, [ebx+8]
0x7AA091: push    edx
0x7AA092: push    ebx
0x7AA093: lea     eax, [esp+340h+var_110]
0x7AA09A: push    offset aXS; "%x : %s"
0x7AA09F: push    eax
0x7AA0A0: mov     [esp+348h+var_4], 0FFFFFFFFh
0x7AA0AB: call    __sprintf
0x7AA0B0: add     esp, 10h
0x7AA0B3: lea     ecx, [esp+338h+var_110]
0x7AA0BA: push    ecx; Src
0x7AA0BB: mov     ecx, edi
0x7AA0BD: call    NiObjectNET_SetName
0x7AA0C2: mov     edx, [ebp+0]
0x7AA0C5: mov     eax, [edx+84h]
0x7AA0CB: push    1
0x7AA0CD: push    edi
0x7AA0CE: mov     ecx, ebp
0x7AA0D0: call    eax
0x7AA0D2: test    esi, esi
0x7AA0D4: jnz     short loc_7AA057
0x7AA0D6: mov     ebx, [esp+338h+var_320]
0x7AA0DA: mov     eax, [esp+338h+var_324]
0x7AA0DE: add     eax, 1
0x7AA0E1: cmp     eax, ds:0B42CB8h
0x7AA0E7: mov     [esp+338h+var_324], eax
0x7AA0EB: jb      loc_7AA045
0x7AA0F1: fldz
0x7AA0F3: push    1; a3
0x7AA0F5: push    ecx
0x7AA0F6: fstp    [esp+340h+a2]; a2
0x7AA0F9: mov     ecx, ebx; this
0x7AA0FB: call    NiAVObject_UpdateNiAVObject
0x7AA100: mov     eax, ebx
0x7AA102: mov     ecx, [esp+338h+var_C]
0x7AA109: mov     large fs:0, ecx
0x7AA110: pop     ecx
0x7AA111: pop     edi
0x7AA112: pop     esi
0x7AA113: pop     ebp
0x7AA114: pop     ebx
0x7AA115: mov     ecx, [esp+324h+var_10]
0x7AA11C: xor     ecx, esp
0x7AA11E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7AA123: add     esp, 324h
0x7AA129: retn
