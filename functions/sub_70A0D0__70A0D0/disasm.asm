0x70A0D0: push    ebx
0x70A0D1: mov     ebx, [esp+4+arg_4]
0x70A0D5: test    bl, bl
0x70A0D7: push    ebp
0x70A0D8: push    esi
0x70A0D9: mov     esi, ecx
0x70A0DB: jz      short loc_70A0EC
0x70A0DD: fld     [esp+0Ch+arg_0]
0x70A0E1: push    1; char
0x70A0E3: push    ecx
0x70A0E4: fstp    [esp+14h+var_14]; float
0x70A0E7: call    sub_47C930
0x70A0EC: mov     eax, [esi]
0x70A0EE: mov     edx, [eax+74h]
0x70A0F1: mov     ecx, esi
0x70A0F3: call    edx
0x70A0F5: fldz
0x70A0F7: xor     ebp, ebp
0x70A0F9: fstp    dword ptr [esi+2Ch]
0x70A0FC: cmp     [esi+0B6h], bp
0x70A103: jbe     short loc_70A181
0x70A105: push    edi
0x70A106: jmp     short loc_70A110
0x70A108: align 10h
0x70A110: mov     eax, [esi+0B0h]
0x70A116: mov     edi, [eax+ebp*4]
0x70A119: test    edi, edi
0x70A11B: jz      short loc_70A172
0x70A11D: mov     edx, [edi]
0x70A11F: fld     [esp+10h+arg_0]
0x70A123: mov     eax, [edx+60h]
0x70A126: push    ebx
0x70A127: push    ecx
0x70A128: mov     ecx, edi
0x70A12A: fstp    [esp+18h+var_18]
0x70A12D: call    eax
0x70A12F: fldz
0x70A131: fcom    dword ptr [edi+2Ch]
0x70A134: fnstsw  ax
0x70A136: test    ah, 44h
0x70A139: jnp     short loc_70A170
0x70A13B: fcomp   dword ptr [esi+2Ch]
0x70A13E: fnstsw  ax
0x70A140: test    ah, 44h
0x70A143: jp      short loc_70A162
0x70A145: mov     ecx, [edi+20h]
0x70A148: lea     eax, [edi+20h]
0x70A14B: mov     [esi+20h], ecx
0x70A14E: mov     edx, [eax+4]
0x70A151: mov     [esi+24h], edx
0x70A154: mov     ecx, [eax+8]
0x70A157: mov     [esi+28h], ecx
0x70A15A: mov     edx, [eax+0Ch]
0x70A15D: mov     [esi+2Ch], edx
0x70A160: jmp     short loc_70A172
0x70A162: add     edi, 20h ; ' '
0x70A165: push    edi
0x70A166: lea     ecx, [esi+20h]
0x70A169: call    sub_72A6B0
0x70A16E: jmp     short loc_70A172
0x70A170: fstp    st
0x70A172: movzx   eax, word ptr [esi+0B6h]
0x70A179: add     ebp, 1
0x70A17C: cmp     ebp, eax
0x70A17E: jb      short loc_70A110
0x70A180: pop     edi
0x70A181: pop     esi
0x70A182: pop     ebp
0x70A183: pop     ebx
0x70A184: retn    8
