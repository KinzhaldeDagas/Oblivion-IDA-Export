0x49D7B0: sub     esp, 8
0x49D7B3: cmp     byte ptr ds:0B07050h, 0
0x49D7BA: push    esi
0x49D7BB: mov     esi, ecx
0x49D7BD: jz      loc_49DCF0
0x49D7C3: cmp     byte ptr ds:0B42F3Eh, 0
0x49D7CA: jz      loc_49DCF0
0x49D7D0: push    ebx
0x49D7D1: push    ebp
0x49D7D2: push    edi
0x49D7D3: call    Sky_CreateOrGetGlobalObject
0x49D7D8: mov     edi, [eax+10h]
0x49D7DB: call    Sky_CreateOrGetGlobalObject
0x49D7E0: fld     dword ptr [eax+0D8h]
0x49D7E6: fstp    dword ptr [esp+18h+var_8]
0x49D7EA: xor     bl, bl
0x49D7EC: call    Sky_CreateOrGetGlobalObject
0x49D7F1: fldz
0x49D7F3: cmp     dword ptr [eax+38h], 0
0x49D7F7: jz      short loc_49D811
0x49D7F9: fstp    st
0x49D7FB: call    Sky_CreateOrGetGlobalObject
0x49D800: mov     eax, [eax+38h]
0x49D803: fldz
0x49D805: fcom    dword ptr [eax+10h]
0x49D808: fnstsw  ax
0x49D80A: test    ah, 5
0x49D80D: jp      short loc_49D811
0x49D80F: mov     bl, 1
0x49D811: test    edi, edi
0x49D813: jz      loc_49D906
0x49D819: test    byte ptr [edi+53h], 4
0x49D81D: jz      short loc_49D89C
0x49D81F: mov     ecx, ds:0B333A0h
0x49D825: cmp     dword ptr [ecx+34h], 0
0x49D829: jnz     short loc_49D89C
0x49D82B: test    bl, bl
0x49D82D: jz      short loc_49D89C
0x49D82F: fstp    st
0x49D831: sub     esp, 8
0x49D834: fld     dword ptr [esp+20h+var_8]
0x49D838: mov     ecx, edi
0x49D83A: fstp    [esp+20h+var_8]
0x49D83E: fld     dword ptr ds:0A37080h
0x49D844: fstp    [esp+20h+var_1C]; float
0x49D848: fld     dword ptr ds:0A3F478h
0x49D84E: fstp    [esp+20h+var_20]; float
0x49D851: push    6; int
0x49D853: call    sub_499100
0x49D858: fcomp   [esp+18h+var_8]
0x49D85C: fnstsw  ax
0x49D85E: test    ah, 5
0x49D861: jp      loc_49D908
0x49D867: fld     dword ptr [esi+18h]
0x49D86A: fcomp   qword ptr ds:0A3F470h
0x49D870: fnstsw  ax
0x49D872: test    ah, 5
0x49D875: jp      short loc_49D891
0x49D877: push    1
0x49D879: push    1
0x49D87B: call    GetTimer
0x49D880: fmul    qword ptr ds:0A309F0h
0x49D886: add     esp, 8
0x49D889: fadd    dword ptr [esi+18h]
0x49D88C: fstp    dword ptr [esi+18h]
0x49D88F: jmp     short loc_49D908
0x49D891: fld     dword ptr ds:0A34A80h
0x49D897: fstp    dword ptr [esi+18h]
0x49D89A: jmp     short loc_49D908
0x49D89C: fld     dword ptr [esp+18h+var_8]
0x49D8A0: movzx   edx, byte ptr [edi+4Fh]
0x49D8A4: mov     dword ptr [esp+18h+var_8], edx
0x49D8A8: fild    dword ptr [esp+18h+var_8]
0x49D8AC: fmul    qword ptr ds:0A3F398h
0x49D8B2: fmul    qword ptr ds:0A3F468h
0x49D8B8: fsubr   qword ptr ds:0A3F460h
0x49D8BE: fstp    dword ptr [esp+18h+var_8]
0x49D8C2: fld     dword ptr [esp+18h+var_8]
0x49D8C6: fcompp
0x49D8C8: fnstsw  ax
0x49D8CA: test    ah, 5
0x49D8CD: jnp     short loc_49D8D8
0x49D8CF: cmp     dword ptr ds:0B45F48h, 32h ; '2'
0x49D8D6: jge     short loc_49D906
0x49D8D8: fcom    dword ptr [esi+18h]
0x49D8DB: fnstsw  ax
0x49D8DD: test    ah, 5
0x49D8E0: jp      short loc_49D88C
0x49D8E2: fstp    st
0x49D8E4: push    1
0x49D8E6: fld     dword ptr [esi+18h]
0x49D8E9: push    1
0x49D8EB: fstp    [esp+20h+var_8]
0x49D8EF: call    GetTimer
0x49D8F4: fmul    qword ptr ds:0A309F0h
0x49D8FA: add     esp, 8
0x49D8FD: fsubr   [esp+18h+var_8]
0x49D901: fstp    dword ptr [esi+18h]
0x49D904: jmp     short loc_49D908
0x49D906: fstp    st
0x49D908: fld     dword ptr [esi+18h]
0x49D90B: fldz
0x49D90D: fsub    st(1), st
0x49D90F: fld     qword ptr ds:0A3F470h
0x49D915: fsub    st, st(1)
0x49D917: fdivp   st(2), st
0x49D919: fld1
0x49D91B: fsub    st, st(1)
0x49D91D: fmulp   st(2), st
0x49D91F: fadd    st(1), st
0x49D921: fxch    st(1)
0x49D923: fstp    dword ptr ds:0B45F44h
0x49D929: fld     dword ptr ds:0B45F44h
0x49D92F: fcom    st(1)
0x49D931: fnstsw  ax
0x49D933: fld1
0x49D935: test    ah, 5
0x49D938: jnp     short loc_49D94D
0x49D93A: fxch    st(1)
0x49D93C: fst     dword ptr [esp+18h+var_8]
0x49D940: fxch    st(1)
0x49D942: fcom    dword ptr [esp+18h+var_8]
0x49D946: fnstsw  ax
0x49D948: test    ah, 41h
0x49D94B: jnz     short loc_49D95C
0x49D94D: fstp    st
0x49D94F: fcompp
0x49D951: fnstsw  ax
0x49D953: test    ah, 5
0x49D956: jp      short loc_49D966
0x49D958: fldz
0x49D95A: jmp     short loc_49D960
0x49D95C: fstp    st(2)
0x49D95E: fstp    st
0x49D960: fstp    dword ptr ds:0B45F44h
0x49D966: lea     ebp, [esi+8]
0x49D969: xor     ebx, ebx
0x49D96B: cmp     [ebp+0], ebx
0x49D96E: jnz     loc_49DA08
0x49D974: cmp     ds:0B45FE0h, ebx
0x49D97A: jnz     short loc_49D986
0x49D97C: push    13h; a1
0x49D97E: call    GetShaderDefinition
0x49D983: add     esp, 4
0x49D986: cmp     ds:0B42D7Ch, ebx
0x49D98C: jz      short loc_49DA08
0x49D98E: cmp     byte ptr ds:0B07058h, 0
0x49D995: mov     ecx, ds:0B42F50h
0x49D99B: push    ebx
0x49D99C: push    72h ; 'r'
0x49D99E: push    6
0x49D9A0: jz      short loc_49D9CC
0x49D9A2: mov     eax, ds:0B43104h
0x49D9A7: push    100h
0x49D9AC: push    eax
0x49D9AD: call    sub_7C2420
0x49D9B2: push    eax; a2
0x49D9B3: mov     ecx, ebp; this
0x49D9B5: call    NiSmartPointer_Set??
0x49D9BA: mov     ecx, ds:0B43104h
0x49D9C0: push    ebx
0x49D9C1: push    ebx
0x49D9C2: push    6
0x49D9C4: push    100h
0x49D9C9: push    ecx
0x49D9CA: jmp     short loc_49D9F4
0x49D9CC: mov     edx, ds:0B43104h
0x49D9D2: push    80h ; '€'
0x49D9D7: push    edx
0x49D9D8: call    sub_7C2420
0x49D9DD: push    eax; a2
0x49D9DE: mov     ecx, ebp; this
0x49D9E0: call    NiSmartPointer_Set??
0x49D9E5: mov     eax, ds:0B43104h
0x49D9EA: push    ebx
0x49D9EB: push    ebx
0x49D9EC: push    6
0x49D9EE: push    80h ; '€'
0x49D9F3: push    eax
0x49D9F4: mov     ecx, ds:0B42F50h
0x49D9FA: call    sub_7C2420
0x49D9FF: push    eax; a2
0x49DA00: lea     ecx, [esi+10h]; this
0x49DA03: call    NiSmartPointer_Set??
0x49DA08: cmp     dword ptr ds:11808584, 2
0x49DA0F: jl      loc_49DCD2
0x49DA15: fld1
0x49DA17: fld     dword ptr ds:0B45F44h
0x49DA1D: fucom   st(1)
0x49DA1F: fnstsw  ax
0x49DA21: fstp    st(1)
0x49DA23: test    ah, 44h
0x49DA26: jnp     loc_49DB0D
0x49DA2C: fldz
0x49DA2E: mov     byte ptr ds:0B45FD1h, 0
0x49DA35: fcom    st(1)
0x49DA37: fnstsw  ax
0x49DA39: test    ah, 5
0x49DA3C: jnp     short loc_49DA45
0x49DA3E: mov     byte ptr ds:0B45FD1h, 1
0x49DA45: fucompp
0x49DA47: fnstsw  ax
0x49DA49: test    ah, 44h
0x49DA4C: jp      short loc_49DA9C
0x49DA4E: mov     ecx, [esi+10h]; this
0x49DA51: lea     edi, [esi+10h]
0x49DA54: call    BSRenderedTexture__GetInnerTexture
0x49DA59: mov     edx, [eax]
0x49DA5B: mov     ecx, eax
0x49DA5D: mov     eax, [edx+4Ch]
0x49DA60: call    eax
0x49DA62: cmp     eax, ds:0B45FC8h
0x49DA68: jz      short loc_49DA9C
0x49DA6A: mov     ecx, [edi]
0x49DA6C: push    ecx; a2
0x49DA6D: mov     ecx, ds:0B42F50h; this
0x49DA73: call    sub_7C1EE0
0x49DA78: mov     edx, ds:0B45FC8h
0x49DA7E: mov     eax, ds:0B43104h
0x49DA83: mov     ecx, ds:0B42F50h
0x49DA89: push    ebx
0x49DA8A: push    ebx
0x49DA8B: push    6
0x49DA8D: push    edx
0x49DA8E: push    eax
0x49DA8F: call    sub_7C2420
0x49DA94: push    eax; a2
0x49DA95: mov     ecx, edi; this
0x49DA97: call    NiSmartPointer_Set??
0x49DA9C: push    13h; a1
0x49DA9E: call    GetShaderDefinition
0x49DAA3: add     esp, 4
0x49DAA6: cmp     eax, ebx
0x49DAA8: jz      short loc_49DAAD
0x49DAAA: mov     ebx, [eax+4]
0x49DAAD: cmp     byte ptr ds:0B45FD1h, 0
0x49DAB4: jz      short loc_49DACF
0x49DAB6: mov     ecx, [esi+10h]
0x49DAB9: mov     edx, [ebp+0]
0x49DABC: mov     eax, ds:0B43104h
0x49DAC1: push    ecx; a4
0x49DAC2: push    edx; a3
0x49DAC3: push    eax; a2
0x49DAC4: push    ebx; a1
0x49DAC5: call    sub_7B4900
0x49DACA: add     esp, 10h
0x49DACD: jmp     short loc_49DB48
0x49DACF: cmp     dword ptr [esi+0Ch], 0
0x49DAD3: lea     edi, [esi+0Ch]
0x49DAD6: jnz     short loc_49DAF4
0x49DAD8: mov     ecx, ds:0B43104h
0x49DADE: push    8; a3
0x49DAE0: push    ecx; a2
0x49DAE1: mov     ecx, ds:0B42F50h; this
0x49DAE7: call    BSTextureManager_GetDefaultRenderTarget
0x49DAEC: push    eax; a2
0x49DAED: mov     ecx, edi; this
0x49DAEF: call    NiSmartPointer_Set??
0x49DAF4: mov     edx, [edi]
0x49DAF6: mov     eax, [ebp+0]
0x49DAF9: mov     ecx, ds:0B43104h
0x49DAFF: push    edx; a4
0x49DB00: push    eax; a3
0x49DB01: push    ecx; a2
0x49DB02: push    ebx; a1
0x49DB03: call    sub_7B4900
0x49DB08: add     esp, 10h
0x49DB0B: jmp     short loc_49DB48
0x49DB0D: mov     eax, [esi+0Ch]
0x49DB10: fstp    st
0x49DB12: cmp     eax, ebx
0x49DB14: jz      short loc_49DB22
0x49DB16: mov     ecx, ds:0B42F50h; this
0x49DB1C: push    eax; a2
0x49DB1D: call    sub_7C1EE0
0x49DB22: mov     edi, [esi+0Ch]
0x49DB25: cmp     edi, ebx
0x49DB27: jz      short loc_49DB48
0x49DB29: lea     edx, [edi+4]
0x49DB2C: push    edx; lpAddend
0x49DB2D: call    dword ptr ds:0A2807Ch
0x49DB33: test    eax, eax
0x49DB35: jnz     short loc_49DB45
0x49DB37: cmp     edi, ebx
0x49DB39: jz      short loc_49DB45
0x49DB3B: mov     eax, [edi]
0x49DB3D: mov     edx, [eax]
0x49DB3F: push    1
0x49DB41: mov     ecx, edi
0x49DB43: call    edx
0x49DB45: mov     [esi+0Ch], ebx
0x49DB48: push    14h; a1
0x49DB4A: call    GetShaderDefinition
0x49DB4F: add     esp, 4
0x49DB52: test    eax, eax
0x49DB54: jz      short loc_49DB5B
0x49DB56: mov     ebx, [eax+4]
0x49DB59: jmp     short loc_49DB5D
0x49DB5B: xor     ebx, ebx
0x49DB5D: fldz
0x49DB5F: fcomp   dword ptr ds:0B45F44h
0x49DB65: fnstsw  ax
0x49DB67: test    ah, 5
0x49DB6A: jp      loc_49DCD2
0x49DB70: mov     ecx, [esi+10h]; this
0x49DB73: lea     edi, [esi+10h]
0x49DB76: call    BSRenderedTexture__GetInnerTexture
0x49DB7B: mov     edx, [eax]
0x49DB7D: mov     ecx, eax
0x49DB7F: mov     eax, [edx+4Ch]
0x49DB82: call    eax
0x49DB84: test    eax, eax
0x49DB86: mov     dword ptr [esp+18h+var_8], eax
0x49DB8A: fild    dword ptr [esp+18h+var_8]
0x49DB8E: jge     short loc_49DB96
0x49DB90: fadd    dword ptr ds:0A2FC78h
0x49DB96: fcomp   dword ptr ds:0A3F458h
0x49DB9C: fnstsw  ax
0x49DB9E: test    ah, 44h
0x49DBA1: jnp     short loc_49DBD6
0x49DBA3: mov     ecx, [edi]
0x49DBA5: push    ecx; a2
0x49DBA6: mov     ecx, ds:0B42F50h; this
0x49DBAC: call    sub_7C1EE0
0x49DBB1: mov     edx, ds:0B43104h
0x49DBB7: mov     ecx, ds:0B42F50h
0x49DBBD: push    0
0x49DBBF: push    0
0x49DBC1: push    6
0x49DBC3: push    100h
0x49DBC8: push    edx
0x49DBC9: call    sub_7C2420
0x49DBCE: push    eax; a2
0x49DBCF: mov     ecx, edi; this
0x49DBD1: call    NiSmartPointer_Set??
0x49DBD6: push    edi
0x49DBD7: mov     ecx, offset dword_B45FB4
0x49DBDC: call    sub_55E2A0
0x49DBE1: cmp     byte ptr ds:0B3522Bh, 0
0x49DBE8: jnz     short loc_49DC07
0x49DBEA: mov     eax, ds:0B35220h
0x49DBEF: test    eax, eax
0x49DBF1: jz      short loc_49DBFB
0x49DBF3: fld     dword ptr [eax+84h]
0x49DBF9: jmp     short loc_49DC01
0x49DBFB: fld     dword ptr ds:0A379B4h
0x49DC01: fstp    dword ptr ds:0B45F40h
0x49DC07: fldz
0x49DC09: fstp    dword ptr [esp+18h+var_8]
0x49DC0D: call    Sky_CreateOrGetGlobalObject
0x49DC12: cmp     dword ptr [eax+38h], 0
0x49DC16: jz      short loc_49DC27
0x49DC18: call    Sky_CreateOrGetGlobalObject
0x49DC1D: mov     eax, [eax+38h]
0x49DC20: fld     dword ptr [eax+10h]
0x49DC23: fstp    dword ptr [esp+18h+var_8]
0x49DC27: fld     dword ptr [esp+18h+var_8]
0x49DC2B: fldz
0x49DC2D: fsub    st(1), st
0x49DC2F: fld     qword ptr ds:0A2FA98h
0x49DC35: fsub    st, st(1)
0x49DC37: fdivp   st(2), st
0x49DC39: fld     qword ptr ds:0A3F450h
0x49DC3F: fsub    st, st(1)
0x49DC41: fmulp   st(2), st
0x49DC43: fadd    st(1), st
0x49DC45: fxch    st(1)
0x49DC47: fstp    dword ptr [esp+18h+var_8]
0x49DC4B: fld     dword ptr [esp+18h+var_8]
0x49DC4F: fcom    st(1)
0x49DC51: fnstsw  ax
0x49DC53: test    ah, 5
0x49DC56: jp      short loc_49DC5C
0x49DC58: fstp    st
0x49DC5A: jmp     short loc_49DC5E
0x49DC5C: fstp    st(1)
0x49DC5E: call    Double_To_SInt32
0x49DC63: lea     edi, [esi+14h]
0x49DC66: mov     ds:0B45F48h, eax
0x49DC6B: cmp     dword ptr [edi], 0
0x49DC6E: jnz     short loc_49DC7F
0x49DC70: mov     ecx, esi
0x49DC72: call    sub_49CB40
0x49DC77: push    eax; a2
0x49DC78: mov     ecx, edi; this
0x49DC7A: call    NiSmartPointer_Set??
0x49DC7F: mov     ecx, [esi+0Ch]
0x49DC82: mov     edx, [edi]
0x49DC84: mov     eax, ds:0B43104h
0x49DC89: push    ecx; a4
0x49DC8A: push    edx; a3
0x49DC8B: push    eax; a2
0x49DC8C: push    ebx; a1
0x49DC8D: call    sub_7B4900
0x49DC92: add     esp, 10h
0x49DC95: push    offset dword_B45FA8
0x49DC9A: mov     ecx, edi
0x49DC9C: call    sub_55E2A0
0x49DCA1: mov     eax, ds:0B45FB4h
0x49DCA6: test    eax, eax
0x49DCA8: jz      short loc_49DCD2
0x49DCAA: mov     edi, eax
0x49DCAC: add     eax, 4
0x49DCAF: push    eax; lpAddend
0x49DCB0: call    dword ptr ds:0A2807Ch
0x49DCB6: test    eax, eax
0x49DCB8: jnz     short loc_49DCC8
0x49DCBA: test    edi, edi
0x49DCBC: jz      short loc_49DCC8
0x49DCBE: mov     edx, [edi]
0x49DCC0: mov     eax, [edx]
0x49DCC2: push    1
0x49DCC4: mov     ecx, edi
0x49DCC6: call    eax
0x49DCC8: mov     dword ptr ds:0B45FB4h, 0
0x49DCD2: mov     eax, ds:0B45DCCh
0x49DCD7: test    eax, eax
0x49DCD9: pop     edi
0x49DCDA: pop     ebp
0x49DCDB: pop     ebx
0x49DCDC: jz      short loc_49DCF0
0x49DCDE: mov     ecx, [esi+10h]; this
0x49DCE1: mov     esi, eax
0x49DCE3: call    BSRenderedTexture__GetInnerTexture
0x49DCE8: push    eax
0x49DCE9: mov     ecx, esi
0x49DCEB: call    sub_4992C0
0x49DCF0: pop     esi
0x49DCF1: add     esp, 8
0x49DCF4: retn    4
