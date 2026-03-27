0x7F7680: push    0FFFFFFFFh
0x7F7682: push    offset SEH_7F7680
0x7F7687: mov     eax, large fs:0
0x7F768D: push    eax
0x7F768E: sub     esp, 0B4h
0x7F7694: push    ebx
0x7F7695: push    ebp
0x7F7696: push    esi
0x7F7697: push    edi
0x7F7698: mov     eax, ds:0B30AACh
0x7F769D: xor     eax, esp
0x7F769F: push    eax
0x7F76A0: lea     eax, [esp+0D4h+var_C]
0x7F76A7: mov     large fs:0, eax
0x7F76AD: mov     [esp+0D4h+var_AC], ecx
0x7F76B1: mov     eax, ds:0B3F928h
0x7F76B6: mov     ecx, [esp+0D4h+arg_0]
0x7F76BD: mov     [esp+0D4h+var_A0], eax
0x7F76C1: mov     eax, [ecx+4]
0x7F76C4: mov     esi, [eax]
0x7F76C6: lea     ecx, [eax+8]
0x7F76C9: mov     ecx, [ecx]
0x7F76CB: mov     ebx, [ecx]
0x7F76CD: mov     edx, [ebx+0B4h]
0x7F76D3: mov     ebp, [ebx+0BCh]
0x7F76D9: lea     eax, [esp+0D4h+var_B0]
0x7F76DD: mov     [esp+0D4h+var_B8], ecx
0x7F76E1: push    eax
0x7F76E2: mov     ecx, ebx
0x7F76E4: mov     [esp+0D8h+var_A4], esi
0x7F76E8: mov     [esp+0D8h+var_A8], edx
0x7F76EC: call    sub_405760
0x7F76F1: mov     edi, [eax]
0x7F76F3: mov     eax, [esp+0D4h+var_B0]
0x7F76F7: test    eax, eax
0x7F76F9: mov     [esp+0D4h+var_C0], edi
0x7F76FD: jz      short loc_7F7721
0x7F76FF: mov     [esp+0D4h+var_BC], eax
0x7F7703: add     eax, 4
0x7F7706: push    eax; lpAddend
0x7F7707: call    dword ptr ds:0A2807Ch
0x7F770D: test    eax, eax
0x7F770F: jnz     short loc_7F7721
0x7F7711: mov     ecx, [esp+0D4h+var_BC]
0x7F7715: test    ecx, ecx
0x7F7717: jz      short loc_7F7721
0x7F7719: mov     edx, [ecx]
0x7F771B: mov     eax, [edx]
0x7F771D: push    1
0x7F771F: call    eax
0x7F7721: mov     edi, [edi+18h]
0x7F7724: mov     [esp+0D4h+var_B4], edi
0x7F7728: mov     edi, [edi+9Ch]
0x7F772E: cmp     word ptr [edi+0Eh], 0
0x7F7733: jz      loc_7F7A24
0x7F7739: lea     esi, [ebx+64h]
0x7F773C: mov     ecx, 0Dh
0x7F7741: lea     edi, [esp+0D4h+var_80]
0x7F7745: rep movsd
0x7F7747: mov     edx, [ebx+20h]
0x7F774A: mov     esi, [esp+0D4h+arg_4]
0x7F7751: mov     edi, [esp+0D4h+var_B8]
0x7F7755: mov     [esp+0D4h+var_98], edx
0x7F7759: mov     eax, [ebx+24h]
0x7F775C: mov     [esp+0D4h+var_94], eax
0x7F7760: mov     ecx, [ebx+28h]
0x7F7763: movzx   eax, si
0x7F7766: mov     [esp+0D4h+var_90], ecx
0x7F776A: mov     edx, [ebx+2Ch]
0x7F776D: mov     [esp+0D4h+var_8C], edx
0x7F7771: mov     ds:0B42E90h, eax
0x7F7776: mov     ds:0B42EB8h, edi
0x7F777C: call    sub_7ECB20
0x7F7781: mov     eax, [esp+0D4h+var_B4]
0x7F7785: push    0
0x7F7787: push    eax
0x7F7788: push    edi
0x7F7789: push    esi
0x7F778A: mov     esi, [esp+0E4h+var_AC]
0x7F778E: mov     ecx, esi
0x7F7790: call    sub_7F60F0
0x7F7795: push    ebx
0x7F7796: mov     ecx, esi
0x7F7798: call    sub_7F6A30
0x7F779D: mov     ecx, [esp+0D4h+var_A8]
0x7F77A1: mov     edi, [ecx+38h]
0x7F77A4: lea     edx, [esp+0D4h+var_BC]
0x7F77A8: push    edx
0x7F77A9: mov     ecx, ebx
0x7F77AB: call    sub_7016D0
0x7F77B0: mov     eax, [eax]
0x7F77B2: mov     esi, [esp+0D4h+var_C0]
0x7F77B6: mov     edx, [ebp+0]
0x7F77B9: mov     edx, [edx+28h]
0x7F77BC: lea     ecx, [esp+0D4h+var_98]
0x7F77C0: push    ecx
0x7F77C1: lea     ecx, [esp+0D8h+var_80]
0x7F77C5: push    ecx
0x7F77C6: push    eax
0x7F77C7: push    esi
0x7F77C8: push    edi
0x7F77C9: push    0
0x7F77CB: push    ebx
0x7F77CC: mov     ecx, ebp
0x7F77CE: mov     [esp+0F0h+var_4], 0
0x7F77D9: call    edx
0x7F77DB: mov     eax, [esp+0D4h+var_BC]
0x7F77DF: test    eax, eax
0x7F77E1: mov     [esp+0D4h+var_4], 0FFFFFFFFh
0x7F77EC: jz      short loc_7F7810
0x7F77EE: mov     [esp+0D4h+var_C0], eax
0x7F77F2: add     eax, 4
0x7F77F5: push    eax; lpAddend
0x7F77F6: call    dword ptr ds:0A2807Ch
0x7F77FC: test    eax, eax
0x7F77FE: jnz     short loc_7F7810
0x7F7800: mov     ecx, [esp+0D4h+var_C0]
0x7F7804: test    ecx, ecx
0x7F7806: jz      short loc_7F7810
0x7F7808: mov     eax, [ecx]
0x7F780A: mov     edx, [eax]
0x7F780C: push    1
0x7F780E: call    edx
0x7F7810: lea     eax, [esp+0D4h+var_C0]
0x7F7814: push    eax
0x7F7815: mov     ecx, ebx
0x7F7817: call    sub_7016D0
0x7F781C: mov     eax, [eax]
0x7F781E: mov     edx, [ebp+0]
0x7F7821: mov     edx, [edx+2Ch]
0x7F7824: lea     ecx, [esp+0D4h+var_98]
0x7F7828: push    ecx
0x7F7829: lea     ecx, [esp+0D8h+var_80]
0x7F782D: push    ecx
0x7F782E: push    eax
0x7F782F: push    esi
0x7F7830: push    edi
0x7F7831: push    0
0x7F7833: push    ebx
0x7F7834: mov     ecx, ebp
0x7F7836: mov     [esp+0F0h+var_4], 1
0x7F7841: call    edx
0x7F7843: mov     eax, [esp+0D4h+var_C0]
0x7F7847: test    eax, eax
0x7F7849: mov     [esp+0D4h+var_4], 0FFFFFFFFh
0x7F7854: jz      short loc_7F7878
0x7F7856: mov     [esp+0D4h+var_BC], eax
0x7F785A: add     eax, 4
0x7F785D: push    eax; lpAddend
0x7F785E: call    dword ptr ds:0A2807Ch
0x7F7864: test    eax, eax
0x7F7866: jnz     short loc_7F7878
0x7F7868: mov     ecx, [esp+0D4h+var_BC]
0x7F786C: test    ecx, ecx
0x7F786E: jz      short loc_7F7878
0x7F7870: mov     eax, [ecx]
0x7F7872: mov     edx, [eax]
0x7F7874: push    1
0x7F7876: call    edx
0x7F7878: mov     eax, [ebp+0]
0x7F787B: mov     edx, [eax+48h]
0x7F787E: mov     ecx, ebp
0x7F7880: call    edx
0x7F7882: mov     eax, [ebp+3Ch]
0x7F7885: lea     ecx, [esp+0D4h+var_C0]
0x7F7889: push    ecx
0x7F788A: mov     ecx, ebx
0x7F788C: mov     [esp+0D8h+var_BC], eax
0x7F7890: call    sub_7016D0
0x7F7895: mov     eax, [eax]
0x7F7897: mov     edx, [ebp+0]
0x7F789A: mov     edx, [edx+30h]
0x7F789D: lea     ecx, [esp+0D4h+var_98]
0x7F78A1: push    ecx
0x7F78A2: lea     ecx, [esp+0D8h+var_80]
0x7F78A6: push    ecx
0x7F78A7: push    eax
0x7F78A8: push    esi
0x7F78A9: push    edi
0x7F78AA: push    0
0x7F78AC: push    ebx
0x7F78AD: mov     ecx, ebp
0x7F78AF: mov     [esp+0F0h+var_4], 2
0x7F78BA: call    edx
0x7F78BC: mov     eax, [esp+0D4h+var_C0]
0x7F78C0: test    eax, eax
0x7F78C2: mov     [esp+0D4h+var_4], 0FFFFFFFFh
0x7F78CD: jz      short loc_7F78F1
0x7F78CF: mov     [esp+0D4h+var_B8], eax
0x7F78D3: add     eax, 4
0x7F78D6: push    eax; lpAddend
0x7F78D7: call    dword ptr ds:0A2807Ch
0x7F78DD: test    eax, eax
0x7F78DF: jnz     short loc_7F78F1
0x7F78E1: mov     ecx, [esp+0D4h+var_B8]
0x7F78E5: test    ecx, ecx
0x7F78E7: jz      short loc_7F78F1
0x7F78E9: mov     eax, [ecx]
0x7F78EB: mov     edx, [eax]
0x7F78ED: push    1
0x7F78EF: call    edx
0x7F78F1: lea     eax, [esp+0D4h+var_C0]
0x7F78F5: push    eax
0x7F78F6: mov     ecx, ebx
0x7F78F8: call    sub_7016D0
0x7F78FD: mov     eax, [eax]
0x7F78FF: mov     edx, [ebp+0]
0x7F7902: mov     edx, [edx+34h]
0x7F7905: lea     ecx, [esp+0D4h+var_98]
0x7F7909: push    ecx
0x7F790A: lea     ecx, [esp+0D8h+var_80]
0x7F790E: push    ecx
0x7F790F: push    eax
0x7F7910: push    esi
0x7F7911: push    edi
0x7F7912: push    0
0x7F7914: push    0
0x7F7916: push    ebx
0x7F7917: mov     ecx, ebp
0x7F7919: mov     [esp+0F4h+var_4], 3
0x7F7924: call    edx
0x7F7926: mov     eax, [esp+0D4h+var_C0]
0x7F792A: test    eax, eax
0x7F792C: mov     [esp+0D4h+var_4], 0FFFFFFFFh
0x7F7937: jz      short loc_7F795B
0x7F7939: mov     [esp+0D4h+var_B8], eax
0x7F793D: add     eax, 4
0x7F7940: push    eax; lpAddend
0x7F7941: call    dword ptr ds:0A2807Ch
0x7F7947: test    eax, eax
0x7F7949: jnz     short loc_7F795B
0x7F794B: mov     ecx, [esp+0D4h+var_B8]
0x7F794F: test    ecx, ecx
0x7F7951: jz      short loc_7F795B
0x7F7953: mov     eax, [ecx]
0x7F7955: mov     edx, [eax]
0x7F7957: push    1
0x7F7959: call    edx
0x7F795B: mov     eax, [ebp+0]
0x7F795E: mov     edx, [eax+3Ch]
0x7F7961: push    esi
0x7F7962: push    edi
0x7F7963: push    0
0x7F7965: push    ebx
0x7F7966: mov     ecx, ebp
0x7F7968: call    edx
0x7F796A: lea     eax, [esp+0D4h+var_C0]
0x7F796E: push    eax
0x7F796F: mov     ecx, ebx
0x7F7971: call    sub_7016D0
0x7F7976: mov     eax, [eax]
0x7F7978: mov     edx, [ebp+0]
0x7F797B: mov     edx, [edx+38h]
0x7F797E: lea     ecx, [esp+0D4h+var_98]
0x7F7982: push    ecx
0x7F7983: lea     ecx, [esp+0D8h+var_80]
0x7F7987: push    ecx
0x7F7988: push    eax
0x7F7989: push    esi
0x7F798A: push    edi
0x7F798B: push    0
0x7F798D: push    0
0x7F798F: push    ebx
0x7F7990: mov     ecx, ebp
0x7F7992: mov     [esp+0F4h+var_4], 4
0x7F799D: call    edx
0x7F799F: mov     eax, [esp+0D4h+var_C0]
0x7F79A3: test    eax, eax
0x7F79A5: mov     [esp+0D4h+var_4], 0FFFFFFFFh
0x7F79B0: jz      short loc_7F79D0
0x7F79B2: mov     esi, eax
0x7F79B4: add     eax, 4
0x7F79B7: push    eax; lpAddend
0x7F79B8: call    dword ptr ds:0A2807Ch
0x7F79BE: test    eax, eax
0x7F79C0: jnz     short loc_7F79D0
0x7F79C2: test    esi, esi
0x7F79C4: jz      short loc_7F79D0
0x7F79C6: mov     eax, [esi]
0x7F79C8: mov     edx, [eax]
0x7F79CA: push    1
0x7F79CC: mov     ecx, esi
0x7F79CE: call    edx
0x7F79D0: mov     ecx, ds:0B3F928h
0x7F79D6: mov     eax, [ebx]
0x7F79D8: mov     edx, [eax+88h]
0x7F79DE: push    ecx
0x7F79DF: mov     ecx, ebx
0x7F79E1: call    edx
0x7F79E3: mov     ecx, ds:0B28CB0h
0x7F79E9: mov     eax, [esp+0D4h+var_A8]
0x7F79ED: lea     edx, ds:0[ecx*4]
0x7F79F4: mov     [esp+0D4h+var_B0], eax
0x7F79F8: mov     eax, [esp+0D4h+var_AC]
0x7F79FC: mov     ecx, [eax]
0x7F79FE: push    edx
0x7F79FF: push    0
0x7F7A01: push    ecx
0x7F7A02: call    __memset
0x7F7A07: mov     eax, [esp+0E0h+var_A4]
0x7F7A0B: add     esp, 0Ch
0x7F7A0E: test    eax, eax
0x7F7A10: jz      loc_7F7E86
0x7F7A16: jmp     loc_7F7AC4
0x7F7A1B: jmp     short loc_7F7A20
0x7F7A1D: align 10h
0x7F7A20: mov     esi, [esp+0D4h+var_A4]
0x7F7A24: test    esi, esi
0x7F7A26: jz      short loc_7F7A9A
0x7F7A28: mov     ecx, [esi]
0x7F7A2A: lea     eax, [esi+8]
0x7F7A2D: mov     eax, [eax]
0x7F7A2F: mov     ebx, [eax]
0x7F7A31: mov     edx, [ebx+0B4h]
0x7F7A37: mov     ebp, [ebx+0BCh]
0x7F7A3D: mov     [esp+0D4h+var_B8], eax
0x7F7A41: lea     eax, [esp+0D4h+var_9C]
0x7F7A45: mov     [esp+0D4h+var_A4], ecx
0x7F7A49: push    eax
0x7F7A4A: mov     ecx, ebx
0x7F7A4C: mov     [esp+0D8h+var_A8], edx
0x7F7A50: call    sub_405760
0x7F7A55: mov     esi, [eax]
0x7F7A57: mov     eax, [esp+0D4h+var_9C]
0x7F7A5B: test    eax, eax
0x7F7A5D: mov     [esp+0D4h+var_C0], esi
0x7F7A61: jz      short loc_7F7A81
0x7F7A63: mov     edi, eax
0x7F7A65: add     eax, 4
0x7F7A68: push    eax; lpAddend
0x7F7A69: call    dword ptr ds:0A2807Ch
0x7F7A6F: test    eax, eax
0x7F7A71: jnz     short loc_7F7A81
0x7F7A73: test    edi, edi
0x7F7A75: jz      short loc_7F7A81
0x7F7A77: mov     edx, [edi]
0x7F7A79: mov     eax, [edx]
0x7F7A7B: push    1
0x7F7A7D: mov     ecx, edi
0x7F7A7F: call    eax
0x7F7A81: mov     esi, [esi+18h]
0x7F7A84: mov     [esp+0D4h+var_B4], esi
0x7F7A88: mov     esi, [esi+9Ch]
0x7F7A8E: cmp     word ptr [esi+0Eh], 0
0x7F7A93: jz      short loc_7F7A20
0x7F7A95: jmp     loc_7F7739
0x7F7A9A: mov     esi, [esp+0D4h+arg_0]
0x7F7AA1: mov     ecx, esi
0x7F7AA3: call    sub_7A9C30
0x7F7AA8: mov     ecx, [esi+4]
0x7F7AAB: xor     eax, eax
0x7F7AAD: mov     [esi+0Ch], ecx
0x7F7AB0: mov     [esi+4], eax
0x7F7AB3: mov     [esi+8], eax
0x7F7AB6: mov     [esi+10h], eax
0x7F7AB9: jmp     loc_7F7EC4
0x7F7ABE: align 10h
0x7F7AC0: mov     eax, [esp+0D4h+var_A4]
0x7F7AC4: mov     edx, [eax]
0x7F7AC6: lea     ecx, [eax+8]
0x7F7AC9: mov     eax, [ecx]
0x7F7ACB: mov     ebx, [eax]
0x7F7ACD: mov     esi, [ebx+0B4h]
0x7F7AD3: mov     [esp+0D4h+var_B8], eax
0x7F7AD7: lea     eax, [esp+0D4h+var_9C]
0x7F7ADB: push    eax
0x7F7ADC: mov     ecx, ebx
0x7F7ADE: mov     [esp+0D8h+var_A4], edx
0x7F7AE2: mov     [esp+0D8h+var_A8], esi
0x7F7AE6: call    sub_405760
0x7F7AEB: mov     ecx, [eax]
0x7F7AED: mov     eax, [esp+0D4h+var_9C]
0x7F7AF1: test    eax, eax
0x7F7AF3: mov     [esp+0D4h+var_C0], ecx
0x7F7AF7: jz      short loc_7F7B1B
0x7F7AF9: mov     [esp+0D4h+var_B4], eax
0x7F7AFD: add     eax, 4
0x7F7B00: push    eax; lpAddend
0x7F7B01: call    dword ptr ds:0A2807Ch
0x7F7B07: test    eax, eax
0x7F7B09: jnz     short loc_7F7B1B
0x7F7B0B: mov     ecx, [esp+0D4h+var_B4]
0x7F7B0F: test    ecx, ecx
0x7F7B11: jz      short loc_7F7B1B
0x7F7B13: mov     edx, [ecx]
0x7F7B15: mov     eax, [edx]
0x7F7B17: push    1
0x7F7B19: call    eax
0x7F7B1B: mov     ecx, [esp+0D4h+var_C0]
0x7F7B1F: mov     eax, [ecx+18h]
0x7F7B22: mov     ecx, [eax+9Ch]
0x7F7B28: cmp     word ptr [ecx+0Eh], 0
0x7F7B2D: mov     [esp+0D4h+var_B4], eax
0x7F7B31: jbe     loc_7F7E7B
0x7F7B37: cmp     [esp+0D4h+var_B0], esi
0x7F7B3B: mov     edx, [esp+0D4h+arg_4]
0x7F7B42: movzx   ecx, dx
0x7F7B45: mov     ds:0B42E90h, ecx
0x7F7B4B: mov     ecx, [esp+0D4h+var_B8]
0x7F7B4F: mov     ds:0B42EB8h, ecx
0x7F7B55: jz      loc_7F7D1B
0x7F7B5B: mov     ecx, [esp+0D4h+var_AC]
0x7F7B5F: push    ebx
0x7F7B60: call    sub_7F6A30
0x7F7B65: mov     edx, [esi+38h]
0x7F7B68: lea     esi, [ebx+64h]
0x7F7B6B: mov     ecx, 0Dh
0x7F7B70: lea     edi, [esp+0D4h+var_80]
0x7F7B74: rep movsd
0x7F7B76: mov     eax, [ebx+20h]
0x7F7B79: mov     [esp+0D4h+var_98], eax
0x7F7B7D: mov     ecx, [ebx+24h]
0x7F7B80: mov     [esp+0D4h+var_94], ecx
0x7F7B84: mov     ecx, [esp+0D4h+var_B4]
0x7F7B88: mov     [esp+0D4h+var_B0], edx
0x7F7B8C: mov     edx, [ebx+28h]
0x7F7B8F: push    0
0x7F7B91: mov     [esp+0D8h+var_90], edx
0x7F7B95: mov     eax, [ebx+2Ch]
0x7F7B98: mov     edx, [esp+0D8h+var_B8]
0x7F7B9C: push    ecx
0x7F7B9D: mov     ecx, [esp+0DCh+var_AC]
0x7F7BA1: mov     [esp+0DCh+var_8C], eax
0x7F7BA5: mov     eax, [esp+0DCh+arg_4]
0x7F7BAC: push    edx
0x7F7BAD: push    eax
0x7F7BAE: call    sub_7F60F0
0x7F7BB3: lea     ecx, [esp+0D4h+var_84]
0x7F7BB7: push    ecx
0x7F7BB8: mov     ecx, ebx
0x7F7BBA: call    sub_7016D0
0x7F7BBF: mov     eax, [eax]
0x7F7BC1: mov     edi, [esp+0D4h+var_C0]
0x7F7BC5: mov     esi, [esp+0D4h+var_B0]
0x7F7BC9: mov     edx, [ebp+0]
0x7F7BCC: mov     edx, [edx+2Ch]
0x7F7BCF: lea     ecx, [esp+0D4h+var_98]
0x7F7BD3: push    ecx
0x7F7BD4: lea     ecx, [esp+0D8h+var_80]
0x7F7BD8: push    ecx
0x7F7BD9: push    eax
0x7F7BDA: push    edi
0x7F7BDB: push    esi
0x7F7BDC: push    0
0x7F7BDE: push    ebx
0x7F7BDF: mov     ecx, ebp
0x7F7BE1: mov     [esp+0F0h+var_4], 5
0x7F7BEC: call    edx
0x7F7BEE: mov     eax, [esp+0D4h+var_84]
0x7F7BF2: test    eax, eax
0x7F7BF4: mov     [esp+0D4h+var_4], 0FFFFFFFFh
0x7F7BFF: jz      short loc_7F7C23
0x7F7C01: mov     [esp+0D4h+var_C0], eax
0x7F7C05: add     eax, 4
0x7F7C08: push    eax; lpAddend
0x7F7C09: call    dword ptr ds:0A2807Ch
0x7F7C0F: test    eax, eax
0x7F7C11: jnz     short loc_7F7C23
0x7F7C13: mov     ecx, [esp+0D4h+var_C0]
0x7F7C17: test    ecx, ecx
0x7F7C19: jz      short loc_7F7C23
0x7F7C1B: mov     eax, [ecx]
0x7F7C1D: mov     edx, [eax]
0x7F7C1F: push    1
0x7F7C21: call    edx
0x7F7C23: mov     eax, [ebp+0]
0x7F7C26: mov     edx, [eax+48h]
0x7F7C29: mov     ecx, ebp
0x7F7C2B: call    edx
0x7F7C2D: mov     eax, [ebp+3Ch]
0x7F7C30: lea     ecx, [esp+0D4h+var_88]
0x7F7C34: push    ecx
0x7F7C35: mov     ecx, ebx
0x7F7C37: mov     [esp+0D8h+var_BC], eax
0x7F7C3B: call    sub_7016D0
0x7F7C40: mov     eax, [eax]
0x7F7C42: mov     edx, [ebp+0]
0x7F7C45: mov     edx, [edx+34h]
0x7F7C48: lea     ecx, [esp+0D4h+var_98]
0x7F7C4C: push    ecx
0x7F7C4D: lea     ecx, [esp+0D8h+var_80]
0x7F7C51: push    ecx
0x7F7C52: push    eax
0x7F7C53: push    edi
0x7F7C54: push    esi
0x7F7C55: push    0
0x7F7C57: push    0
0x7F7C59: push    ebx
0x7F7C5A: mov     ecx, ebp
0x7F7C5C: mov     [esp+0F4h+var_4], 6
0x7F7C67: call    edx
0x7F7C69: mov     eax, [esp+0D4h+var_88]
0x7F7C6D: test    eax, eax
0x7F7C6F: mov     [esp+0D4h+var_4], 0FFFFFFFFh
0x7F7C7A: jz      short loc_7F7C9E
0x7F7C7C: mov     [esp+0D4h+var_C0], eax
0x7F7C80: add     eax, 4
0x7F7C83: push    eax; lpAddend
0x7F7C84: call    dword ptr ds:0A2807Ch
0x7F7C8A: test    eax, eax
0x7F7C8C: jnz     short loc_7F7C9E
0x7F7C8E: mov     ecx, [esp+0D4h+var_C0]
0x7F7C92: test    ecx, ecx
0x7F7C94: jz      short loc_7F7C9E
0x7F7C96: mov     eax, [ecx]
0x7F7C98: mov     edx, [eax]
0x7F7C9A: push    1
0x7F7C9C: call    edx
0x7F7C9E: mov     eax, [ebp+0]
0x7F7CA1: mov     edx, [eax+3Ch]
0x7F7CA4: push    edi
0x7F7CA5: push    esi
0x7F7CA6: push    0
0x7F7CA8: push    ebx
0x7F7CA9: mov     ecx, ebp
0x7F7CAB: call    edx
0x7F7CAD: mov     eax, [esp+0D4h+var_BC]
0x7F7CB1: mov     edx, [esp+0D4h+var_A0]
0x7F7CB5: mov     ecx, [eax+58h]
0x7F7CB8: mov     edi, [edx+8ACh]
0x7F7CBE: mov     eax, [ecx]
0x7F7CC0: mov     esi, [edi]
0x7F7CC2: mov     edx, [eax+40h]
0x7F7CC5: push    0
0x7F7CC7: add     esi, 88h ; 'ˆ'
0x7F7CCD: call    edx
0x7F7CCF: push    eax
0x7F7CD0: mov     eax, [esi]
0x7F7CD2: mov     ecx, edi
0x7F7CD4: call    eax
0x7F7CD6: mov     ecx, [esp+0D4h+var_BC]
0x7F7CDA: mov     edx, [esp+0D4h+var_A0]
0x7F7CDE: mov     ecx, [ecx+44h]
0x7F7CE1: mov     edi, [edx+8ACh]
0x7F7CE7: mov     eax, [ecx]
0x7F7CE9: mov     esi, [edi]
0x7F7CEB: mov     edx, [eax+38h]
0x7F7CEE: push    0
0x7F7CF0: add     esi, 78h ; 'x'
0x7F7CF3: call    edx
0x7F7CF5: push    eax
0x7F7CF6: mov     eax, [esi]
0x7F7CF8: mov     ecx, edi
0x7F7CFA: call    eax
0x7F7CFC: mov     ecx, [esp+0D4h+var_BC]
0x7F7D00: push    0
0x7F7D02: push    ecx
0x7F7D03: mov     ecx, [esp+0DCh+var_AC]
0x7F7D07: push    ebp
0x7F7D08: push    ebx
0x7F7D09: call    sub_7F6BF0
0x7F7D0E: mov     esi, [esp+0D4h+var_A8]
0x7F7D12: mov     edi, [esp+0D4h+var_B0]
0x7F7D16: jmp     loc_7F7E77
0x7F7D1B: push    0
0x7F7D1D: push    eax
0x7F7D1E: push    ecx
0x7F7D1F: mov     ecx, [esp+0E0h+var_AC]
0x7F7D23: push    edx
0x7F7D24: call    sub_7F60F0
0x7F7D29: mov     edx, [esp+0D4h+var_B4]
0x7F7D2D: push    edx
0x7F7D2E: push    ebx
0x7F7D2F: mov     ecx, ebp
0x7F7D31: call    sub_7E6A90
0x7F7D36: mov     eax, [esp+0D4h+var_B4]
0x7F7D3A: mov     ecx, [eax+9Ch]
0x7F7D40: mov     edx, [ecx+4]
0x7F7D43: mov     eax, [esi]
0x7F7D45: cmp     byte ptr [edx+30h], 0
0x7F7D49: mov     edx, [eax+5Ch]
0x7F7D4C: mov     ecx, esi
0x7F7D4E: jz      short loc_7F7D57
0x7F7D50: call    edx
0x7F7D52: mov     edx, [esi+4Ch]
0x7F7D55: jmp     short loc_7F7D5C
0x7F7D57: call    edx
0x7F7D59: mov     edx, [esi+48h]
0x7F7D5C: cmp     word ptr [esp+0D4h+arg_4], 197h
0x7F7D66: movzx   ecx, word ptr [esi+40h]
0x7F7D6A: movzx   eax, ax
0x7F7D6D: movzx   eax, ax
0x7F7D70: movzx   ecx, cx
0x7F7D73: mov     [edi+3Ch], eax
0x7F7D76: mov     [edi+40h], ecx
0x7F7D79: mov     [edi+4Ch], edx
0x7F7D7C: mov     dword ptr [edi+48h], 0
0x7F7D83: mov     dword ptr [edi+44h], 1
0x7F7D8A: jnz     loc_7F7E10
0x7F7D90: mov     edx, [esp+0D4h+var_BC]
0x7F7D94: mov     eax, [edx+24h]
0x7F7D97: mov     ecx, [eax+4]
0x7F7D9A: mov     edx, [esp+0D4h+var_B8]
0x7F7D9E: mov     eax, [edx+0Ch]
0x7F7DA1: mov     [esp+0D4h+var_A8], ecx
0x7F7DA5: mov     ecx, [eax]
0x7F7DA7: mov     ecx, [ecx+114h]; this
0x7F7DAD: call    BSRenderedTexture__GetInnerTexture
0x7F7DB2: mov     edx, [esp+0D4h+var_A8]
0x7F7DB6: mov     ecx, [edx+4]
0x7F7DB9: cmp     ecx, eax
0x7F7DBB: mov     [esp+0D4h+var_B0], eax
0x7F7DBF: mov     [esp+0D4h+var_C0], ecx
0x7F7DC3: jz      short loc_7F7E00
0x7F7DC5: test    ecx, ecx
0x7F7DC7: jz      short loc_7F7DEB
0x7F7DC9: add     ecx, 4
0x7F7DCC: push    ecx; lpAddend
0x7F7DCD: call    dword ptr ds:0A2807Ch
0x7F7DD3: test    eax, eax
0x7F7DD5: jnz     short loc_7F7DE7
0x7F7DD7: mov     ecx, [esp+0D4h+var_C0]
0x7F7DDB: test    ecx, ecx
0x7F7DDD: jz      short loc_7F7DE7
0x7F7DDF: mov     eax, [ecx]
0x7F7DE1: mov     edx, [eax]
0x7F7DE3: push    1
0x7F7DE5: call    edx
0x7F7DE7: mov     eax, [esp+0D4h+var_B0]
0x7F7DEB: test    eax, eax
0x7F7DED: mov     ecx, [esp+0D4h+var_A8]
0x7F7DF1: mov     [ecx+4], eax
0x7F7DF4: jz      short loc_7F7E00
0x7F7DF6: add     eax, 4
0x7F7DF9: push    eax; lpAddend
0x7F7DFA: call    dword ptr ds:0A28078h
0x7F7E00: lea     edx, [esp+0D4h+var_80]
0x7F7E04: push    edx
0x7F7E05: push    0
0x7F7E07: mov     ecx, ebp
0x7F7E09: call    sub_7E6310
0x7F7E0E: jmp     short loc_7F7E65
0x7F7E10: cmp     byte ptr ds:0B43344h, 0
0x7F7E17: jz      short loc_7F7E65
0x7F7E19: mov     ecx, [esp+0D4h+var_B4]
0x7F7E1D: call    sub_7ED600
0x7F7E22: test    ax, ax
0x7F7E25: jbe     short loc_7F7E65
0x7F7E27: lea     eax, [esp+0D4h+var_4C]
0x7F7E2E: push    eax
0x7F7E2F: lea     ecx, [esp+0D8h+var_80]
0x7F7E33: push    ecx
0x7F7E34: mov     ecx, [esp+0DCh+var_AC]
0x7F7E38: call    sub_7F5B80
0x7F7E3D: fld     [esp+0D4h+var_50]
0x7F7E44: movzx   eax, word ptr [esp+0D4h+arg_4]
0x7F7E4C: push    eax
0x7F7E4D: mov     eax, [esp+0D8h+var_B4]
0x7F7E51: push    ecx
0x7F7E52: lea     edx, [esp+0DCh+var_4C]
0x7F7E59: mov     ecx, ebp
0x7F7E5B: fstp    [esp+0DCh+var_DC]
0x7F7E5E: push    edx
0x7F7E5F: push    eax
0x7F7E60: call    sub_7E61C0
0x7F7E65: mov     ecx, [esp+0D4h+var_BC]
0x7F7E69: push    0
0x7F7E6B: push    ecx
0x7F7E6C: mov     ecx, [esp+0DCh+var_AC]
0x7F7E70: push    ebp
0x7F7E71: push    ebx
0x7F7E72: call    sub_7F6BF0
0x7F7E77: mov     [esp+0D4h+var_B0], esi
0x7F7E7B: cmp     [esp+0D4h+var_A4], 0
0x7F7E80: jnz     loc_7F7AC0
0x7F7E86: mov     edi, [esp+0D4h+arg_0]
0x7F7E8D: mov     ecx, edi
0x7F7E8F: call    sub_7A9C30
0x7F7E94: mov     edx, [edi+4]
0x7F7E97: xor     esi, esi
0x7F7E99: mov     [edi+0Ch], edx
0x7F7E9C: mov     [edi+4], esi
0x7F7E9F: mov     [edi+8], esi
0x7F7EA2: mov     [edi+10h], esi
0x7F7EA5: mov     eax, [ebp+0]
0x7F7EA8: mov     edx, [eax+4Ch]
0x7F7EAB: mov     ecx, ebp
0x7F7EAD: call    edx
0x7F7EAF: mov     eax, [esp+0D4h+var_A0]
0x7F7EB3: mov     ecx, [eax+8ACh]
0x7F7EB9: mov     edx, [ecx]
0x7F7EBB: mov     eax, [edx+0FCh]
0x7F7EC1: push    esi
0x7F7EC2: call    eax
0x7F7EC4: mov     ecx, dword ptr [esp+0D4h+var_C]
0x7F7ECB: mov     large fs:0, ecx
0x7F7ED2: pop     ecx
0x7F7ED3: pop     edi
0x7F7ED4: pop     esi
0x7F7ED5: pop     ebp
0x7F7ED6: pop     ebx
0x7F7ED7: add     esp, 0C0h
0x7F7EDD: retn    8
