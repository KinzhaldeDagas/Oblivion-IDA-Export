0x7C78D0: push    0FFFFFFFFh
0x7C78D2: push    offset SEH_7C78D0
0x7C78D7: mov     eax, large fs:0
0x7C78DD: push    eax
0x7C78DE: sub     esp, 2Ch
0x7C78E1: push    ebx
0x7C78E2: push    ebp
0x7C78E3: push    esi
0x7C78E4: push    edi
0x7C78E5: mov     eax, ds:0B30AACh
0x7C78EA: xor     eax, esp
0x7C78EC: push    eax
0x7C78ED: lea     eax, [esp+4Ch+var_C]
0x7C78F1: mov     large fs:0, eax
0x7C78F7: mov     ebp, ecx
0x7C78F9: mov     [esp+4Ch+var_38], ebp
0x7C78FD: cmp     byte ptr [ebp+12Ch], 0
0x7C7904: mov     eax, [esp+4Ch+a2]
0x7C7908: mov     edi, [eax+0Ch]
0x7C790B: jnz     loc_7C79C8
0x7C7911: mov     ecx, [ebp+0E8h]
0x7C7917: test    ecx, ecx
0x7C7919: jz      loc_7C79C0
0x7C791F: jmp     short loc_7C7925
0x7C7921: mov     ecx, [esp+4Ch+var_34]
0x7C7925: mov     esi, [ecx+8]
0x7C7928: test    esi, esi
0x7C792A: lea     eax, [ecx+8]
0x7C792D: mov     ecx, [ecx]
0x7C792F: mov     [esp+4Ch+var_34], ecx
0x7C7933: jz      loc_7C79B5
0x7C7939: lea     edx, [esp+4Ch+var_30]
0x7C793D: push    edx
0x7C793E: mov     ecx, esi
0x7C7940: call    sub_405AD0
0x7C7945: mov     ebx, [eax]
0x7C7947: mov     eax, [esp+4Ch+var_30]
0x7C794B: test    eax, eax
0x7C794D: jz      short loc_7C7972
0x7C794F: mov     ebp, eax
0x7C7951: add     eax, 4
0x7C7954: push    eax; lpAddend
0x7C7955: call    dword ptr ds:0A2807Ch
0x7C795B: test    eax, eax
0x7C795D: jnz     short loc_7C796E
0x7C795F: test    ebp, ebp
0x7C7961: jz      short loc_7C796E
0x7C7963: mov     eax, [ebp+0]
0x7C7966: mov     edx, [eax]
0x7C7968: push    1
0x7C796A: mov     ecx, ebp
0x7C796C: call    edx
0x7C796E: mov     ebp, [esp+4Ch+var_38]
0x7C7972: test    ebx, ebx
0x7C7974: jz      short loc_7C79AD
0x7C7976: cmp     dword ptr [ebx+4], 1
0x7C797A: jz      short loc_7C79AD
0x7C797C: cmp     byte ptr [esi+104h], 0
0x7C7983: jz      short loc_7C798D
0x7C7985: push    esi
0x7C7986: mov     ecx, ebp
0x7C7988: call    sub_7C6020
0x7C798D: cmp     byte ptr [esi+0F4h], 0
0x7C7994: jz      short loc_7C799F
0x7C7996: call    sub_405A80
0x7C799B: test    al, al
0x7C799D: jnz     short loc_7C79B5
0x7C799F: mov     eax, [esp+4Ch+a2]
0x7C79A3: push    eax
0x7C79A4: mov     ecx, esi
0x7C79A6: call    ShadowSceneLight_CullProcess
0x7C79AB: jmp     short loc_7C79B5
0x7C79AD: push    esi
0x7C79AE: mov     ecx, ebp
0x7C79B0: call    sub_7C77C0
0x7C79B5: cmp     [esp+4Ch+var_34], 0
0x7C79BA: jnz     loc_7C7921
0x7C79C0: push    edi
0x7C79C1: mov     ecx, ebp
0x7C79C3: call    sub_7C71B0
0x7C79C8: mov     eax, ds:0B43124h
0x7C79CD: cmp     eax, edi
0x7C79CF: mov     cl, [ebp+11Ch]
0x7C79D5: mov     ds:0B42F30h, cl
0x7C79DB: jz      short loc_7C7A13
0x7C79DD: test    eax, eax
0x7C79DF: jz      short loc_7C79FF
0x7C79E1: mov     esi, eax
0x7C79E3: add     eax, 4
0x7C79E6: push    eax; lpAddend
0x7C79E7: call    dword ptr ds:0A2807Ch
0x7C79ED: test    eax, eax
0x7C79EF: jnz     short loc_7C79FF
0x7C79F1: test    esi, esi
0x7C79F3: jz      short loc_7C79FF
0x7C79F5: mov     edx, [esi]
0x7C79F7: mov     eax, [edx]
0x7C79F9: push    1
0x7C79FB: mov     ecx, esi
0x7C79FD: call    eax
0x7C79FF: test    edi, edi
0x7C7A01: mov     ds:0B43124h, edi
0x7C7A07: jz      short loc_7C7A13
0x7C7A09: lea     ecx, [edi+4]
0x7C7A0C: push    ecx; lpAddend
0x7C7A0D: call    dword ptr ds:0A28078h
0x7C7A13: cmp     dword ptr ds:0B42F48h, 0
0x7C7A1A: jnz     short loc_7C7A8A
0x7C7A1C: push    38h ; '8'; Size
0x7C7A1E: call    FormHeapAlloc
0x7C7A23: add     esp, 4
0x7C7A26: mov     [esp+4Ch+var_2C], eax
0x7C7A2A: test    eax, eax
0x7C7A2C: mov     [esp+4Ch+var_4], 0
0x7C7A34: jz      short loc_7C7A41
0x7C7A36: mov     ecx, eax
0x7C7A38: call    NiAlphaAccumulator_Constructor
0x7C7A3D: mov     esi, eax
0x7C7A3F: jmp     short loc_7C7A43
0x7C7A41: xor     esi, esi
0x7C7A43: mov     ecx, ds:0B3F928h; this
0x7C7A49: mov     ebx, [ecx+8]
0x7C7A4C: push    esi; a2
0x7C7A4D: mov     [esp+50h+var_4], 0FFFFFFFFh
0x7C7A55: call    NiDX9Renderer__SetShaderAccumulator
0x7C7A5A: mov     edx, [esi]
0x7C7A5C: mov     eax, [edx+4Ch]
0x7C7A5F: push    edi
0x7C7A60: mov     ecx, esi
0x7C7A62: call    eax
0x7C7A64: mov     ecx, [esp+4Ch+a2]
0x7C7A68: push    ecx; a2
0x7C7A69: mov     ecx, ebp; this
0x7C7A6B: call    NiNode__OnVisible
0x7C7A70: mov     edx, [esi]
0x7C7A72: mov     eax, [edx+50h]
0x7C7A75: mov     ecx, esi
0x7C7A77: call    eax
0x7C7A79: mov     ecx, ds:0B3F928h; this
0x7C7A7F: push    ebx; a2
0x7C7A80: call    NiDX9Renderer__SetShaderAccumulator
0x7C7A85: jmp     loc_7C7DA1
0x7C7A8A: cmp     byte ptr ds:0B42E86h, 1
0x7C7A91: jnz     short loc_7C7AB4
0x7C7A93: cmp     dword ptr ds:0B2D18Ch, 0FFFFFFFFh
0x7C7A9A: jnz     short loc_7C7AA8
0x7C7A9C: mov     ecx, ds:0B42F40h
0x7C7AA2: mov     ds:0B2D18Ch, ecx
0x7C7AA8: mov     dword ptr ds:0B42F40h, 4
0x7C7AB2: jmp     short loc_7C7ACD
0x7C7AB4: mov     eax, ds:0B2D18Ch
0x7C7AB9: cmp     eax, 0FFFFFFFFh
0x7C7ABC: jz      short loc_7C7ACD
0x7C7ABE: mov     ds:0B42F40h, eax
0x7C7AC3: mov     dword ptr ds:0B2D18Ch, 0FFFFFFFFh
0x7C7ACD: mov     edx, [edi+88h]
0x7C7AD3: mov     eax, [edi+8Ch]
0x7C7AD9: mov     ecx, [edi+90h]
0x7C7ADF: mov     [esp+4Ch+var_28], edx
0x7C7AE3: fld     [esp+4Ch+var_28]
0x7C7AE7: fstp    [esp+4Ch+var_1C]
0x7C7AEB: mov     edx, [esp+4Ch+var_1C]
0x7C7AEF: mov     [esp+4Ch+var_24], eax
0x7C7AF3: fld     [esp+4Ch+var_24]
0x7C7AF7: fstp    [esp+4Ch+var_18]
0x7C7AFB: mov     [esp+4Ch+var_20], ecx
0x7C7AFF: fld     [esp+4Ch+var_20]
0x7C7B03: mov     ecx, [esp+4Ch+var_18]
0x7C7B07: fstp    [esp+4Ch+var_14]
0x7C7B0B: sub     esp, 10h
0x7C7B0E: fldz
0x7C7B10: mov     eax, esp
0x7C7B12: mov     [eax], edx
0x7C7B14: fstp    [esp+5Ch+var_10]
0x7C7B18: mov     edx, [esp+5Ch+var_14]
0x7C7B1C: mov     [eax+4], ecx
0x7C7B1F: mov     ecx, [esp+5Ch+var_10]
0x7C7B23: mov     [eax+8], edx
0x7C7B26: push    1Ch
0x7C7B28: mov     [eax+0Ch], ecx
0x7C7B2B: call    sub_7ECAE0
0x7C7B30: fld     dword ptr [edi+64h]
0x7C7B33: fstp    [esp+60h+var_28]
0x7C7B37: add     esp, 4
0x7C7B3A: fld     dword ptr [edi+70h]
0x7C7B3D: mov     eax, esp
0x7C7B3F: fstp    [esp+5Ch+var_24]
0x7C7B43: push    1Dh
0x7C7B45: fld     dword ptr [edi+7Ch]
0x7C7B48: fstp    [esp+60h+var_20]
0x7C7B4C: fld     [esp+60h+var_28]
0x7C7B50: fstp    [esp+60h+var_1C]
0x7C7B54: mov     edx, [esp+60h+var_1C]
0x7C7B58: fld     [esp+60h+var_24]
0x7C7B5C: mov     [eax], edx
0x7C7B5E: fstp    [esp+60h+var_18]
0x7C7B62: mov     ecx, [esp+60h+var_18]
0x7C7B66: fld     [esp+60h+var_20]
0x7C7B6A: mov     [eax+4], ecx
0x7C7B6D: fstp    [esp+60h+var_14]
0x7C7B71: mov     edx, [esp+60h+var_14]
0x7C7B75: fldz
0x7C7B77: mov     [eax+8], edx
0x7C7B7A: fstp    [esp+60h+var_10]
0x7C7B7E: mov     ecx, [esp+60h+var_10]
0x7C7B82: mov     [eax+0Ch], ecx
0x7C7B85: call    sub_7ECAE0
0x7C7B8A: fld     dword ptr [edi+6Ch]
0x7C7B8D: fstp    [esp+60h+var_28]
0x7C7B91: add     esp, 4
0x7C7B94: fld     dword ptr [edi+78h]
0x7C7B97: mov     eax, esp
0x7C7B99: fstp    [esp+5Ch+var_24]
0x7C7B9D: push    1Eh
0x7C7B9F: fld     dword ptr [edi+84h]
0x7C7BA5: fstp    [esp+60h+var_20]
0x7C7BA9: fld     [esp+60h+var_28]
0x7C7BAD: fstp    [esp+60h+var_1C]
0x7C7BB1: mov     edx, [esp+60h+var_1C]
0x7C7BB5: fld     [esp+60h+var_24]
0x7C7BB9: mov     [eax], edx
0x7C7BBB: fstp    [esp+60h+var_18]
0x7C7BBF: mov     ecx, [esp+60h+var_18]
0x7C7BC3: fld     [esp+60h+var_20]
0x7C7BC7: mov     [eax+4], ecx
0x7C7BCA: fstp    [esp+60h+var_14]
0x7C7BCE: mov     edx, [esp+60h+var_14]
0x7C7BD2: fldz
0x7C7BD4: mov     [eax+8], edx
0x7C7BD7: fstp    [esp+60h+var_10]
0x7C7BDB: mov     ecx, [esp+60h+var_10]
0x7C7BDF: mov     [eax+0Ch], ecx
0x7C7BE2: call    sub_7ECAE0
0x7C7BE7: add     esp, 14h
0x7C7BEA: push    1
0x7C7BEC: mov     ecx, ebp
0x7C7BEE: call    NiNode_GetNiPropertyByID
0x7C7BF3: test    eax, eax
0x7C7BF5: jz      loc_7C7CAB
0x7C7BFB: fld     dword ptr [eax+2Ch]
0x7C7BFE: mov     edx, [eax+20h]
0x7C7C01: mov     ecx, [eax+24h]
0x7C7C04: fstp    [esp+4Ch+var_2C]
0x7C7C08: fld     dword ptr [eax+30h]
0x7C7C0B: mov     [esp+4Ch+var_28], edx
0x7C7C0F: mov     edx, [eax+28h]
0x7C7C12: fstp    [esp+4Ch+var_34]
0x7C7C16: fld     [esp+4Ch+var_34]
0x7C7C1A: mov     [esp+4Ch+var_24], ecx
0x7C7C1E: fld     st
0x7C7C20: mov     [esp+4Ch+var_20], edx
0x7C7C24: fsub    [esp+4Ch+var_2C]
0x7C7C28: fstp    [esp+4Ch+var_2C]
0x7C7C2C: fstp    [esp+4Ch+var_1C]
0x7C7C30: mov     eax, [esp+4Ch+var_1C]
0x7C7C34: fld     [esp+4Ch+var_2C]
0x7C7C38: mov     ds:0B46638h, eax
0x7C7C3D: fstp    [esp+4Ch+var_18]
0x7C7C41: mov     ecx, [esp+4Ch+var_18]
0x7C7C45: fldz
0x7C7C47: mov     ds:0B4663Ch, ecx
0x7C7C4D: fst     [esp+4Ch+var_14]
0x7C7C51: mov     edx, [esp+4Ch+var_14]
0x7C7C55: fst     [esp+4Ch+var_10]
0x7C7C59: fld     [esp+4Ch+var_28]
0x7C7C5D: mov     eax, [esp+4Ch+var_10]
0x7C7C61: fstp    [esp+4Ch+var_1C]
0x7C7C65: mov     ds:0B46640h, edx
0x7C7C6B: fld     [esp+4Ch+var_24]
0x7C7C6F: mov     ecx, [esp+4Ch+var_1C]
0x7C7C73: fstp    [esp+4Ch+var_18]
0x7C7C77: mov     ds:0B46644h, eax
0x7C7C7C: fld     [esp+4Ch+var_20]
0x7C7C80: mov     edx, [esp+4Ch+var_18]
0x7C7C84: fstp    [esp+4Ch+var_14]
0x7C7C88: mov     ds:0B46648h, ecx
0x7C7C8E: mov     eax, [esp+4Ch+var_14]
0x7C7C92: mov     ds:0B4664Ch, edx
0x7C7C98: fstp    [esp+4Ch+var_10]
0x7C7C9C: mov     ecx, [esp+4Ch+var_10]
0x7C7CA0: mov     ds:0B46650h, eax
0x7C7CA5: mov     ds:0B46654h, ecx
0x7C7CAB: fld     dword ptr ds:0B46068h
0x7C7CB1: fld     dword ptr ds:0B46064h
0x7C7CB7: fld     st
0x7C7CB9: fsubp   st(2), st
0x7C7CBB: fld     dword ptr ds:0B2C670h
0x7C7CC1: fmulp   st(2), st
0x7C7CC3: faddp   st(1), st
0x7C7CC5: fstp    dword ptr ds:0B460B8h
0x7C7CCB: call    InitBSShaderAccumulator
0x7C7CD0: mov     esi, eax
0x7C7CD2: test    esi, esi
0x7C7CD4: mov     [esp+4Ch+var_2C], esi
0x7C7CD8: jz      short loc_7C7CE4
0x7C7CDA: lea     edx, [esi+4]
0x7C7CDD: push    edx; lpAddend
0x7C7CDE: call    dword ptr ds:0A28078h
0x7C7CE4: cmp     dword ptr [esi+4], 1
0x7C7CE8: lea     ebx, [esi+4]
0x7C7CEB: mov     [esp+4Ch+var_4], 1
0x7C7CF3: jnz     short loc_7C7CFC
0x7C7CF5: push    ebx; lpAddend
0x7C7CF6: call    dword ptr ds:0A28078h
0x7C7CFC: mov     eax, ds:0B3F928h
0x7C7D01: mov     ebp, [eax+8]
0x7C7D04: test    ebp, ebp
0x7C7D06: mov     [esp+4Ch+var_34], ebp
0x7C7D0A: jz      short loc_7C7D16
0x7C7D0C: lea     ecx, [ebp+4]
0x7C7D0F: push    ecx; lpAddend
0x7C7D10: call    dword ptr ds:0A28078h
0x7C7D16: mov     ecx, ds:0B3F928h; this
0x7C7D1C: push    esi; a2
0x7C7D1D: mov     byte ptr [esp+50h+var_4], 2
0x7C7D22: call    NiDX9Renderer__SetShaderAccumulator
0x7C7D27: mov     edx, [esi]
0x7C7D29: mov     eax, [edx+4Ch]
0x7C7D2C: push    edi
0x7C7D2D: mov     ecx, esi
0x7C7D2F: call    eax
0x7C7D31: mov     ecx, [esp+4Ch+a2]
0x7C7D35: push    ecx; a2
0x7C7D36: mov     ecx, [esp+50h+var_38]; this
0x7C7D3A: mov     byte ptr [esi+21E0h], 1
0x7C7D41: call    NiNode__OnVisible
0x7C7D46: mov     byte ptr [esi+21E1h], 1
0x7C7D4D: mov     edx, [esi]
0x7C7D4F: mov     eax, [edx+50h]
0x7C7D52: mov     ecx, esi
0x7C7D54: call    eax
0x7C7D56: mov     ecx, ds:0B3F928h; this
0x7C7D5C: push    ebp; a2
0x7C7D5D: call    NiDX9Renderer__SetShaderAccumulator
0x7C7D62: test    ebp, ebp
0x7C7D64: mov     byte ptr [esp+4Ch+var_4], 1
0x7C7D69: jz      short loc_7C7D84
0x7C7D6B: lea     ecx, [ebp+4]
0x7C7D6E: push    ecx; lpAddend
0x7C7D6F: call    dword ptr ds:0A2807Ch
0x7C7D75: test    eax, eax
0x7C7D77: jnz     short loc_7C7D84
0x7C7D79: mov     edx, [ebp+0]
0x7C7D7C: mov     eax, [edx]
0x7C7D7E: push    1
0x7C7D80: mov     ecx, ebp
0x7C7D82: call    eax
0x7C7D84: push    ebx; lpAddend
0x7C7D85: mov     [esp+50h+var_4], 0FFFFFFFFh
0x7C7D8D: call    dword ptr ds:0A2807Ch
0x7C7D93: test    eax, eax
0x7C7D95: jnz     short loc_7C7DA1
0x7C7D97: mov     edx, [esi]
0x7C7D99: mov     eax, [edx]
0x7C7D9B: push    1
0x7C7D9D: mov     ecx, esi
0x7C7D9F: call    eax
0x7C7DA1: mov     ecx, [esp+4Ch+var_C]
0x7C7DA5: mov     large fs:0, ecx
0x7C7DAC: pop     ecx
0x7C7DAD: pop     edi
0x7C7DAE: pop     esi
0x7C7DAF: pop     ebp
0x7C7DB0: pop     ebx
0x7C7DB1: add     esp, 38h
0x7C7DB4: retn    4
