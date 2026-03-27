0x7F86C0: push    0FFFFFFFFh
0x7F86C2: push    offset SEH_7F86C0
0x7F86C7: mov     eax, large fs:0
0x7F86CD: push    eax
0x7F86CE: sub     esp, 0BCh
0x7F86D4: push    ebx
0x7F86D5: push    ebp
0x7F86D6: push    esi
0x7F86D7: push    edi
0x7F86D8: mov     eax, ds:0B30AACh
0x7F86DD: xor     eax, esp
0x7F86DF: push    eax
0x7F86E0: lea     eax, [esp+0DCh+var_C]
0x7F86E7: mov     large fs:0, eax
0x7F86ED: mov     [esp+0DCh+var_B4], ecx
0x7F86F1: mov     eax, ds:0B3F928h
0x7F86F6: mov     ecx, [esp+0DCh+arg_0]
0x7F86FD: mov     [esp+0DCh+var_B8], eax
0x7F8701: mov     eax, [ecx+4]
0x7F8704: mov     edx, [eax]
0x7F8706: lea     ecx, [eax+8]
0x7F8709: mov     ecx, [ecx]
0x7F870B: mov     ebp, [ecx]
0x7F870D: mov     eax, [ebp+0B4h]
0x7F8713: mov     [esp+0DCh+var_C0], ecx
0x7F8717: lea     esi, [ebp+64h]
0x7F871A: mov     ecx, 0Dh
0x7F871F: lea     edi, [esp+0DCh+var_80]
0x7F8723: rep movsd
0x7F8725: mov     ecx, [ebp+20h]
0x7F8728: mov     [esp+0DCh+var_A0], ecx
0x7F872C: mov     [esp+0DCh+var_A8], edx
0x7F8730: mov     edx, [ebp+24h]
0x7F8733: mov     [esp+0DCh+var_9C], edx
0x7F8737: mov     [esp+0DCh+var_AC], eax
0x7F873B: mov     eax, [ebp+28h]
0x7F873E: mov     [esp+0DCh+var_98], eax
0x7F8742: mov     ecx, [ebp+2Ch]
0x7F8745: lea     edx, [esp+0DCh+var_BC]
0x7F8749: mov     [esp+0DCh+var_94], ecx
0x7F874D: push    edx
0x7F874E: mov     ecx, ebp
0x7F8750: call    sub_405760
0x7F8755: mov     esi, [eax]
0x7F8757: mov     eax, [esp+0DCh+var_BC]
0x7F875B: test    eax, eax
0x7F875D: jz      short loc_7F877D
0x7F875F: mov     edi, eax
0x7F8761: add     eax, 4
0x7F8764: push    eax; lpAddend
0x7F8765: call    dword ptr ds:0A2807Ch
0x7F876B: test    eax, eax
0x7F876D: jnz     short loc_7F877D
0x7F876F: test    edi, edi
0x7F8771: jz      short loc_7F877D
0x7F8773: mov     eax, [edi]
0x7F8775: mov     edx, [eax]
0x7F8777: push    1
0x7F8779: mov     ecx, edi
0x7F877B: call    edx
0x7F877D: movzx   eax, word ptr [esp+0DCh+arg_4]
0x7F8785: mov     ebx, [ebp+0BCh]
0x7F878B: mov     edi, [esi+18h]
0x7F878E: mov     ds:0B42E90h, eax
0x7F8793: mov     eax, [esp+0DCh+var_C0]
0x7F8797: mov     ds:0B42EB8h, eax
0x7F879C: call    sub_7ECB20
0x7F87A1: mov     ecx, [esp+0DCh+var_C0]
0x7F87A5: mov     edx, [esp+0DCh+arg_4]
0x7F87AC: push    0
0x7F87AE: push    edi
0x7F87AF: mov     edi, [esp+0E4h+var_B4]
0x7F87B3: push    ecx
0x7F87B4: push    edx
0x7F87B5: mov     ecx, edi
0x7F87B7: call    sub_7F60F0
0x7F87BC: push    ebp
0x7F87BD: mov     ecx, edi
0x7F87BF: call    sub_7F6A30
0x7F87C4: mov     eax, [esp+0DCh+var_AC]
0x7F87C8: mov     edi, [eax+38h]
0x7F87CB: lea     ecx, [esp+0DCh+var_C8]
0x7F87CF: push    ecx
0x7F87D0: mov     ecx, ebp
0x7F87D2: mov     [esp+0E0h+var_90], edi
0x7F87D6: call    sub_7016D0
0x7F87DB: mov     eax, [eax]
0x7F87DD: mov     edx, [ebx]
0x7F87DF: mov     edx, [edx+28h]
0x7F87E2: lea     ecx, [esp+0DCh+var_A0]
0x7F87E6: push    ecx
0x7F87E7: lea     ecx, [esp+0E0h+var_80]
0x7F87EB: push    ecx
0x7F87EC: push    eax
0x7F87ED: push    esi
0x7F87EE: push    edi
0x7F87EF: push    0
0x7F87F1: push    ebp
0x7F87F2: mov     ecx, ebx
0x7F87F4: mov     [esp+0F8h+var_4], 0
0x7F87FF: call    edx
0x7F8801: mov     eax, [esp+0DCh+var_C8]
0x7F8805: test    eax, eax
0x7F8807: mov     [esp+0DCh+var_4], 0FFFFFFFFh
0x7F8812: jz      short loc_7F8836
0x7F8814: mov     [esp+0DCh+var_C4], eax
0x7F8818: add     eax, 4
0x7F881B: push    eax; lpAddend
0x7F881C: call    dword ptr ds:0A2807Ch
0x7F8822: test    eax, eax
0x7F8824: jnz     short loc_7F8836
0x7F8826: mov     ecx, [esp+0DCh+var_C4]
0x7F882A: test    ecx, ecx
0x7F882C: jz      short loc_7F8836
0x7F882E: mov     eax, [ecx]
0x7F8830: mov     edx, [eax]
0x7F8832: push    1
0x7F8834: call    edx
0x7F8836: lea     eax, [esp+0DCh+var_C8]
0x7F883A: push    eax
0x7F883B: mov     ecx, ebp
0x7F883D: call    sub_7016D0
0x7F8842: mov     eax, [eax]
0x7F8844: mov     edx, [ebx]
0x7F8846: mov     edx, [edx+2Ch]
0x7F8849: lea     ecx, [esp+0DCh+var_A0]
0x7F884D: push    ecx
0x7F884E: lea     ecx, [esp+0E0h+var_80]
0x7F8852: push    ecx
0x7F8853: push    eax
0x7F8854: push    esi
0x7F8855: push    edi
0x7F8856: push    0
0x7F8858: push    ebp
0x7F8859: mov     ecx, ebx
0x7F885B: mov     [esp+0F8h+var_4], 1
0x7F8866: call    edx
0x7F8868: mov     eax, [esp+0DCh+var_C8]
0x7F886C: test    eax, eax
0x7F886E: mov     [esp+0DCh+var_4], 0FFFFFFFFh
0x7F8879: jz      short loc_7F889D
0x7F887B: mov     [esp+0DCh+var_C4], eax
0x7F887F: add     eax, 4
0x7F8882: push    eax; lpAddend
0x7F8883: call    dword ptr ds:0A2807Ch
0x7F8889: test    eax, eax
0x7F888B: jnz     short loc_7F889D
0x7F888D: mov     ecx, [esp+0DCh+var_C4]
0x7F8891: test    ecx, ecx
0x7F8893: jz      short loc_7F889D
0x7F8895: mov     eax, [ecx]
0x7F8897: mov     edx, [eax]
0x7F8899: push    1
0x7F889B: call    edx
0x7F889D: mov     eax, [ebx]
0x7F889F: mov     edx, [eax+48h]
0x7F88A2: mov     ecx, ebx
0x7F88A4: call    edx
0x7F88A6: mov     eax, [ebx+3Ch]
0x7F88A9: lea     ecx, [esp+0DCh+var_C8]
0x7F88AD: push    ecx
0x7F88AE: mov     ecx, ebp
0x7F88B0: mov     [esp+0E0h+var_B0], eax
0x7F88B4: call    sub_7016D0
0x7F88B9: mov     eax, [eax]
0x7F88BB: mov     edx, [ebx]
0x7F88BD: mov     edx, [edx+30h]
0x7F88C0: lea     ecx, [esp+0DCh+var_A0]
0x7F88C4: push    ecx
0x7F88C5: lea     ecx, [esp+0E0h+var_80]
0x7F88C9: push    ecx
0x7F88CA: push    eax
0x7F88CB: push    esi
0x7F88CC: push    edi
0x7F88CD: push    0
0x7F88CF: push    ebp
0x7F88D0: mov     ecx, ebx
0x7F88D2: mov     [esp+0F8h+var_4], 2
0x7F88DD: call    edx
0x7F88DF: mov     eax, [esp+0DCh+var_C8]
0x7F88E3: test    eax, eax
0x7F88E5: mov     [esp+0DCh+var_4], 0FFFFFFFFh
0x7F88F0: jz      short loc_7F8914
0x7F88F2: mov     [esp+0DCh+var_C4], eax
0x7F88F6: add     eax, 4
0x7F88F9: push    eax; lpAddend
0x7F88FA: call    dword ptr ds:0A2807Ch
0x7F8900: test    eax, eax
0x7F8902: jnz     short loc_7F8914
0x7F8904: mov     ecx, [esp+0DCh+var_C4]
0x7F8908: test    ecx, ecx
0x7F890A: jz      short loc_7F8914
0x7F890C: mov     eax, [ecx]
0x7F890E: mov     edx, [eax]
0x7F8910: push    1
0x7F8912: call    edx
0x7F8914: lea     eax, [esp+0DCh+var_C8]
0x7F8918: push    eax
0x7F8919: mov     ecx, ebp
0x7F891B: call    sub_7016D0
0x7F8920: mov     eax, [eax]
0x7F8922: mov     edx, [ebx]
0x7F8924: mov     edx, [edx+34h]
0x7F8927: lea     ecx, [esp+0DCh+var_A0]
0x7F892B: push    ecx
0x7F892C: lea     ecx, [esp+0E0h+var_80]
0x7F8930: push    ecx
0x7F8931: push    eax
0x7F8932: push    esi
0x7F8933: push    edi
0x7F8934: push    0
0x7F8936: push    0
0x7F8938: push    ebp
0x7F8939: mov     ecx, ebx
0x7F893B: mov     [esp+0FCh+var_4], 3
0x7F8946: call    edx
0x7F8948: mov     eax, [esp+0DCh+var_C8]
0x7F894C: test    eax, eax
0x7F894E: mov     [esp+0DCh+var_4], 0FFFFFFFFh
0x7F8959: jz      short loc_7F897D
0x7F895B: mov     [esp+0DCh+var_C4], eax
0x7F895F: add     eax, 4
0x7F8962: push    eax; lpAddend
0x7F8963: call    dword ptr ds:0A2807Ch
0x7F8969: test    eax, eax
0x7F896B: jnz     short loc_7F897D
0x7F896D: mov     ecx, [esp+0DCh+var_C4]
0x7F8971: test    ecx, ecx
0x7F8973: jz      short loc_7F897D
0x7F8975: mov     eax, [ecx]
0x7F8977: mov     edx, [eax]
0x7F8979: push    1
0x7F897B: call    edx
0x7F897D: mov     eax, [ebx]
0x7F897F: mov     edx, [eax+3Ch]
0x7F8982: push    esi
0x7F8983: push    edi
0x7F8984: push    0
0x7F8986: push    ebp
0x7F8987: mov     ecx, ebx
0x7F8989: call    edx
0x7F898B: lea     eax, [esp+0DCh+var_C8]
0x7F898F: push    eax
0x7F8990: mov     ecx, ebp
0x7F8992: call    sub_7016D0
0x7F8997: mov     eax, [eax]
0x7F8999: mov     edx, [ebx]
0x7F899B: mov     edx, [edx+38h]
0x7F899E: lea     ecx, [esp+0DCh+var_A0]
0x7F89A2: push    ecx
0x7F89A3: lea     ecx, [esp+0E0h+var_80]
0x7F89A7: push    ecx
0x7F89A8: push    eax
0x7F89A9: push    esi
0x7F89AA: push    edi
0x7F89AB: push    0
0x7F89AD: push    0
0x7F89AF: push    ebp
0x7F89B0: mov     ecx, ebx
0x7F89B2: mov     [esp+0FCh+var_4], 4
0x7F89BD: call    edx
0x7F89BF: mov     eax, [esp+0DCh+var_C8]
0x7F89C3: test    eax, eax
0x7F89C5: mov     [esp+0DCh+var_4], 0FFFFFFFFh
0x7F89D0: jz      short loc_7F89F0
0x7F89D2: mov     esi, eax
0x7F89D4: add     eax, 4
0x7F89D7: push    eax; lpAddend
0x7F89D8: call    dword ptr ds:0A2807Ch
0x7F89DE: test    eax, eax
0x7F89E0: jnz     short loc_7F89F0
0x7F89E2: test    esi, esi
0x7F89E4: jz      short loc_7F89F0
0x7F89E6: mov     eax, [esi]
0x7F89E8: mov     edx, [eax]
0x7F89EA: push    1
0x7F89EC: mov     ecx, esi
0x7F89EE: call    edx
0x7F89F0: mov     ecx, ds:0B3F928h
0x7F89F6: mov     eax, [ebp+0]
0x7F89F9: mov     edx, [eax+88h]
0x7F89FF: push    ecx
0x7F8A00: mov     ecx, ebp
0x7F8A02: call    edx
0x7F8A04: mov     ecx, ds:0B28CB0h
0x7F8A0A: mov     eax, [esp+0DCh+var_AC]
0x7F8A0E: lea     edx, ds:0[ecx*4]
0x7F8A15: mov     [esp+0DCh+var_BC], eax
0x7F8A19: mov     eax, [esp+0DCh+var_B4]
0x7F8A1D: mov     ecx, [eax]
0x7F8A1F: push    edx
0x7F8A20: push    0
0x7F8A22: push    ecx
0x7F8A23: call    __memset
0x7F8A28: mov     eax, [esp+0E8h+var_A8]
0x7F8A2C: add     esp, 0Ch
0x7F8A2F: test    eax, eax
0x7F8A31: jz      loc_7F8D51
0x7F8A37: jmp     short loc_7F8A44
0x7F8A39: align 10h
0x7F8A40: mov     eax, [esp+0DCh+var_A8]
0x7F8A44: mov     edx, [esp+0DCh+var_C0]
0x7F8A48: lea     ecx, [eax+8]
0x7F8A4B: mov     eax, [eax]
0x7F8A4D: mov     [esp+0DCh+var_A8], eax
0x7F8A51: mov     eax, [ecx]
0x7F8A53: movzx   ecx, word ptr [esp+0DCh+arg_4]
0x7F8A5B: mov     ds:0B42E90h, ecx
0x7F8A61: mov     ds:0B42EB8h, eax
0x7F8A66: mov     ebp, [eax]
0x7F8A68: mov     ecx, [ebp+0B4h]
0x7F8A6E: mov     [esp+0DCh+var_C8], edx
0x7F8A72: lea     edx, [esp+0DCh+var_8C]
0x7F8A76: mov     [esp+0DCh+var_AC], ecx
0x7F8A7A: push    edx
0x7F8A7B: mov     ecx, ebp
0x7F8A7D: mov     [esp+0E0h+var_C0], eax
0x7F8A81: call    sub_405760
0x7F8A86: mov     esi, [eax]
0x7F8A88: mov     eax, [esp+0DCh+var_8C]
0x7F8A8C: test    eax, eax
0x7F8A8E: mov     [esp+0DCh+var_A4], esi
0x7F8A92: jz      short loc_7F8AB2
0x7F8A94: mov     edi, eax
0x7F8A96: add     eax, 4
0x7F8A99: push    eax; lpAddend
0x7F8A9A: call    dword ptr ds:0A2807Ch
0x7F8AA0: test    eax, eax
0x7F8AA2: jnz     short loc_7F8AB2
0x7F8AA4: test    edi, edi
0x7F8AA6: jz      short loc_7F8AB2
0x7F8AA8: mov     eax, [edi]
0x7F8AAA: mov     edx, [eax]
0x7F8AAC: push    1
0x7F8AAE: mov     ecx, edi
0x7F8AB0: call    edx
0x7F8AB2: mov     eax, [esi+18h]
0x7F8AB5: lea     esi, [ebp+64h]
0x7F8AB8: mov     ecx, 0Dh
0x7F8ABD: lea     edi, [esp+0DCh+var_80]
0x7F8AC1: rep movsd
0x7F8AC3: mov     ecx, [ebp+20h]
0x7F8AC6: mov     edi, [esp+0DCh+var_AC]
0x7F8ACA: cmp     [esp+0DCh+var_BC], edi
0x7F8ACE: mov     [esp+0DCh+var_A0], ecx
0x7F8AD2: mov     edx, [ebp+24h]
0x7F8AD5: mov     [esp+0DCh+var_9C], edx
0x7F8AD9: mov     ecx, [ebp+28h]
0x7F8ADC: mov     [esp+0DCh+var_98], ecx
0x7F8AE0: mov     edx, [ebp+2Ch]
0x7F8AE3: mov     [esp+0DCh+var_C4], eax
0x7F8AE7: mov     [esp+0DCh+var_94], edx
0x7F8AEB: jz      loc_7F8C15
0x7F8AF1: mov     esi, [esp+0DCh+var_B4]
0x7F8AF5: push    ebp
0x7F8AF6: mov     ecx, esi
0x7F8AF8: call    sub_7F6A30
0x7F8AFD: mov     eax, [esp+0DCh+var_C8]
0x7F8B01: mov     ecx, [esp+0DCh+var_C4]
0x7F8B05: mov     edx, [esp+0DCh+var_C0]
0x7F8B09: mov     edi, [edi+38h]
0x7F8B0C: push    eax
0x7F8B0D: mov     eax, [esp+0E0h+arg_4]
0x7F8B14: push    ecx
0x7F8B15: push    edx
0x7F8B16: push    eax
0x7F8B17: mov     ecx, esi
0x7F8B19: mov     [esp+0ECh+var_90], edi
0x7F8B1D: call    sub_7F60F0
0x7F8B22: lea     ecx, [esp+0DCh+var_88]
0x7F8B26: push    ecx
0x7F8B27: mov     ecx, ebp
0x7F8B29: call    sub_7016D0
0x7F8B2E: mov     eax, [eax]
0x7F8B30: lea     edx, [esp+0DCh+var_A0]
0x7F8B34: push    edx; int
0x7F8B35: mov     edx, [esp+0E0h+var_A4]
0x7F8B39: lea     ecx, [esp+0E0h+var_80]
0x7F8B3D: push    ecx; int
0x7F8B3E: push    eax; int
0x7F8B3F: push    edx; int
0x7F8B40: push    edi; int
0x7F8B41: push    0; int
0x7F8B43: push    ebp; float
0x7F8B44: mov     ecx, ebx
0x7F8B46: mov     [esp+0F8h+var_4], 5
0x7F8B51: call    sub_7F0BC0
0x7F8B56: mov     eax, [esp+0DCh+var_88]
0x7F8B5A: test    eax, eax
0x7F8B5C: mov     [esp+0DCh+var_4], 0FFFFFFFFh
0x7F8B67: jz      short loc_7F8B8B
0x7F8B69: mov     [esp+0DCh+var_BC], eax
0x7F8B6D: add     eax, 4
0x7F8B70: push    eax; lpAddend
0x7F8B71: call    dword ptr ds:0A2807Ch
0x7F8B77: test    eax, eax
0x7F8B79: jnz     short loc_7F8B8B
0x7F8B7B: mov     ecx, [esp+0DCh+var_BC]
0x7F8B7F: test    ecx, ecx
0x7F8B81: jz      short loc_7F8B8B
0x7F8B83: mov     eax, [ecx]
0x7F8B85: mov     edx, [eax]
0x7F8B87: push    1
0x7F8B89: call    edx
0x7F8B8B: mov     ecx, [esp+0DCh+var_B8]
0x7F8B8F: push    0
0x7F8B91: lea     eax, [esp+0E0h+var_80]
0x7F8B95: push    eax
0x7F8B96: call    sub_765480
0x7F8B9B: lea     ecx, [esp+0DCh+var_4C]
0x7F8BA2: push    ecx
0x7F8BA3: lea     edx, [esp+0E0h+var_80]
0x7F8BA7: push    edx
0x7F8BA8: mov     ecx, esi
0x7F8BAA: call    sub_7F5B80
0x7F8BAF: fld     [esp+0DCh+var_50]
0x7F8BB6: push    ecx
0x7F8BB7: mov     ecx, [esp+0E0h+var_C4]
0x7F8BBB: fstp    [esp+0E0h+var_E0]; float
0x7F8BBE: lea     eax, [esp+0E0h+var_4C]
0x7F8BC5: push    eax; int
0x7F8BC6: push    ecx; int
0x7F8BC7: mov     ecx, ebx
0x7F8BC9: call    sub_7F0100
0x7F8BCE: mov     eax, [esp+0DCh+var_A4]
0x7F8BD2: mov     edx, [ebx]
0x7F8BD4: mov     edx, [edx+3Ch]
0x7F8BD7: push    eax
0x7F8BD8: push    edi
0x7F8BD9: push    0
0x7F8BDB: push    ebp
0x7F8BDC: mov     ecx, ebx
0x7F8BDE: call    edx
0x7F8BE0: mov     eax, [esp+0DCh+var_B0]
0x7F8BE4: mov     edx, [esp+0DCh+var_B8]
0x7F8BE8: mov     ecx, [eax+58h]
0x7F8BEB: mov     edi, [edx+8ACh]
0x7F8BF1: mov     eax, [ecx]
0x7F8BF3: mov     esi, [edi]
0x7F8BF5: mov     edx, [eax+40h]
0x7F8BF8: push    0
0x7F8BFA: add     esi, 88h ; 'ˆ'
0x7F8C00: call    edx
0x7F8C02: push    eax
0x7F8C03: mov     eax, [esi]
0x7F8C05: mov     ecx, edi
0x7F8C07: call    eax
0x7F8C09: mov     ecx, [esp+0DCh+var_B0]
0x7F8C0D: mov     ecx, [ecx+44h]
0x7F8C10: jmp     loc_7F8D0D
0x7F8C15: mov     edx, [esp+0DCh+var_C8]
0x7F8C19: mov     ecx, [esp+0DCh+arg_4]
0x7F8C20: mov     edi, [esp+0DCh+var_B4]
0x7F8C24: push    edx
0x7F8C25: push    eax
0x7F8C26: mov     eax, [esp+0E4h+var_C0]
0x7F8C2A: push    eax
0x7F8C2B: push    ecx
0x7F8C2C: mov     ecx, edi
0x7F8C2E: call    sub_7F60F0
0x7F8C33: lea     edx, [esp+0DCh+var_84]
0x7F8C37: push    edx
0x7F8C38: mov     ecx, ebp
0x7F8C3A: call    sub_7016D0
0x7F8C3F: mov     eax, [eax]
0x7F8C41: lea     ecx, [esp+0DCh+var_A0]
0x7F8C45: push    ecx; int
0x7F8C46: mov     ecx, [esp+0E0h+var_90]
0x7F8C4A: lea     edx, [esp+0E0h+var_80]
0x7F8C4E: push    edx; int
0x7F8C4F: push    eax; int
0x7F8C50: mov     eax, [esp+0E8h+var_A4]
0x7F8C54: push    eax; int
0x7F8C55: push    ecx; int
0x7F8C56: push    0; int
0x7F8C58: push    ebp; float
0x7F8C59: mov     ecx, ebx
0x7F8C5B: mov     [esp+0F8h+var_4], 6
0x7F8C66: call    sub_7F0BC0
0x7F8C6B: mov     eax, dword ptr [esp+0DCh+var_84]
0x7F8C6F: test    eax, eax
0x7F8C71: mov     [esp+0DCh+var_4], 0FFFFFFFFh
0x7F8C7C: jz      short loc_7F8C9C
0x7F8C7E: mov     esi, eax
0x7F8C80: add     eax, 4
0x7F8C83: push    eax; lpAddend
0x7F8C84: call    dword ptr ds:0A2807Ch
0x7F8C8A: test    eax, eax
0x7F8C8C: jnz     short loc_7F8C9C
0x7F8C8E: test    esi, esi
0x7F8C90: jz      short loc_7F8C9C
0x7F8C92: mov     edx, [esi]
0x7F8C94: mov     eax, [edx]
0x7F8C96: push    1
0x7F8C98: mov     ecx, esi
0x7F8C9A: call    eax
0x7F8C9C: mov     esi, [esp+0DCh+var_B8]
0x7F8CA0: push    0
0x7F8CA2: lea     ecx, [esp+0E0h+var_80]
0x7F8CA6: push    ecx
0x7F8CA7: mov     ecx, esi
0x7F8CA9: call    sub_765480
0x7F8CAE: lea     edx, [esp+0DCh+var_4C]
0x7F8CB5: push    edx
0x7F8CB6: lea     eax, [esp+0E0h+var_80]
0x7F8CBA: push    eax
0x7F8CBB: mov     ecx, edi
0x7F8CBD: call    sub_7F5B80
0x7F8CC2: fld     [esp+0DCh+var_50]
0x7F8CC9: mov     edx, [esp+0DCh+var_C4]
0x7F8CCD: push    ecx
0x7F8CCE: fstp    [esp+0E0h+var_E0]; float
0x7F8CD1: lea     ecx, [esp+0E0h+var_4C]
0x7F8CD8: push    ecx; int
0x7F8CD9: push    edx; int
0x7F8CDA: mov     ecx, ebx
0x7F8CDC: call    sub_7F0100
0x7F8CE1: mov     eax, [esp+0DCh+var_B0]
0x7F8CE5: mov     ecx, [eax+58h]
0x7F8CE8: mov     edi, [esi+8ACh]
0x7F8CEE: mov     edx, [ecx]
0x7F8CF0: mov     esi, [edi]
0x7F8CF2: mov     eax, [edx+40h]
0x7F8CF5: push    0
0x7F8CF7: add     esi, 88h ; 'ˆ'
0x7F8CFD: call    eax
0x7F8CFF: mov     edx, [esi]
0x7F8D01: push    eax
0x7F8D02: mov     ecx, edi
0x7F8D04: call    edx
0x7F8D06: mov     eax, [esp+0DCh+var_B0]
0x7F8D0A: mov     ecx, [eax+44h]
0x7F8D0D: mov     edx, [esp+0DCh+var_B8]
0x7F8D11: mov     edi, [edx+8ACh]
0x7F8D17: mov     eax, [ecx]
0x7F8D19: mov     esi, [edi]
0x7F8D1B: mov     edx, [eax+38h]
0x7F8D1E: push    0
0x7F8D20: add     esi, 78h ; 'x'
0x7F8D23: call    edx
0x7F8D25: push    eax
0x7F8D26: mov     eax, [esi]
0x7F8D28: mov     ecx, edi
0x7F8D2A: call    eax
0x7F8D2C: mov     ecx, [esp+0DCh+var_B0]
0x7F8D30: push    1
0x7F8D32: push    ecx
0x7F8D33: mov     ecx, [esp+0E4h+var_B4]
0x7F8D37: push    ebx
0x7F8D38: push    ebp
0x7F8D39: call    sub_7F6BF0
0x7F8D3E: cmp     [esp+0DCh+var_A8], 0
0x7F8D43: mov     edx, [esp+0DCh+var_AC]
0x7F8D47: mov     [esp+0DCh+var_BC], edx
0x7F8D4B: jnz     loc_7F8A40
0x7F8D51: mov     esi, [esp+0DCh+arg_0]
0x7F8D58: mov     ecx, esi
0x7F8D5A: call    sub_7A9C30
0x7F8D5F: mov     eax, [esi+4]
0x7F8D62: xor     edi, edi
0x7F8D64: mov     [esi+0Ch], eax
0x7F8D67: mov     [esi+4], edi
0x7F8D6A: mov     [esi+8], edi
0x7F8D6D: mov     [esi+10h], edi
0x7F8D70: mov     edx, [ebx]
0x7F8D72: mov     eax, [edx+4Ch]
0x7F8D75: mov     ecx, ebx
0x7F8D77: call    eax
0x7F8D79: mov     ecx, [esp+0DCh+var_B8]
0x7F8D7D: mov     ecx, [ecx+8ACh]
0x7F8D83: mov     edx, [ecx]
0x7F8D85: mov     eax, [edx+0FCh]
0x7F8D8B: push    edi
0x7F8D8C: call    eax
0x7F8D8E: mov     ecx, dword ptr [esp+0DCh+var_C]
0x7F8D95: mov     large fs:0, ecx
0x7F8D9C: pop     ecx
0x7F8D9D: pop     edi
0x7F8D9E: pop     esi
0x7F8D9F: pop     ebp
0x7F8DA0: pop     ebx
0x7F8DA1: add     esp, 0C8h
0x7F8DA7: retn    8
