0x5D7B80: sub     esp, 8
0x5D7B83: push    ebx
0x5D7B84: push    ebp
0x5D7B85: mov     ebp, [esp+14h]
0x5D7B89: cmp     ebp, 3E8h
0x5D7B8F: push    esi; a3
0x5D7B90: push    edi; a3
0x5D7B91: mov     ebx, ecx
0x5D7B93: jl      short loc_5D7BA5
0x5D7B95: cmp     ebp, 0BB8h
0x5D7B9B: jge     short loc_5D7BB1
0x5D7B9D: mov     esi, [ebx+38h]
0x5D7BA0: mov     edi, [ebx+3Ch]
0x5D7BA3: jmp     short loc_5D7BB7
0x5D7BA5: cmp     ebp, 0BB8h
0x5D7BAB: jl      loc_5D7C6B
0x5D7BB1: mov     esi, [ebx+40h]
0x5D7BB4: mov     edi, [ebx+44h]
0x5D7BB7: test    esi, esi
0x5D7BB9: jz      loc_5D7C6B
0x5D7BBF: push    0FB5h
0x5D7BC4: mov     ecx, esi
0x5D7BC6: call    Tile_GetFloat
0x5D7BCB: call    Double_To_SInt32
0x5D7BD0: push    1; arg1
0x5D7BD2: push    0; canCreate
0x5D7BD4: mov     dword ptr [esp+20h+var_8], eax
0x5D7BD8: call    InterfaceManager_GetSingleton
0x5D7BDD: fld     dword ptr [eax+38h]
0x5D7BE0: call    Double_To_SInt32
0x5D7BE5: mov     ecx, eax
0x5D7BE7: mov     eax, 77777777h
0x5D7BEC: imul    ecx
0x5D7BEE: sub     edx, ecx
0x5D7BF0: sar     edx, 6
0x5D7BF3: mov     eax, edx
0x5D7BF5: shr     eax, 1Fh
0x5D7BF8: add     eax, edx
0x5D7BFA: mov     [esp+24h], eax
0x5D7BFE: add     esp, 4
0x5D7C01: mov     ecx, edi; this
0x5D7C03: fild    dword ptr [esp+20h]
0x5D7C07: fstp    [esp+1Ch+a2]; a3
0x5D7C0A: push    0FB7h; a2
0x5D7C0F: call    Tile_SetFloat
0x5D7C14: fldz
0x5D7C16: push    ecx
0x5D7C17: fstp    [esp+1Ch+a2]; a3
0x5D7C1A: push    0FB7h; a2
0x5D7C1F: mov     ecx, edi; this
0x5D7C21: call    Tile_SetFloat
0x5D7C26: fild    dword ptr [esp+18h+var_8]
0x5D7C2A: push    0FB5h
0x5D7C2F: mov     ecx, esi
0x5D7C31: fstp    [esp+1Ch+var_8]
0x5D7C35: call    Tile_GetFloat
0x5D7C3A: fld     [esp+18h+var_8]
0x5D7C3E: fucompp
0x5D7C40: fnstsw  ax
0x5D7C42: test    ah, 44h
0x5D7C45: jnp     short loc_5D7C6B
0x5D7C47: mov     eax, [esp+18h+arg_4]
0x5D7C4B: mov     edx, [ebx]
0x5D7C4D: mov     edx, [edx+14h]
0x5D7C50: push    eax
0x5D7C51: push    ebp
0x5D7C52: mov     ecx, ebx
0x5D7C54: call    edx
0x5D7C56: push    0
0x5D7C58: push    1; arg1
0x5D7C5A: push    0; canCreate
0x5D7C5C: call    InterfaceManager_GetSingleton
0x5D7C61: add     esp, 8
0x5D7C64: mov     ecx, eax
0x5D7C66: call    sub_57D730
0x5D7C6B: pop     edi
0x5D7C6C: pop     esi
0x5D7C6D: pop     ebp
0x5D7C6E: pop     ebx
0x5D7C6F: add     esp, 8
0x5D7C72: retn    8
