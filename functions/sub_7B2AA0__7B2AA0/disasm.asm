0x7B2AA0: push    0FFFFFFFFh
0x7B2AA2: push    offset SEH_7B2AA0
0x7B2AA7: mov     eax, large fs:0
0x7B2AAD: push    eax
0x7B2AAE: sub     esp, 5F4h
0x7B2AB4: mov     eax, ds:0B30AACh
0x7B2AB9: xor     eax, esp
0x7B2ABB: mov     [esp+600h+var_10], eax
0x7B2AC2: push    ebx
0x7B2AC3: push    ebp
0x7B2AC4: push    esi
0x7B2AC5: push    edi
0x7B2AC6: mov     eax, ds:0B30AACh
0x7B2ACB: xor     eax, esp
0x7B2ACD: push    eax
0x7B2ACE: lea     eax, [esp+614h+var_C]
0x7B2AD5: mov     large fs:0, eax
0x7B2ADB: mov     esi, [esp+614h+arg_0]
0x7B2AE2: xor     ebp, ebp
0x7B2AE4: cmp     ds:0B42F48h, ebp
0x7B2AEA: mov     [esp+614h+var_588], esi
0x7B2AF1: jz      short loc_7B2B43
0x7B2AF3: xor     edi, edi
0x7B2AF5: lea     ecx, [esp+614h+var_568]; this
0x7B2AFC: mov     [esp+614h+var_5C4], edi
0x7B2B00: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x7B2B05: mov     [esp+614h+var_568], offset ??_7BSStream@@6B@; const BSStream::`vftable'
0x7B2B10: mov     [esp+614h+var_DC], ebp
0x7B2B17: mov     [esp+614h+var_E0], ebp
0x7B2B1E: mov     eax, [esi+8]
0x7B2B21: cmp     eax, ebp
0x7B2B23: mov     [esp+614h+var_4], ebp
0x7B2B2A: jnz     short loc_7B2B4A
0x7B2B2C: lea     ecx, [esp+614h+var_568]; this
0x7B2B33: mov     [esp+614h+var_4], 0FFFFFFFFh
0x7B2B3E: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x7B2B43: xor     eax, eax
0x7B2B45: jmp     loc_7B3817
0x7B2B4A: mov     [esp+614h+var_5B0], ebp
0x7B2B4E: lea     ecx, [esp+614h+var_5B0]
0x7B2B52: push    ecx
0x7B2B53: push    eax
0x7B2B54: mov     ecx, offset off_B2C34C
0x7B2B59: mov     byte ptr [esp+61Ch+var_4], 1
0x7B2B61: call    sub_4A1AB0
0x7B2B66: test    al, al
0x7B2B68: jnz     loc_7B379B
0x7B2B6E: cmp     [esi+4], ebp
0x7B2B71: jnz     short loc_7B2BA2
0x7B2B73: mov     eax, [esi]
0x7B2B75: cmp     eax, ebp
0x7B2B77: jz      short loc_7B2BA2
0x7B2B79: push    ebp; int
0x7B2B7A: push    eax; Src
0x7B2B7B: lea     ecx, [esp+61Ch+var_568]
0x7B2B82: call    sub_6F9980
0x7B2B87: test    al, al
0x7B2B89: jz      short loc_7B2BA2
0x7B2B8B: mov     edx, [esp+614h+var_360]
0x7B2B92: mov     ecx, [edx]
0x7B2B94: cmp     ecx, ebp
0x7B2B96: jz      short loc_7B2BA2
0x7B2B98: mov     eax, [ecx]
0x7B2B9A: mov     edx, [eax+8]
0x7B2B9D: call    edx
0x7B2B9F: mov     [esi+4], eax
0x7B2BA2: mov     ebx, [esi+4]
0x7B2BA5: cmp     ebx, ebp
0x7B2BA7: jz      loc_7B379B
0x7B2BAD: lea     ecx, [ecx+0]
0x7B2BB0: cmp     ebx, ebp
0x7B2BB2: jz      short loc_7B2BF5
0x7B2BB4: movzx   eax, word ptr [ebx+0B6h]
0x7B2BBB: xor     esi, esi
0x7B2BBD: cmp     eax, ebp
0x7B2BBF: jbe     short loc_7B2BF1
0x7B2BC1: cmp     eax, esi
0x7B2BC3: jbe     short loc_7B2BE3
0x7B2BC5: mov     eax, [ebx+0B0h]
0x7B2BCB: mov     ecx, [eax+esi*4]
0x7B2BCE: cmp     ecx, ebp
0x7B2BD0: jz      short loc_7B2BE3
0x7B2BD2: mov     edx, [ecx]
0x7B2BD4: mov     eax, [edx+0Ch]
0x7B2BD7: call    eax
0x7B2BD9: mov     edi, eax
0x7B2BDB: cmp     edi, ebp
0x7B2BDD: mov     [esp+614h+var_5C4], edi
0x7B2BE1: jnz     short loc_7B2BF5
0x7B2BE3: movzx   eax, word ptr [ebx+0B6h]
0x7B2BEA: add     esi, 1
0x7B2BED: cmp     eax, esi
0x7B2BEF: ja      short loc_7B2BC5
0x7B2BF1: cmp     edi, ebp
0x7B2BF3: jz      short loc_7B2BB0
0x7B2BF5: push    edi
0x7B2BF6: push    offset dword_B3FD04
0x7B2BFB: call    NiRTTI_Cast
0x7B2C00: xor     ebx, ebx
0x7B2C02: add     esp, 8
0x7B2C05: cmp     dword ptr ds:0B42F48h, 2
0x7B2C0C: setl    bl
0x7B2C0F: sub     ebx, 1
0x7B2C12: and     ebx, 94h
0x7B2C18: add     ebx, 50h ; 'P'
0x7B2C1B: cmp     eax, ebp
0x7B2C1D: mov     [esp+614h+var_5E4], ebx
0x7B2C21: jnz     loc_7B2FE5
0x7B2C27: push    edi
0x7B2C28: push    offset dword_B3FCD4
0x7B2C2D: mov     [esp+61Ch+var_5ED], 0
0x7B2C32: call    NiRTTI_Cast
0x7B2C37: mov     edi, [edi+0B4h]
0x7B2C3D: push    edi
0x7B2C3E: push    offset dword_B3FD2C
0x7B2C43: call    NiRTTI_Cast
0x7B2C48: mov     edx, [eax+1Ch]
0x7B2C4B: movzx   ecx, word ptr [eax+8]
0x7B2C4F: mov     edi, [eax+44h]
0x7B2C52: mov     [esp+624h+var_5B8], edx
0x7B2C56: mov     edx, [eax+20h]
0x7B2C59: mov     [esp+624h+var_580], edx
0x7B2C60: mov     edx, [eax+24h]
0x7B2C63: mov     [esp+624h+var_5A8], edx
0x7B2C67: mov     edx, [eax+28h]
0x7B2C6A: mov     eax, [eax+48h]
0x7B2C6D: mov     [esp+624h+Src], eax
0x7B2C71: mov     [esp+624h+var_57C], edx
0x7B2C78: movzx   esi, cx
0x7B2C7B: mov     eax, 0FFFFh
0x7B2C80: cdq
0x7B2C81: idiv    esi
0x7B2C83: add     esp, 10h
0x7B2C86: mov     [esp+614h+var_5CC], ecx
0x7B2C8A: mov     [esp+614h+var_584], esi
0x7B2C91: cmp     bx, ax
0x7B2C94: jb      short loc_7B2C9D
0x7B2C96: movzx   ebx, ax
0x7B2C99: mov     [esp+614h+var_5E4], ebx
0x7B2C9D: movzx   ecx, di
0x7B2CA0: mov     eax, 0FFFFh
0x7B2CA5: cdq
0x7B2CA6: idiv    ecx
0x7B2CA8: mov     [esp+614h+var_5FC], ecx
0x7B2CAC: cmp     bx, ax
0x7B2CAF: jb      short loc_7B2CB8
0x7B2CB1: movzx   ebx, ax
0x7B2CB4: mov     [esp+614h+var_5E4], ebx
0x7B2CB8: movzx   edi, bx
0x7B2CBB: mov     ebp, edi
0x7B2CBD: imul    ebp, esi
0x7B2CC0: xor     ecx, ecx
0x7B2CC2: mov     eax, ebp
0x7B2CC4: mov     edx, 0Ch
0x7B2CC9: mul     edx
0x7B2CCB: seto    cl
0x7B2CCE: neg     ecx
0x7B2CD0: or      ecx, eax
0x7B2CD2: push    ecx; Size
0x7B2CD3: call    FormHeapAlloc
0x7B2CD8: mov     [esp+618h+var_5F8], eax
0x7B2CDC: xor     ecx, ecx
0x7B2CDE: mov     eax, ebp
0x7B2CE0: mov     edx, 0Ch
0x7B2CE5: mul     edx
0x7B2CE7: seto    cl
0x7B2CEA: neg     ecx
0x7B2CEC: or      ecx, eax
0x7B2CEE: push    ecx; Size
0x7B2CEF: call    FormHeapAlloc
0x7B2CF4: mov     [esp+61Ch+Dst], eax
0x7B2CF8: xor     ecx, ecx
0x7B2CFA: mov     eax, ebp
0x7B2CFC: mov     edx, 10h
0x7B2D01: mul     edx
0x7B2D03: seto    cl
0x7B2D06: neg     ecx
0x7B2D08: or      ecx, eax
0x7B2D0A: push    ecx; Size
0x7B2D0B: call    FormHeapAlloc
0x7B2D10: mov     ebx, eax
0x7B2D12: add     esp, 0Ch
0x7B2D15: mov     [esp+614h+var_600], ebx
0x7B2D19: test    ebx, ebx
0x7B2D1B: mov     byte ptr [esp+614h+var_4], 2
0x7B2D23: jz      short loc_7B2D39
0x7B2D25: push    offset sub_47EA50
0x7B2D2A: push    ebp
0x7B2D2B: push    10h
0x7B2D2D: push    ebx
0x7B2D2E: call    sub_401080
0x7B2D33: mov     [esp+614h+var_5E0], ebx
0x7B2D37: jmp     short loc_7B2D41
0x7B2D39: mov     [esp+614h+var_5E0], 0
0x7B2D41: xor     ecx, ecx
0x7B2D43: mov     eax, ebp
0x7B2D45: mov     edx, 8
0x7B2D4A: mul     edx
0x7B2D4C: seto    cl
0x7B2D4F: mov     byte ptr [esp+614h+var_4], 1
0x7B2D57: neg     ecx
0x7B2D59: or      ecx, eax
0x7B2D5B: push    ecx; Size
0x7B2D5C: call    FormHeapAlloc
0x7B2D61: mov     ebx, eax
0x7B2D63: xor     ecx, ecx
0x7B2D65: mov     eax, ebp
0x7B2D67: mov     edx, 4
0x7B2D6C: mul     edx
0x7B2D6E: seto    cl
0x7B2D71: mov     [esp+618h+var_600], ebx
0x7B2D75: neg     ecx
0x7B2D77: or      ecx, eax
0x7B2D79: push    ecx; Size
0x7B2D7A: call    FormHeapAlloc
0x7B2D7F: mov     [esp+61Ch+var_5AC], eax
0x7B2D83: mov     eax, edi
0x7B2D85: imul    eax, [esp+61Ch+var_5FC]
0x7B2D8A: xor     ecx, ecx
0x7B2D8C: mov     edx, 2
0x7B2D91: mul     edx
0x7B2D93: seto    cl
0x7B2D96: neg     ecx
0x7B2D98: or      ecx, eax
0x7B2D9A: push    ecx; Size
0x7B2D9B: call    FormHeapAlloc
0x7B2DA0: xor     ebp, ebp
0x7B2DA2: add     esp, 0Ch
0x7B2DA5: cmp     edi, ebp
0x7B2DA7: mov     [esp+614h+var_5C0], eax
0x7B2DAB: mov     [esp+614h+var_5B4], ebp
0x7B2DAF: mov     [esp+614h+var_598], ebp
0x7B2DB3: jle     loc_7B2F75
0x7B2DB9: lea     edx, [esi+esi*2]
0x7B2DBC: add     edx, edx
0x7B2DBE: xor     ecx, ecx
0x7B2DC0: add     edx, edx
0x7B2DC2: mov     eax, esi
0x7B2DC4: shl     eax, 4
0x7B2DC7: mov     [esp+614h+Size], eax
0x7B2DCB: mov     eax, [esp+614h+Dst]
0x7B2DCF: mov     [esp+614h+var_5F4], eax
0x7B2DD3: mov     eax, [esp+614h+var_5E0]
0x7B2DD7: mov     [esp+614h+var_5DC], eax
0x7B2DDB: mov     eax, [esp+614h+var_5AC]
0x7B2DDF: mov     [esp+614h+var_5C8], ecx
0x7B2DE3: mov     [esp+614h+var_5A0], edx
0x7B2DE7: mov     [esp+614h+var_5D0], ebx
0x7B2DEB: mov     [esp+614h+var_5D8], eax
0x7B2DEF: nop
0x7B2DF0: test    esi, esi
0x7B2DF2: jle     loc_7B2F0A
0x7B2DF8: mov     ecx, [esp+614h+var_57C]
0x7B2DFF: fild    [esp+614h+var_598]
0x7B2E03: mov     ebp, [esp+614h+var_5F8]
0x7B2E07: sub     ebp, [esp+614h+Dst]
0x7B2E0B: mov     edx, [esp+614h+var_5D8]
0x7B2E0F: fstp    [esp+614h+var_59C]
0x7B2E13: mov     ebx, [esp+614h+var_5B8]
0x7B2E17: fld     [esp+614h+var_59C]
0x7B2E1B: mov     esi, [esp+614h+var_5A8]
0x7B2E1F: mov     edi, [esp+614h+var_5D0]
0x7B2E23: mov     eax, [esp+614h+var_5F4]
0x7B2E27: mov     [esp+614h+var_58C], ecx
0x7B2E2E: mov     ecx, [esp+614h+var_580]
0x7B2E35: mov     [esp+614h+var_5A4], ebp
0x7B2E39: mov     ebp, [esp+614h+var_584]
0x7B2E40: sub     ebx, ecx
0x7B2E42: mov     [esp+614h+var_590], edx
0x7B2E49: mov     edx, [esp+614h+var_5DC]
0x7B2E4D: mov     [esp+614h+var_5EC], ebx
0x7B2E51: mov     [esp+614h+var_594], ebp
0x7B2E58: jmp     short loc_7B2E5E
0x7B2E5A: mov     ebx, [esp+614h+var_5EC]
0x7B2E5E: mov     ebx, [ebx+ecx]
0x7B2E61: mov     ebp, [esp+614h+var_5A4]
0x7B2E65: mov     [ebp+eax+0], ebx
0x7B2E69: mov     ebx, [esp+614h+var_5EC]
0x7B2E6D: mov     ebx, [ebx+ecx+4]
0x7B2E71: mov     [ebp+eax+4], ebx
0x7B2E75: mov     ebx, [esp+614h+var_5EC]
0x7B2E79: mov     ebx, [ebx+ecx+8]
0x7B2E7D: mov     [ebp+eax+8], ebx
0x7B2E81: mov     ebx, [ecx]
0x7B2E83: add     ebp, eax
0x7B2E85: mov     [eax], ebx
0x7B2E87: mov     ebx, [ecx+4]
0x7B2E8A: mov     [eax+4], ebx
0x7B2E8D: mov     ebx, [ecx+8]
0x7B2E90: mov     [eax+8], ebx
0x7B2E93: mov     ebx, [esi]
0x7B2E95: mov     [edx], ebx
0x7B2E97: mov     ebx, [esi+4]
0x7B2E9A: mov     [edx+4], ebx
0x7B2E9D: mov     ebx, [esi+8]
0x7B2EA0: mov     [edx+8], ebx
0x7B2EA3: mov     ebx, [esi+0Ch]
0x7B2EA6: mov     [edx+0Ch], ebx
0x7B2EA9: mov     ebx, [esp+614h+var_58C]
0x7B2EB0: mov     ebp, [ebx]
0x7B2EB2: mov     [edi], ebp
0x7B2EB4: mov     ebp, [ebx+4]
0x7B2EB7: mov     [edi+4], ebp
0x7B2EBA: mov     ebp, [esp+614h+var_590]
0x7B2EC1: fst     dword ptr [ebp+0]
0x7B2EC4: add     ebp, 4
0x7B2EC7: add     ebx, 8
0x7B2ECA: add     eax, 0Ch
0x7B2ECD: add     ecx, 0Ch
0x7B2ED0: add     edx, 10h
0x7B2ED3: add     esi, 10h
0x7B2ED6: add     edi, 8
0x7B2ED9: sub     [esp+614h+var_594], 1
0x7B2EE1: mov     [esp+614h+var_590], ebp
0x7B2EE8: mov     [esp+614h+var_58C], ebx
0x7B2EEF: jnz     loc_7B2E5A
0x7B2EF5: mov     ebp, [esp+614h+var_5B4]
0x7B2EF9: fstp    st
0x7B2EFB: mov     esi, [esp+614h+var_584]
0x7B2F02: mov     ecx, [esp+614h+var_5C8]
0x7B2F06: mov     edx, [esp+614h+var_5A0]
0x7B2F0A: xor     eax, eax
0x7B2F0C: cmp     [esp+614h+var_5FC], eax
0x7B2F10: jle     short loc_7B2F35
0x7B2F12: mov     edi, [esp+614h+var_5C0]
0x7B2F16: mov     ebx, [esp+614h+Src]
0x7B2F1A: mov     bx, [ebx+eax*2]
0x7B2F1E: add     bx, cx
0x7B2F21: mov     [edi+ebp*2], bx
0x7B2F25: add     eax, 1
0x7B2F28: add     ebp, 1
0x7B2F2B: cmp     eax, [esp+614h+var_5FC]
0x7B2F2F: jl      short loc_7B2F16
0x7B2F31: mov     [esp+614h+var_5B4], ebp
0x7B2F35: mov     ebx, [esp+614h+var_598]
0x7B2F39: movzx   edi, word ptr [esp+614h+var_5E4]
0x7B2F3E: add     [esp+614h+var_5F4], edx
0x7B2F42: lea     eax, ds:0[esi*4]
0x7B2F49: add     [esp+614h+var_5D8], eax
0x7B2F4D: lea     eax, ds:0[esi*8]
0x7B2F54: add     [esp+614h+var_5D0], eax
0x7B2F58: mov     eax, [esp+614h+Size]
0x7B2F5C: add     [esp+614h+var_5DC], eax
0x7B2F60: add     ebx, 1
0x7B2F63: add     ecx, esi
0x7B2F65: cmp     ebx, edi
0x7B2F67: mov     [esp+614h+var_598], ebx
0x7B2F6B: mov     [esp+614h+var_5C8], ecx
0x7B2F6F: jl      loc_7B2DF0
0x7B2F75: mov     eax, 55555556h
0x7B2F7A: imul    [esp+614h+var_5FC]
0x7B2F7E: mov     ebp, edx
0x7B2F80: shr     ebp, 1Fh
0x7B2F83: add     ebp, edx
0x7B2F85: movzx   ecx, bp
0x7B2F88: push    5Ch ; '\'; Size
0x7B2F8A: mov     [esp+618h+var_5F4], ecx
0x7B2F8E: call    FormHeapAlloc
0x7B2F93: add     esp, 4
0x7B2F96: mov     [esp+614h+Src], eax
0x7B2F9A: test    eax, eax
0x7B2F9C: mov     byte ptr [esp+614h+var_4], 3
0x7B2FA4: jz      loc_7B33DF
0x7B2FAA: mov     ecx, [esp+614h+var_5E4]
0x7B2FAE: mov     edx, ecx
0x7B2FB0: imul    ebp, ecx
0x7B2FB3: imul    edx, [esp+614h+var_5CC]
0x7B2FB8: mov     ecx, [esp+614h+var_600]
0x7B2FBC: push    0
0x7B2FBE: push    edx
0x7B2FBF: push    [esp+61Ch+var_5C0]
0x7B2FC3: push    ebp
0x7B2FC4: push    0
0x7B2FC6: push    1
0x7B2FC8: push    ecx
0x7B2FC9: mov     ecx, [esp+630h+var_5E0]
0x7B2FCD: push    ecx
0x7B2FCE: mov     ecx, [esp+634h+Dst]
0x7B2FD2: push    ecx
0x7B2FD3: mov     ecx, [esp+638h+var_5F8]
0x7B2FD7: push    ecx
0x7B2FD8: push    edx
0x7B2FD9: mov     ecx, eax
0x7B2FDB: call    sub_72AB00
0x7B2FE0: jmp     loc_7B33E1
0x7B2FE5: mov     edi, [edi+0B4h]
0x7B2FEB: push    edi
0x7B2FEC: push    offset dword_B3FD0C
0x7B2FF1: mov     [esp+61Ch+var_5ED], 1
0x7B2FF6: call    NiRTTI_Cast
0x7B2FFB: mov     edx, [eax+1Ch]
0x7B2FFE: movzx   ecx, word ptr [eax+8]
0x7B3002: mov     edi, [eax+48h]
0x7B3005: mov     [esp+61Ch+Src], edx
0x7B3009: mov     edx, [eax+20h]
0x7B300C: mov     [esp+61Ch+var_5A0], edx
0x7B3010: mov     edx, [eax+24h]
0x7B3013: mov     [esp+61Ch+var_5A4], edx
0x7B3017: mov     edx, [eax+28h]
0x7B301A: mov     eax, [eax+4Ch]
0x7B301D: mov     [esp+61Ch+var_5C0], eax
0x7B3021: mov     [esp+61Ch+var_59C], edx
0x7B3028: mov     eax, 0FFFFh
0x7B302D: movzx   esi, cx
0x7B3030: cdq
0x7B3031: idiv    esi
0x7B3033: add     esp, 8
0x7B3036: mov     [esp+614h+var_5CC], ecx
0x7B303A: mov     [esp+614h+var_5EC], edi
0x7B303E: cmp     bx, ax
0x7B3041: jb      short loc_7B304A
0x7B3043: movzx   ebx, ax
0x7B3046: mov     [esp+614h+var_5E4], ebx
0x7B304A: movzx   eax, word ptr [edi]
0x7B304D: mov     ecx, eax
0x7B304F: and     ecx, 80000001h
0x7B3055: jns     short loc_7B305C
0x7B3057: dec     ecx
0x7B3058: or      ecx, 0FFFFFFFEh
0x7B305B: inc     ecx
0x7B305C: neg     ecx
0x7B305E: sbb     ecx, ecx
0x7B3060: neg     ecx
0x7B3062: add     ecx, 2
0x7B3065: add     ecx, eax
0x7B3067: mov     eax, 0FFFFh
0x7B306C: cdq
0x7B306D: idiv    ecx
0x7B306F: cmp     bx, ax
0x7B3072: jb      short loc_7B307B
0x7B3074: movzx   ebx, ax
0x7B3077: mov     [esp+614h+var_5E4], ebx
0x7B307B: movzx   edi, bx
0x7B307E: mov     ebp, edi
0x7B3080: imul    ebp, esi
0x7B3083: xor     ecx, ecx
0x7B3085: mov     eax, ebp
0x7B3087: mov     edx, 0Ch
0x7B308C: mul     edx
0x7B308E: seto    cl
0x7B3091: neg     ecx
0x7B3093: or      ecx, eax
0x7B3095: push    ecx; Size
0x7B3096: call    FormHeapAlloc
0x7B309B: mov     [esp+618h+var_5B4], eax
0x7B309F: xor     ecx, ecx
0x7B30A1: mov     eax, ebp
0x7B30A3: mov     edx, 0Ch
0x7B30A8: mul     edx
0x7B30AA: seto    cl
0x7B30AD: neg     ecx
0x7B30AF: or      ecx, eax
0x7B30B1: push    ecx; Size
0x7B30B2: call    FormHeapAlloc
0x7B30B7: mov     [esp+61Ch+var_5C8], eax
0x7B30BB: xor     ecx, ecx
0x7B30BD: mov     eax, ebp
0x7B30BF: mov     edx, 10h
0x7B30C4: mul     edx
0x7B30C6: seto    cl
0x7B30C9: neg     ecx
0x7B30CB: or      ecx, eax
0x7B30CD: push    ecx; Size
0x7B30CE: call    FormHeapAlloc
0x7B30D3: add     esp, 0Ch
0x7B30D6: mov     [esp+614h+var_5F8], eax
0x7B30DA: test    eax, eax
0x7B30DC: mov     byte ptr [esp+614h+var_4], 4
0x7B30E4: jz      short loc_7B30FE
0x7B30E6: push    offset sub_47EA50
0x7B30EB: push    ebp
0x7B30EC: push    10h
0x7B30EE: push    eax
0x7B30EF: call    sub_401080
0x7B30F4: mov     ecx, [esp+614h+var_5F8]
0x7B30F8: mov     [esp+614h+var_5D8], ecx
0x7B30FC: jmp     short loc_7B3106
0x7B30FE: mov     [esp+614h+var_5D8], 0
0x7B3106: xor     ecx, ecx
0x7B3108: mov     eax, ebp
0x7B310A: mov     edx, 8
0x7B310F: mul     edx
0x7B3111: seto    cl
0x7B3114: mov     byte ptr [esp+614h+var_4], 1
0x7B311C: neg     ecx
0x7B311E: or      ecx, eax
0x7B3120: push    ecx; Size
0x7B3121: call    FormHeapAlloc
0x7B3126: mov     [esp+618h+var_5F8], eax
0x7B312A: xor     ecx, ecx
0x7B312C: mov     eax, ebp
0x7B312E: mov     edx, 4
0x7B3133: mul     edx
0x7B3135: seto    cl
0x7B3138: neg     ecx
0x7B313A: or      ecx, eax
0x7B313C: push    ecx; Size
0x7B313D: call    FormHeapAlloc
0x7B3142: mov     [esp+61Ch+var_5AC], eax
0x7B3146: mov     eax, [esp+61Ch+var_5EC]
0x7B314A: movzx   eax, word ptr [eax]
0x7B314D: movzx   ecx, ax
0x7B3150: mov     edx, ecx
0x7B3152: and     edx, 80000001h
0x7B3158: jns     short loc_7B315F
0x7B315A: dec     edx
0x7B315B: or      edx, 0FFFFFFFEh
0x7B315E: inc     edx
0x7B315F: neg     edx
0x7B3161: sbb     edx, edx
0x7B3163: neg     edx
0x7B3165: add     edx, 2
0x7B3168: add     dx, ax
0x7B316B: movzx   edx, dx
0x7B316E: movzx   edx, dx
0x7B3171: lea     eax, [edi-1]
0x7B3174: imul    eax, edx
0x7B3177: add     eax, ecx
0x7B3179: xor     ecx, ecx
0x7B317B: mov     edx, 2
0x7B3180: mul     edx
0x7B3182: seto    cl
0x7B3185: neg     ecx
0x7B3187: or      ecx, eax
0x7B3189: push    ecx; Size
0x7B318A: call    FormHeapAlloc
0x7B318F: xor     ebp, ebp
0x7B3191: add     esp, 0Ch
0x7B3194: cmp     edi, ebp
0x7B3196: mov     [esp+614h+var_5D0], eax
0x7B319A: mov     [esp+614h+var_5FC], ebp
0x7B319E: jle     loc_7B3344
0x7B31A4: mov     ecx, [esp+614h+var_5F8]
0x7B31A8: mov     edx, [esp+614h+var_5D8]
0x7B31AC: mov     eax, esi
0x7B31AE: shl     eax, 4
0x7B31B1: mov     [esp+614h+Size], eax
0x7B31B5: mov     eax, [esp+614h+var_5AC]
0x7B31B9: lea     ebx, [esi+esi*2]
0x7B31BC: add     ebx, ebx
0x7B31BE: mov     [esp+614h+var_5DC], eax
0x7B31C2: mov     eax, [esp+614h+var_5B4]
0x7B31C6: mov     [esp+614h+var_5F4], ecx
0x7B31CA: mov     ecx, [esp+614h+var_5C8]
0x7B31CE: add     edi, 0FFFFFFFFh
0x7B31D1: add     ebx, ebx
0x7B31D3: sub     eax, ecx
0x7B31D5: mov     [esp+614h+var_5A8], edi
0x7B31D9: mov     [esp+614h+var_5E0], edx
0x7B31DD: mov     [esp+614h+Dst], ecx
0x7B31E1: mov     [esp+614h+var_600], eax
0x7B31E5: jmp     short loc_7B31F0
0x7B31E7: align 10h
0x7B31F0: mov     eax, [esp+614h+Src]
0x7B31F4: mov     ecx, [esp+614h+var_600]
0x7B31F8: mov     edi, [esp+614h+Dst]
0x7B31FC: push    ebx; Size
0x7B31FD: push    eax; Src
0x7B31FE: add     ecx, edi
0x7B3200: push    ecx; Dst
0x7B3201: call    _memcpy
0x7B3206: mov     edx, [esp+620h+var_5A0]
0x7B320D: push    ebx; Size
0x7B320E: push    edx; Src
0x7B320F: push    edi; Dst
0x7B3210: call    _memcpy
0x7B3215: mov     eax, [esp+62Ch+Size]
0x7B3219: mov     ecx, [esp+62Ch+var_5A4]
0x7B3220: mov     edx, [esp+62Ch+var_5E0]
0x7B3224: push    eax; Size
0x7B3225: push    ecx; Src
0x7B3226: push    edx; Dst
0x7B3227: call    _memcpy
0x7B322C: mov     ecx, [esp+638h+var_5F4]
0x7B3230: lea     eax, ds:0[esi*8]
0x7B3237: push    eax; Size
0x7B3238: mov     eax, [esp+63Ch+var_59C]
0x7B323F: push    eax; Src
0x7B3240: push    ecx; Dst
0x7B3241: call    _memcpy
0x7B3246: add     esp, 30h
0x7B3249: test    esi, esi
0x7B324B: jle     short loc_7B3261
0x7B324D: fild    [esp+614h+var_5FC]
0x7B3251: mov     edi, [esp+614h+var_5DC]
0x7B3255: mov     ecx, esi
0x7B3257: fstp    [esp+614h+var_5B8]
0x7B325B: mov     eax, [esp+614h+var_5B8]
0x7B325F: rep stosd
0x7B3261: mov     edx, [esp+614h+var_5EC]
0x7B3265: mov     ecx, [esp+614h+var_5D0]
0x7B3269: xor     eax, eax
0x7B326B: cmp     [edx], ax
0x7B326E: jbe     short loc_7B3299
0x7B3270: mov     edx, [esp+614h+var_5FC]
0x7B3274: imul    edx, [esp+614h+var_5CC]
0x7B3279: mov     edi, [esp+614h+var_5C0]
0x7B327D: mov     di, [edi+eax*2]
0x7B3281: add     di, dx
0x7B3284: mov     [ecx+ebp*2], di
0x7B3288: mov     edi, [esp+614h+var_5EC]
0x7B328C: movzx   edi, word ptr [edi]
0x7B328F: add     eax, 1
0x7B3292: add     ebp, 1
0x7B3295: cmp     eax, edi
0x7B3297: jl      short loc_7B3279
0x7B3299: mov     eax, [esp+614h+var_5FC]
0x7B329D: cmp     eax, [esp+614h+var_5A8]
0x7B32A1: jge     short loc_7B3306
0x7B32A3: mov     edx, [esp+614h+var_5EC]
0x7B32A7: movzx   edi, word ptr [edx]
0x7B32AA: mov     edx, [esp+614h+var_5C0]
0x7B32AE: movzx   eax, ax
0x7B32B1: mov     [esp+614h+var_5B8], eax
0x7B32B5: imul    eax, [esp+614h+var_5CC]
0x7B32BA: add     ax, [edx+edi*2-2]
0x7B32BF: add     ebp, 1
0x7B32C2: mov     [ecx+ebp*2-2], ax
0x7B32C7: mov     eax, [esp+614h+var_5B8]
0x7B32CB: mov     di, [edx]
0x7B32CE: add     eax, 1
0x7B32D1: imul    eax, [esp+614h+var_5CC]
0x7B32D6: add     di, ax
0x7B32D9: mov     [ecx+ebp*2], di
0x7B32DD: mov     edi, [esp+614h+var_5EC]
0x7B32E1: movzx   edi, word ptr [edi]
0x7B32E4: add     ebp, 1
0x7B32E7: and     edi, 80000001h
0x7B32ED: jns     short loc_7B32F4
0x7B32EF: dec     edi
0x7B32F0: or      edi, 0FFFFFFFEh
0x7B32F3: inc     edi
0x7B32F4: cmp     edi, 1
0x7B32F7: jnz     short loc_7B3306
0x7B32F9: mov     dx, [edx]
0x7B32FC: add     dx, ax
0x7B32FF: mov     [ecx+ebp*2], dx
0x7B3303: add     ebp, 1
0x7B3306: mov     ecx, [esp+614h+Size]
0x7B330A: add     [esp+614h+var_5E0], ecx
0x7B330E: mov     eax, [esp+614h+var_5FC]
0x7B3312: movzx   edi, word ptr [esp+614h+var_5E4]
0x7B3317: add     [esp+614h+Dst], ebx
0x7B331B: lea     ecx, ds:0[esi*8]
0x7B3322: add     [esp+614h+var_5F4], ecx
0x7B3326: add     eax, 1
0x7B3329: lea     ecx, ds:0[esi*4]
0x7B3330: add     [esp+614h+var_5DC], ecx
0x7B3334: cmp     eax, edi
0x7B3336: mov     [esp+614h+var_5FC], eax
0x7B333A: jl      loc_7B31F0
0x7B3340: mov     ebx, [esp+614h+var_5E4]
0x7B3344: push    2; Size
0x7B3346: call    FormHeapAlloc
0x7B334B: mov     edx, [esp+618h+var_5EC]
0x7B334F: mov     [esp+618h+var_600], eax
0x7B3353: mov     [eax], bp
0x7B3356: movzx   eax, word ptr [edx]
0x7B3359: mov     ecx, eax
0x7B335B: add     esp, 4
0x7B335E: and     ecx, 80000001h
0x7B3364: jns     short loc_7B336B
0x7B3366: dec     ecx
0x7B3367: or      ecx, 0FFFFFFFEh
0x7B336A: inc     ecx
0x7B336B: cmp     ecx, 1
0x7B336E: jnz     short loc_7B337C
0x7B3370: add     eax, 3
0x7B3373: movzx   edx, ax
0x7B3376: mov     [esp+614h+var_5F4], edx
0x7B337A: jmp     short loc_7B3386
0x7B337C: add     eax, 2
0x7B337F: movzx   eax, ax
0x7B3382: mov     [esp+614h+var_5F4], eax
0x7B3386: push    54h ; 'T'; Size
0x7B3388: call    FormHeapAlloc
0x7B338D: add     esp, 4
0x7B3390: mov     [esp+614h+Src], eax
0x7B3394: test    eax, eax
0x7B3396: mov     byte ptr [esp+614h+var_4], 5
0x7B339E: jz      short loc_7B33DF
0x7B33A0: mov     ecx, [esp+614h+var_5D0]
0x7B33A4: push    0
0x7B33A6: mov     edx, ebx
0x7B33A8: imul    edx, [esp+618h+var_5CC]
0x7B33AD: push    edx
0x7B33AE: push    ecx
0x7B33AF: mov     ecx, [esp+620h+var_600]
0x7B33B3: push    ecx
0x7B33B4: mov     ecx, [esp+624h+var_5F8]
0x7B33B8: push    1
0x7B33BA: add     ebp, 0FFFFFFFEh
0x7B33BD: push    ebp
0x7B33BE: push    0
0x7B33C0: push    1
0x7B33C2: push    ecx
0x7B33C3: mov     ecx, [esp+638h+var_5D8]
0x7B33C7: push    ecx
0x7B33C8: mov     ecx, [esp+63Ch+var_5C8]
0x7B33CC: push    ecx
0x7B33CD: mov     ecx, [esp+640h+var_5B4]
0x7B33D4: push    ecx
0x7B33D5: push    edx
0x7B33D6: mov     ecx, eax
0x7B33D8: call    sub_73B430
0x7B33DD: jmp     short loc_7B33E1
0x7B33DF: xor     eax, eax
0x7B33E1: mov     [esp+614h+Size], eax
0x7B33E5: mov     [esp+614h+var_5FC], 0
0x7B33ED: mov     ebx, [esp+614h+var_5C4]
0x7B33F1: push    6
0x7B33F3: mov     ecx, ebx
0x7B33F5: mov     byte ptr [esp+618h+var_4], 6
0x7B33FD: call    NiNode_GetNiPropertyByID
0x7B3402: test    eax, eax
0x7B3404: jz      short loc_7B3424
0x7B3406: mov     edx, [eax+20h]
0x7B3409: mov     eax, [edx]
0x7B340B: test    eax, eax
0x7B340D: jz      short loc_7B3424
0x7B340F: mov     eax, [eax+8]
0x7B3412: test    eax, eax
0x7B3414: jz      short loc_7B3424
0x7B3416: mov     [esp+614h+var_5FC], eax
0x7B341A: add     eax, 4
0x7B341D: push    eax; lpAddend
0x7B341E: call    dword ptr ds:0A28078h
0x7B3424: push    0
0x7B3426: lea     eax, [esp+618h+var_600]
0x7B342A: push    eax
0x7B342B: mov     ecx, ebx
0x7B342D: call    sub_708560
0x7B3432: mov     ebp, [esp+614h+var_600]
0x7B3436: test    ebp, ebp
0x7B3438: jz      short loc_7B3457
0x7B343A: lea     ecx, [ebp+4]
0x7B343D: push    ecx; lpAddend
0x7B343E: call    dword ptr ds:0A2807Ch
0x7B3444: test    eax, eax
0x7B3446: jnz     short loc_7B3457
0x7B3448: test    ebp, ebp
0x7B344A: jz      short loc_7B3457
0x7B344C: mov     edx, [ebp+0]
0x7B344F: mov     eax, [edx]
0x7B3451: push    1
0x7B3453: mov     ecx, ebp
0x7B3455: call    eax
0x7B3457: push    1Ch; Size
0x7B3459: call    FormHeapAlloc
0x7B345E: mov     ebp, eax
0x7B3460: add     esp, 4
0x7B3463: mov     [esp+614h+var_600], ebp
0x7B3467: test    ebp, ebp
0x7B3469: mov     byte ptr [esp+614h+var_4], 7
0x7B3471: jz      short loc_7B348D
0x7B3473: mov     ecx, ebp; this
0x7B3475: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7B347A: mov     dword ptr [ebp+0], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x7B3481: mov     word ptr [ebp+18h], 0ECh ; 'ì'
0x7B3487: mov     byte ptr [ebp+1Ah], 0
0x7B348B: jmp     short loc_7B348F
0x7B348D: xor     ebp, ebp
0x7B348F: mov     cx, [ebp+18h]
0x7B3493: and     cx, 0F3FFh
0x7B3498: or      cx, 1201h
0x7B349D: push    1Ch; Size
0x7B349F: mov     [esp+618h+var_5F8], ebp
0x7B34A3: mov     byte ptr [esp+618h+var_4], 6
0x7B34AB: mov     byte ptr [ebp+1Ah], 0
0x7B34AF: mov     [ebp+18h], cx
0x7B34B3: call    FormHeapAlloc
0x7B34B8: mov     ebp, eax
0x7B34BA: add     esp, 4
0x7B34BD: mov     [esp+614h+var_600], ebp
0x7B34C1: test    ebp, ebp
0x7B34C3: mov     byte ptr [esp+614h+var_4], 8
0x7B34CB: jz      short loc_7B34E7
0x7B34CD: mov     ecx, ebp; this
0x7B34CF: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7B34D4: mov     dword ptr [ebp+0], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x7B34DB: mov     word ptr [ebp+18h], 0ECh ; 'ì'
0x7B34E1: mov     byte ptr [ebp+1Ah], 0
0x7B34E5: jmp     short loc_7B34E9
0x7B34E7: xor     ebp, ebp
0x7B34E9: mov     dx, [ebp+18h]
0x7B34ED: and     dx, 0F3FEh
0x7B34F2: or      dx, 1200h
0x7B34F7: push    5
0x7B34F9: mov     ecx, ebx
0x7B34FB: mov     [esp+618h+var_5C4], ebp
0x7B34FF: mov     byte ptr [esp+618h+var_4], 6
0x7B3507: mov     byte ptr [ebp+1Ah], 0
0x7B350B: mov     [ebp+18h], dx
0x7B350F: call    NiNode_GetNiPropertyByID
0x7B3514: mov     [esp+614h+var_600], eax
0x7B3518: mov     eax, [ebx+0B4h]
0x7B351E: mov     ecx, [eax+0Ch]
0x7B3521: mov     edx, [eax+10h]
0x7B3524: mov     [esp+614h+var_578], ecx
0x7B352B: mov     ecx, [eax+14h]
0x7B352E: mov     [esp+614h+var_574], edx
0x7B3535: mov     edx, [eax+18h]
0x7B3538: push    34h ; '4'; Size
0x7B353A: mov     [esp+618h+var_570], ecx
0x7B3541: mov     [esp+618h+var_56C], edx
0x7B3548: call    FormHeapAlloc
0x7B354D: mov     ebp, eax
0x7B354F: add     esp, 4
0x7B3552: xor     ebx, ebx
0x7B3554: test    ebp, ebp
0x7B3556: jz      short loc_7B3585
0x7B3558: push    offset NiRefObject_objcount; lpAddend
0x7B355D: mov     dword ptr [ebp+0], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7B3564: mov     [ebp+4], ebx
0x7B3567: call    dword ptr ds:0A28078h
0x7B356D: mov     dword ptr [ebp+0], offset ??_7CachedGeometry@DistantLODShaderProperty@@6B@; const DistantLODShaderProperty::CachedGeometry::`vftable'
0x7B3574: mov     [ebp+8], ebx
0x7B3577: mov     [ebp+18h], ebx
0x7B357A: mov     [ebp+1Ch], ebx
0x7B357D: mov     [ebp+20h], ebx
0x7B3580: mov     [ebp+24h], ebx
0x7B3583: mov     ebx, ebp
0x7B3585: mov     ebp, [esp+614h+var_5B0]
0x7B3589: cmp     ebp, ebx
0x7B358B: jz      short loc_7B35BE
0x7B358D: test    ebp, ebp
0x7B358F: jz      short loc_7B35AA
0x7B3591: lea     eax, [ebp+4]
0x7B3594: push    eax; lpAddend
0x7B3595: call    dword ptr ds:0A2807Ch
0x7B359B: test    eax, eax
0x7B359D: jnz     short loc_7B35AA
0x7B359F: mov     edx, [ebp+0]
0x7B35A2: mov     eax, [edx]
0x7B35A4: push    1
0x7B35A6: mov     ecx, ebp
0x7B35A8: call    eax
0x7B35AA: test    ebx, ebx
0x7B35AC: mov     ebp, ebx
0x7B35AE: mov     [esp+614h+var_5B0], ebp
0x7B35B2: jz      short loc_7B35BE
0x7B35B4: add     ebx, 4
0x7B35B7: push    ebx; lpAddend
0x7B35B8: call    dword ptr ds:0A28078h
0x7B35BE: mov     cl, [esp+614h+var_5ED]
0x7B35C2: mov     [ebp+0Ch], cl
0x7B35C5: mov     ebx, [ebp+8]
0x7B35C8: cmp     ebx, [esp+614h+Size]
0x7B35CC: jz      short loc_7B3603
0x7B35CE: test    ebx, ebx
0x7B35D0: jz      short loc_7B35EE
0x7B35D2: lea     edx, [ebx+4]
0x7B35D5: push    edx; lpAddend
0x7B35D6: call    dword ptr ds:0A2807Ch
0x7B35DC: test    eax, eax
0x7B35DE: jnz     short loc_7B35EE
0x7B35E0: test    ebx, ebx
0x7B35E2: jz      short loc_7B35EE
0x7B35E4: mov     eax, [ebx]
0x7B35E6: mov     edx, [eax]
0x7B35E8: push    1
0x7B35EA: mov     ecx, ebx
0x7B35EC: call    edx
0x7B35EE: mov     eax, [esp+614h+Size]
0x7B35F2: test    eax, eax
0x7B35F4: mov     [ebp+8], eax
0x7B35F7: jz      short loc_7B3603
0x7B35F9: add     eax, 4
0x7B35FC: push    eax; lpAddend
0x7B35FD: call    dword ptr ds:0A28078h
0x7B3603: mov     ecx, [esp+614h+var_5AC]
0x7B3607: mov     [ebp+10h], ecx
0x7B360A: mov     [ebp+14h], esi
0x7B360D: mov     esi, [ebp+18h]
0x7B3610: cmp     esi, [esp+614h+var_5FC]
0x7B3614: jz      short loc_7B364B
0x7B3616: test    esi, esi
0x7B3618: jz      short loc_7B3636
0x7B361A: lea     edx, [esi+4]
0x7B361D: push    edx; lpAddend
0x7B361E: call    dword ptr ds:0A2807Ch
0x7B3624: test    eax, eax
0x7B3626: jnz     short loc_7B3636
0x7B3628: test    esi, esi
0x7B362A: jz      short loc_7B3636
0x7B362C: mov     eax, [esi]
0x7B362E: mov     edx, [eax]
0x7B3630: push    1
0x7B3632: mov     ecx, esi
0x7B3634: call    edx
0x7B3636: mov     eax, [esp+614h+var_5FC]
0x7B363A: test    eax, eax
0x7B363C: mov     [ebp+18h], eax
0x7B363F: jz      short loc_7B364B
0x7B3641: add     eax, 4
0x7B3644: push    eax; lpAddend
0x7B3645: call    dword ptr ds:0A28078h
0x7B364B: mov     esi, [ebp+20h]
0x7B364E: mov     ebx, [esp+614h+var_5C4]
0x7B3652: cmp     esi, ebx
0x7B3654: jz      short loc_7B3683
0x7B3656: test    esi, esi
0x7B3658: jz      short loc_7B3676
0x7B365A: lea     eax, [esi+4]
0x7B365D: push    eax; lpAddend
0x7B365E: call    dword ptr ds:0A2807Ch
0x7B3664: test    eax, eax
0x7B3666: jnz     short loc_7B3676
0x7B3668: test    esi, esi
0x7B366A: jz      short loc_7B3676
0x7B366C: mov     edx, [esi]
0x7B366E: mov     eax, [edx]
0x7B3670: push    1
0x7B3672: mov     ecx, esi
0x7B3674: call    eax
0x7B3676: mov     [ebp+20h], ebx
0x7B3679: add     ebx, 4
0x7B367C: push    ebx; lpAddend
0x7B367D: call    dword ptr ds:0A28078h
0x7B3683: mov     esi, [ebp+1Ch]
0x7B3686: mov     ebx, [esp+614h+var_5F8]
0x7B368A: cmp     esi, ebx
0x7B368C: jz      short loc_7B36BB
0x7B368E: test    esi, esi
0x7B3690: jz      short loc_7B36AE
0x7B3692: lea     ecx, [esi+4]
0x7B3695: push    ecx; lpAddend
0x7B3696: call    dword ptr ds:0A2807Ch
0x7B369C: test    eax, eax
0x7B369E: jnz     short loc_7B36AE
0x7B36A0: test    esi, esi
0x7B36A2: jz      short loc_7B36AE
0x7B36A4: mov     edx, [esi]
0x7B36A6: mov     eax, [edx]
0x7B36A8: push    1
0x7B36AA: mov     ecx, esi
0x7B36AC: call    eax
0x7B36AE: mov     [ebp+1Ch], ebx
0x7B36B1: add     ebx, 4
0x7B36B4: push    ebx; lpAddend
0x7B36B5: call    dword ptr ds:0A28078h
0x7B36BB: mov     esi, [ebp+24h]
0x7B36BE: mov     ebx, [esp+614h+var_600]
0x7B36C2: cmp     esi, ebx
0x7B36C4: jz      short loc_7B36F7
0x7B36C6: test    esi, esi
0x7B36C8: jz      short loc_7B36E6
0x7B36CA: lea     ecx, [esi+4]
0x7B36CD: push    ecx; lpAddend
0x7B36CE: call    dword ptr ds:0A2807Ch
0x7B36D4: test    eax, eax
0x7B36D6: jnz     short loc_7B36E6
0x7B36D8: test    esi, esi
0x7B36DA: jz      short loc_7B36E6
0x7B36DC: mov     edx, [esi]
0x7B36DE: mov     eax, [edx]
0x7B36E0: push    1
0x7B36E2: mov     ecx, esi
0x7B36E4: call    eax
0x7B36E6: test    ebx, ebx
0x7B36E8: mov     [ebp+24h], ebx
0x7B36EB: jz      short loc_7B36F7
0x7B36ED: add     ebx, 4
0x7B36F0: push    ebx; lpAddend
0x7B36F1: call    dword ptr ds:0A28078h
0x7B36F7: fld     [esp+614h+var_56C]
0x7B36FE: mov     cx, word ptr [esp+614h+var_5F4]
0x7B3703: fstp    dword ptr [ebp+28h]
0x7B3706: mov     [ebp+2Ch], edi
0x7B3709: mov     edi, [esp+614h+var_588]
0x7B3710: mov     [ebp+32h], cx
0x7B3714: mov     byte ptr [ebp+30h], 0
0x7B3718: mov     esi, [edi+4]
0x7B371B: test    esi, esi
0x7B371D: jz      short loc_7B374C
0x7B371F: mov     edx, [esi]
0x7B3721: mov     eax, [edx+4]
0x7B3724: mov     ecx, esi
0x7B3726: call    eax
0x7B3728: test    eax, eax
0x7B372A: jz      short loc_7B373E
0x7B372C: lea     esp, [esp+0]
0x7B3730: cmp     eax, offset dword_B3FD4C
0x7B3735: jz      short loc_7B3797
0x7B3737: mov     eax, [eax+4]
0x7B373A: test    eax, eax
0x7B373C: jnz     short loc_7B3730
0x7B373E: xor     al, al
0x7B3740: neg     al
0x7B3742: sbb     eax, eax
0x7B3744: and     eax, esi
0x7B3746: jz      short loc_7B374C
0x7B3748: mov     byte ptr [ebp+30h], 1
0x7B374C: push    ecx
0x7B374D: mov     eax, esp
0x7B374F: lea     ecx, [ebp+4]
0x7B3752: mov     [esp+618h+var_600], esp
0x7B3756: push    ecx; lpAddend
0x7B3757: mov     [eax], ebp
0x7B3759: call    dword ptr ds:0A28078h
0x7B375F: mov     edx, [edi+8]
0x7B3762: push    edx
0x7B3763: mov     ecx, offset off_B2C34C
0x7B3768: call    sub_7B2180
0x7B376D: mov     esi, [esp+614h+var_5FC]
0x7B3771: test    esi, esi
0x7B3773: mov     byte ptr [esp+614h+var_4], 1
0x7B377B: jz      short loc_7B379F
0x7B377D: lea     eax, [esi+4]
0x7B3780: push    eax; lpAddend
0x7B3781: call    dword ptr ds:0A2807Ch
0x7B3787: test    eax, eax
0x7B3789: jnz     short loc_7B379F
0x7B378B: mov     edx, [esi]
0x7B378D: mov     eax, [edx]
0x7B378F: push    1
0x7B3791: mov     ecx, esi
0x7B3793: call    eax
0x7B3795: jmp     short loc_7B379F
0x7B3797: mov     al, 1
0x7B3799: jmp     short loc_7B3740
0x7B379B: mov     ebp, [esp+614h+var_5B0]
0x7B379F: test    ebp, ebp
0x7B37A1: jnz     short loc_7B37D9
0x7B37A3: mov     ecx, [esp+614h+var_588]
0x7B37AA: mov     edx, [ecx]
0x7B37AC: push    edx
0x7B37AD: lea     eax, [esp+618h+var_D8]
0x7B37B4: push    offset aDistantLodErro; "DISTANT LOD ERROR : could not load Dist"...
0x7B37B9: push    eax
0x7B37BA: call    __sprintf
0x7B37BF: mov     eax, ds:0B42E8Ch
0x7B37C4: add     esp, 0Ch
0x7B37C7: test    eax, eax
0x7B37C9: jz      short loc_7B37D9
0x7B37CB: lea     ecx, [esp+614h+var_D8]
0x7B37D2: push    ebp; _DWORD
0x7B37D3: push    ecx; _DWORD
0x7B37D4: call    eax ; dword_B42E8C
0x7B37D6: add     esp, 8
0x7B37D9: test    ebp, ebp
0x7B37DB: mov     byte ptr [esp+614h+var_4], 0
0x7B37E3: jz      short loc_7B37FE
0x7B37E5: lea     edx, [ebp+4]
0x7B37E8: push    edx; lpAddend
0x7B37E9: call    dword ptr ds:0A2807Ch
0x7B37EF: test    eax, eax
0x7B37F1: jnz     short loc_7B37FE
0x7B37F3: mov     eax, [ebp+0]
0x7B37F6: mov     edx, [eax]
0x7B37F8: push    1
0x7B37FA: mov     ecx, ebp
0x7B37FC: call    edx
0x7B37FE: lea     ecx, [esp+614h+var_568]; this
0x7B3805: mov     [esp+614h+var_4], 0FFFFFFFFh
0x7B3810: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x7B3815: mov     eax, ebp
0x7B3817: mov     ecx, dword ptr [esp+614h+var_C]
0x7B381E: mov     large fs:0, ecx
0x7B3825: pop     ecx
0x7B3826: pop     edi
0x7B3827: pop     esi
0x7B3828: pop     ebp
0x7B3829: pop     ebx
0x7B382A: mov     ecx, [esp+600h+var_10]
0x7B3831: xor     ecx, esp
0x7B3833: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B3838: add     esp, 600h
0x7B383E: retn
