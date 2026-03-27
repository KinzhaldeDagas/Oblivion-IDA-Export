0x77A5B0: sub     esp, 14h
0x77A5B3: mov     eax, ds:0B29F84h
0x77A5B8: mov     ecx, [esp+14h+arg_4]
0x77A5BC: push    ebx
0x77A5BD: push    ebp
0x77A5BE: push    esi
0x77A5BF: push    edi
0x77A5C0: push    eax
0x77A5C1: call    sub_6FFAC0
0x77A5C6: mov     ebx, [esp+24h+arg_0]
0x77A5CA: mov     eax, [ebx+30h]
0x77A5CD: xor     esi, esi
0x77A5CF: xor     ebp, ebp
0x77A5D1: cmp     eax, esi
0x77A5D3: mov     [esp+24h+var_C], ebp
0x77A5D7: mov     [esp+24h+var_14], esi
0x77A5DB: mov     [esp+24h+var_10], esi
0x77A5DF: jz      short loc_77A627
0x77A5E1: movzx   edi, word ptr [eax+18h]
0x77A5E5: cmp     edi, esi
0x77A5E7: jbe     short loc_77A61A
0x77A5E9: lea     esp, [esp+0]
0x77A5F0: mov     ecx, [ebx+30h]
0x77A5F3: mov     edx, [ecx]
0x77A5F5: mov     eax, [edx+3Ch]
0x77A5F8: push    esi
0x77A5F9: call    eax
0x77A5FB: test    eax, eax
0x77A5FD: jz      short loc_77A613
0x77A5FF: mov     ecx, [eax+14h]
0x77A602: and     ecx, 0F0000000h
0x77A608: cmp     ecx, 30000000h
0x77A60E: jnz     short loc_77A613
0x77A610: add     ebp, 1
0x77A613: add     esi, 1
0x77A616: cmp     esi, edi
0x77A618: jb      short loc_77A5F0
0x77A61A: movzx   edx, word ptr [ebx+4Ah]
0x77A61E: imul    edx, ebp
0x77A621: mov     [esp+24h+var_C], edx
0x77A625: mov     ebp, edx
0x77A627: mov     eax, [ebx+2Ch]
0x77A62A: test    eax, eax
0x77A62C: jz      short loc_77A66F
0x77A62E: movzx   edi, word ptr [eax+18h]
0x77A632: xor     esi, esi
0x77A634: test    edi, edi
0x77A636: jbe     short loc_77A662
0x77A638: mov     ecx, [ebx+2Ch]
0x77A63B: mov     eax, [ecx]
0x77A63D: mov     edx, [eax+3Ch]
0x77A640: push    esi
0x77A641: call    edx
0x77A643: test    eax, eax
0x77A645: jz      short loc_77A65B
0x77A647: mov     eax, [eax+14h]
0x77A64A: and     eax, 0F0000000h
0x77A64F: cmp     eax, 30000000h
0x77A654: jnz     short loc_77A65B
0x77A656: add     [esp+24h+var_14], 1
0x77A65B: add     esi, 1
0x77A65E: cmp     esi, edi
0x77A660: jb      short loc_77A638
0x77A662: movzx   ecx, word ptr [ebx+4Ah]
0x77A666: imul    ecx, [esp+24h+var_14]
0x77A66B: mov     [esp+24h+var_14], ecx
0x77A66F: movzx   edi, word ptr [ebx+4Ah]
0x77A673: xor     eax, eax
0x77A675: test    edi, edi
0x77A677: mov     [esp+24h+var_4], edi
0x77A67B: mov     [esp+24h+var_8], eax
0x77A67F: jbe     loc_77A72C
0x77A685: mov     edx, [ebx+44h]
0x77A688: mov     ebp, [edx+eax*4]
0x77A68B: test    ebp, ebp
0x77A68D: jz      loc_77A711
0x77A693: mov     edi, [ebp+34h]
0x77A696: test    edi, edi
0x77A698: jz      short loc_77A6D1
0x77A69A: movzx   ebx, word ptr [edi+18h]
0x77A69E: xor     esi, esi
0x77A6A0: test    ebx, ebx
0x77A6A2: jbe     short loc_77A6CD
0x77A6A4: mov     eax, [edi]
0x77A6A6: mov     edx, [eax+3Ch]
0x77A6A9: push    esi
0x77A6AA: mov     ecx, edi
0x77A6AC: call    edx
0x77A6AE: test    eax, eax
0x77A6B0: jz      short loc_77A6C6
0x77A6B2: mov     eax, [eax+14h]
0x77A6B5: and     eax, 0F0000000h
0x77A6BA: cmp     eax, 30000000h
0x77A6BF: jnz     short loc_77A6C6
0x77A6C1: add     [esp+24h+var_14], 1
0x77A6C6: add     esi, 1
0x77A6C9: cmp     esi, ebx
0x77A6CB: jb      short loc_77A6A4
0x77A6CD: mov     ebx, [esp+24h+arg_0]
0x77A6D1: mov     edi, [ebp+48h]
0x77A6D4: test    edi, edi
0x77A6D6: jz      short loc_77A711
0x77A6D8: movzx   ebx, word ptr [edi+18h]
0x77A6DC: xor     esi, esi
0x77A6DE: test    ebx, ebx
0x77A6E0: jbe     short loc_77A70D
0x77A6E2: mov     edx, [edi]
0x77A6E4: mov     eax, [edx+3Ch]
0x77A6E7: push    esi
0x77A6E8: mov     ecx, edi
0x77A6EA: call    eax
0x77A6EC: test    eax, eax
0x77A6EE: jz      short loc_77A706
0x77A6F0: mov     ecx, [eax+14h]
0x77A6F3: and     ecx, 0F0000000h
0x77A6F9: cmp     ecx, 30000000h
0x77A6FF: jnz     short loc_77A706
0x77A701: add     [esp+24h+var_C], 1
0x77A706: add     esi, 1
0x77A709: cmp     esi, ebx
0x77A70B: jb      short loc_77A6E2
0x77A70D: mov     ebx, [esp+24h+arg_0]
0x77A711: mov     eax, [esp+24h+var_8]
0x77A715: mov     edi, [esp+24h+var_4]
0x77A719: add     eax, 1
0x77A71C: cmp     eax, edi
0x77A71E: mov     [esp+24h+var_8], eax
0x77A722: jb      loc_77A685
0x77A728: mov     ebp, [esp+24h+var_C]
0x77A72C: test    ebp, ebp
0x77A72E: ja      short loc_77A73B
0x77A730: cmp     [esp+24h+var_14], 0
0x77A735: jbe     loc_77A9A1
0x77A73B: push    24h ; '$'; Size
0x77A73D: call    FormHeapAlloc
0x77A742: add     esp, 4
0x77A745: test    eax, eax
0x77A747: jz      short loc_77A761
0x77A749: mov     edx, [esp+24h+var_14]
0x77A74D: mov     ecx, ds:0B29F84h
0x77A753: push    edx; int
0x77A754: push    ebp; int
0x77A755: push    ecx; Src
0x77A756: mov     ecx, eax
0x77A758: call    sub_9A22E0
0x77A75D: mov     esi, eax
0x77A75F: jmp     short loc_77A763
0x77A761: xor     esi, esi
0x77A763: xor     eax, eax
0x77A765: test    edi, edi
0x77A767: mov     [esp+24h+var_8], eax
0x77A76B: jbe     loc_77A997
0x77A771: mov     edx, [ebx+44h]
0x77A774: mov     eax, [edx+eax*4]
0x77A777: test    eax, eax
0x77A779: mov     [esp+24h+var_C], eax
0x77A77D: jz      loc_77A982
0x77A783: mov     eax, [ebx+2Ch]
0x77A786: test    eax, eax
0x77A788: jz      short loc_77A792
0x77A78A: movzx   eax, word ptr [eax+18h]
0x77A78E: mov     [esp+24h+var_10], eax
0x77A792: mov     ebp, [esp+24h+var_10]
0x77A796: xor     ebx, ebx
0x77A798: test    ebp, ebp
0x77A79A: jbe     short loc_77A805
0x77A79C: lea     esp, [esp+0]
0x77A7A0: mov     ecx, [esp+24h+arg_0]
0x77A7A4: mov     ecx, [ecx+2Ch]
0x77A7A7: mov     edx, [ecx]
0x77A7A9: mov     eax, [edx+3Ch]
0x77A7AC: push    ebx
0x77A7AD: call    eax
0x77A7AF: mov     edi, eax
0x77A7B1: test    edi, edi
0x77A7B3: jz      short loc_77A7FE
0x77A7B5: mov     ecx, [edi+14h]
0x77A7B8: and     ecx, 0F0000000h
0x77A7BE: cmp     ecx, 30000000h
0x77A7C4: jnz     short loc_77A7FE
0x77A7C6: mov     eax, [edi+0Ch]
0x77A7C9: mov     ecx, [esp+24h+arg_4]
0x77A7CD: push    eax
0x77A7CE: call    NiObjectNET_GetExtraData
0x77A7D3: test    eax, eax
0x77A7D5: jz      short loc_77A7FE
0x77A7D7: mov     ecx, ds:0AB2908h
0x77A7DD: mov     edx, 0FFh
0x77A7E2: shl     edx, cl
0x77A7E4: mov     ecx, [esi+18h]
0x77A7E7: or      edx, [edi+1Ch]
0x77A7EA: mov     edi, [esi+20h]
0x77A7ED: mov     [edi+ecx*8], edx
0x77A7F0: mov     edx, [esi+18h]
0x77A7F3: mov     ecx, [esi+20h]
0x77A7F6: mov     [ecx+edx*8+4], eax
0x77A7FA: add     dword ptr [esi+18h], 1
0x77A7FE: add     ebx, 1
0x77A801: cmp     ebx, ebp
0x77A803: jb      short loc_77A7A0
0x77A805: mov     edx, [esp+24h+arg_0]
0x77A809: mov     eax, [edx+30h]
0x77A80C: xor     ebp, ebp
0x77A80E: test    eax, eax
0x77A810: mov     [esp+24h+var_10], ebp
0x77A814: jz      short loc_77A820
0x77A816: movzx   eax, word ptr [eax+18h]
0x77A81A: mov     [esp+24h+var_10], eax
0x77A81E: mov     ebp, eax
0x77A820: xor     ebx, ebx
0x77A822: test    ebp, ebp
0x77A824: jbe     short loc_77A88B
0x77A826: mov     ecx, [esp+24h+arg_0]
0x77A82A: mov     ecx, [ecx+30h]
0x77A82D: mov     edx, [ecx]
0x77A82F: mov     eax, [edx+3Ch]
0x77A832: push    ebx
0x77A833: call    eax
0x77A835: mov     edi, eax
0x77A837: test    edi, edi
0x77A839: jz      short loc_77A884
0x77A83B: mov     ecx, [edi+14h]
0x77A83E: and     ecx, 0F0000000h
0x77A844: cmp     ecx, 30000000h
0x77A84A: jnz     short loc_77A884
0x77A84C: mov     eax, [edi+0Ch]
0x77A84F: mov     ecx, [esp+24h+arg_4]
0x77A853: push    eax
0x77A854: call    NiObjectNET_GetExtraData
0x77A859: test    eax, eax
0x77A85B: jz      short loc_77A884
0x77A85D: mov     ecx, ds:0AB2908h
0x77A863: mov     edx, 0FFh
0x77A868: shl     edx, cl
0x77A86A: mov     ecx, [esi+14h]
0x77A86D: or      edx, [edi+1Ch]
0x77A870: mov     edi, [esi+1Ch]
0x77A873: mov     [edi+ecx*8], edx
0x77A876: mov     edx, [esi+14h]
0x77A879: mov     ecx, [esi+1Ch]
0x77A87C: mov     [ecx+edx*8+4], eax
0x77A880: add     dword ptr [esi+14h], 1
0x77A884: add     ebx, 1
0x77A887: cmp     ebx, ebp
0x77A889: jb      short loc_77A826
0x77A88B: mov     edx, [esp+24h+var_C]
0x77A88F: mov     ebp, [edx+34h]
0x77A892: test    ebp, ebp
0x77A894: jz      short loc_77A902
0x77A896: movzx   eax, word ptr [ebp+18h]
0x77A89A: xor     ebx, ebx
0x77A89C: test    eax, eax
0x77A89E: mov     [esp+24h+var_10], eax
0x77A8A2: jbe     short loc_77A902
0x77A8A4: mov     eax, [ebp+0]
0x77A8A7: mov     edx, [eax+3Ch]
0x77A8AA: push    ebx
0x77A8AB: mov     ecx, ebp
0x77A8AD: call    edx
0x77A8AF: mov     edi, eax
0x77A8B1: test    edi, edi
0x77A8B3: jz      short loc_77A8F9
0x77A8B5: mov     eax, [edi+14h]
0x77A8B8: and     eax, 0F0000000h
0x77A8BD: cmp     eax, 30000000h
0x77A8C2: jnz     short loc_77A8F9
0x77A8C4: mov     eax, [edi+0Ch]
0x77A8C7: mov     ecx, [esp+24h+arg_4]
0x77A8CB: push    eax
0x77A8CC: call    NiObjectNET_GetExtraData
0x77A8D1: test    eax, eax
0x77A8D3: jz      short loc_77A8F9
0x77A8D5: mov     ecx, ds:0AB2908h
0x77A8DB: xor     edx, edx
0x77A8DD: shl     edx, cl
0x77A8DF: mov     ecx, [esi+18h]
0x77A8E2: or      edx, [edi+1Ch]
0x77A8E5: mov     edi, [esi+20h]
0x77A8E8: mov     [edi+ecx*8], edx
0x77A8EB: mov     edx, [esi+18h]
0x77A8EE: mov     ecx, [esi+20h]
0x77A8F1: mov     [ecx+edx*8+4], eax
0x77A8F5: add     dword ptr [esi+18h], 1
0x77A8F9: add     ebx, 1
0x77A8FC: cmp     ebx, [esp+24h+var_10]
0x77A900: jb      short loc_77A8A4
0x77A902: mov     edx, [esp+24h+var_C]
0x77A906: mov     ebp, [edx+48h]
0x77A909: test    ebp, ebp
0x77A90B: jz      short loc_77A97E
0x77A90D: movzx   eax, word ptr [ebp+18h]
0x77A911: xor     ebx, ebx
0x77A913: test    eax, eax
0x77A915: mov     [esp+24h+var_C], eax
0x77A919: jbe     short loc_77A97E
0x77A91B: jmp     short loc_77A920
0x77A91D: align 10h
0x77A920: mov     eax, [ebp+0]
0x77A923: mov     edx, [eax+3Ch]
0x77A926: push    ebx
0x77A927: mov     ecx, ebp
0x77A929: call    edx
0x77A92B: mov     edi, eax
0x77A92D: test    edi, edi
0x77A92F: jz      short loc_77A975
0x77A931: mov     eax, [edi+14h]
0x77A934: and     eax, 0F0000000h
0x77A939: cmp     eax, 30000000h
0x77A93E: jnz     short loc_77A975
0x77A940: mov     eax, [edi+0Ch]
0x77A943: mov     ecx, [esp+24h+arg_4]
0x77A947: push    eax
0x77A948: call    NiObjectNET_GetExtraData
0x77A94D: test    eax, eax
0x77A94F: jz      short loc_77A975
0x77A951: mov     ecx, ds:0AB2908h
0x77A957: xor     edx, edx
0x77A959: shl     edx, cl
0x77A95B: mov     ecx, [esi+14h]
0x77A95E: or      edx, [edi+1Ch]
0x77A961: mov     edi, [esi+1Ch]
0x77A964: mov     [edi+ecx*8], edx
0x77A967: mov     edx, [esi+14h]
0x77A96A: mov     ecx, [esi+1Ch]
0x77A96D: mov     [ecx+edx*8+4], eax
0x77A971: add     dword ptr [esi+14h], 1
0x77A975: add     ebx, 1
0x77A978: cmp     ebx, [esp+24h+var_C]
0x77A97C: jb      short loc_77A920
0x77A97E: mov     ebx, [esp+24h+arg_0]
0x77A982: mov     eax, [esp+24h+var_8]
0x77A986: add     eax, 1
0x77A989: cmp     eax, [esp+24h+var_4]
0x77A98D: mov     [esp+24h+var_8], eax
0x77A991: jb      loc_77A771
0x77A997: mov     ecx, [esp+24h+arg_4]
0x77A99B: push    esi
0x77A99C: call    NiNode_AddNiExtraData
0x77A9A1: pop     edi
0x77A9A2: pop     esi
0x77A9A3: pop     ebp
0x77A9A4: pop     ebx
0x77A9A5: add     esp, 14h
0x77A9A8: retn
