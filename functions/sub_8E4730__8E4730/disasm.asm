0x8E4730: push    ebp
0x8E4731: mov     ebp, esp
0x8E4733: and     esp, 0FFFFFFF0h
0x8E4736: sub     esp, 34h
0x8E4739: push    ebx
0x8E473A: xor     ebx, ebx
0x8E473C: push    esi
0x8E473D: mov     esi, ecx
0x8E473F: mov     word ptr [esi+6], 1
0x8E4745: mov     dword ptr [esi], offset off_A9A710
0x8E474B: mov     [esi+40h], ebx
0x8E474E: mov     [esi+44h], ebx
0x8E4751: mov     ecx, 80000000h
0x8E4756: mov     [esi+48h], ecx
0x8E4759: push    edi
0x8E475A: lea     edi, [esi+4Ch]
0x8E475D: mov     eax, edi
0x8E475F: mov     [eax], ebx
0x8E4761: mov     [eax+4], ebx
0x8E4764: mov     [eax+8], ecx
0x8E4767: add     eax, 0Ch
0x8E476A: add     eax, 0Ch
0x8E476D: mov     [eax-0Ch], ebx
0x8E4770: mov     [eax-8], ebx
0x8E4773: mov     [eax-4], ecx
0x8E4776: mov     [eax], ebx
0x8E4778: mov     [eax+4], ebx
0x8E477B: mov     [eax+8], ecx
0x8E477E: mov     eax, [ebp+arg_8]
0x8E4781: cmp     eax, ebx
0x8E4783: jnz     short loc_8E478A
0x8E4785: mov     eax, 1
0x8E478A: or      ecx, 0FFFFFFFFh
0x8E478D: cmp     eax, ebx
0x8E478F: mov     [esp+40h+var_2C], ecx
0x8E4793: jle     short loc_8E47A0
0x8E4795: sar     eax, 1
0x8E4797: inc     ecx
0x8E4798: cmp     eax, ebx
0x8E479A: jg      short loc_8E4795
0x8E479C: mov     [esp+40h+var_2C], ecx
0x8E47A0: mov     eax, [esi+48h]
0x8E47A3: lea     ecx, [esi+40h]
0x8E47A6: and     eax, 3FFFFFFFh
0x8E47AB: cmp     eax, 0FFh
0x8E47B0: jge     short loc_8E47CC
0x8E47B2: add     eax, eax
0x8E47B4: cmp     eax, 0FFh
0x8E47B9: jg      short loc_8E47C0
0x8E47BB: mov     eax, 0FFh
0x8E47C0: push    10h
0x8E47C2: push    eax
0x8E47C3: push    ecx
0x8E47C4: call    sub_8A6E40
0x8E47C9: add     esp, 0Ch
0x8E47CC: mov     [esp+40h+var_30], 3F800000h
0x8E47D4: movss   xmm1, [esp+40h+var_30]
0x8E47DA: xorps   xmm2, xmm2
0x8E47DD: movaps  xmmword ptr [esi+10h], xmm2
0x8E47E1: movaps  xmmword ptr [esi+20h], xmm2
0x8E47E5: shufps  xmm1, xmm1, 0
0x8E47E9: movaps  xmmword ptr [esi+30h], xmm1
0x8E47ED: movaps  xmm3, xmmword ptr ds:0B2FC70h
0x8E47F4: movaps  xmm4, xmmword ptr ds:0A9A660h
0x8E47FB: movaps  xmm5, xmmword ptr ds:0A9A650h
0x8E4802: mov     [esp+40h+var_30], 41200000h
0x8E480A: mov     [esp+40h+var_34], 41300000h
0x8E4812: mov     ecx, 17h
0x8E4817: jmp     short loc_8E4820
0x8E4819: align 10h
0x8E4820: fld     [esp+40h+var_34]
0x8E4824: fadd    [esp+40h+var_30]
0x8E4828: fmul    dword ptr ds:0A3D65Ch
0x8E482E: fld     dword ptr ds:0A2F948h
0x8E4834: fadd    st, st(1)
0x8E4836: fstp    [esp+40h+var_28]
0x8E483A: movss   xmm0, [esp+40h+var_28]
0x8E4840: shufps  xmm0, xmm0, 0
0x8E4844: addps   xmm0, xmm2
0x8E4847: mulps   xmm0, xmm1
0x8E484A: minps   xmm0, xmm3
0x8E484D: maxps   xmm0, xmm4
0x8E4850: addps   xmm0, xmm5
0x8E4853: movaps  [esp+40h+var_10], xmm0
0x8E4858: mov     eax, dword ptr [esp+40h+var_10]
0x8E485C: shr     eax, 7
0x8E485F: movzx   eax, ax
0x8E4862: or      eax, 1
0x8E4865: cmp     eax, 0Ch
0x8E4868: jnb     short loc_8E4870
0x8E486A: fstp    [esp+40h+var_30]
0x8E486E: jmp     short loc_8E4874
0x8E4870: fstp    [esp+40h+var_34]
0x8E4874: dec     ecx
0x8E4875: jnz     short loc_8E4820
0x8E4877: fld     [esp+40h+var_34]
0x8E487B: mov     eax, [ebp+arg_0]
0x8E487E: fadd    [esp+40h+var_30]
0x8E4882: mov     ecx, [ebp+arg_4]
0x8E4885: mov     [esp+40h+var_28], 477FFC00h
0x8E488D: mov     dword ptr [esp+40h+var_20+0Ch], 0
0x8E4895: fmul    dword ptr ds:0A3D65Ch
0x8E489B: fsub    dword ptr ds:0A6BC94h
0x8E48A1: fstp    dword ptr [esi+7Ch]
0x8E48A4: movaps  xmm0, xmmword ptr [eax]
0x8E48A7: movaps  xmm1, xmmword ptr [ecx]
0x8E48AA: fld     dword ptr ds:0A2F948h
0x8E48B0: subps   xmm1, xmm0
0x8E48B3: movaps  [esp+40h+var_10], xmm1
0x8E48B8: fdiv    dword ptr [esp+40h+var_10]
0x8E48BC: movss   xmm0, [esp+40h+var_28]
0x8E48C2: shufps  xmm0, xmm0, 0
0x8E48C6: movaps  xmmword ptr [esi+30h], xmm0
0x8E48CA: movaps  xmm2, xmmword ptr [esi+30h]
0x8E48CE: mov     [esp+40h+var_28], 37800200h
0x8E48D6: fstp    dword ptr [esp+40h+var_20]
0x8E48DA: fld     dword ptr ds:0A2F948h
0x8E48E0: fdiv    dword ptr [esp+40h+var_10+4]
0x8E48E4: fstp    dword ptr [esp+40h+var_20+4]
0x8E48E8: fld     dword ptr ds:0A2F948h
0x8E48EE: fdiv    dword ptr [esp+40h+var_10+8]
0x8E48F2: fstp    dword ptr [esp+40h+var_20+8]
0x8E48F6: movaps  xmm0, [esp+40h+var_20]
0x8E48FB: mulps   xmm2, xmm0
0x8E48FE: movaps  xmmword ptr [esi+30h], xmm2
0x8E4902: movaps  xmm2, xmmword ptr ds:0A965C0h
0x8E4909: movaps  xmm0, xmmword ptr [eax]
0x8E490C: xorps   xmm0, xmm2
0x8E490F: movss   xmm2, [esp+40h+var_28]
0x8E4915: movaps  xmmword ptr [esi+10h], xmm0
0x8E4919: movaps  xmm3, xmm2
0x8E491C: shufps  xmm3, xmm2, 0
0x8E4920: mulps   xmm3, xmm1
0x8E4923: addps   xmm0, xmm3
0x8E4926: movaps  xmmword ptr [esi+20h], xmm0
0x8E492A: mov     [esi+3Ch], ebx
0x8E492D: mov     [esi+1Ch], ebx
0x8E4930: mov     [esi+2Ch], ebx
0x8E4933: mov     edx, [esi+48h]
0x8E4936: mov     eax, [esi+44h]
0x8E4939: lea     ebx, [esi+40h]
0x8E493C: and     edx, 3FFFFFFFh
0x8E4942: cmp     eax, edx
0x8E4944: jnz     short loc_8E4951
0x8E4946: push    10h
0x8E4948: push    ebx
0x8E4949: call    sub_8A6EE0
0x8E494E: add     esp, 8
0x8E4951: mov     eax, [ebx+4]
0x8E4954: mov     ecx, [esi+40h]
0x8E4957: mov     ebx, eax
0x8E4959: shl     ebx, 4
0x8E495C: add     ebx, ecx
0x8E495E: mov     ecx, [esp+40h+var_2C]
0x8E4962: inc     eax
0x8E4963: mov     [esi+44h], eax
0x8E4966: xor     eax, eax
0x8E4968: mov     [ebx+2], ax
0x8E496C: mov     [ebx], ax
0x8E496F: mov     [ebx+8], ax
0x8E4973: mov     eax, 1
0x8E4978: shl     eax, cl
0x8E497A: mov     [esp+40h+var_24], ebx
0x8E497E: lea     ecx, [eax+eax+1FEh]
0x8E4985: mov     [esp+40h+var_28], eax
0x8E4989: mov     eax, [edi+8]
0x8E498C: and     eax, 3FFFFFFFh
0x8E4991: cmp     eax, ecx
0x8E4993: jge     short loc_8E49A9
0x8E4995: add     eax, eax
0x8E4997: cmp     ecx, eax
0x8E4999: jl      short loc_8E499D
0x8E499B: mov     eax, ecx
0x8E499D: push    4
0x8E499F: push    eax
0x8E49A0: push    edi
0x8E49A1: call    sub_8A6E40
0x8E49A6: add     esp, 0Ch
0x8E49A9: mov     eax, [esi+60h]
0x8E49AC: lea     ecx, [esi+58h]
0x8E49AF: and     eax, 3FFFFFFFh
0x8E49B4: cmp     eax, 200h
0x8E49B9: jge     short loc_8E49D5
0x8E49BB: add     eax, eax
0x8E49BD: cmp     eax, 200h
0x8E49C2: jg      short loc_8E49C9
0x8E49C4: mov     eax, 200h
0x8E49C9: push    4
0x8E49CB: push    eax
0x8E49CC: push    ecx
0x8E49CD: call    sub_8A6E40
0x8E49D2: add     esp, 0Ch
0x8E49D5: mov     eax, [esi+6Ch]
0x8E49D8: lea     ecx, [esi+64h]
0x8E49DB: and     eax, 3FFFFFFFh
0x8E49E0: cmp     eax, 200h
0x8E49E5: jge     short loc_8E4A01
0x8E49E7: add     eax, eax
0x8E49E9: cmp     eax, 200h
0x8E49EE: jg      short loc_8E49F5
0x8E49F0: mov     eax, 200h
0x8E49F5: push    4
0x8E49F7: push    eax
0x8E49F8: push    ecx
0x8E49F9: call    sub_8A6E40
0x8E49FE: add     esp, 0Ch
0x8E4A01: mov     ecx, [edi+4]
0x8E4A04: mov     edx, [edi]
0x8E4A06: xor     eax, eax
0x8E4A08: mov     word ptr [esp+40h+var_30+2], ax
0x8E4A0D: mov     word ptr [esp+40h+var_30], ax
0x8E4A12: mov     eax, [esp+40h+var_30]
0x8E4A16: mov     [edx+ecx*4], eax
0x8E4A19: inc     dword ptr [edi+4]
0x8E4A1C: mov     ecx, [esi+5Ch]
0x8E4A1F: mov     edx, [esi+58h]
0x8E4A22: mov     [edx+ecx*4], eax
0x8E4A25: inc     dword ptr [esi+5Ch]
0x8E4A28: mov     ecx, [esi+68h]
0x8E4A2B: mov     edx, [esi+64h]
0x8E4A2E: mov     [edx+ecx*4], eax
0x8E4A31: mov     edx, [esi+68h]
0x8E4A34: mov     eax, [esp+40h+var_2C]
0x8E4A38: inc     edx
0x8E4A39: mov     [esi+68h], edx
0x8E4A3C: mov     [esi+74h], eax
0x8E4A3F: mov     eax, [esp+40h+var_28]
0x8E4A43: dec     eax
0x8E4A44: xor     edx, edx
0x8E4A46: cmp     eax, edx
0x8E4A48: mov     [esi+70h], eax
0x8E4A4B: mov     [esi+78h], edx
0x8E4A4E: jz      short loc_8E4A65
0x8E4A50: mov     ecx, ds:0BA7D98h
0x8E4A56: mov     edx, [ecx]
0x8E4A58: push    1Eh
0x8E4A5A: shl     eax, 4
0x8E4A5D: push    eax
0x8E4A5E: call    dword ptr [edx]
0x8E4A60: mov     [esi+78h], eax
0x8E4A63: xor     edx, edx
0x8E4A65: mov     ecx, [esi+70h]
0x8E4A68: xor     eax, eax
0x8E4A6A: cmp     ecx, edx
0x8E4A6C: mov     [esp+40h+var_2C], eax
0x8E4A70: jle     loc_8E4B64
0x8E4A76: xor     ecx, ecx
0x8E4A78: mov     [esp+40h+var_30], ecx
0x8E4A7C: jmp     short loc_8E4A80
0x8E4A7E: xor     edx, edx
0x8E4A80: mov     ebx, [esi+78h]
0x8E4A83: add     ebx, ecx
0x8E4A85: jz      short loc_8E4A96
0x8E4A87: mov     [ebx+4], edx
0x8E4A8A: mov     [ebx+8], edx
0x8E4A8D: mov     dword ptr [ebx+0Ch], 80000000h
0x8E4A94: jmp     short loc_8E4A98
0x8E4A96: xor     ebx, ebx
0x8E4A98: mov     dx, [esi+44h]
0x8E4A9C: mov     ecx, 10h
0x8E4AA1: sub     ecx, [esi+74h]
0x8E4AA4: inc     eax
0x8E4AA5: shl     eax, cl
0x8E4AA7: mov     [ebx], dx
0x8E4AAA: mov     word ptr [esp+40h+var_34+2], dx
0x8E4AAF: mov     [ebx+2], ax
0x8E4AB3: mov     ecx, [esi+44h]
0x8E4AB6: lea     ebx, [esi+40h]
0x8E4AB9: mov     word ptr [esp+40h+var_34], ax
0x8E4ABE: mov     eax, [ebx+8]
0x8E4AC1: and     eax, 3FFFFFFFh
0x8E4AC6: cmp     ecx, eax
0x8E4AC8: jnz     short loc_8E4AD5
0x8E4ACA: push    10h
0x8E4ACC: push    ebx
0x8E4ACD: call    sub_8A6EE0
0x8E4AD2: add     esp, 8
0x8E4AD5: mov     ecx, [ebx+4]
0x8E4AD8: mov     edx, [ebx]
0x8E4ADA: mov     eax, ecx
0x8E4ADC: shl     eax, 4
0x8E4ADF: add     eax, edx
0x8E4AE1: inc     ecx
0x8E4AE2: mov     [ebx+4], ecx
0x8E4AE5: mov     cx, [esi+50h]
0x8E4AE9: mov     ebx, [esp+40h+var_34]
0x8E4AED: or      byte ptr [esp+40h+var_34], 1
0x8E4AF2: mov     [eax+8], cx
0x8E4AF6: mov     edx, [edi+4]
0x8E4AF9: mov     ecx, [edi]
0x8E4AFB: mov     [ecx+edx*4], ebx
0x8E4AFE: mov     edx, [edi+4]
0x8E4B01: mov     ebx, [esp+40h+var_34]
0x8E4B05: inc     edx
0x8E4B06: mov     [edi+4], edx
0x8E4B09: mov     dx, [esi+50h]
0x8E4B0D: mov     [eax+0Ah], dx
0x8E4B11: mov     ecx, [edi+4]
0x8E4B14: mov     edx, [edi]
0x8E4B16: mov     [edx+ecx*4], ebx
0x8E4B19: mov     ebx, [edi+4]
0x8E4B1C: mov     ecx, [esp+40h+var_30]
0x8E4B20: inc     ebx
0x8E4B21: mov     [edi+4], ebx
0x8E4B24: mov     edx, 1
0x8E4B29: mov     ebx, ecx
0x8E4B2B: or      ebx, edx
0x8E4B2D: mov     [eax+0Ch], ebx
0x8E4B30: mov     word ptr [eax+2], 0
0x8E4B36: mov     word ptr [eax], 0
0x8E4B3B: mov     [eax+6], dx
0x8E4B3F: mov     [eax+4], dx
0x8E4B43: mov     eax, [esp+40h+var_2C]
0x8E4B47: mov     edx, [esi+70h]
0x8E4B4A: inc     eax
0x8E4B4B: add     ecx, 10h
0x8E4B4E: cmp     eax, edx
0x8E4B50: mov     [esp+40h+var_2C], eax
0x8E4B54: mov     [esp+40h+var_30], ecx
0x8E4B58: jl      loc_8E4A7E
0x8E4B5E: mov     ebx, [esp+40h+var_24]
0x8E4B62: xor     edx, edx
0x8E4B64: mov     ax, [esi+50h]
0x8E4B68: mov     [ebx+0Ah], ax
0x8E4B6C: mov     cx, [esi+5Ch]
0x8E4B70: mov     [ebx+4], cx
0x8E4B74: mov     ax, [esi+68h]
0x8E4B78: mov     [ebx+6], ax
0x8E4B7C: mov     ecx, [edi+4]
0x8E4B7F: mov     word ptr [esp+40h+var_2C+2], dx
0x8E4B84: mov     edx, [edi]
0x8E4B86: mov     word ptr [esp+40h+var_2C], 0FFFDh
0x8E4B8D: mov     eax, [esp+40h+var_2C]
0x8E4B91: mov     [edx+ecx*4], eax
0x8E4B94: inc     dword ptr [edi+4]
0x8E4B97: mov     ecx, [esi+5Ch]
0x8E4B9A: mov     edx, [esi+58h]
0x8E4B9D: mov     [edx+ecx*4], eax
0x8E4BA0: inc     dword ptr [esi+5Ch]
0x8E4BA3: mov     ecx, [esi+68h]
0x8E4BA6: mov     edx, [esi+64h]
0x8E4BA9: mov     [edx+ecx*4], eax
0x8E4BAC: inc     dword ptr [esi+68h]
0x8E4BAF: pop     edi
0x8E4BB0: mov     eax, esi
0x8E4BB2: pop     esi
0x8E4BB3: pop     ebx
0x8E4BB4: mov     esp, ebp
0x8E4BB6: pop     ebp
0x8E4BB7: retn    0Ch
