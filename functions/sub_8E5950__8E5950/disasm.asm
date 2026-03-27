0x8E5950: push    ebp
0x8E5951: mov     ebp, esp
0x8E5953: and     esp, 0FFFFFFF0h
0x8E5956: sub     esp, 64h
0x8E5959: mov     eax, ds:0BA9DE4h
0x8E595E: push    ebx
0x8E595F: mov     ebx, ecx
0x8E5961: mov     ecx, large fs:2Ch
0x8E5968: mov     eax, [ecx+eax*4]
0x8E596B: mov     ecx, [eax+19Ch]
0x8E5971: mov     edx, [ecx+20h]
0x8E5974: push    esi
0x8E5975: mov     esi, [ebx+44h]
0x8E5978: mov     [esp+6Ch+var_5C], eax
0x8E597C: lea     eax, ds:10h[esi*4]
0x8E5983: and     eax, 0FFFFFFF0h
0x8E5986: push    edi
0x8E5987: lea     edi, [edx+eax]
0x8E598A: cmp     edi, [ecx+2Ch]
0x8E598D: mov     [esp+70h+var_60], ebx
0x8E5991: mov     [esp+70h+var_2C], 0
0x8E5999: ja      short loc_8E59A4
0x8E599B: mov     [ecx+20h], edi
0x8E599E: mov     [esp+70h+var_54], edx
0x8E59A2: jmp     short loc_8E59AE
0x8E59A4: mov     edx, [ecx]
0x8E59A6: push    eax
0x8E59A7: call    dword ptr [edx+0Ch]
0x8E59AA: mov     [esp+70h+var_54], eax
0x8E59AE: mov     ecx, ds:0BA9DE4h
0x8E59B4: mov     eax, large fs:2Ch
0x8E59BA: mov     eax, [eax+ecx*4]
0x8E59BD: mov     edx, [eax+1A4h]
0x8E59C3: mov     ecx, [eax+1A8h]
0x8E59C9: or      esi, 80000000h
0x8E59CF: cmp     edx, ecx
0x8E59D1: mov     [esp+70h+var_28], esi
0x8E59D5: jnb     short loc_8E5A04
0x8E59D7: mov     esi, [esp+70h+var_5C]
0x8E59DB: mov     ecx, [esi+1A4h]
0x8E59E1: mov     dword ptr [ecx], offset aLtquerysinglea; "LtquerySingleAabb"
0x8E59E7: mov     dword ptr [ecx+0Ch], offset aMarker; "marker"
0x8E59EE: rdtsc
0x8E59F0: mov     [esp+70h+var_4C], eax
0x8E59F4: mov     eax, [esp+70h+var_4C]
0x8E59F8: mov     [ecx+4], eax
0x8E59FB: add     ecx, 10h
0x8E59FE: mov     [esi+1A4h], ecx
0x8E5A04: mov     edi, [ebx+44h]
0x8E5A07: mov     ecx, [esp+70h+var_5C]
0x8E5A0B: mov     ecx, [ecx+19Ch]
0x8E5A11: mov     esi, [ecx+20h]
0x8E5A14: mov     edx, edi
0x8E5A16: sar     edx, 5
0x8E5A19: lea     eax, ds:30h[edx*4]
0x8E5A20: and     eax, 0FFFFFFF0h
0x8E5A23: lea     edx, [esi+eax]
0x8E5A26: cmp     edx, [ecx+2Ch]
0x8E5A29: ja      short loc_8E5A34
0x8E5A2B: mov     [ecx+20h], edx
0x8E5A2E: mov     [esp+70h+var_58], esi
0x8E5A32: jmp     short loc_8E5A40
0x8E5A34: mov     edx, [ecx]
0x8E5A36: push    eax
0x8E5A37: call    dword ptr [edx+0Ch]
0x8E5A3A: mov     [esp+70h+var_58], eax
0x8E5A3E: mov     esi, eax
0x8E5A40: sar     edi, 7
0x8E5A43: test    edi, edi
0x8E5A45: xorps   xmm0, xmm0
0x8E5A48: mov     eax, esi
0x8E5A4A: jl      short loc_8E5A5B
0x8E5A4C: lea     edx, [edi+1]
0x8E5A4F: nop
0x8E5A50: mov     ecx, eax
0x8E5A52: add     eax, 10h
0x8E5A55: dec     edx
0x8E5A56: movaps  xmmword ptr [ecx], xmm0
0x8E5A59: jnz     short loc_8E5A50
0x8E5A5B: mov     eax, [ebp+arg_0]
0x8E5A5E: movaps  xmm5, xmmword ptr [eax]
0x8E5A61: movaps  xmm4, xmmword ptr [ebx+10h]
0x8E5A65: movaps  xmm0, xmmword ptr [ebx+30h]
0x8E5A69: movaps  xmm3, xmmword ptr ds:0B2FC70h
0x8E5A70: movaps  xmm2, xmmword ptr ds:0A9A660h
0x8E5A77: movaps  xmm1, xmmword ptr ds:0A9A650h
0x8E5A7E: addps   xmm5, xmm4
0x8E5A81: movaps  xmm4, xmmword ptr [ebx+20h]
0x8E5A85: mulps   xmm5, xmm0
0x8E5A88: minps   xmm5, xmm3
0x8E5A8B: maxps   xmm5, xmm2
0x8E5A8E: addps   xmm5, xmm1
0x8E5A91: movaps  [esp+70h+var_48+8], xmm5
0x8E5A96: mov     ecx, dword ptr [esp+70h+var_48+8]
0x8E5A9A: mov     edx, dword ptr [esp+70h+var_48+0Ch]
0x8E5A9E: movaps  xmm5, xmmword ptr [eax+10h]
0x8E5AA2: shr     ecx, 7
0x8E5AA5: mov     word ptr [esp+70h+var_48], cx
0x8E5AAA: mov     ecx, [esp+70h+var_38]
0x8E5AAE: shr     edx, 7
0x8E5AB1: mov     word ptr [esp+70h+var_48+2], dx
0x8E5AB6: mov     edi, dword ptr [esp+70h+var_48]
0x8E5ABA: and     edi, 0FFFEh
0x8E5AC0: shr     ecx, 7
0x8E5AC3: mov     [esp+70h+var_20], edi
0x8E5AC7: mov     word ptr [esp+70h+var_48+4], cx
0x8E5ACC: mov     edi, dword ptr [esp+70h+var_48+2]
0x8E5AD0: addps   xmm5, xmm4
0x8E5AD3: and     edi, 0FFFEh
0x8E5AD9: mulps   xmm5, xmm0
0x8E5ADC: minps   xmm5, xmm3
0x8E5ADF: mov     [esp+70h+var_1C], edi
0x8E5AE3: mov     edi, dword ptr [esp+70h+var_48+4]
0x8E5AE7: maxps   xmm5, xmm2
0x8E5AEA: addps   xmm5, xmm1
0x8E5AED: movaps  [esp+70h+var_48+8], xmm5
0x8E5AF2: mov     eax, dword ptr [esp+70h+var_48+8]
0x8E5AF6: mov     ecx, dword ptr [esp+70h+var_48+0Ch]
0x8E5AFA: mov     edx, [esp+70h+var_38]
0x8E5AFE: shr     eax, 7
0x8E5B01: and     edi, 0FFFEh
0x8E5B07: shr     ecx, 7
0x8E5B0A: mov     [esp+70h+var_18], edi
0x8E5B0E: movzx   edi, ax
0x8E5B11: movzx   eax, cx
0x8E5B14: mov     ecx, [ebx+70h]
0x8E5B17: or      eax, 1
0x8E5B1A: mov     [esp+70h+var_C], eax
0x8E5B1E: shr     edx, 7
0x8E5B21: movzx   eax, dx
0x8E5B24: or      eax, 1
0x8E5B27: mov     [esp+70h+var_8], eax
0x8E5B2B: mov     eax, [ebx+4Ch]
0x8E5B2E: or      edi, 1
0x8E5B31: add     eax, 4
0x8E5B34: test    ecx, ecx
0x8E5B36: mov     [esp+70h+var_10], edi
0x8E5B3A: jz      loc_8E5C22
0x8E5B40: mov     edx, [ebx+74h]
0x8E5B43: mov     ecx, 10h
0x8E5B48: sub     ecx, edx
0x8E5B4A: mov     edx, [esp+70h+var_20]
0x8E5B4E: sar     edx, cl
0x8E5B50: test    edx, edx
0x8E5B52: jle     loc_8E5C22
0x8E5B58: mov     eax, [ebx+78h]
0x8E5B5B: shl     edx, 4
0x8E5B5E: movzx   ecx, word ptr [edx+eax-10h]
0x8E5B63: lea     edi, [edx+eax-10h]
0x8E5B67: mov     eax, ecx
0x8E5B69: and     ecx, 1Fh
0x8E5B6C: sar     eax, 5
0x8E5B6F: mov     edx, 1
0x8E5B74: shl     edx, cl
0x8E5B76: mov     ecx, [esi+eax*4]
0x8E5B79: mov     [esp+70h+var_4C], edi
0x8E5B7D: xor     ecx, edx
0x8E5B7F: mov     [esi+eax*4], ecx
0x8E5B82: mov     eax, [edi+8]
0x8E5B85: dec     eax
0x8E5B86: mov     edx, [edi+4]
0x8E5B89: js      short loc_8E5BB7
0x8E5B8B: inc     eax
0x8E5B8C: mov     [esp+70h+var_50], eax
0x8E5B90: movzx   ecx, word ptr [edx]
0x8E5B93: mov     eax, ecx
0x8E5B95: and     ecx, 1Fh
0x8E5B98: sar     eax, 5
0x8E5B9B: mov     edi, 1
0x8E5BA0: shl     edi, cl
0x8E5BA2: mov     ecx, [esi+eax*4]
0x8E5BA5: add     edx, 2
0x8E5BA8: xor     ecx, edi
0x8E5BAA: mov     [esi+eax*4], ecx
0x8E5BAD: dec     [esp+70h+var_50]
0x8E5BB1: jnz     short loc_8E5B90
0x8E5BB3: mov     edi, [esp+70h+var_4C]
0x8E5BB7: movzx   eax, word ptr [edi]
0x8E5BBA: mov     ecx, [ebx+40h]
0x8E5BBD: shl     eax, 4
0x8E5BC0: movzx   edx, word ptr [eax+ecx+8]
0x8E5BC5: movzx   edi, word ptr [eax+ecx+0Ah]
0x8E5BCA: add     eax, ecx
0x8E5BCC: mov     ecx, [ebx+4Ch]
0x8E5BCF: lea     edx, [ecx+edx*4+4]
0x8E5BD3: lea     ecx, [ecx+edi*4]
0x8E5BD6: cmp     edx, ecx
0x8E5BD8: mov     [esp+70h+var_50], eax
0x8E5BDC: mov     [esp+70h+var_4C], ecx
0x8E5BE0: jnb     short loc_8E5C13
0x8E5BE2: test    byte ptr [edx], 1
0x8E5BE5: jnz     short loc_8E5C0C
0x8E5BE7: movzx   ecx, word ptr [edx+2]
0x8E5BEB: mov     eax, ecx
0x8E5BED: and     ecx, 1Fh
0x8E5BF0: mov     edi, 1
0x8E5BF5: shl     edi, cl
0x8E5BF7: sar     eax, 5
0x8E5BFA: mov     ecx, [esi+eax*4]
0x8E5BFD: not     edi
0x8E5BFF: and     ecx, edi
0x8E5C01: mov     [esi+eax*4], ecx
0x8E5C04: mov     ecx, [esp+70h+var_4C]
0x8E5C08: mov     eax, [esp+70h+var_50]
0x8E5C0C: add     edx, 4
0x8E5C0F: cmp     edx, ecx
0x8E5C11: jb      short loc_8E5BE2
0x8E5C13: movzx   eax, word ptr [eax+8]
0x8E5C17: mov     ecx, [ebx+4Ch]
0x8E5C1A: mov     edi, [esp+70h+var_10]
0x8E5C1E: lea     eax, [ecx+eax*4+4]
0x8E5C22: movzx   edx, word ptr [eax]
0x8E5C25: cmp     edx, [esp+70h+var_20]
0x8E5C29: jnb     short loc_8E5C5B
0x8E5C2B: jmp     short loc_8E5C30
0x8E5C2D: align 10h
0x8E5C30: movzx   ecx, word ptr [eax+2]
0x8E5C34: mov     edx, ecx
0x8E5C36: and     ecx, 1Fh
0x8E5C39: sar     edx, 5
0x8E5C3C: mov     edi, 1
0x8E5C41: shl     edi, cl
0x8E5C43: mov     ecx, [esi+edx*4]
0x8E5C46: add     eax, 4
0x8E5C49: xor     ecx, edi
0x8E5C4B: mov     [esi+edx*4], ecx
0x8E5C4E: movzx   ecx, word ptr [eax]
0x8E5C51: cmp     ecx, [esp+70h+var_20]
0x8E5C55: jb      short loc_8E5C30
0x8E5C57: mov     edi, [esp+70h+var_10]
0x8E5C5B: mov     cx, [eax]
0x8E5C5E: movzx   edx, cx
0x8E5C61: cmp     edx, edi
0x8E5C63: jnb     short loc_8E5C97
0x8E5C65: test    cl, 1
0x8E5C68: jnz     short loc_8E5C89
0x8E5C6A: movzx   ecx, word ptr [eax+2]
0x8E5C6E: mov     edx, ecx
0x8E5C70: and     ecx, 1Fh
0x8E5C73: mov     edi, 1
0x8E5C78: shl     edi, cl
0x8E5C7A: sar     edx, 5
0x8E5C7D: mov     ecx, [esi+edx*4]
0x8E5C80: xor     ecx, edi
0x8E5C82: mov     edi, [esp+70h+var_10]
0x8E5C86: mov     [esi+edx*4], ecx
0x8E5C89: mov     cx, [eax+4]
0x8E5C8D: add     eax, 4
0x8E5C90: movzx   edx, cx
0x8E5C93: cmp     edx, edi
0x8E5C95: jb      short loc_8E5C65
0x8E5C97: mov     ecx, ds:0BA9DE4h
0x8E5C9D: mov     eax, large fs:2Ch
0x8E5CA3: mov     eax, [eax+ecx*4]
0x8E5CA6: mov     edx, [eax+1A4h]
0x8E5CAC: cmp     edx, [eax+1A8h]
0x8E5CB2: jnb     short loc_8E5CDA
0x8E5CB4: mov     esi, [esp+70h+var_5C]
0x8E5CB8: mov     ecx, [esi+1A4h]
0x8E5CBE: mov     dword ptr [ecx], offset aStyzAxis; "Styz-Axis"
0x8E5CC4: rdtsc
0x8E5CC6: mov     [esp+70h+var_4C], eax
0x8E5CCA: mov     eax, [esp+70h+var_4C]
0x8E5CCE: mov     [ecx+4], eax
0x8E5CD1: add     ecx, 0Ch
0x8E5CD4: mov     [esi+1A4h], ecx
0x8E5CDA: mov     edi, [ebx+58h]
0x8E5CDD: mov     ecx, [ebx+5Ch]
0x8E5CE0: mov     edx, [esp+70h+var_1C]
0x8E5CE4: lea     esi, [ebx+58h]
0x8E5CE7: lea     eax, [edi+ecx*4-8]
0x8E5CEB: push    edx
0x8E5CEC: lea     ecx, [edi+4]
0x8E5CEF: push    eax
0x8E5CF0: push    ecx
0x8E5CF1: mov     ecx, esi
0x8E5CF3: mov     [esp+7Ch+var_4C], eax
0x8E5CF7: call    sub_8E0C30
0x8E5CFC: mov     ecx, [esp+70h+var_4C]
0x8E5D00: sub     eax, edi
0x8E5D02: sar     eax, 2
0x8E5D05: mov     word ptr [esp+70h+var_48+8], ax
0x8E5D0A: mov     eax, [esp+70h+var_C]
0x8E5D0E: push    eax
0x8E5D0F: push    ecx
0x8E5D10: lea     eax, [edi+4]
0x8E5D13: push    eax
0x8E5D14: mov     ecx, esi
0x8E5D16: call    sub_8E0C30
0x8E5D1B: mov     edx, 0FFFFFFFCh
0x8E5D20: sub     edx, edi
0x8E5D22: mov     edi, [ebx+64h]
0x8E5D25: add     eax, edx
0x8E5D27: mov     edx, [esp+70h+var_18]
0x8E5D2B: sar     eax, 2
0x8E5D2E: lea     esi, [ebx+64h]
0x8E5D31: mov     word ptr [esp+70h+var_48+0Ch], ax
0x8E5D36: mov     eax, [esi+4]
0x8E5D39: lea     eax, [edi+eax*4-8]
0x8E5D3D: push    edx
0x8E5D3E: lea     ecx, [edi+4]
0x8E5D41: push    eax
0x8E5D42: push    ecx
0x8E5D43: mov     ecx, esi
0x8E5D45: mov     [esp+7Ch+var_4C], eax
0x8E5D49: call    sub_8E0C30
0x8E5D4E: mov     ecx, [esp+70h+var_4C]
0x8E5D52: sub     eax, edi
0x8E5D54: sar     eax, 2
0x8E5D57: mov     word ptr [esp+70h+var_48+0Ah], ax
0x8E5D5C: mov     eax, [esp+70h+var_8]
0x8E5D60: push    eax
0x8E5D61: push    ecx
0x8E5D62: lea     eax, [edi+4]
0x8E5D65: push    eax
0x8E5D66: mov     ecx, esi
0x8E5D68: call    sub_8E0C30
0x8E5D6D: mov     ecx, large fs:2Ch
0x8E5D74: mov     edx, 0FFFFFFFCh
0x8E5D79: sub     edx, edi
0x8E5D7B: add     eax, edx
0x8E5D7D: sar     eax, 2
0x8E5D80: mov     word ptr [esp+70h+var_48+0Eh], ax
0x8E5D85: mov     eax, ds:0BA9DE4h
0x8E5D8A: mov     eax, [ecx+eax*4]
0x8E5D8D: mov     edx, [eax+1A4h]
0x8E5D93: cmp     edx, [eax+1A8h]
0x8E5D99: jnb     short loc_8E5DC1
0x8E5D9B: mov     esi, [esp+70h+var_5C]
0x8E5D9F: mov     ecx, [esi+1A4h]
0x8E5DA5: mov     dword ptr [ecx], offset aStscanbitfield; "StScanBitfield"
0x8E5DAB: rdtsc
0x8E5DAD: mov     [esp+70h+var_4C], eax
0x8E5DB1: mov     eax, [esp+70h+var_4C]
0x8E5DB5: mov     [ecx+4], eax
0x8E5DB8: add     ecx, 0Ch
0x8E5DBB: mov     [esi+1A4h], ecx
0x8E5DC1: mov     edx, [esp+70h+var_58]
0x8E5DC5: mov     esi, [ebx+44h]
0x8E5DC8: mov     eax, [ebx+40h]
0x8E5DCB: sar     esi, 5
0x8E5DCE: lea     esi, [edx+esi*4+4]
0x8E5DD2: cmp     edx, esi
0x8E5DD4: mov     ecx, edx
0x8E5DD6: mov     [esp+70h+var_4C], ecx
0x8E5DDA: mov     dword ptr [esp+70h+var_48], esi
0x8E5DDE: jnb     loc_8E5F1C
0x8E5DE4: mov     edi, dword ptr [esp+70h+var_48+8]
0x8E5DE8: add     eax, 24h ; '$'
0x8E5DEB: mov     [esp+70h+var_50], eax
0x8E5DEF: nop
0x8E5DF0: mov     ebx, [ecx]
0x8E5DF2: test    ebx, ebx
0x8E5DF4: mov     [esp+70h+var_64], ebx
0x8E5DF8: jz      loc_8E5F00
0x8E5DFE: mov     edi, edi
0x8E5E00: test    bl, 0Fh
0x8E5E03: jz      loc_8E5EDE
0x8E5E09: test    bl, 1
0x8E5E0C: jz      short loc_8E5E3F
0x8E5E0E: mov     esi, dword ptr [esp+70h+var_48+0Ch]
0x8E5E12: mov     ecx, [eax-20h]
0x8E5E15: sub     esi, [eax-24h]
0x8E5E18: lea     edx, [eax-24h]
0x8E5E1B: sub     ecx, edi
0x8E5E1D: or      ecx, esi
0x8E5E1F: test    ecx, 80008000h
0x8E5E25: jnz     short loc_8E5E3F
0x8E5E27: test    byte ptr [eax-18h], 1
0x8E5E2B: jnz     short loc_8E5E3F
0x8E5E2D: mov     ecx, [esp+70h+var_2C]
0x8E5E31: mov     esi, [esp+70h+var_54]
0x8E5E35: mov     [esi+ecx*4], edx
0x8E5E38: inc     ecx
0x8E5E39: mov     [esp+70h+var_2C], ecx
0x8E5E3D: jmp     short loc_8E5E47
0x8E5E3F: mov     esi, [esp+70h+var_54]
0x8E5E43: mov     ecx, [esp+70h+var_2C]
0x8E5E47: test    bl, 2
0x8E5E4A: jz      short loc_8E5E77
0x8E5E4C: mov     ebx, [eax-10h]
0x8E5E4F: sub     ebx, edi
0x8E5E51: mov     edi, dword ptr [esp+70h+var_48+0Ch]
0x8E5E55: sub     edi, [eax-14h]
0x8E5E58: lea     edx, [eax-14h]
0x8E5E5B: or      ebx, edi
0x8E5E5D: test    ebx, 80008000h
0x8E5E63: jnz     short loc_8E5E73
0x8E5E65: test    byte ptr [eax-8], 1
0x8E5E69: jnz     short loc_8E5E73
0x8E5E6B: mov     [esi+ecx*4], edx
0x8E5E6E: inc     ecx
0x8E5E6F: mov     [esp+70h+var_2C], ecx
0x8E5E73: mov     ebx, [esp+70h+var_64]
0x8E5E77: test    bl, 4
0x8E5E7A: jz      short loc_8E5EAA
0x8E5E7C: mov     ebx, dword ptr [esp+70h+var_48+8]
0x8E5E80: mov     edi, [eax]
0x8E5E82: sub     edi, ebx
0x8E5E84: mov     ebx, dword ptr [esp+70h+var_48+0Ch]
0x8E5E88: sub     ebx, [eax-4]
0x8E5E8B: lea     edx, [eax-4]
0x8E5E8E: or      edi, ebx
0x8E5E90: test    edi, 80008000h
0x8E5E96: jnz     short loc_8E5EA6
0x8E5E98: test    byte ptr [eax+8], 1
0x8E5E9C: jnz     short loc_8E5EA6
0x8E5E9E: mov     [esi+ecx*4], edx
0x8E5EA1: inc     ecx
0x8E5EA2: mov     [esp+70h+var_2C], ecx
0x8E5EA6: mov     ebx, [esp+70h+var_64]
0x8E5EAA: test    bl, 8
0x8E5EAD: jz      short loc_8E5EDE
0x8E5EAF: mov     ebx, dword ptr [esp+70h+var_48+8]
0x8E5EB3: mov     edi, [eax+10h]
0x8E5EB6: sub     edi, ebx
0x8E5EB8: mov     ebx, dword ptr [esp+70h+var_48+0Ch]
0x8E5EBC: sub     ebx, [eax+0Ch]
0x8E5EBF: lea     edx, [eax+0Ch]
0x8E5EC2: or      edi, ebx
0x8E5EC4: test    edi, 80008000h
0x8E5ECA: jnz     short loc_8E5EDA
0x8E5ECC: test    byte ptr [eax+18h], 1
0x8E5ED0: jnz     short loc_8E5EDA
0x8E5ED2: mov     [esi+ecx*4], edx
0x8E5ED5: inc     ecx
0x8E5ED6: mov     [esp+70h+var_2C], ecx
0x8E5EDA: mov     ebx, [esp+70h+var_64]
0x8E5EDE: mov     edi, dword ptr [esp+70h+var_48+8]
0x8E5EE2: shr     ebx, 4
0x8E5EE5: add     eax, 40h ; '@'
0x8E5EE8: test    ebx, ebx
0x8E5EEA: mov     [esp+70h+var_64], ebx
0x8E5EEE: jnz     loc_8E5E00
0x8E5EF4: mov     ecx, [esp+70h+var_4C]
0x8E5EF8: mov     edx, [esp+70h+var_58]
0x8E5EFC: mov     esi, dword ptr [esp+70h+var_48]
0x8E5F00: mov     eax, [esp+70h+var_50]
0x8E5F04: add     ecx, 4
0x8E5F07: add     eax, 200h
0x8E5F0C: cmp     ecx, esi
0x8E5F0E: mov     [esp+70h+var_50], eax
0x8E5F12: mov     [esp+70h+var_4C], ecx
0x8E5F16: jb      loc_8E5DF0
0x8E5F1C: mov     esi, [esp+70h+var_5C]
0x8E5F20: mov     ecx, [esi+19Ch]
0x8E5F26: cmp     edx, [ecx+28h]
0x8E5F29: mov     [ecx+20h], edx
0x8E5F2C: jnz     short loc_8E5F34
0x8E5F2E: mov     eax, [ecx]
0x8E5F30: push    edx
0x8E5F31: call    dword ptr [eax+10h]
0x8E5F34: mov     ecx, large fs:2Ch
0x8E5F3B: mov     edx, ds:0BA9DE4h
0x8E5F41: mov     eax, [ecx+edx*4]
0x8E5F44: mov     ecx, [eax+1A4h]
0x8E5F4A: cmp     ecx, [eax+1A8h]
0x8E5F50: jnb     short loc_8E5F74
0x8E5F52: mov     ecx, [esi+1A4h]
0x8E5F58: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8E5F5E: rdtsc
0x8E5F60: mov     dword ptr [esp+70h+var_48], eax
0x8E5F64: mov     edx, dword ptr [esp+70h+var_48]
0x8E5F68: mov     [ecx+4], edx
0x8E5F6B: add     ecx, 0Ch
0x8E5F6E: mov     [esi+1A4h], ecx
0x8E5F74: mov     esi, [ebp+arg_4]
0x8E5F77: test    esi, esi
0x8E5F79: mov     eax, [esp+70h+var_2C]
0x8E5F7D: lea     ecx, [esi+24h]
0x8E5F80: lea     eax, [eax+eax+2]
0x8E5F84: jz      short loc_8E5F9A
0x8E5F86: mov     edx, eax
0x8E5F88: or      edx, 80000000h
0x8E5F8E: mov     [esi], ecx
0x8E5F90: mov     dword ptr [esi+4], 0
0x8E5F97: mov     [esi+8], edx
0x8E5F9A: lea     ebx, [esi+0Ch]
0x8E5F9D: xor     edx, edx
0x8E5F9F: cmp     ebx, edx
0x8E5FA1: mov     [esp+70h+var_50], ebx
0x8E5FA5: jz      short loc_8E5FBA
0x8E5FA7: lea     edi, [ecx+eax*4]
0x8E5FAA: mov     [ebx], edi
0x8E5FAC: mov     edi, eax
0x8E5FAE: or      edi, 80000000h
0x8E5FB4: mov     [ebx+4], edx
0x8E5FB7: mov     [ebx+8], edi
0x8E5FBA: lea     edi, [esi+18h]
0x8E5FBD: cmp     edi, edx
0x8E5FBF: jz      short loc_8E5FD1
0x8E5FC1: lea     ecx, [ecx+eax*8]
0x8E5FC4: or      eax, 80000000h
0x8E5FC9: mov     [edi], ecx
0x8E5FCB: mov     [edi+4], edx
0x8E5FCE: mov     [edi+8], eax
0x8E5FD1: mov     ecx, [esi]
0x8E5FD3: mov     word ptr [esp+70h+var_58], dx
0x8E5FD8: mov     word ptr [esp+70h+var_58+2], dx
0x8E5FDD: mov     edx, [esi+4]
0x8E5FE0: mov     eax, [esp+70h+var_58]
0x8E5FE4: mov     [ecx+edx*4], eax
0x8E5FE7: inc     dword ptr [esi+4]
0x8E5FEA: mov     edx, [ebx+4]
0x8E5FED: mov     ecx, [ebx]
0x8E5FEF: mov     [ecx+edx*4], eax
0x8E5FF2: inc     dword ptr [ebx+4]
0x8E5FF5: mov     edx, [edi+4]
0x8E5FF8: mov     ecx, [edi]
0x8E5FFA: mov     [ecx+edx*4], eax
0x8E5FFD: mov     edx, [edi+4]
0x8E6000: mov     eax, [esp+70h+var_2C]
0x8E6004: inc     edx
0x8E6005: dec     eax
0x8E6006: mov     [edi+4], edx
0x8E6009: mov     edx, [esp+70h+var_54]
0x8E600D: mov     [esp+70h+var_64], edx
0x8E6011: js      loc_8E6114
0x8E6017: inc     eax
0x8E6018: mov     [esp+70h+var_4C], eax
0x8E601C: lea     esp, [esp+0]
0x8E6020: mov     eax, [esp+70h+var_64]
0x8E6024: mov     ecx, [eax]
0x8E6026: movzx   edx, word ptr [ecx+8]
0x8E602A: mov     ebx, [esi]
0x8E602C: mov     eax, [esp+70h+var_60]
0x8E6030: mov     ecx, [eax+4Ch]
0x8E6033: mov     ecx, [ecx+edx*4]
0x8E6036: mov     eax, [esi+4]
0x8E6039: mov     [ebx+eax*4], ecx
0x8E603C: mov     eax, [esi+4]
0x8E603F: mov     ebx, [esi]
0x8E6041: inc     eax
0x8E6042: mov     [esi+4], eax
0x8E6045: mov     eax, [esp+70h+var_64]
0x8E6049: mov     edx, [eax]
0x8E604B: movzx   ecx, word ptr [edx+0Ah]
0x8E604F: mov     edx, [esp+70h+var_60]
0x8E6053: mov     edx, [edx+4Ch]
0x8E6056: mov     edx, [edx+ecx*4]
0x8E6059: mov     ecx, [esi+4]
0x8E605C: mov     [ebx+ecx*4], edx
0x8E605F: inc     dword ptr [esi+4]
0x8E6062: mov     eax, [eax]
0x8E6064: movzx   ecx, word ptr [eax]
0x8E6067: mov     eax, [esp+70h+var_60]
0x8E606B: mov     edx, [eax+58h]
0x8E606E: mov     ecx, [edx+ecx*4]
0x8E6071: add     eax, 58h ; 'X'
0x8E6074: mov     eax, [esp+70h+var_50]
0x8E6078: mov     ebx, [eax+4]
0x8E607B: mov     eax, [eax]
0x8E607D: mov     [eax+ebx*4], ecx
0x8E6080: mov     eax, [esp+70h+var_50]
0x8E6084: inc     dword ptr [eax+4]
0x8E6087: mov     ebx, [eax+4]
0x8E608A: mov     edx, [esp+70h+var_64]
0x8E608E: mov     ecx, [edx]
0x8E6090: movzx   edx, word ptr [ecx+4]
0x8E6094: mov     eax, [eax]
0x8E6096: mov     ecx, [esp+70h+var_60]
0x8E609A: add     ecx, 58h ; 'X'
0x8E609D: mov     ecx, [ecx]
0x8E609F: mov     ecx, [ecx+edx*4]
0x8E60A2: mov     [eax+ebx*4], ecx
0x8E60A5: mov     eax, [esp+70h+var_50]
0x8E60A9: mov     ecx, [eax+4]
0x8E60AC: mov     edx, [esp+70h+var_64]
0x8E60B0: inc     ecx
0x8E60B1: mov     [eax+4], ecx
0x8E60B4: mov     eax, [edx]
0x8E60B6: movzx   ecx, word ptr [eax+2]
0x8E60BA: mov     eax, [esp+70h+var_60]
0x8E60BE: mov     edx, [eax+64h]
0x8E60C1: mov     ecx, [edx+ecx*4]
0x8E60C4: mov     ebx, [edi]
0x8E60C6: mov     edx, [esp+70h+var_64]
0x8E60CA: add     eax, 64h ; 'd'
0x8E60CD: mov     eax, [edi+4]
0x8E60D0: mov     [ebx+eax*4], ecx
0x8E60D3: mov     ebx, [edi+4]
0x8E60D6: inc     ebx
0x8E60D7: mov     [edi+4], ebx
0x8E60DA: mov     eax, [edx]
0x8E60DC: movzx   ecx, word ptr [eax+6]
0x8E60E0: mov     eax, [esp+70h+var_60]
0x8E60E4: mov     edx, [eax+64h]
0x8E60E7: mov     ecx, [edx+ecx*4]
0x8E60EA: add     eax, 64h ; 'd'
0x8E60ED: mov     eax, ebx
0x8E60EF: mov     ebx, [edi]
0x8E60F1: mov     [ebx+eax*4], ecx
0x8E60F4: mov     edx, [edi+4]
0x8E60F7: mov     ecx, [esp+70h+var_64]
0x8E60FB: inc     edx
0x8E60FC: add     ecx, 4
0x8E60FF: mov     [edi+4], edx
0x8E6102: mov     [esp+70h+var_64], ecx
0x8E6106: dec     [esp+70h+var_4C]
0x8E610A: jnz     loc_8E6020
0x8E6110: mov     ebx, [esp+70h+var_50]
0x8E6114: mov     ecx, esi
0x8E6116: mov     [esp+70h+var_4C], ecx
0x8E611A: mov     [esp+70h+var_50], 3
0x8E6122: mov     eax, [ecx+4]
0x8E6125: dec     eax
0x8E6126: cmp     eax, 1
0x8E6129: mov     byte ptr [esp+70h+var_48], 0
0x8E612E: jle     short loc_8E614B
0x8E6130: mov     edx, dword ptr [esp+70h+var_48]
0x8E6134: push    edx
0x8E6135: dec     eax
0x8E6136: push    eax
0x8E6137: mov     eax, [ecx]
0x8E6139: add     eax, 4
0x8E613C: push    0
0x8E613E: push    eax
0x8E613F: call    sub_8E1200
0x8E6144: mov     ecx, [esp+80h+var_4C]
0x8E6148: add     esp, 10h
0x8E614B: mov     eax, [esp+70h+var_50]
0x8E614F: add     ecx, 0Ch
0x8E6152: dec     eax
0x8E6153: mov     [esp+70h+var_4C], ecx
0x8E6157: mov     [esp+70h+var_50], eax
0x8E615B: jnz     short loc_8E6122
0x8E615D: mov     ecx, [esi+4]
0x8E6160: mov     edx, [esi]
0x8E6162: mov     word ptr [esp+70h+var_58], 0FFFCh
0x8E6169: mov     word ptr [esp+70h+var_58+2], 0
0x8E6170: mov     eax, [esp+70h+var_58]
0x8E6174: mov     [edx+ecx*4], eax
0x8E6177: inc     dword ptr [esi+4]
0x8E617A: mov     ecx, [ebx+4]
0x8E617D: mov     edx, [ebx]
0x8E617F: mov     esi, [esp+70h+var_54]
0x8E6183: mov     [edx+ecx*4], eax
0x8E6186: inc     dword ptr [ebx+4]
0x8E6189: mov     ecx, [edi+4]
0x8E618C: mov     edx, [edi]
0x8E618E: mov     [edx+ecx*4], eax
0x8E6191: inc     dword ptr [edi+4]
0x8E6194: mov     edi, [esp+70h+var_5C]
0x8E6198: mov     ecx, [edi+19Ch]
0x8E619E: cmp     esi, [ecx+28h]
0x8E61A1: mov     [ecx+20h], esi
0x8E61A4: jnz     short loc_8E61AC
0x8E61A6: mov     eax, [ecx]
0x8E61A8: push    esi
0x8E61A9: call    dword ptr [eax+10h]
0x8E61AC: mov     eax, [esp+70h+var_28]
0x8E61B0: test    eax, eax
0x8E61B2: js      short loc_8E61CB
0x8E61B4: mov     ecx, [edi+19Ch]
0x8E61BA: and     eax, 3FFFFFFFh
0x8E61BF: push    14h
0x8E61C1: shl     eax, 2
0x8E61C4: push    eax
0x8E61C5: push    esi
0x8E61C6: call    sub_8A75D0
0x8E61CB: pop     edi
0x8E61CC: pop     esi
0x8E61CD: pop     ebx
0x8E61CE: mov     esp, ebp
0x8E61D0: pop     ebp
0x8E61D1: retn    8
