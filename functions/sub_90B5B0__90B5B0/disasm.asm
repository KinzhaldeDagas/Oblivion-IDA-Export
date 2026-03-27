0x90B5B0: push    ebp
0x90B5B1: mov     ebp, esp
0x90B5B3: and     esp, 0FFFFFFF0h
0x90B5B6: sub     esp, 98h
0x90B5BC: mov     eax, [ebp+arg_8]
0x90B5BF: movaps  xmm0, xmmword ptr ds:0A965C0h
0x90B5C6: movaps  xmm1, xmmword ptr [eax+10h]
0x90B5CA: push    esi
0x90B5CB: push    edi
0x90B5CC: mov     esi, eax
0x90B5CE: add     eax, 10h
0x90B5D1: mov     ecx, 0Ch
0x90B5D6: lea     edi, [esp+0A0h+var_30]
0x90B5DA: rep movsd
0x90B5DC: mov     ecx, eax
0x90B5DE: mov     esi, [ecx]
0x90B5E0: mov     [esp+0A0h+var_80], esi
0x90B5E4: mov     esi, [ecx+4]
0x90B5E7: mov     [esp+0A0h+var_7C], esi
0x90B5EB: mov     esi, [ecx+8]
0x90B5EE: mov     ecx, [ecx+0Ch]
0x90B5F1: mov     [esp+0A0h+var_74], ecx
0x90B5F5: mov     ecx, [ebp+arg_C]
0x90B5F8: mov     [esp+0A0h+var_70], ecx
0x90B5FC: mov     ecx, [ebp+arg_10]
0x90B5FF: test    ecx, ecx
0x90B601: mov     edx, offset off_A9B4E8
0x90B606: xorps   xmm1, xmm0
0x90B609: movaps  [esp+0A0h+var_20], xmm1
0x90B611: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x90B619: mov     [esp+0A0h+var_90], edx
0x90B61D: mov     [esp+0A0h+var_78], esi
0x90B621: jz      short loc_90B673
0x90B623: mov     [esp+0A0h+var_60], edx
0x90B627: mov     edx, [eax]
0x90B629: mov     [esp+0A0h+var_50], edx
0x90B62D: mov     edx, [eax+4]
0x90B630: mov     [esp+0A0h+var_4C], edx
0x90B634: mov     edx, [eax+8]
0x90B637: mov     eax, [eax+0Ch]
0x90B63A: mov     [esp+0A0h+var_40], ecx
0x90B63E: mov     [esp+0A0h+var_48], edx
0x90B642: lea     ecx, [esp+0A0h+var_60]
0x90B646: push    ecx
0x90B647: mov     ecx, [ebp+arg_0]
0x90B64A: lea     edx, [esp+0A4h+var_90]
0x90B64E: push    edx
0x90B64F: mov     edx, [ebp+arg_4]
0x90B652: mov     [esp+0A8h+var_44], eax
0x90B656: lea     eax, [esp+0A8h+var_30]
0x90B65A: push    eax
0x90B65B: push    ecx
0x90B65C: push    edx
0x90B65D: mov     [esp+0B4h+var_5C], 7F7FFFFFh
0x90B665: call    sub_90ADA0
0x90B66A: add     esp, 14h
0x90B66D: pop     edi
0x90B66E: pop     esi
0x90B66F: mov     esp, ebp
0x90B671: pop     ebp
0x90B672: retn
0x90B673: mov     edx, [ebp+arg_0]
0x90B676: push    0
0x90B678: lea     eax, [esp+0A4h+var_90]
0x90B67C: push    eax
0x90B67D: mov     eax, [ebp+arg_4]
0x90B680: lea     ecx, [esp+0A8h+var_30]
0x90B684: push    ecx
0x90B685: push    edx
0x90B686: push    eax
0x90B687: call    sub_90ADA0
0x90B68C: add     esp, 14h
0x90B68F: pop     edi
0x90B690: pop     esi
0x90B691: mov     esp, ebp
0x90B693: pop     ebp
0x90B694: retn
