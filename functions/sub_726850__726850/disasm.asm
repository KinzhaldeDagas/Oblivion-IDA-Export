0x726850: sub     esp, 218h
0x726856: push    ebx
0x726857: push    ebp
0x726858: mov     ebp, [esp+220h+arg_0]
0x72685F: mov     eax, [ebp+220h]
0x726865: push    esi
0x726866: push    edi
0x726867: push    1
0x726869: lea     edx, [esp+22Ch+var_218]
0x72686D: push    edx
0x72686E: mov     [esp+230h+var_208], ecx
0x726872: push    4
0x726874: add     ecx, 4
0x726877: push    ecx
0x726878: push    eax
0x726879: mov     eax, [eax+8]
0x72687C: mov     [esp+23Ch+var_218], 4
0x726884: call    eax
0x726886: mov     ecx, [esp+23Ch+arg_C]
0x72688D: xor     edi, edi
0x72688F: add     esp, 14h
0x726892: test    ecx, ecx
0x726894: mov     [esp+228h+var_214], edi
0x726898: jbe     short loc_7268C0
0x72689A: mov     eax, [esp+228h+arg_8]
0x7268A1: mov     edx, [esp+228h+arg_4]
0x7268A8: cmp     [eax+14h], edx
0x7268AB: jnz     short loc_7268B4
0x7268AD: mov     [esp+edi*4+228h+var_200], eax
0x7268B1: add     edi, 1
0x7268B4: add     eax, 1Ch
0x7268B7: sub     ecx, 1
0x7268BA: jnz     short loc_7268A8
0x7268BC: mov     [esp+228h+var_214], edi
0x7268C0: xor     esi, esi
0x7268C2: test    edi, edi
0x7268C4: jbe     short loc_7268F4
0x7268C6: mov     eax, [esp+esi*4+228h+var_200]
0x7268CA: xor     ecx, ecx
0x7268CC: test    esi, esi
0x7268CE: jbe     short loc_7268E9
0x7268D0: mov     edx, [esp+ecx*4+228h+var_200]
0x7268D4: mov     ebx, [edx+18h]
0x7268D7: cmp     ebx, [eax+18h]
0x7268DA: jbe     short loc_7268E2
0x7268DC: mov     [esp+ecx*4+228h+var_200], eax
0x7268E0: mov     eax, edx
0x7268E2: add     ecx, 1
0x7268E5: cmp     ecx, esi
0x7268E7: jb      short loc_7268D0
0x7268E9: mov     [esp+esi*4+228h+var_200], eax
0x7268ED: add     esi, 1
0x7268F0: cmp     esi, edi
0x7268F2: jb      short loc_7268C6
0x7268F4: mov     edx, [esp+228h+var_200]
0x7268F8: xor     ecx, ecx
0x7268FA: mov     eax, 1
0x7268FF: cmp     edi, eax
0x726901: mov     [esp+228h+var_180], ecx
0x726908: mov     [esp+228h+var_80], ecx
0x72690F: mov     [esp+228h+var_210], eax
0x726913: mov     ecx, eax
0x726915: jbe     short loc_72695D
0x726917: movzx   ebx, [esp+228h+arg_10]
0x72691F: nop
0x726920: mov     ebp, [edx+10h]
0x726923: mov     esi, [esp+ecx*4+228h+var_200]
0x726927: imul    ebp, ebx
0x72692A: add     ebp, [edx+18h]
0x72692D: mov     edi, [esi+18h]
0x726930: cmp     edi, ebp
0x726932: jbe     short loc_72694B
0x726934: mov     [esp+eax*4+228h+var_180], ecx
0x72693B: mov     [esp+eax*4+228h+var_80], edi
0x726942: add     eax, 1
0x726945: mov     [esp+228h+var_210], eax
0x726949: mov     edx, esi
0x72694B: mov     edi, [esp+228h+var_214]
0x72694F: add     ecx, 1
0x726952: cmp     ecx, edi
0x726954: jb      short loc_726920
0x726956: mov     ebp, [esp+228h+arg_0]
0x72695D: push    1
0x72695F: lea     ecx, [esp+22Ch+var_218]
0x726963: push    ecx
0x726964: mov     esi, 4
0x726969: mov     [esp+eax*4+230h+var_180], edi
0x726970: mov     eax, [ebp+220h]
0x726976: push    esi
0x726977: lea     edx, [esp+234h+var_210]
0x72697B: push    edx
0x72697C: push    eax
0x72697D: mov     eax, [eax+8]
0x726980: mov     [esp+23Ch+var_218], esi
0x726984: call    eax
0x726986: mov     edx, [esp+23Ch+var_210]
0x72698A: mov     eax, [ebp+220h]
0x726990: push    1
0x726992: lea     ecx, [esp+240h+var_218]
0x726996: push    ecx
0x726997: lea     ecx, ds:0[edx*4]
0x72699E: push    ecx
0x72699F: lea     edx, [esp+248h+var_80]
0x7269A6: push    edx
0x7269A7: push    eax
0x7269A8: mov     eax, [eax+8]
0x7269AB: mov     [esp+250h+var_218], esi
0x7269AF: call    eax
0x7269B1: xor     eax, eax
0x7269B3: add     esp, 28h
0x7269B6: cmp     [esp+228h+var_210], eax
0x7269BA: mov     [esp+228h+var_214], eax
0x7269BE: jbe     loc_726ACE
0x7269C4: movzx   ecx, [esp+228h+arg_10]
0x7269CC: mov     [esp+228h+var_204], ecx
0x7269D0: jmp     short loc_7269D6
0x7269D2: mov     eax, [esp+228h+var_214]
0x7269D6: mov     edi, [esp+eax*4+228h+var_180]
0x7269DD: mov     ebx, [esp+eax*4+228h+var_17C]
0x7269E4: cmp     edi, ebx
0x7269E6: mov     [esp+228h+var_218], 0
0x7269EE: mov     esi, edi
0x7269F0: jnb     short loc_726A11
0x7269F2: mov     ecx, [esp+esi*4+228h+var_200]
0x7269F6: push    20h ; ' '
0x7269F8: lea     edx, [esp+22Ch+var_218]
0x7269FC: push    edx
0x7269FD: lea     eax, [esp+230h+var_100]
0x726A04: push    eax
0x726A05: call    sub_725DE0
0x726A0A: add     esi, 1
0x726A0D: cmp     esi, ebx
0x726A0F: jb      short loc_7269F2
0x726A11: mov     ecx, [esp+228h+var_218]
0x726A15: mov     eax, [ebp+220h]
0x726A1B: push    1
0x726A1D: lea     edx, [esp+22Ch+var_218]
0x726A21: push    edx
0x726A22: mov     [esp+230h+var_20C], ecx
0x726A26: mov     edx, [eax+8]
0x726A29: mov     esi, 4
0x726A2E: push    esi
0x726A2F: lea     ecx, [esp+234h+var_20C]
0x726A33: push    ecx
0x726A34: push    eax
0x726A35: mov     [esp+23Ch+var_218], esi
0x726A39: call    edx
0x726A3B: mov     edx, [esp+23Ch+var_20C]
0x726A3F: mov     eax, [ebp+220h]
0x726A45: push    1
0x726A47: lea     ecx, [esp+240h+var_218]
0x726A4B: push    ecx
0x726A4C: lea     ecx, ds:0[edx*4]
0x726A53: push    ecx
0x726A54: lea     edx, [esp+248h+var_100]
0x726A5B: push    edx
0x726A5C: push    eax
0x726A5D: mov     eax, [eax+8]
0x726A60: mov     [esp+250h+var_218], esi
0x726A64: call    eax
0x726A66: mov     ecx, [esp+edi*4+250h+var_200]
0x726A6A: mov     eax, [ecx+18h]
0x726A6D: mov     edx, [esp+250h+var_208]
0x726A71: add     eax, [edx+8]
0x726A74: mov     esi, [esp+250h+var_20C]
0x726A78: mov     edi, [ebp+220h]
0x726A7E: add     esp, 28h
0x726A81: xor     edx, edx
0x726A83: xor     ecx, ecx
0x726A85: test    esi, esi
0x726A87: jbe     short loc_726A9E
0x726A89: lea     esp, [esp+0]
0x726A90: add     edx, [esp+ecx*4+228h+var_100]
0x726A97: add     ecx, 1
0x726A9A: cmp     ecx, esi
0x726A9C: jb      short loc_726A90
0x726A9E: push    esi
0x726A9F: lea     ecx, [esp+22Ch+var_100]
0x726AA6: push    ecx
0x726AA7: mov     ecx, [esp+230h+var_204]
0x726AAB: imul    ecx, edx
0x726AAE: mov     edx, [edi+8]
0x726AB1: push    ecx
0x726AB2: push    eax
0x726AB3: push    edi
0x726AB4: call    edx
0x726AB6: mov     eax, [esp+23Ch+var_214]
0x726ABA: add     eax, 1
0x726ABD: add     esp, 14h
0x726AC0: cmp     eax, [esp+228h+var_210]
0x726AC4: mov     [esp+228h+var_214], eax
0x726AC8: jb      loc_7269D2
0x726ACE: pop     edi
0x726ACF: pop     esi
0x726AD0: pop     ebp
0x726AD1: pop     ebx
0x726AD2: add     esp, 218h
0x726AD8: retn    14h
