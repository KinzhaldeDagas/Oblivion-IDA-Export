0x440E60: push    0FFFFFFFFh
0x440E62: push    offset SEH_787830
0x440E67: mov     eax, large fs:0
0x440E6D: push    eax
0x440E6E: push    ebx
0x440E6F: push    esi
0x440E70: push    edi
0x440E71: mov     eax, ds:0B30AACh
0x440E76: xor     eax, esp
0x440E78: push    eax
0x440E79: lea     eax, [esp+1Ch+var_C]
0x440E7D: mov     large fs:0, eax
0x440E83: mov     edi, ecx
0x440E85: mov     ebx, [esp+1Ch+arg_0]
0x440E89: test    ebx, ebx
0x440E8B: jz      short loc_440EFE
0x440E8D: push    0E0h ; 'à'; Size
0x440E92: call    FormHeapAlloc
0x440E97: mov     esi, eax
0x440E99: add     esp, 4
0x440E9C: mov     [esp+1Ch+arg_0], esi
0x440EA0: test    esi, esi
0x440EA2: mov     [esp+1Ch+var_4], 0
0x440EAA: jz      short loc_440EC7
0x440EAC: push    0
0x440EAE: mov     ecx, esi; this
0x440EB0: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x440EB5: fld     [esp+1Ch+arg_4]
0x440EB9: fstp    dword ptr [esi+0DCh]
0x440EBF: mov     dword ptr [esi], offset ??_7BSTempNode@@6B@; const BSTempNode::`vftable'
0x440EC5: jmp     short loc_440EC9
0x440EC7: xor     esi, esi
0x440EC9: mov     eax, [esi]
0x440ECB: mov     edx, [eax+84h]
0x440ED1: push    1
0x440ED3: push    ebx
0x440ED4: mov     ecx, esi
0x440ED6: mov     [esp+24h+var_4], 0FFFFFFFFh
0x440EDE: call    edx
0x440EE0: mov     ecx, [edi+14h]
0x440EE3: mov     eax, [ecx]
0x440EE5: mov     edx, [eax+84h]
0x440EEB: push    1
0x440EED: push    esi
0x440EEE: call    edx
0x440EF0: mov     ecx, esi
0x440EF2: call    NiNode_UpdateDynamicEffectState
0x440EF7: mov     ecx, esi; this
0x440EF9: call    NiAVObject_InitializePropertyState
0x440EFE: mov     ecx, dword ptr [esp+1Ch+var_C]
0x440F02: mov     large fs:0, ecx
0x440F09: pop     ecx
0x440F0A: pop     edi
0x440F0B: pop     esi
0x440F0C: pop     ebx
0x440F0D: add     esp, 0Ch
0x440F10: retn    8
