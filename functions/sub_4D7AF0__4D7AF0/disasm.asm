0x4D7AF0: sub     esp, 6Ch
0x4D7AF3: push    ebx
0x4D7AF4: mov     ebx, [esp+70h+arg_0]
0x4D7AF8: push    ebp
0x4D7AF9: push    esi
0x4D7AFA: mov     ebp, ecx
0x4D7AFC: push    edi
0x4D7AFD: mov     ecx, 9
0x4D7B02: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x4D7B07: mov     edi, ebx
0x4D7B09: rep movsd
0x4D7B0B: mov     eax, [ebp+0]
0x4D7B0E: mov     edx, [eax+190h]
0x4D7B14: mov     ecx, ebp
0x4D7B16: call    edx
0x4D7B18: test    al, al
0x4D7B1A: jnz     short loc_4D7B74
0x4D7B1C: fld     dword ptr [ebp+20h]
0x4D7B1F: push    ecx
0x4D7B20: lea     ecx, [esp+80h+var_6C]
0x4D7B24: fstp    [esp+80h+var_80]; float
0x4D7B27: call    NiMatrix33_InitRotationTransposedTransform???
0x4D7B2C: lea     eax, [esp+7Ch+var_6C]
0x4D7B30: push    eax
0x4D7B31: lea     ecx, [esp+80h+var_48]
0x4D7B35: push    ecx
0x4D7B36: mov     ecx, ebx
0x4D7B38: call    NiMAtrix33_Multiply
0x4D7B3D: mov     esi, eax
0x4D7B3F: mov     ecx, 9
0x4D7B44: mov     edi, ebx
0x4D7B46: rep movsd
0x4D7B48: fld     dword ptr [ebp+24h]
0x4D7B4B: push    ecx
0x4D7B4C: lea     ecx, [esp+80h+var_6C]
0x4D7B50: fstp    [esp+80h+var_80]; float
0x4D7B53: call    sub_70FD80
0x4D7B58: lea     edx, [esp+7Ch+var_6C]
0x4D7B5C: push    edx
0x4D7B5D: lea     eax, [esp+80h+var_48]
0x4D7B61: push    eax
0x4D7B62: mov     ecx, ebx
0x4D7B64: call    NiMAtrix33_Multiply
0x4D7B69: mov     ecx, 9
0x4D7B6E: mov     esi, eax
0x4D7B70: mov     edi, ebx
0x4D7B72: rep movsd
0x4D7B74: fld     dword ptr [ebp+28h]
0x4D7B77: push    ecx
0x4D7B78: lea     ecx, [esp+80h+var_6C]
0x4D7B7C: fstp    [esp+80h+var_80]; float
0x4D7B7F: call    NiMatrix33_InitRotationTransform
0x4D7B84: lea     ecx, [esp+7Ch+var_6C]
0x4D7B88: push    ecx
0x4D7B89: lea     edx, [esp+80h+var_48]
0x4D7B8D: push    edx
0x4D7B8E: mov     ecx, ebx
0x4D7B90: call    NiMAtrix33_Multiply
0x4D7B95: mov     esi, eax
0x4D7B97: mov     ecx, 9
0x4D7B9C: mov     edi, ebx
0x4D7B9E: rep movsd
0x4D7BA0: mov     eax, [ebp+1Ch]
0x4D7BA3: cmp     byte ptr [eax+4], 23h ; '#'
0x4D7BA7: jnz     loc_4D7C39
0x4D7BAD: test    eax, eax
0x4D7BAF: jz      loc_4D7C39
0x4D7BB5: mov     ebp, [eax+0E8h]
0x4D7BBB: test    ebp, ebp
0x4D7BBD: jz      short loc_4D7C39
0x4D7BBF: mov     ecx, 9
0x4D7BC4: mov     esi, offset unk_B3FADC
0x4D7BC9: lea     edi, [esp+7Ch+var_48]
0x4D7BCD: rep movsd
0x4D7BCF: mov     ecx, eax
0x4D7BD1: call    TESActorBase_IsFemale
0x4D7BD6: cmp     eax, 1
0x4D7BD9: fldz
0x4D7BDB: ja      short loc_4D7BEA
0x4D7BDD: fld     dword ptr [ebp+eax*4+68h]
0x4D7BE1: fstp    [esp+7Ch+arg_0]
0x4D7BE8: jmp     short loc_4D7BF1
0x4D7BEA: fst     [esp+7Ch+arg_0]
0x4D7BF1: cmp     eax, 1
0x4D7BF4: fld     [esp+7Ch+arg_0]
0x4D7BFB: fst     [esp+7Ch+var_48]
0x4D7BFF: fstp    [esp+7Ch+var_38]
0x4D7C03: ja      short loc_4D7C0B
0x4D7C05: fstp    st
0x4D7C07: fld     dword ptr [ebp+eax*4+60h]
0x4D7C0B: lea     eax, [esp+7Ch+var_48]
0x4D7C0F: fstp    [esp+7Ch+arg_0]
0x4D7C16: fld     [esp+7Ch+arg_0]
0x4D7C1D: push    eax
0x4D7C1E: lea     ecx, [esp+80h+var_24]
0x4D7C22: fstp    [esp+80h+var_28]
0x4D7C26: push    ecx
0x4D7C27: mov     ecx, ebx
0x4D7C29: call    NiMAtrix33_Multiply
0x4D7C2E: mov     ecx, 9
0x4D7C33: mov     esi, eax
0x4D7C35: mov     edi, ebx
0x4D7C37: rep movsd
0x4D7C39: pop     edi
0x4D7C3A: pop     esi
0x4D7C3B: pop     ebp
0x4D7C3C: mov     eax, ebx
0x4D7C3E: pop     ebx
0x4D7C3F: add     esp, 6Ch
0x4D7C42: retn    4
