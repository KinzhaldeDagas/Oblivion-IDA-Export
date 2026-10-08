0x7F1E60: push    0FFFFFFFFh
0x7F1E62: push    offset SEH_8C8970
0x7F1E67: mov     eax, large fs:0
0x7F1E6D: push    eax
0x7F1E6E: push    ecx
0x7F1E6F: push    esi
0x7F1E70: push    edi
0x7F1E71: mov     eax, ds:0B30AACh
0x7F1E76: xor     eax, esp
0x7F1E78: push    eax
0x7F1E79: lea     eax, [esp+1Ch+var_C]
0x7F1E7D: mov     large fs:0, eax
0x7F1E83: mov     esi, ecx
0x7F1E85: push    0B0h ; '°'; Size
0x7F1E8A: call    FormHeapAlloc
0x7F1E8F: mov     edi, eax
0x7F1E91: add     esp, 4
0x7F1E94: mov     [esp+1Ch+var_10], edi
0x7F1E98: test    edi, edi
0x7F1E9A: mov     [esp+1Ch+var_4], 0
0x7F1EA2: jz      short loc_7F1ED3
0x7F1EA4: mov     eax, [esi]
0x7F1EA6: mov     edx, [eax+9Ch]
0x7F1EAC: mov     ecx, esi
0x7F1EAE: call    edx
0x7F1EB0: push    eax; stlspData
0x7F1EB1: mov     eax, [esi]
0x7F1EB3: mov     edx, [eax+68h]
0x7F1EB6: mov     ecx, esi
0x7F1EB8: call    edx
0x7F1EBA: push    eax; stspData
0x7F1EBB: mov     eax, [esi]
0x7F1EBD: mov     edx, [eax+98h]
0x7F1EC3: mov     ecx, esi
0x7F1EC5: call    edx
0x7F1EC7: mov     ecx, edi; this
0x7F1EC9: push    eax; leafLodIndex
0x7F1ECA: call    ??0SpeedTreeLeafShaderProperty@@QAE@XZ; SpeedTreeLeafShaderProperty ctor: LightingProperty base with STSPData, then stores STLSPData ref at +0xA8 and leaf LOD index word at +0xAC.
0x7F1ECF: mov     edi, eax
0x7F1ED1: jmp     short loc_7F1ED5
0x7F1ED3: xor     edi, edi
0x7F1ED5: mov     eax, [esp+1Ch+copyFlags]
0x7F1ED9: push    eax; cloningProcess
0x7F1EDA: push    edi; destination
0x7F1EDB: mov     ecx, esi; this
0x7F1EDD: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F1EE5: call    OB_SpeedTreeLeafShaderProperty_CopyMembers_010201A0; SpeedTreeLeafShaderProperty copy/apply helper: copies shared STLSPData + leaf LOD index into destination property and calls base property copy.
0x7F1EEA: mov     eax, edi
0x7F1EEC: mov     ecx, [esp+1Ch+var_C]
0x7F1EF0: mov     large fs:0, ecx
0x7F1EF7: pop     ecx
0x7F1EF8: pop     edi
0x7F1EF9: pop     esi
0x7F1EFA: add     esp, 10h
0x7F1EFD: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
